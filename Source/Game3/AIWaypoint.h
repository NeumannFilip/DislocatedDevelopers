// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "AIWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class GAME3_API AAIWaypoint : public AStaticMeshActor
{
	GENERATED_BODY()


public:
	int GetWaypointIndex();

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int WaypointIndex; 

	
};
