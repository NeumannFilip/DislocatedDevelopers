// Fill out your copyright notice in the Description page of Project Settings.


#include "PotentialSpawner.h"

// Sets default values
APotentialSpawner::APotentialSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APotentialSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotentialSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

