#include "GMSpinObstacle.h"

#include "Components/SceneComponent.h"

AGMSpinObstacle::AGMSpinObstacle()
{
    PrimaryActorTick.bCanEverTick = true;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    TargetObstacle = nullptr;
    InitialSpinSpeed = 90.0f;
    SpinSpeedStep = 45.0f;
    bClockwise = true;
    CurrentSpinSpeed = InitialSpinSpeed;
}

void AGMSpinObstacle::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    SnapHelperToTarget();
}

void AGMSpinObstacle::BeginPlay()
{
    Super::BeginPlay();

    CurrentSpinSpeed = InitialSpinSpeed;
    SnapHelperToTarget();
}

void AGMSpinObstacle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!IsValid(TargetObstacle))
    {
        return;
    }

    const float Direction = bClockwise ? 1.0f : -1.0f;
    const float DeltaYaw = CurrentSpinSpeed * Direction * DeltaTime;
    TargetObstacle->AddActorLocalRotation(FRotator(0.0f, DeltaYaw, 0.0f));
}

void AGMSpinObstacle::SnapHelperToTarget()
{
    if (IsValid(TargetObstacle))
    {
        SetActorLocation(TargetObstacle->GetActorLocation());
    }
}

void AGMSpinObstacle::IncreaseSpinSpeed()
{
    CurrentSpinSpeed += SpinSpeedStep;
}

float AGMSpinObstacle::GetCurrentSpinSpeed() const
{
    return CurrentSpinSpeed;
}
