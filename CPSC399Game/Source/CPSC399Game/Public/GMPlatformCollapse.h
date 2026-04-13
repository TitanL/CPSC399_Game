#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMPlatformCollapse.generated.h"

UCLASS()
class CPSC399GAME_API AGMPlatformCollapse : public AActor
{
    GENERATED_BODY()

public:
    AGMPlatformCollapse();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    AActor* TargetPlatform = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float RestoreDelay = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float LocalCooldown = 5.0f;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void CollapsePlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void RestorePlatform();

    UFUNCTION(BlueprintPure, Category = "GM")
    bool CanTrigger() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    bool IsOnLocalCooldown() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    AActor* GetFocusActor() const;

private:
    float NextReadyTime = 0.0f;
    FTimerHandle RestoreTimer;

    AActor* GetControlledActor() const;
    void SetActorBlockedState(AActor* ActorToEdit, bool bBlocked) const;
};