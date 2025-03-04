// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DefaultItem.h"
//#include "TestGameModeBase.h"
#include "TestQuest.generated.h"

/**
 * 
 */


UENUM(BlueprintType)
enum class EQuestReward : uint8 {
	E_Default UMETA(DisplayName = "Default"),
	E_Experience UMETA(DisplayName = "Experience"),
	E_Item UMETA(DisplayName = "ITEM")
};

UENUM(BlueprintType)
enum class EClearCondition : uint8 {
	E_Default UMETA(DisplayName = "Default"),
	E_Collect UMETA(DisplayName = "Collect"),
	E_Travel UMETA(DisplayName = "Travel")
};

USTRUCT(BlueprintType)
struct FReward {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EQuestReward rewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ADefaultItem> item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float experience;
};

USTRUCT(BlueprintType)
struct FObjective {
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EClearCondition clearType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ADefaultItem> itemToCollect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int objectiveID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int numRequired;
};

UCLASS(BlueprintType)
class GAME3_API UTestQuest : public UObject
{
	GENERATED_BODY()

	UTestQuest();

public:

	//class TestGameModeBase* instance;

	UFUNCTION(BlueprintCallable)
		void SetQuestDetails(FString _name, FString _description);

	UFUNCTION(BlueprintCallable)
		void SetUpObjective(int _objectiveNum, TSubclassOf<ADefaultItem> _item, FString _description1,FString _description2, int _numRequired);

	UFUNCTION(BlueprintCallable)
		void SetNumObjectives(int _numObjectives);

	UFUNCTION(BlueprintCallable)
		void UpdateQuest();

	UFUNCTION(BlueprintCallable)
		void UpdateObjective(int _objectiveNum, int _updateValue);

	UFUNCTION(BlueprintCallable)
		void UpdateObjectiveDescription(FString& _description, int _numRequired);

	UFUNCTION(BlueprintCallable)
		void FinishObjective(int _objectiveNum);

	UFUNCTION(BlueprintCallable)
		void FinishQuest();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FReward reward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FObjective> objectives;


};
