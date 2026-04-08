#include "GMGameMasterController.h"

#include "GMGameMasterDirector.h"
#include "InputCoreTypes.h"
#include "Kismet/GameplayStatics.h"

void AGMGameMasterController::BeginPlay()
{
    Super::BeginPlay();
    FindDirectorIfNeeded();
}

void AGMGameMasterController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (!InputComponent)
    {
        return;
    }

    InputComponent->BindKey(EKeys::One, IE_Pressed, this, &AGMGameMasterController::HandlePreviousPlatform);
    InputComponent->BindKey(EKeys::Two, IE_Pressed, this, &AGMGameMasterController::HandleNextPlatform);
    InputComponent->BindKey(EKeys::Three, IE_Pressed, this, &AGMGameMasterController::HandleRaisePlatform);
    InputComponent->BindKey(EKeys::Four, IE_Pressed, this, &AGMGameMasterController::HandleLowerPlatform);
    InputComponent->BindKey(EKeys::Five, IE_Pressed, this, &AGMGameMasterController::HandleFreezePlatform);
    InputComponent->BindKey(EKeys::Six, IE_Pressed, this, &AGMGameMasterController::HandleCollapsePlatform);
    InputComponent->BindKey(EKeys::Seven, IE_Pressed, this, &AGMGameMasterController::HandlePreviousSpin);
    InputComponent->BindKey(EKeys::Eight, IE_Pressed, this, &AGMGameMasterController::HandleNextSpin);
    InputComponent->BindKey(EKeys::Nine, IE_Pressed, this, &AGMGameMasterController::HandleIncreaseSpinSpeed);
    InputComponent->BindKey(EKeys::Zero, IE_Pressed, this, &AGMGameMasterController::HandleResetPlatform);
}

bool AGMGameMasterController::FindDirectorIfNeeded()
{
    if (IsValid(Director))
    {
        return true;
    }

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMGameMasterDirector::StaticClass(), FoundActors);

    if (FoundActors.Num() > 0)
    {
        Director = Cast<AGMGameMasterDirector>(FoundActors[0]);
    }

    return IsValid(Director);
}

void AGMGameMasterController::HandlePreviousPlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->SelectPreviousPlatform();
    }
}

void AGMGameMasterController::HandleNextPlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->SelectNextPlatform();
    }
}

void AGMGameMasterController::HandleRaisePlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->RaiseSelectedPlatform();
    }
}

void AGMGameMasterController::HandleLowerPlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->LowerSelectedPlatform();
    }
}

void AGMGameMasterController::HandleFreezePlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->FreezeSelectedPlatform();
    }
}

void AGMGameMasterController::HandleCollapsePlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->CollapseSelectedPlatform();
    }
}

void AGMGameMasterController::HandlePreviousSpin()
{
    if (FindDirectorIfNeeded())
    {
        Director->SelectPreviousSpin();
    }
}

void AGMGameMasterController::HandleNextSpin()
{
    if (FindDirectorIfNeeded())
    {
        Director->SelectNextSpin();
    }
}

void AGMGameMasterController::HandleIncreaseSpinSpeed()
{
    if (FindDirectorIfNeeded())
    {
        Director->IncreaseSelectedSpinSpeed();
    }
}

void AGMGameMasterController::HandleResetPlatform()
{
    if (FindDirectorIfNeeded())
    {
        Director->ResetSelectedPlatform();
    }
}
