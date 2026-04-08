#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GMRunnerCharacter.generated.h"

UCLASS()
class CPSC399GAME_API AGMRunnerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AGMRunnerCharacter();

    UFUNCTION(BlueprintCallable, Category = "GM|Freeze")
    void FreezeRunner(float DurationSeconds = 5.0f);

    UFUNCTION(BlueprintCallable, Category = "GM|Freeze")
    void UnfreezeRunner();

    UFUNCTION(BlueprintPure, Category = "GM|Freeze")
    bool IsRunnerFrozen() const;

protected:
    bool bRunnerFrozen;
    FTimerHandle FreezeTimerHandle;
};
