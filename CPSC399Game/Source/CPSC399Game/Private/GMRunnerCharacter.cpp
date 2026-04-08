#include "GMRunnerCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

AGMRunnerCharacter::AGMRunnerCharacter()
{
    bRunnerFrozen = false;
}

void AGMRunnerCharacter::FreezeRunner(float DurationSeconds)
{
    if (DurationSeconds <= 0.0f)
    {
        return;
    }

    bRunnerFrozen = true;

    if (GetCharacterMovement())
    {
        GetCharacterMovement()->StopMovementImmediately();
        GetCharacterMovement()->DisableMovement();
    }

    GetWorldTimerManager().ClearTimer(FreezeTimerHandle);
    GetWorldTimerManager().SetTimer(
        FreezeTimerHandle,
        this,
        &AGMRunnerCharacter::UnfreezeRunner,
        DurationSeconds,
        false
    );
}

void AGMRunnerCharacter::UnfreezeRunner()
{
    bRunnerFrozen = false;

    if (GetCharacterMovement())
    {
        GetCharacterMovement()->SetMovementMode(MOVE_Walking);
    }
}

bool AGMRunnerCharacter::IsRunnerFrozen() const
{
    return bRunnerFrozen;
}
