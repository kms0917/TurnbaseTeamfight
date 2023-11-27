// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TBTFGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TBTF_API ATBTFGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ATBTFGameModeBase();
	virtual void BeginPlay() override;
};
