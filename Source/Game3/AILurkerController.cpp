// Fill out your copyright notice in the Description page of Project Settings.


#include "AILurkerController.h"
#include "AILurker.h"
#include <Actions/PawnActionsComponent.h>

void AAILurkerController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{

	AAILurker* AILurker = Cast<AAILurker>(GetPawn());

	if (AILurker) {
		AILurker->MoveToWaypoints();
	}

}
