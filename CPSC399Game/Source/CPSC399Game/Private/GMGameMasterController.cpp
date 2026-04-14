#include "GMGameMasterController.h"

#include "GMGameMasterDirector.h"
#include "Kismet/GameplayStatics.h"

void AGMGameMasterController::BeginPlay()
{
    Super::BeginPlay();
    FindDirector();
}

void AGMGameMasterController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (!InputComponent)
    {
        return;
    }

    InputComponent->BindAction("GM_Slot1", IE_Pressed, this, &AGMGameMasterController::HandleSlot1);
    InputComponent->BindAction("GM_Slot2", IE_Pressed, this, &AGMGameMasterController::HandleSlot2);
    InputComponent->BindAction("GM_Slot3", IE_Pressed, this, &AGMGameMasterController::HandleSlot3);
}

void AGMGameMasterController::FindDirector()
{
    if (IsValid(Director))
    {
        return;
    }

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGMGameMasterDirector::StaticClass(), FoundActors);

    if (FoundActors.Num() > 0)
    {
        Director = Cast<AGMGameMasterDirector>(FoundActors[0]);
    }
}

void AGMGameMasterController::HandleSlot1()
{
    FindDirector();
    if (IsValid(Director))
    {
        Director->TriggerSlot1();
    }
}

void AGMGameMasterController::HandleSlot2()
{
    FindDirector();
    if (IsValid(Director))
    {
        Director->TriggerSlot2();
    }
}

void AGMGameMasterController::HandleSlot3()
{
    FindDirector();
    if (IsValid(Director))
    {
        Director->TriggerSlot3();
    }
}