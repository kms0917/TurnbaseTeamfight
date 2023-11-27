// Fill out your copyright notice in the Description page of Project Settings.


#include "TBTFGameModeBase.h"
#include "TBTFPlayerController.h"
#include "TBTFDefaultPawn.h"


ATBTFGameModeBase::ATBTFGameModeBase()
{
	PlayerControllerClass = ATBTFPlayerController::StaticClass();
	DefaultPawnClass = ATBTFDefaultPawn::StaticClass();

}

void ATBTFGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}
