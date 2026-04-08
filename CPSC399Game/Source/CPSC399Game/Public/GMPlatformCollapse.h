#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMPlatformCollapse.generated.h"

class USceneComponent;

UCLASS()
class CPSC399GAME_API AGMPlatformCollapse : public AActor
{
    GENERATED_BODY()

public:
    AGMPlatformCollapse();

    virtual void BeginPlay() override;
    virtual void OnConstruction(const FTransform& Transform) override;

    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "GM")
    AActor* TargetPlatform;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void CollapsePlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void RestorePlatform();

    UFUNCTION(BlueprintPure, Category = "GM")
    bool IsCollapsed() const;

protected:
    UPROPERTY(VisibleAnywhere, Category = "GM")
    USceneComponent* SceneRoot;

    bool bInitialHiddenInGame;
    bool bInitialCollisionEnabled;
    bool bCollapsed;

    void SnapHelperToTarget();
};
