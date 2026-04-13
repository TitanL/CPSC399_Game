#include "GMSpinObstacle.h"

#include "Components/SceneComponent.h"
#include "TimerManager.h"

AGMSpinObstacle::AGMSpinObstacle()
{
    PrimaryActorTick.bCanEverTick = true;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);
}

void AGMSpinObstacle::BeginPlay()
{
    Super::BeginPlay();

    StoredSpinSpeedBeforeBoost = CurrentSpinSpeed;
}

void AGMSpinObstacle::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    AActor* ControlledActor = GetControlledActor();
    if (!IsValid(ControlledActor))
    {
        return;
    }

    if (FMath::IsNearlyZero(CurrentSpinSpeed))
    {
        return;
    }

    const FVector SafeAxis = SpinAxis.GetSafeNormal();
    if (SafeAxis.IsNearlyZero())
    {
        return;
    }

    const float AngleRadians = FMath::DegreesToRadians(CurrentSpinSpeed * DeltaSeconds);
    const FQuat DeltaQuat(SafeAxis, AngleRadians);
    ControlledActor->AddActorWorldRotation(DeltaQuat);
}

AActor* AGMSpinObstacle::GetControlledActor() const
{
    return IsValid(TargetObstacle) ? TargetObstacle : const_cast<AGMSpinObstacle*>(this);
}

AActor* AGMSpinObstacle::GetFocusActor() const
{
    return GetControlledActor();
}

bool AGMSpinObstacle::IsOnLocalCooldown() const
{
    const UWorld* World = GetWorld();
    return World && World->GetTimeSeconds() < NextReadyTime;
}

bool AGMSpinObstacle::CanTrigger() const
{
    return IsValid(GetControlledActor()) && !IsOnLocalCooldown() && !bBoostActive;
}

float AGMSpinObstacle::GetCurrentSpinSpeed() const
{
    return CurrentSpinSpeed;
}

void AGMSpinObstacle::TriggerSpinBoost()
{
    if (!CanTrigger())
    {
        return;
    }

    StoredSpinSpeedBeforeBoost = CurrentSpinSpeed;
    CurrentSpinSpeed += SpeedIncreaseAmount;

    bBoostActive = true;
    NextReadyTime = GetWorld()->GetTimeSeconds() + LocalCooldown;

    GetWorldTimerManager().ClearTimer(ResetSpinTimer);
    GetWorldTimerManager().SetTimer(
        ResetSpinTimer,
        this,
        &AGMSpinObstacle::ResetSpinSpeed,
        ResetDelay,
        false
    );
}

void AGMSpinObstacle::ResetSpinSpeed()
{
    CurrentSpinSpeed = StoredSpinSpeedBeforeBoost;
    bBoostActive = false;
}