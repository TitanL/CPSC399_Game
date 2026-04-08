#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMGameMasterDirector.generated.h"

class AGMPlatformMover;
class AGMPlatformCollapse;
class AGMIceZone;
class AGMSpinObstacle;
class USceneComponent;
class UTextRenderComponent;

USTRUCT(BlueprintType)
struct FGMPlatformControlEntry
{
    GENERATED_BODY()

public:
    FGMPlatformControlEntry()
        : TargetPlatform(nullptr)
        , Mover(nullptr)
        , Collapse(nullptr)
        , IceZone(nullptr)
    {
    }

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    AActor* TargetPlatform;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    AGMPlatformMover* Mover;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    AGMPlatformCollapse* Collapse;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    AGMIceZone* IceZone;
};

UCLASS()
class CPSC399GAME_API AGMGameMasterDirector : public AActor
{
    GENERATED_BODY()

public:
    AGMGameMasterDirector();

    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable, Category = "GM")
    void RefreshTargets();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void SelectPreviousPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void SelectNextPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void RaiseSelectedPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void LowerSelectedPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void FreezeSelectedPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void CollapseSelectedPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void ResetSelectedPlatform();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void SelectPreviousSpin();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void SelectNextSpin();

    UFUNCTION(BlueprintCallable, Category = "GM")
    void IncreaseSelectedSpinSpeed();

protected:
    UPROPERTY(VisibleAnywhere, Category = "GM")
    USceneComponent* SceneRoot;

    UPROPERTY(VisibleAnywhere, Category = "GM")
    UTextRenderComponent* PlatformSelectionText;

    UPROPERTY(VisibleAnywhere, Category = "GM")
    UTextRenderComponent* SpinSelectionText;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    TArray<FGMPlatformControlEntry> PlatformTargets;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GM")
    TArray<AGMSpinObstacle*> SpinTargets;

    int32 SelectedPlatformIndex;
    int32 SelectedSpinIndex;

    int32 FindOrAddPlatformEntry(AActor* TargetPlatform);
    void SortPlatformTargetsByName();
    void SortSpinTargetsByName();
    void UpdatePlatformHighlight();
    void UpdateSpinHighlight();
    void ShowStatusMessage(const FString& Message) const;
    FString GetPlatformDisplayName(const FGMPlatformControlEntry& Entry) const;
    FString GetSpinDisplayName(AGMSpinObstacle* SpinHelper) const;
};
