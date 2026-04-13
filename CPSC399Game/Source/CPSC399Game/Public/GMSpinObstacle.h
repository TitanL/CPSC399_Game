#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMSpinObstacle.generated.h"

class USceneComponent;

UCLASS()
class CPSC399GAME_API AGMSpinObstacle : public AActor
{
    GENERATED_BODY()

public:
    AGMSpinObstacle();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    USceneComponent* SceneRoot = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    AActor* TargetObstacle = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    FVector SpinAxis = FVector(0.0f, 0.0f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float CurrentSpinSpeed = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float SpeedIncreaseAmount = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float ResetDelay = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float LocalCooldown = 3.0f;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void TriggerSpinBoost();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void ResetSpinSpeed();

    UFUNCTION(BlueprintPure, Category = "GM")
    bool CanTrigger() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    bool IsOnLocalCooldown() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    float GetCurrentSpinSpeed() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    AActor* GetFocusActor() const;

private:
    float StoredSpinSpeedBeforeBoost = 0.0f;
    float NextReadyTime = 0.0f;
    bool bBoostActive = false;
    FTimerHandle ResetSpinTimer;

    AActor* GetControlledActor() const;
};