// Fill out your copyright notice in the Description page of Project Settings.


#include "PopcornMachine.h"

// Sets default values
APopcornMachine::APopcornMachine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APopcornMachine::CreatePopcorn()
{


}

// Called when the game starts or when spawned
void APopcornMachine::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APopcornMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

