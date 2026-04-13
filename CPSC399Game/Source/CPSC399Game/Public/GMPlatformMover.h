#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMPlatformMover.generated.h"

UCLASS()
class CPSC399GAME_API AGMPlatformMover : public AActor
{
    GENERATED_BODY()

public:
    AGMPlatformMover();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    AActor* TargetPlatform = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    FVector MoveOffset = FVector(0.0f, 0.0f, 250.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float MoveInterpSpeed = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float ActiveDuration = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM")
    float LocalCooldown = 5.0f;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void TriggerPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void RaisePlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void LowerPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void ResetPlatform();

    UFUNCTION(BlueprintPure, Category = "GM")
    bool CanTrigger() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    bool IsOnLocalCooldown() const;

    UFUNCTION(BlueprintPure, Category = "GM")
    AActor* GetFocusActor() const;

private:
    FVector StartLocation = FVector::ZeroVector;
    FVector WantedLocation = FVector::ZeroVector;
    float NextReadyTime = 0.0f;
    FTimerHandle ResetTimer;

    AActor* GetControlledActor() const;
    void SetWantedOffset(const FVector& NewOffset);
};