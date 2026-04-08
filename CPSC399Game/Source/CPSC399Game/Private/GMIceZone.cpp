#include "GMIceZone.h"

#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

AGMIceZone::AGMIceZone()
{
    PrimaryActorTick.bCanEverTick = false;

    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    RootComponent = TriggerBox;

    TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    TriggerBox->SetCollisionResponseToAllChannels(ECR_Ignore);
    TriggerBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    TriggerBox->SetGenerateOverlapEvents(true);

    TargetPlatform = nullptr;
    ZoneMargin = FVector(15.0f, 15.0f, 0.0f);
    ZoneHeight = 40.0f;
    bIsArmed = false;
    CurrentFreezeDuration = 5.0f;
}

void AGMIceZone::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    SnapZoneToTarget();
}

void AGMIceZone::BeginPlay()
{
    Super::BeginPlay();

    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AGMIceZone::OnIceZoneBeginOverlap);
    SnapZoneToTarget();
}

void AGMIceZone::SnapZoneToTarget()
{
    if (!IsValid(TargetPlatform))
    {
        return;
    }

    FVector Center;
    FVector Extents;
    TargetPlatform->GetActorBounds(true, Center, Extents);

    const FVector NewLocation = Center + FVector(0.0f, 0.0f, Extents.Z + ZoneHeight);
    SetActorLocation(NewLocation);

    const FVector NewExtent(
        FMath::Max(10.0f, Extents.X - ZoneMargin.X),
        FMath::Max(10.0f, Extents.Y - ZoneMargin.Y),
        FMath::Max(10.0f, ZoneHeight)
    );

    TriggerBox->SetBoxExtent(NewExtent);
}

void AGMIceZone::ActivateIceZone(float FreezeDurationSeconds, float ArmedDurationSeconds)
{
    CurrentFreezeDuration = FMath::Max(0.1f, FreezeDurationSeconds);
    bIsArmed = true;

    GetWorldTimerManager().ClearTimer(DisarmTimerHandle);
    GetWorldTimerManager().SetTimer(
        DisarmTimerHandle,
        this,
        &AGMIceZone::DeactivateIceZone,
        FMath::Max(0.1f, ArmedDurationSeconds),
        false
    );

    FreezeOverlappingCharacters();
}

void AGMIceZone::DeactivateIceZone()
{
    bIsArmed = false;
    GetWorldTimerManager().ClearTimer(DisarmTimerHandle);
}

bool AGMIceZone::IsIceZoneArmed() const
{
    return bIsArmed;
}

void AGMIceZone::FreezeOverlappingCharacters()
{
    if (!bIsArmed)
    {
        return;
    }

    TArray<AActor*> OverlappingActors;
    TriggerBox->GetOverlappingActors(OverlappingActors, ACharacter::StaticClass());

    for (AActor* OverlappingActor : OverlappingActors)
    {
        ACharacter* Character = Cast<ACharacter>(OverlappingActor);
        if (IsValid(Character) && Character->GetCharacterMovement())
        {
            Character->GetCharacterMovement()->StopMovementImmediately();
            Character->GetCharacterMovement()->DisableMovement();

            FTimerHandle TempHandle;
            FTimerDelegate UnfreezeDelegate = FTimerDelegate::CreateLambda([Character]()
            {
                if (IsValid(Character) && Character->GetCharacterMovement())
                {
                    Character->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
                }
            });

            GetWorldTimerManager().SetTimer(TempHandle, UnfreezeDelegate, CurrentFreezeDuration, false);
        }
    }
}

void AGMIceZone::OnIceZoneBeginOverlap(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult
)
{
    if (!bIsArmed)
    {
        return;
    }

    ACharacter* Character = Cast<ACharacter>(OtherActor);
    if (IsValid(Character) && Character->GetCharacterMovement())
    {
        Character->GetCharacterMovement()->StopMovementImmediately();
        Character->GetCharacterMovement()->DisableMovement();

        FTimerHandle TempHandle;
        FTimerDelegate UnfreezeDelegate = FTimerDelegate::CreateLambda([Character]()
        {
            if (IsValid(Character) && Character->GetCharacterMovement())
            {
                Character->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
            }
        });

        GetWorldTimerManager().SetTimer(TempHandle, UnfreezeDelegate, CurrentFreezeDuration, false);
    }
}
