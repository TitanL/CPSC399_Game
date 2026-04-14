#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMIceZone.generated.h"

class UBoxComponent;

UCLASS()
class CPSC399GAME_API AGMIceZone : public AActor
{
    GENERATED_BODY()

public:
    AGMIceZone();

    virtual void BeginPlay() override;
    virtual void OnConstruction(const FTransform& Transform) override;

    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "GM")
    AActor* TargetPlatform;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GM")
    FVector ZoneMargin;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GM")
    float ZoneHeight;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void ActivateIceZone(float FreezeDurationSeconds = 5.0f, float ArmedDurationSeconds = 5.0f);

    UFUNCTION(BlueprintCallable, Category = "GM")
    void DeactivateIceZone();

    UFUNCTION(BlueprintPure, Category = "GM")
    bool IsIceZoneArmed() const;

protected:
    UPROPERTY(VisibleAnywhere, Category = "GM")
    UBoxComponent* TriggerBox;

    bool bIsArmed;
    float CurrentFreezeDuration;
    FTimerHandle DisarmTimerHandle;

    void SnapZoneToTarget();
    void FreezeOverlappingCharacters();

    UFUNCTION()
    void OnIceZoneBeginOverlap(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult
    );
};
