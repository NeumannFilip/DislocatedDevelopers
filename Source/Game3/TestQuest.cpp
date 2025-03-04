// Fill out your copyright notice in the Description page of Project Settings.


#include "TestQuest.h"
#include "TestGameModeBase.h"

UTestQuest::UTestQuest() {
	name = "DefaultQuest";
	description = "Go Do This!";

	reward.rewardType = EQuestReward::E_Default;
	reward.experience = 100.0f;
	reward.item = nullptr;

	//class TestGameModeBase* instance;
}

void UTestQuest::SetQuestDetails(FString _name, FString _description) {
	name = _name;
	description = _description;
}

void UTestQuest::SetUpObjective(int _objectiveNum, TSubclassOf<ADefaultItem> _item, FString _description1,FString _description2, int _numRequired) {
	if (_objectiveNum < objectives.Num()) {
		if (_item != nullptr) {
			objectives[_objectiveNum].clearType = EClearCondition::E_Collect;
			objectives[_objectiveNum].itemToCollect = _item;
		}

		
		objectives[_objectiveNum].objectiveID = _objectiveNum;
		objectives[_objectiveNum].numRequired = _numRequired;
	
	
		objectives[_objectiveNum].description.Append(_description1 + "<NR>");
		objectives[_objectiveNum].description.AppendInt(_numRequired);
		objectives[_objectiveNum].description.Append("<NR>" + _description2);
	}


}

void UTestQuest::SetNumObjectives(int _numObjectives) {
	objectives.SetNum(_numObjectives);
}

void UTestQuest::UpdateQuest()
{
}

void UTestQuest::UpdateObjective(int _objectiveNum, int _updateValue)
{
	if (_objectiveNum < objectives.Num()) {

		objectives[_objectiveNum].numRequired -= _updateValue;
		UpdateObjectiveDescription(objectives[_objectiveNum].description, objectives[_objectiveNum].numRequired);

		UE_LOG(LogTemp, Warning, TEXT("You need to perform %d That action."), objectives[_objectiveNum].numRequired);

		if (auto gameModeRef = Cast<ATestGameModeBase>(GetOuter())) {
			gameModeRef->UpdateObjectiveHUD(_objectiveNum);
		}

		if (objectives[_objectiveNum].numRequired <= 0) {
			FinishObjective(_objectiveNum);
		}
	}

}

// this a function that makes it so the strings  are switching whenever value changes.
void UTestQuest::UpdateObjectiveDescription(FString& _description, int _numRequired)
{
	FString firstString; //collect <NR> 2 <NR> x
	FString secondString; // first string =
	FString updatedNum; // secondstring *=
	updatedNum.AppendInt(_numRequired); //updatedNum = 1

	_description.Split("<NR>", &firstString, &secondString);
	secondString = secondString.Replace(*secondString.Left(secondString.Find("<NR>")), *updatedNum); //secondString.Find("<NR>") = 1
	_description = firstString.Append("<NR>").Append(secondString);									//secondString.Left(secondString.Find("<NR>")) = 2
																									//secondString.Replace(2, updateNum);
}																									//finally secondString = 1<NR> Item;
																									//finalString = Collect <NR>1<NR> item
void UTestQuest::FinishObjective(int _objectiveNum)
{
	// passing objectives to finish objectives / quest
	if (_objectiveNum < objectives.Num()) {
		objectives[_objectiveNum].isComplete = true;

		int numFinished = 0;
		for (int i = 0; i < objectives.Num(); i++) { //loop for scanning objectives.
			if (objectives[i].isComplete) {
				++numFinished;
			}
		}

		if (numFinished >= objectives.Num()) {
			FinishQuest();
		}
	}


}

void UTestQuest::FinishQuest()
{

	UE_LOG(LogTemp, Warning, TEXT("Quest Finished: %s "), *name);

	if (auto gameModeRef = Cast<ATestGameModeBase>(GetOuter())) {
		gameModeRef->HideQuest();
	}
}
