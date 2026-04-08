#include "GMPlatformMover.h"

#include "Components/SceneComponent.h"

AGMPlatformMover::AGMPlatformMover()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    TargetPlatform = nullptr;
    MoveStep = 150.0f;
    InitialPlatformLocation = FVector::ZeroVector;
}

void AGMPlatformMover::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    SnapHelperToTarget();
}

void AGMPlatformMover::BeginPlay()
{
    Super::BeginPlay();

    if (IsValid(TargetPlatform))
    {
        InitialPlatformLocation = TargetPlatform->GetActorLocation();
        SnapHelperToTarget();
    }
}

void AGMPlatformMover::SnapHelperToTarget()
{
    if (IsValid(TargetPlatform))
    {
        SetActorLocation(TargetPlatform->GetActorLocation());
    }
}

void AGMPlatformMover::RaisePlatform()
{
    if (!IsValid(TargetPlatform))
    {
        return;
    }

    FVector NewLocation = TargetPlatform->GetActorLocation();
    NewLocation.Z += MoveStep;
    TargetPlatform->SetActorLocation(NewLocation);
    SnapHelperToTarget();
}

void AGMPlatformMover::LowerPlatform()
{
    if (!IsValid(TargetPlatform))
    {
        return;
    }

    FVector NewLocation = TargetPlatform->GetActorLocation();
    NewLocation.Z -= MoveStep;
    TargetPlatform->SetActorLocation(NewLocation);
    SnapHelperToTarget();
}

void AGMPlatformMover::ResetPlatform()
{
    if (!IsValid(TargetPlatform))
    {
        return;
    }

    TargetPlatform->SetActorLocation(InitialPlatformLocation);
    SnapHelperToTarget();
}
