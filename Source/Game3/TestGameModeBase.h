// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestQuest.h"
#include "TestGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAME3_API ATestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	
	//ATestGameModeBase();

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateObjectiveHUD(int _objectiveNum);

	UFUNCTION(BlueprintImplementableEvent)
		void HideObjective(int _objectiveNum);

	UFUNCTION(BlueprintImplementableEvent)
		void HideQuest();
	
};
