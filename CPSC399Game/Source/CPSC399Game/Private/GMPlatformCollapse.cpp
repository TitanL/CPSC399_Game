#include "GMPlatformCollapse.h"

#include "Components/SceneComponent.h"

AGMPlatformCollapse::AGMPlatformCollapse()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    TargetPlatform = nullptr;
    bInitialHiddenInGame = false;
    bInitialCollisionEnabled = true;
    bCollapsed = false;
}

void AGMPlatformCollapse::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    SnapHelperToTarget();
}

void AGMPlatformCollapse::BeginPlay()
{
    Super::BeginPlay();

    if (IsValid(TargetPlatform))
    {
        bInitialHiddenInGame = TargetPlatform->IsHidden();
        bInitialCollisionEnabled = TargetPlatform->GetActorEnableCollision();
        SnapHelperToTarget();
    }
}

void AGMPlatformCollapse::SnapHelperToTarget()
{
    if (IsValid(TargetPlatform))
    {
        SetActorLocation(TargetPlatform->GetActorLocation());
    }
}

void AGMPlatformCollapse::CollapsePlatform()
{
    if (!IsValid(TargetPlatform))
    {
        return;
    }

    TargetPlatform->SetActorHiddenInGame(true);
    TargetPlatform->SetActorEnableCollision(false);
    bCollapsed = true;
}

void AGMPlatformCollapse::RestorePlatform()
{
    if (!IsValid(TargetPlatform))
    {
        return;
    }

    TargetPlatform->SetActorHiddenInGame(bInitialHiddenInGame);
    TargetPlatform->SetActorEnableCollision(bInitialCollisionEnabled);
    bCollapsed = false;
    SnapHelperToTarget();
}

bool AGMPlatformCollapse::IsCollapsed() const
{
    return bCollapsed;
}
