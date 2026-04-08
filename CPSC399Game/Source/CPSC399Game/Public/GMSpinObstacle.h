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
    virtual void Tick(float DeltaTime) override;
    virtual void OnConstruction(const FTransform& Transform) override;

    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "GM")
    AActor* TargetObstacle;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GM")
    float InitialSpinSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GM")
    float SpinSpeedStep;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GM")
    bool bClockwise;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void IncreaseSpinSpeed();

    UFUNCTION(BlueprintPure, Category = "GM")
    float GetCurrentSpinSpeed() const;

protected:
    UPROPERTY(VisibleAnywhere, Category = "GM")
    USceneComponent* SceneRoot;

    float CurrentSpinSpeed;

    void SnapHelperToTarget();
};
