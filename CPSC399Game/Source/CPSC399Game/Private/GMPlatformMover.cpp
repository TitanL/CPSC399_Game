#include "GMPlatformMover.h"

#include "TimerManager.h"

AGMPlatformMover::AGMPlatformMover()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AGMPlatformMover::BeginPlay()
{
    Super::BeginPlay();

    if (AActor* ControlledActor = GetControlledActor())
    {
        StartLocation = ControlledActor->GetActorLocation();
        WantedLocation = StartLocation;
    }
}

void AGMPlatformMover::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    AActor* ControlledActor = GetControlledActor();
    if (!IsValid(ControlledActor))
    {
        return;
    }

    const FVector CurrentLocation = ControlledActor->GetActorLocation();
    const FVector NewLocation = FMath::VInterpTo(CurrentLocation, WantedLocation, DeltaSeconds, MoveInterpSpeed);
    ControlledActor->SetActorLocation(NewLocation);
}

AActor* AGMPlatformMover::GetControlledActor() const
{
    return IsValid(TargetPlatform) ? TargetPlatform : const_cast<AGMPlatformMover*>(this);
}

AActor* AGMPlatformMover::GetFocusActor() const
{
    return GetControlledActor();
}

bool AGMPlatformMover::IsOnLocalCooldown() const
{
    const UWorld* World = GetWorld();
    return World && World->GetTimeSeconds() < NextReadyTime;
}

bool AGMPlatformMover::CanTrigger() const
{
    return IsValid(GetControlledActor()) && !IsOnLocalCooldown();
}

void AGMPlatformMover::SetWantedOffset(const FVector& NewOffset)
{
    AActor* ControlledActor = GetControlledActor();
    if (!IsValid(ControlledActor))
    {
        return;
    }

    GetWorldTimerManager().ClearTimer(ResetTimer);
    WantedLocation = StartLocation + NewOffset;

    if (ActiveDuration > 0.0f)
    {
        GetWorldTimerManager().SetTimer(ResetTimer, this, &AGMPlatformMover::ResetPlatform, ActiveDuration, false);
    }
}

void AGMPlatformMover::TriggerPlatform()
{
    if (!CanTrigger())
    {
        return;
    }

    NextReadyTime = GetWorld()->GetTimeSeconds() + LocalCooldown;
    SetWantedOffset(MoveOffset);
}

void AGMPlatformMover::RaisePlatform()
{
    TriggerPlatform();
}

void AGMPlatformMover::LowerPlatform()
{
    if (!CanTrigger())
    {
        return;
    }

    NextReadyTime = GetWorld()->GetTimeSeconds() + LocalCooldown;
    SetWantedOffset(-MoveOffset);
}

void AGMPlatformMover::ResetPlatform()
{
    WantedLocation = StartLocation;
}