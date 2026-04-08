#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMPlatformMover.generated.h"

class USceneComponent;

UCLASS()
class CPSC399GAME_API AGMPlatformMover : public AActor
{
    GENERATED_BODY()

public:
    AGMPlatformMover();

    virtual void BeginPlay() override;
    virtual void OnConstruction(const FTransform& Transform) override;

    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "GM")
    AActor* TargetPlatform;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GM")
    float MoveStep;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void RaisePlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void LowerPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void ResetPlatform();

protected:
    UPROPERTY(VisibleAnywhere, Category = "GM")
    USceneComponent* SceneRoot;

    FVector InitialPlatformLocation;

    void SnapHelperToTarget();
};
