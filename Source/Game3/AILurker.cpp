// Fill out your copyright notice in the Description page of Project Settings.


#include "AILurker.h"
#include "AILurkerController.h"
#include "AIWaypoint.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AAILurker::AAILurker()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAILurker::BeginPlay()
{
	Super::BeginPlay();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIWaypoint::StaticClass(), Waypoints);			
	MoveToWaypoints();

}

// Called every frame
void AAILurker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAILurker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAILurker::MoveToWaypoints()
{
	AAILurkerController* AILurkerController = Cast<AAILurkerController>(GetController());

	if (AILurkerController) {
		if (CurrentWaypoint <= Waypoints.Num()) {
			for (AActor* AIWaypoint : Waypoints) {
				AAIWaypoint* WaypointIterator = Cast <AAIWaypoint>(AIWaypoint);

				if (WaypointIterator) {
					if (WaypointIterator->GetWaypointIndex() == CurrentWaypoint) {
						AILurkerController->MoveToActor(WaypointIterator, 5.f, false);
						CurrentWaypoint++;
						//on move completed 
						break;
					}

				}
			}
		}
	}


}

