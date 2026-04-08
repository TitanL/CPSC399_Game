#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GMGameMasterController.generated.h"

class AGMGameMasterDirector;

UCLASS()
class CPSC399GAME_API AGMGameMasterController : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

protected:
    UPROPERTY()
    AGMGameMasterDirector* Director;

    bool FindDirectorIfNeeded();

    void HandlePreviousPlatform();
    void HandleNextPlatform();
    void HandleRaisePlatform();
    void HandleLowerPlatform();
    void HandleFreezePlatform();
    void HandleCollapsePlatform();
    void HandlePreviousSpin();
    void HandleNextSpin();
    void HandleIncreaseSpinSpeed();
    void HandleResetPlatform();
};
