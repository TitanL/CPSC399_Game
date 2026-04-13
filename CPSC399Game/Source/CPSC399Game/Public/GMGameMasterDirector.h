#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMGameMasterDirector.generated.h"

class ACharacter;
class AGMPlatformMover;
class AGMPlatformCollapse;
class AGMSpinObstacle;

UENUM(BlueprintType)
enum class EGMControlType : uint8
{
    None,
    Mover,
    Collapse,
    Spin
};

USTRUCT(BlueprintType)
struct FGMControlSlot
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    EGMControlType ControlType = EGMControlType::None;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    AActor* FocusActor = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    FString DisplayName;
};

struct FGMInternalSlot
{
    EGMControlType ControlType = EGMControlType::None;
    TWeakObjectPtr<AActor> FocusActor;
    TWeakObjectPtr<AGMPlatformMover> Mover;
    TWeakObjectPtr<AGMPlatformCollapse> Collapse;
    TWeakObjectPtr<AGMSpinObstacle> Spin;
    float Progress = 0.0f;
    FString DisplayName;
};

UCLASS()
class CPSC399GAME_API AGMGameMasterDirector : public AActor
{
    GENERATED_BODY()

public:
    AGMGameMasterDirector();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Track")
    FVector TrackOrigin = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Track")
    FVector TrackForward = FVector(1.0f, 0.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Track")
    float PassedTargetTolerance = 75.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Slots")
    int32 MaxActiveSlots = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Cooldown")
    float GlobalActionCooldown = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Debug")
    bool bShowSlotDebugOnScreen = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GM|Debug")
    float SlotRefreshInterval = 0.15f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM|Slots")
    TArray<FGMControlSlot> CurrentSlots;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void TriggerSlot1();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void TriggerSlot2();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void TriggerSlot3();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void ForceRefreshTargets();

    UFUNCTION(BlueprintPure, Category = "GM")
    float GetHighestRunnerProgressReached() const
    {
        return HighestRunnerProgressReached;
    }

private:
    TArray<AGMPlatformMover*> PlatformMoverHelpers;
    TArray<AGMPlatformCollapse*> PlatformCollapseHelpers;
    TArray<AGMSpinObstacle*> SpinHelpers;

    TArray<FGMInternalSlot> LiveSlots;

    float NextGlobalReadyTime = 0.0f;
    float HighestRunnerProgressReached = -FLT_MAX;
    float NextSlotRefreshTime = 0.0f;

    void RefreshHelperCaches();
    void UpdateLiveSlots();
    void DrawSlotDebug() const;
    void ShowStatusMessage(const FString& Message) const;
    void TriggerSlotByIndex(int32 SlotIndex);

    ACharacter* GetLeadRunner() const;
    float GetProgressAlongTrack(const FVector& WorldLocation) const;
    FString GetControlTypeName(EGMControlType ControlType) const;
};