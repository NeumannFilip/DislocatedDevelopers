// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "TestQuest.h"
#include "DefaultItem.generated.h"

UCLASS(BlueprintType)
class GAME3_API ADefaultItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefaultItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString name;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void NotifyCollected();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
