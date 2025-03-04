// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformMonster.h"

// Sets default values
APlatformMonster::APlatformMonster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlatformMonster::BeginPlay()
{
	Super::BeginPlay();
	
	

}

// Called every frame
void APlatformMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector LocalVector = MyVector;

	LocalVector.Z = LocalVector.Z + 1;

	MyVector.Y = MyVector.Y + 1;

	SetActorLocation(LocalVector);
}

