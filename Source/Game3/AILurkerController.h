// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AILurkerController.generated.h"

/**
 * 
 */
UCLASS()
class GAME3_API AAILurkerController : public AAIController
{
	GENERATED_BODY()
	
	
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;



};
