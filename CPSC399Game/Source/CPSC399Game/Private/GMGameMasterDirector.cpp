#include "GMGameMasterDirector.h"

#include "Camera/PlayerCameraManager.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

#include "GMIceZone.h"
#include "GMPlatformCollapse.h"
#include "GMPlatformMover.h"
#include "GMSpinObstacle.h"

static FString GetSafeActorDebugName(const AActor* Actor)
{
    return IsValid(Actor) ? Actor->GetName() : FString(TEXT("None"));
}

AGMGameMasterDirector::AGMGameMasterDirector()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    PlatformSelectionText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PlatformSelectionText"));
    PlatformSelectionText->SetupAttachment(SceneRoot);
    PlatformSelectionText->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
    PlatformSelectionText->SetWorldSize(60.0f);
    PlatformSelectionText->SetTextRenderColor(FColor::Green);
    PlatformSelectionText->SetHiddenInGame(true);

    SpinSelectionText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SpinSelectionText"));
    SpinSelectionText->SetupAttachment(SceneRoot);
    SpinSelectionText->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
    SpinSelectionText->SetWorldSize(60.0f);
    SpinSelectionText->SetTextRenderColor(FColor::Yellow);
    SpinSelectionText->SetHiddenInGame(true);

    SelectedPlatformIndex = 0;
    SelectedSpinIndex = 0;
}

void AGMGameMasterDirector::BeginPlay()
{
    Super::BeginPlay();
    RefreshTargets();
}

void AGMGameMasterDirector::RefreshTargets()
{
    PlatformTargets.Empty();
    SpinTargets.Empty();

    TArray<AActor*> FoundMovers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMPlatformMover::StaticClass(), FoundMovers);

    for (AActor* Actor : FoundMovers)
    {
        AGMPlatformMover* Mover = Cast<AGMPlatformMover>(Actor);
        if (!IsValid(Mover) || !IsValid(Mover->TargetPlatform))
        {
            continue;
        }

        const int32 Index = FindOrAddPlatformEntry(Mover->TargetPlatform);
        if (!PlatformTargets[Index].Mover)
        {
            PlatformTargets[Index].Mover = Mover;
        }
    }

    TArray<AActor*> FoundCollapses;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMPlatformCollapse::StaticClass(), FoundCollapses);

    for (AActor* Actor : FoundCollapses)
    {
        AGMPlatformCollapse* Collapse = Cast<AGMPlatformCollapse>(Actor);
        if (!IsValid(Collapse) || !IsValid(Collapse->TargetPlatform))
        {
            continue;
        }

        const int32 Index = FindOrAddPlatformEntry(Collapse->TargetPlatform);
        if (!PlatformTargets[Index].Collapse)
        {
            PlatformTargets[Index].Collapse = Collapse;
        }
    }

    TArray<AActor*> FoundIceZones;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMIceZone::StaticClass(), FoundIceZones);

    for (AActor* Actor : FoundIceZones)
    {
        AGMIceZone* IceZone = Cast<AGMIceZone>(Actor);
        if (!IsValid(IceZone) || !IsValid(IceZone->TargetPlatform))
        {
            continue;
        }

        const int32 Index = FindOrAddPlatformEntry(IceZone->TargetPlatform);
        if (!PlatformTargets[Index].IceZone)
        {
            PlatformTargets[Index].IceZone = IceZone;
        }
    }

    TArray<AActor*> FoundSpinners;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMSpinObstacle::StaticClass(), FoundSpinners);

    for (AActor* Actor : FoundSpinners)
    {
        AGMSpinObstacle* SpinHelper = Cast<AGMSpinObstacle>(Actor);
        if (IsValid(SpinHelper))
        {
            SpinTargets.Add(SpinHelper);
        }
    }

    SortPlatformTargetsByName();
    SortSpinTargetsByName();

    if (PlatformTargets.Num() == 0)
    {
        SelectedPlatformIndex = 0;
        PlatformSelectionText->SetHiddenInGame(true);
    }
    else
    {
        SelectedPlatformIndex = FMath::Clamp(SelectedPlatformIndex, 0, PlatformTargets.Num() - 1);
        UpdatePlatformHighlight();
    }

    if (SpinTargets.Num() == 0)
    {
        SelectedSpinIndex = 0;
        SpinSelectionText->SetHiddenInGame(true);
    }
    else
    {
        SelectedSpinIndex = FMath::Clamp(SelectedSpinIndex, 0, SpinTargets.Num() - 1);
        UpdateSpinHighlight();
    }
}

int32 AGMGameMasterDirector::FindOrAddPlatformEntry(AActor* TargetPlatform)
{
    for (int32 i = 0; i < PlatformTargets.Num(); ++i)
    {
        if (PlatformTargets[i].TargetPlatform == TargetPlatform)
        {
            return i;
        }
    }

    FGMPlatformControlEntry NewEntry;
    NewEntry.TargetPlatform = TargetPlatform;
    return PlatformTargets.Add(NewEntry);
}

void AGMGameMasterDirector::SortPlatformTargetsByName()
{
    for (int32 i = 0; i < PlatformTargets.Num(); ++i)
    {
        for (int32 j = i + 1; j < PlatformTargets.Num(); ++j)
        {
            if (GetPlatformDisplayName(PlatformTargets[j]) < GetPlatformDisplayName(PlatformTargets[i]))
            {
                PlatformTargets.Swap(i, j);
            }
        }
    }
}

void AGMGameMasterDirector::SortSpinTargetsByName()
{
    for (int32 i = 0; i < SpinTargets.Num(); ++i)
    {
        for (int32 j = i + 1; j < SpinTargets.Num(); ++j)
        {
            if (GetSpinDisplayName(SpinTargets[j]) < GetSpinDisplayName(SpinTargets[i]))
            {
                SpinTargets.Swap(i, j);
            }
        }
    }
}

FString AGMGameMasterDirector::GetPlatformDisplayName(const FGMPlatformControlEntry& Entry) const
{
    if (IsValid(Entry.TargetPlatform))
    {
        return GetSafeActorDebugName(Entry.TargetPlatform);
    }

    return FString(TEXT("InvalidPlatform"));
}

FString AGMGameMasterDirector::GetSpinDisplayName(AGMSpinObstacle* SpinHelper) const
{
    if (IsValid(SpinHelper) && IsValid(SpinHelper->TargetObstacle))
    {
        return GetSafeActorDebugName(SpinHelper->TargetObstacle);
    }

    if (IsValid(SpinHelper))
    {
        return GetSafeActorDebugName(SpinHelper);
    }

    return FString(TEXT("InvalidSpinner"));
}

void AGMGameMasterDirector::ShowStatusMessage(const FString& Message) const
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.5f, FColor::White, Message);
    }
}

void AGMGameMasterDirector::UpdatePlatformHighlight()
{
    if (PlatformTargets.Num() == 0)
    {
        PlatformSelectionText->SetHiddenInGame(true);
        return;
    }

    const FGMPlatformControlEntry& Entry = PlatformTargets[SelectedPlatformIndex];
    if (!IsValid(Entry.TargetPlatform))
    {
        PlatformSelectionText->SetHiddenInGame(true);
        return;
    }

    FVector Center;
    FVector Extents;
    Entry.TargetPlatform->GetActorBounds(true, Center, Extents);

    const FVector LabelLocation = Center + FVector(0.0f, 0.0f, Extents.Z + 120.0f);
    PlatformSelectionText->SetWorldLocation(LabelLocation);
    PlatformSelectionText->SetText(FText::FromString(FString::Printf(
        TEXT("SELECTED PLATFORM\n%s"),
        *GetPlatformDisplayName(Entry)
    )));
    PlatformSelectionText->SetHiddenInGame(false);

    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (IsValid(PC) && IsValid(PC->PlayerCameraManager))
    {
        FRotator FacingRotation = (PC->PlayerCameraManager->GetCameraLocation() - LabelLocation).Rotation();
        FacingRotation.Pitch = 0.0f;
        FacingRotation.Roll = 0.0f;
        PlatformSelectionText->SetWorldRotation(FacingRotation);
    }

    ShowStatusMessage(FString::Printf(TEXT("Selected platform: %s"), *GetPlatformDisplayName(Entry)));
}

void AGMGameMasterDirector::UpdateSpinHighlight()
{
    if (SpinTargets.Num() == 0)
    {
        SpinSelectionText->SetHiddenInGame(true);
        return;
    }

    AGMSpinObstacle* SpinHelper = SpinTargets[SelectedSpinIndex];
    if (!IsValid(SpinHelper) || !IsValid(SpinHelper->TargetObstacle))
    {
        SpinSelectionText->SetHiddenInGame(true);
        return;
    }

    FVector Center;
    FVector Extents;
    SpinHelper->TargetObstacle->GetActorBounds(true, Center, Extents);

    const FVector LabelLocation = Center + FVector(0.0f, 0.0f, Extents.Z + 120.0f);
    SpinSelectionText->SetWorldLocation(LabelLocation);
    SpinSelectionText->SetText(FText::FromString(FString::Printf(
        TEXT("SELECTED SPINNER\n%s"),
        *GetSpinDisplayName(SpinHelper)
    )));
    SpinSelectionText->SetHiddenInGame(false);

    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (IsValid(PC) && IsValid(PC->PlayerCameraManager))
    {
        FRotator FacingRotation = (PC->PlayerCameraManager->GetCameraLocation() - LabelLocation).Rotation();
        FacingRotation.Pitch = 0.0f;
        FacingRotation.Roll = 0.0f;
        SpinSelectionText->SetWorldRotation(FacingRotation);
    }

    ShowStatusMessage(FString::Printf(TEXT("Selected spinner: %s"), *GetSpinDisplayName(SpinHelper)));
}

void AGMGameMasterDirector::SelectPreviousPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform targets found."));
        return;
    }

    SelectedPlatformIndex = (SelectedPlatformIndex - 1 + PlatformTargets.Num()) % PlatformTargets.Num();
    UpdatePlatformHighlight();
}

void AGMGameMasterDirector::SelectNextPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform targets found."));
        return;
    }

    SelectedPlatformIndex = (SelectedPlatformIndex + 1) % PlatformTargets.Num();
    UpdatePlatformHighlight();
}

void AGMGameMasterDirector::RaiseSelectedPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform selected."));
        return;
    }

    FGMPlatformControlEntry& Entry = PlatformTargets[SelectedPlatformIndex];
    if (IsValid(Entry.Mover))
    {
        Entry.Mover->RaisePlatform();
        UpdatePlatformHighlight();
    }
    else
    {
        ShowStatusMessage(TEXT("Selected platform has no mover helper."));
    }
}

void AGMGameMasterDirector::LowerSelectedPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform selected."));
        return;
    }

    FGMPlatformControlEntry& Entry = PlatformTargets[SelectedPlatformIndex];
    if (IsValid(Entry.Mover))
    {
        Entry.Mover->LowerPlatform();
        UpdatePlatformHighlight();
    }
    else
    {
        ShowStatusMessage(TEXT("Selected platform has no mover helper."));
    }
}

void AGMGameMasterDirector::FreezeSelectedPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform selected."));
        return;
    }

    FGMPlatformControlEntry& Entry = PlatformTargets[SelectedPlatformIndex];
    if (IsValid(Entry.IceZone))
    {
        Entry.IceZone->ActivateIceZone(5.0f, 5.0f);
        ShowStatusMessage(FString::Printf(TEXT("Ice armed on: %s"), *GetPlatformDisplayName(Entry)));
    }
    else
    {
        ShowStatusMessage(TEXT("Selected platform has no ice zone helper."));
    }
}

void AGMGameMasterDirector::CollapseSelectedPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform selected."));
        return;
    }

    FGMPlatformControlEntry& Entry = PlatformTargets[SelectedPlatformIndex];
    if (IsValid(Entry.Collapse))
    {
        Entry.Collapse->CollapsePlatform();
        ShowStatusMessage(FString::Printf(TEXT("Collapsed: %s"), *GetPlatformDisplayName(Entry)));
    }
    else
    {
        ShowStatusMessage(TEXT("Selected platform has no collapse helper."));
    }
}

void AGMGameMasterDirector::ResetSelectedPlatform()
{
    if (PlatformTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No platform selected."));
        return;
    }

    FGMPlatformControlEntry& Entry = PlatformTargets[SelectedPlatformIndex];

    if (IsValid(Entry.Mover))
    {
        Entry.Mover->ResetPlatform();
    }

    if (IsValid(Entry.Collapse))
    {
        Entry.Collapse->RestorePlatform();
    }

    if (IsValid(Entry.IceZone))
    {
        Entry.IceZone->DeactivateIceZone();
    }

    UpdatePlatformHighlight();
    ShowStatusMessage(FString::Printf(TEXT("Reset platform: %s"), *GetPlatformDisplayName(Entry)));
}

void AGMGameMasterDirector::SelectPreviousSpin()
{
    if (SpinTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No spin targets found."));
        return;
    }

    SelectedSpinIndex = (SelectedSpinIndex - 1 + SpinTargets.Num()) % SpinTargets.Num();
    UpdateSpinHighlight();
}

void AGMGameMasterDirector::SelectNextSpin()
{
    if (SpinTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No spin targets found."));
        return;
    }

    SelectedSpinIndex = (SelectedSpinIndex + 1) % SpinTargets.Num();
    UpdateSpinHighlight();
}

void AGMGameMasterDirector::IncreaseSelectedSpinSpeed()
{
    if (SpinTargets.Num() == 0)
    {
        ShowStatusMessage(TEXT("No spin target selected."));
        return;
    }

    AGMSpinObstacle* SpinHelper = SpinTargets[SelectedSpinIndex];
    if (!IsValid(SpinHelper))
    {
        ShowStatusMessage(TEXT("Selected spin helper is invalid."));
        return;
    }

    SpinHelper->IncreaseSpinSpeed();
    UpdateSpinHighlight();

    ShowStatusMessage(FString::Printf(
        TEXT("%s speed is now %.1f"),
        *GetSpinDisplayName(SpinHelper),
        SpinHelper->GetCurrentSpinSpeed()
    ));
}