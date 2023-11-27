// Fill out your copyright notice in the Description page of Project Settings.


#include "TBTFGameModeBase.h"
#include "TBTFPlayerController.h"
#include "TBTFDefaultPawn.h"
#include "Dice.h"


ATBTFGameModeBase::ATBTFGameModeBase()
{
	PlayerControllerClass = ATBTFPlayerController::StaticClass();
	DefaultPawnClass = ATBTFDefaultPawn::StaticClass();

}

void ATBTFGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnLocation = FVector::ZeroVector;
	FRotator SpawnRotation = FRotator::ZeroRotator;		//call Dice
	ADice* SpawnedDice = GetWorld()->SpawnActor<ADice>(ADice::StaticClass(), SpawnLocation, SpawnRotation);
}
