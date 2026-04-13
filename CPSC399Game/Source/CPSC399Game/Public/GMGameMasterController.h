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

private:
    UPROPERTY()
    AGMGameMasterDirector* Director = nullptr;

    void FindDirector();
    void HandleSlot1();
    void HandleSlot2();
    void HandleSlot3();
};