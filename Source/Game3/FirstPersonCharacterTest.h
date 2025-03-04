// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DefaultItem.h"
#include "FirstPersonCharacterTest.generated.h"

USTRUCT(BlueprintType)
struct FInventory {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float weightList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ADefaultItem*> itemList;

	
};

UCLASS(config=Game)
class GAME3_API AFirstPersonCharacterTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharacterTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(BlueprintCallable, Category = "Health")
	void Heal(float _healamount);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void TakeDamage(float  _damageAmount);

	UFUNCTION(BlueprintCallable, Category = "Stats")
		void GainExperience(float _expAmount);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddToInventory(ADefaultItem* _item);

	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
		AActor* DetermineOverlappingItem();


	void StartHealing();

	void StartDamage();

	void EquipItem();


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int currentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float experiencePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float experienceToLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int skillPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int strengthValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int dexterityValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int intellectValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		int playerHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FInventory inventory;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//bool isOverlappingItem;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")

	

};
