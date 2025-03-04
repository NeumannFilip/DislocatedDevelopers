// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacterTest.h"
#include "HeadMountedDisplayFunctionLibrary.h"


// Sets default values
AFirstPersonCharacterTest::AFirstPersonCharacterTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//setting default values
	currentLevel = 1;
	skillPoints = 3;


	strengthValue = 1;
	dexterityValue = 1;
	intellectValue = 1;

	experiencePoints = 0.0f;
	experienceToLevel = 1000.0f;

	playerHealth = 1.00f;

	//isOverlappingItem = false;
}

// Called when the game starts or when spawned
void AFirstPersonCharacterTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstPersonCharacterTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacterTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Heal", IE_Pressed, this, &AFirstPersonCharacterTest::StartHealing);
	PlayerInputComponent->BindAction("Equip", IE_Pressed, this, &AFirstPersonCharacterTest::EquipItem);

}

void AFirstPersonCharacterTest::Heal(float _healamount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are healing the player for %f points"), _healamount);
	playerHealth += _healamount;
	
	if (playerHealth > 1.00f) {
		playerHealth = 1.00f;
	}
}

void AFirstPersonCharacterTest::GainExperience(float _expAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are gaining experience for %f points."), _expAmount)
		experiencePoints += _expAmount;
	
	if (experiencePoints >= experienceToLevel) {
		++currentLevel;

		experiencePoints -= experienceToLevel;//setting points back to 0 (more optimal)
		//experiencePoints = 0.0f; 
		experienceToLevel += 500.0f; // adding extra points to the new threshhold 
	}
}

void AFirstPersonCharacterTest::AddToInventory(ADefaultItem* _item)
{
	inventory.itemList.Add(_item);

}


void AFirstPersonCharacterTest::StartHealing()
{
	Heal(0.02f);

}

void AFirstPersonCharacterTest::StartDamage()
{
	TakeDamage(0.02f);
}

void AFirstPersonCharacterTest::EquipItem()
{
	//if (isOverlappingItem) {
	//	UE_LOG(LogTemp, Warning, TEXT("Item picked up."));
	//}

}

void AFirstPersonCharacterTest::TakeDamage(float _damageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are taking damage for %f points"), _damageAmount)

		playerHealth -= _damageAmount;
	if (playerHealth < 0.00f) {
		playerHealth = 0.00f;
	}
}



