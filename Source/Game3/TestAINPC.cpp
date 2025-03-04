// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAINPC.h"

// Sets default values
ATestAINPC::ATestAINPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestAINPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestAINPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestAINPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

