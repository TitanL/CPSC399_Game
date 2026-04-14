#include "GMPlatformCollapse.h"

#include "Components/PrimitiveComponent.h"
#include "TimerManager.h"

AGMPlatformCollapse::AGMPlatformCollapse()
{
    PrimaryActorTick.bCanEverTick = false;
}

AActor* AGMPlatformCollapse::GetControlledActor() const
{
    return IsValid(TargetPlatform) ? TargetPlatform : const_cast<AGMPlatformCollapse*>(this);
}

AActor* AGMPlatformCollapse::GetFocusActor() const
{
    return GetControlledActor();
}

bool AGMPlatformCollapse::IsOnLocalCooldown() const
{
    const UWorld* World = GetWorld();
    return World && World->GetTimeSeconds() < NextReadyTime;
}

bool AGMPlatformCollapse::CanTrigger() const
{
    return IsValid(GetControlledActor()) && !IsOnLocalCooldown();
}

void AGMPlatformCollapse::SetActorBlockedState(AActor* ActorToEdit, bool bBlocked) const
{
    if (!IsValid(ActorToEdit))
    {
        return;
    }

    ActorToEdit->SetActorHiddenInGame(!bBlocked);
    ActorToEdit->SetActorEnableCollision(bBlocked);

    TArray<UActorComponent*> PrimitiveComponents = ActorToEdit->GetComponentsByClass(UPrimitiveComponent::StaticClass());
    for (UActorComponent* Component : PrimitiveComponents)
    {
        if (UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(Component))
        {
            Primitive->SetVisibility(bBlocked, true);
            Primitive->SetCollisionEnabled(
                bBlocked ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision
            );
        }
    }
}

void AGMPlatformCollapse::CollapsePlatform()
{
    if (!CanTrigger())
    {
        return;
    }

    AActor* ControlledActor = GetControlledActor();
    if (!IsValid(ControlledActor))
    {
        return;
    }

    NextReadyTime = GetWorld()->GetTimeSeconds() + LocalCooldown;
    SetActorBlockedState(ControlledActor, false);

    GetWorldTimerManager().ClearTimer(RestoreTimer);
    if (RestoreDelay > 0.0f)
    {
        GetWorldTimerManager().SetTimer(RestoreTimer, this, &AGMPlatformCollapse::RestorePlatform, RestoreDelay, false);
    }
}

void AGMPlatformCollapse::RestorePlatform()
{
    SetActorBlockedState(GetControlledActor(), true);
}