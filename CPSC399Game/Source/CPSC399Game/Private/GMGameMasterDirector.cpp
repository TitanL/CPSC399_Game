#include "GMGameMasterDirector.h"

#include "Engine/Engine.h"
#include "GameFramework/Character.h"
#include "GMPlatformCollapse.h"
#include "GMPlatformMover.h"
#include "GMSpinObstacle.h"
#include "Kismet/GameplayStatics.h"

AGMGameMasterDirector::AGMGameMasterDirector()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AGMGameMasterDirector::BeginPlay()
{
    Super::BeginPlay();

    RefreshHelperCaches();
    UpdateLiveSlots();
}

void AGMGameMasterDirector::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    ACharacter* LeadRunner = GetLeadRunner();
    if (IsValid(LeadRunner))
    {
        const float LeadProgress = GetProgressAlongTrack(LeadRunner->GetActorLocation());
        HighestRunnerProgressReached = FMath::Max(HighestRunnerProgressReached, LeadProgress);
    }

    const float Now = GetWorld()->GetTimeSeconds();
    if (Now >= NextSlotRefreshTime)
    {
        UpdateLiveSlots();
        NextSlotRefreshTime = Now + FMath::Max(0.01f, SlotRefreshInterval);
    }

    if (bShowSlotDebugOnScreen)
    {
        DrawSlotDebug();
    }
}

void AGMGameMasterDirector::RefreshHelperCaches()
{
    PlatformMoverHelpers.Empty();
    PlatformCollapseHelpers.Empty();
    SpinHelpers.Empty();

    TArray<AActor*> FoundActors;

    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMPlatformMover::StaticClass(), FoundActors);
    for (AActor* Actor : FoundActors)
    {
        if (AGMPlatformMover* Helper = Cast<AGMPlatformMover>(Actor))
        {
            PlatformMoverHelpers.Add(Helper);
        }
    }

    FoundActors.Empty();
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMPlatformCollapse::StaticClass(), FoundActors);
    for (AActor* Actor : FoundActors)
    {
        if (AGMPlatformCollapse* Helper = Cast<AGMPlatformCollapse>(Actor))
        {
            PlatformCollapseHelpers.Add(Helper);
        }
    }

    FoundActors.Empty();
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMSpinObstacle::StaticClass(), FoundActors);
    for (AActor* Actor : FoundActors)
    {
        if (AGMSpinObstacle* Helper = Cast<AGMSpinObstacle>(Actor))
        {
            SpinHelpers.Add(Helper);
        }
    }
}

ACharacter* AGMGameMasterDirector::GetLeadRunner() const
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundActors);

    ACharacter* BestRunner = nullptr;
    float BestProgress = -FLT_MAX;

    for (AActor* Actor : FoundActors)
    {
        ACharacter* Character = Cast<ACharacter>(Actor);
        if (!IsValid(Character))
        {
            continue;
        }

        const float Progress = GetProgressAlongTrack(Character->GetActorLocation());
        if (Progress > BestProgress)
        {
            BestProgress = Progress;
            BestRunner = Character;
        }
    }

    return BestRunner;
}

float AGMGameMasterDirector::GetProgressAlongTrack(const FVector& WorldLocation) const
{
    const FVector SafeForward = TrackForward.GetSafeNormal();
    return FVector::DotProduct(WorldLocation - TrackOrigin, SafeForward);
}

FString AGMGameMasterDirector::GetControlTypeName(EGMControlType ControlType) const
{
    switch (ControlType)
    {
    case EGMControlType::Mover:
        return TEXT("Move");
    case EGMControlType::Collapse:
        return TEXT("Collapse");
    case EGMControlType::Spin:
        return TEXT("Spin");
    default:
        return TEXT("None");
    }
}

void AGMGameMasterDirector::UpdateLiveSlots()
{
    LiveSlots.Empty();
    CurrentSlots.Empty();

    if (HighestRunnerProgressReached <= -FLT_MAX / 2.0f)
    {
        return;
    }

    const float LockedBehindProgress = HighestRunnerProgressReached - PassedTargetTolerance;
    TArray<FGMInternalSlot> Candidates;

    for (AGMPlatformMover* Helper : PlatformMoverHelpers)
    {
        if (!IsValid(Helper))
        {
            continue;
        }

        AActor* FocusActor = Helper->GetFocusActor();
        if (!IsValid(FocusActor))
        {
            continue;
        }

        const float Progress = GetProgressAlongTrack(FocusActor->GetActorLocation());
        if (Progress < LockedBehindProgress)
        {
            continue;
        }

        FGMInternalSlot Slot;
        Slot.ControlType = EGMControlType::Mover;
        Slot.FocusActor = FocusActor;
        Slot.Mover = Helper;
        Slot.Progress = Progress;
        Slot.DisplayName = FocusActor->GetName();
        Candidates.Add(Slot);
    }

    for (AGMPlatformCollapse* Helper : PlatformCollapseHelpers)
    {
        if (!IsValid(Helper))
        {
            continue;
        }

        AActor* FocusActor = Helper->GetFocusActor();
        if (!IsValid(FocusActor))
        {
            continue;
        }

        const float Progress = GetProgressAlongTrack(FocusActor->GetActorLocation());
        if (Progress < LockedBehindProgress)
        {
            continue;
        }

        FGMInternalSlot Slot;
        Slot.ControlType = EGMControlType::Collapse;
        Slot.FocusActor = FocusActor;
        Slot.Collapse = Helper;
        Slot.Progress = Progress;
        Slot.DisplayName = FocusActor->GetName();
        Candidates.Add(Slot);
    }

    for (AGMSpinObstacle* Helper : SpinHelpers)
    {
        if (!IsValid(Helper))
        {
            continue;
        }

        AActor* FocusActor = Helper->GetFocusActor();
        if (!IsValid(FocusActor))
        {
            continue;
        }

        const float Progress = GetProgressAlongTrack(FocusActor->GetActorLocation());
        if (Progress < LockedBehindProgress)
        {
            continue;
        }

        FGMInternalSlot Slot;
        Slot.ControlType = EGMControlType::Spin;
        Slot.FocusActor = FocusActor;
        Slot.Spin = Helper;
        Slot.Progress = Progress;
        Slot.DisplayName = FocusActor->GetName();
        Candidates.Add(Slot);
    }

    Candidates.Sort([](const FGMInternalSlot& A, const FGMInternalSlot& B)
        {
            return A.Progress < B.Progress;
        });

    TSet<AActor*> UsedFocusActors;

    for (const FGMInternalSlot& Candidate : Candidates)
    {
        if (LiveSlots.Num() >= FMath::Max(1, MaxActiveSlots))
        {
            break;
        }

        AActor* FocusActor = Candidate.FocusActor.Get();
        if (!IsValid(FocusActor))
        {
            continue;
        }

        if (UsedFocusActors.Contains(FocusActor))
        {
            continue;
        }

        UsedFocusActors.Add(FocusActor);
        LiveSlots.Add(Candidate);

        FGMControlSlot PublicSlot;
        PublicSlot.ControlType = Candidate.ControlType;
        PublicSlot.FocusActor = FocusActor;
        PublicSlot.DisplayName = Candidate.DisplayName;
        CurrentSlots.Add(PublicSlot);
    }
}

void AGMGameMasterDirector::DrawSlotDebug() const
{
    if (!GEngine)
    {
        return;
    }

    for (int32 i = 0; i < 3; ++i)
    {
        FString Message = FString::Printf(TEXT("%d: Empty"), i + 1);

        if (CurrentSlots.IsValidIndex(i))
        {
            Message = FString::Printf(
                TEXT("%d: %s | %s"),
                i + 1,
                *GetControlTypeName(CurrentSlots[i].ControlType),
                *CurrentSlots[i].DisplayName
            );
        }

        GEngine->AddOnScreenDebugMessage(700 + i, 0.0f, FColor::Cyan, Message);
    }

    if (GetWorld()->GetTimeSeconds() < NextGlobalReadyTime)
    {
        const float Remaining = NextGlobalReadyTime - GetWorld()->GetTimeSeconds();
        GEngine->AddOnScreenDebugMessage(
            710,
            0.0f,
            FColor::Yellow,
            FString::Printf(TEXT("GM Cooldown: %.1fs"), Remaining)
        );
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(710, 0.0f, FColor::Green, TEXT("GM Cooldown: Ready"));
    }
}

void AGMGameMasterDirector::ShowStatusMessage(const FString& Message) const
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, Message);
    }
}

void AGMGameMasterDirector::TriggerSlotByIndex(int32 SlotIndex)
{
    UpdateLiveSlots();

    if (!LiveSlots.IsValidIndex(SlotIndex))
    {
        ShowStatusMessage(FString::Printf(TEXT("Slot %d is empty."), SlotIndex + 1));
        return;
    }

    const float Now = GetWorld()->GetTimeSeconds();
    if (Now < NextGlobalReadyTime)
    {
        ShowStatusMessage(FString::Printf(
            TEXT("GM is on cooldown for %.1f more seconds."),
            NextGlobalReadyTime - Now
        ));
        return;
    }

    const FGMInternalSlot& Slot = LiveSlots[SlotIndex];
    bool bActivated = false;

    switch (Slot.ControlType)
    {
    case EGMControlType::Mover:
    {
        if (Slot.Mover.IsValid() && Slot.Mover->CanTrigger())
        {
            Slot.Mover->TriggerPlatform();
            bActivated = true;
        }
        break;
    }

    case EGMControlType::Collapse:
    {
        if (Slot.Collapse.IsValid() && Slot.Collapse->CanTrigger())
        {
            Slot.Collapse->CollapsePlatform();
            bActivated = true;
        }
        break;
    }

    case EGMControlType::Spin:
    {
        if (Slot.Spin.IsValid() && Slot.Spin->CanTrigger())
        {
            Slot.Spin->TriggerSpinBoost();
            bActivated = true;
        }
        break;
    
    
    }

    default:
        break;
    }

    if (!bActivated)
    {
        ShowStatusMessage(FString::Printf(
            TEXT("Slot %d is on local cooldown or invalid."),
            SlotIndex + 1
        ));
        return;
    }

    NextGlobalReadyTime = Now + GlobalActionCooldown;

    ShowStatusMessage(FString::Printf(
        TEXT("Triggered slot %d: %s | %s"),
        SlotIndex + 1,
        *GetControlTypeName(Slot.ControlType),
        *Slot.DisplayName
    ));
}

void AGMGameMasterDirector::TriggerSlot1()
{
    TriggerSlotByIndex(0);
}

void AGMGameMasterDirector::TriggerSlot2()
{
    TriggerSlotByIndex(1);
}

void AGMGameMasterDirector::TriggerSlot3()
{
    TriggerSlotByIndex(2);
}

void AGMGameMasterDirector::ForceRefreshTargets()
{
    RefreshHelperCaches();
    UpdateLiveSlots();
}