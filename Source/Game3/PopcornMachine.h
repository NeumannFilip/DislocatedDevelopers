// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/MeshComponent.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "PopcornMachine.generated.h"

UCLASS()
class GAME3_API APopcornMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APopcornMachine();

	UFUNCTION()
		void CreatePopcorn();


private:

	//if designer knwo how to assign class
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
		UClass* SpawnType;



	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
