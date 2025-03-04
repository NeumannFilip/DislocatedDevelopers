// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNarrativeTask;
class UQuest;
class UQuestBranch;
class UQuestState;
struct FQuestTask;
class UDialogue;
class UDialogueNode_Player;
class UDialogueNode_NPC;
struct FDialogueLine;
struct FSpeakerInfo;
struct FNarrativeSavedQuest;
class UNarrativeComponent;
class AActor;
class APlayerController;
class APawn;
class UDialogueNode;
#ifdef NARRATIVE_NarrativeComponent_generated_h
#error "NarrativeComponent.generated.h already included, missing '#pragma once' in NarrativeComponent.h"
#endif
#define NARRATIVE_NarrativeComponent_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueInfo_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FDialogueInfo>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrativeUpdate_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FNarrativeUpdate>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_134_DELEGATE \
struct _Script_Narrative_eventOnNarrativeTaskCompleted_Parms \
{ \
	const UNarrativeTask* NarrativeTask; \
	FString Name; \
}; \
static inline void FOnNarrativeTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnNarrativeTaskCompleted, const UNarrativeTask* NarrativeTask, const FString& Name) \
{ \
	_Script_Narrative_eventOnNarrativeTaskCompleted_Parms Parms; \
	Parms.NarrativeTask=NarrativeTask; \
	Parms.Name=Name; \
	OnNarrativeTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_137_DELEGATE \
struct _Script_Narrative_eventOnQuestStepCompleted_Parms \
{ \
	const UQuest* Quest; \
	const UQuestBranch* Step; \
}; \
static inline void FOnQuestStepCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStepCompleted, const UQuest* Quest, const UQuestBranch* Step) \
{ \
	_Script_Narrative_eventOnQuestStepCompleted_Parms Parms; \
	Parms.Quest=Quest; \
	Parms.Step=Step; \
	OnQuestStepCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_138_DELEGATE \
struct _Script_Narrative_eventOnQuestNewState_Parms \
{ \
	UQuest* Quest; \
	const UQuestState* NewState; \
}; \
static inline void FOnQuestNewState_DelegateWrapper(const FMulticastScriptDelegate& OnQuestNewState, UQuest* Quest, const UQuestState* NewState) \
{ \
	_Script_Narrative_eventOnQuestNewState_Parms Parms; \
	Parms.Quest=Quest; \
	Parms.NewState=NewState; \
	OnQuestNewState.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_139_DELEGATE \
struct _Script_Narrative_eventOnQuestTaskProgressMade_Parms \
{ \
	const UQuest* Quest; \
	FQuestTask ProgressedTask; \
	const UQuestBranch* Step; \
	int32 CurrentProgress; \
	int32 RequiredProgress; \
}; \
static inline void FOnQuestTaskProgressMade_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskProgressMade, const UQuest* Quest, FQuestTask const& ProgressedTask, const UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress) \
{ \
	_Script_Narrative_eventOnQuestTaskProgressMade_Parms Parms; \
	Parms.Quest=Quest; \
	Parms.ProgressedTask=ProgressedTask; \
	Parms.Step=Step; \
	Parms.CurrentProgress=CurrentProgress; \
	Parms.RequiredProgress=RequiredProgress; \
	OnQuestTaskProgressMade.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_140_DELEGATE \
struct _Script_Narrative_eventOnQuestTaskCompleted_Parms \
{ \
	const UQuest* Quest; \
	FQuestTask CompletedTask; \
	const UQuestBranch* Step; \
}; \
static inline void FOnQuestTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskCompleted, const UQuest* Quest, FQuestTask const& CompletedTask, const UQuestBranch* Step) \
{ \
	_Script_Narrative_eventOnQuestTaskCompleted_Parms Parms; \
	Parms.Quest=Quest; \
	Parms.CompletedTask=CompletedTask; \
	Parms.Step=Step; \
	OnQuestTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_141_DELEGATE \
struct _Script_Narrative_eventOnQuestSucceeded_Parms \
{ \
	const UQuest* Quest; \
	FText QuestSucceededMessage; \
}; \
static inline void FOnQuestSucceeded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestSucceeded, const UQuest* Quest, FText const& QuestSucceededMessage) \
{ \
	_Script_Narrative_eventOnQuestSucceeded_Parms Parms; \
	Parms.Quest=Quest; \
	Parms.QuestSucceededMessage=QuestSucceededMessage; \
	OnQuestSucceeded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_142_DELEGATE \
struct _Script_Narrative_eventOnQuestFailed_Parms \
{ \
	const UQuest* Quest; \
	FText QuestFailedMessage; \
}; \
static inline void FOnQuestFailed_DelegateWrapper(const FMulticastScriptDelegate& OnQuestFailed, const UQuest* Quest, FText const& QuestFailedMessage) \
{ \
	_Script_Narrative_eventOnQuestFailed_Parms Parms; \
	Parms.Quest=Quest; \
	Parms.QuestFailedMessage=QuestFailedMessage; \
	OnQuestFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_143_DELEGATE \
struct _Script_Narrative_eventOnQuestStarted_Parms \
{ \
	const UQuest* Quest; \
}; \
static inline void FOnQuestStarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStarted, const UQuest* Quest) \
{ \
	_Script_Narrative_eventOnQuestStarted_Parms Parms; \
	Parms.Quest=Quest; \
	OnQuestStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_144_DELEGATE \
struct _Script_Narrative_eventOnQuestForgotten_Parms \
{ \
	const UQuest* Quest; \
}; \
static inline void FOnQuestForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnQuestForgotten, const UQuest* Quest) \
{ \
	_Script_Narrative_eventOnQuestForgotten_Parms Parms; \
	Parms.Quest=Quest; \
	OnQuestForgotten.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_145_DELEGATE \
struct _Script_Narrative_eventOnQuestRestarted_Parms \
{ \
	const UQuest* Quest; \
}; \
static inline void FOnQuestRestarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRestarted, const UQuest* Quest) \
{ \
	_Script_Narrative_eventOnQuestRestarted_Parms Parms; \
	Parms.Quest=Quest; \
	OnQuestRestarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_148_DELEGATE \
struct _Script_Narrative_eventOnDialogueBegan_Parms \
{ \
	UDialogue* Dialogue; \
}; \
static inline void FOnDialogueBegan_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueBegan, UDialogue* Dialogue) \
{ \
	_Script_Narrative_eventOnDialogueBegan_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	OnDialogueBegan.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_149_DELEGATE \
struct _Script_Narrative_eventOnDialogueFinished_Parms \
{ \
	UDialogue* Dialogue; \
}; \
static inline void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, UDialogue* Dialogue) \
{ \
	_Script_Narrative_eventOnDialogueFinished_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	OnDialogueFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_150_DELEGATE \
struct _Script_Narrative_eventDialogueRepliesAvailable_Parms \
{ \
	UDialogue* Dialogue; \
	TArray<UDialogueNode_Player*> PlayerReplies; \
}; \
static inline void FDialogueRepliesAvailable_DelegateWrapper(const FMulticastScriptDelegate& DialogueRepliesAvailable, UDialogue* Dialogue, TArray<UDialogueNode_Player*> const& PlayerReplies) \
{ \
	_Script_Narrative_eventDialogueRepliesAvailable_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	Parms.PlayerReplies=PlayerReplies; \
	DialogueRepliesAvailable.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_151_DELEGATE \
struct _Script_Narrative_eventNPCDialogueLineStarted_Parms \
{ \
	UDialogue* Dialogue; \
	UDialogueNode_NPC* Node; \
	FDialogueLine DialogueLine; \
	FSpeakerInfo Speaker; \
}; \
static inline void FNPCDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker) \
{ \
	_Script_Narrative_eventNPCDialogueLineStarted_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	Parms.Node=Node; \
	Parms.DialogueLine=DialogueLine; \
	Parms.Speaker=Speaker; \
	NPCDialogueLineStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_152_DELEGATE \
struct _Script_Narrative_eventNPCDialogueLineFinished_Parms \
{ \
	UDialogue* Dialogue; \
	UDialogueNode_NPC* Node; \
	FDialogueLine DialogueLine; \
	FSpeakerInfo Speaker; \
}; \
static inline void FNPCDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker) \
{ \
	_Script_Narrative_eventNPCDialogueLineFinished_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	Parms.Node=Node; \
	Parms.DialogueLine=DialogueLine; \
	Parms.Speaker=Speaker; \
	NPCDialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_153_DELEGATE \
struct _Script_Narrative_eventPlayerDialogueLineStarted_Parms \
{ \
	UDialogue* Dialogue; \
	UDialogueNode_Player* Node; \
	FDialogueLine DialogueLine; \
}; \
static inline void FPlayerDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine) \
{ \
	_Script_Narrative_eventPlayerDialogueLineStarted_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	Parms.Node=Node; \
	Parms.DialogueLine=DialogueLine; \
	PlayerDialogueLineStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_154_DELEGATE \
struct _Script_Narrative_eventPlayerDialogueLineFinished_Parms \
{ \
	UDialogue* Dialogue; \
	UDialogueNode_Player* Node; \
	FDialogueLine DialogueLine; \
}; \
static inline void FPlayerDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine) \
{ \
	_Script_Narrative_eventPlayerDialogueLineFinished_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	Parms.Node=Node; \
	Parms.DialogueLine=DialogueLine; \
	PlayerDialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_157_DELEGATE \
struct _Script_Narrative_eventOnBeginSave_Parms \
{ \
	FString SaveGameName; \
}; \
static inline void FOnBeginSave_DelegateWrapper(const FMulticastScriptDelegate& OnBeginSave, const FString& SaveGameName) \
{ \
	_Script_Narrative_eventOnBeginSave_Parms Parms; \
	Parms.SaveGameName=SaveGameName; \
	OnBeginSave.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_158_DELEGATE \
struct _Script_Narrative_eventOnSaveComplete_Parms \
{ \
	FString SaveGameName; \
}; \
static inline void FOnSaveComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSaveComplete, const FString& SaveGameName) \
{ \
	_Script_Narrative_eventOnSaveComplete_Parms Parms; \
	Parms.SaveGameName=SaveGameName; \
	OnSaveComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_159_DELEGATE \
struct _Script_Narrative_eventOnBeginLoad_Parms \
{ \
	FString SaveGameName; \
}; \
static inline void FOnBeginLoad_DelegateWrapper(const FMulticastScriptDelegate& OnBeginLoad, const FString& SaveGameName) \
{ \
	_Script_Narrative_eventOnBeginLoad_Parms Parms; \
	Parms.SaveGameName=SaveGameName; \
	OnBeginLoad.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_160_DELEGATE \
struct _Script_Narrative_eventOnLoadComplete_Parms \
{ \
	FString SaveGameName; \
}; \
static inline void FOnLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadComplete, const FString& SaveGameName) \
{ \
	_Script_Narrative_eventOnLoadComplete_Parms Parms; \
	Parms.SaveGameName=SaveGameName; \
	OnLoadComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_RPC_WRAPPERS \
	virtual void ClientReceiveSave_Implementation(TArray<FNarrativeSavedQuest> const& SavedQuests, TArray<FString> const& Tasks, TArray<int32> const& Quantities); \
	virtual void ServerExitDialogue_Implementation(); \
	virtual void ServerSelectDialogueOption_Implementation(FName const& OptionID); \
	virtual void ClientRecieveDialogueChunk_Implementation(TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	virtual void ClientExitDialogue_Implementation(); \
	virtual void ClientBeginDialogue_Implementation(TSubclassOf<UDialogue>  Dialogue, AActor* NPC, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
 \
	DECLARE_FUNCTION(execClientReceiveSave); \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execSetSharedNarrativeComponent); \
	DECLARE_FUNCTION(execGetQuest); \
	DECLARE_FUNCTION(execGetAllQuests); \
	DECLARE_FUNCTION(execGetInProgressQuests); \
	DECLARE_FUNCTION(execGetSucceededQuests); \
	DECLARE_FUNCTION(execGetFailedQuests); \
	DECLARE_FUNCTION(execHasCompletedTaskInQuest); \
	DECLARE_FUNCTION(execGetNumberOfTimesTaskWasCompleted); \
	DECLARE_FUNCTION(execHasCompletedTask); \
	DECLARE_FUNCTION(execIsInDialogue); \
	DECLARE_FUNCTION(execServerExitDialogue); \
	DECLARE_FUNCTION(execTryExitDialogue); \
	DECLARE_FUNCTION(execServerSelectDialogueOption); \
	DECLARE_FUNCTION(execSelectDialogueOption); \
	DECLARE_FUNCTION(execClientRecieveDialogueChunk); \
	DECLARE_FUNCTION(execClientExitDialogue); \
	DECLARE_FUNCTION(execClientBeginDialogue); \
	DECLARE_FUNCTION(execBeginDialogue); \
	DECLARE_FUNCTION(execForgetQuest); \
	DECLARE_FUNCTION(execRestartQuest); \
	DECLARE_FUNCTION(execBeginQuest); \
	DECLARE_FUNCTION(execIsQuestFinished); \
	DECLARE_FUNCTION(execIsQuestFailed); \
	DECLARE_FUNCTION(execIsQuestSucceeded); \
	DECLARE_FUNCTION(execIsQuestInProgress); \
	DECLARE_FUNCTION(execIsQuestStartedOrFinished); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execDialogueFinished); \
	DECLARE_FUNCTION(execDialogueBegan); \
	DECLARE_FUNCTION(execDialogueLineFinished); \
	DECLARE_FUNCTION(execDialogueLineStarted); \
	DECLARE_FUNCTION(execDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execLoadComplete); \
	DECLARE_FUNCTION(execSaveComplete); \
	DECLARE_FUNCTION(execBeginLoad); \
	DECLARE_FUNCTION(execBeginSave); \
	DECLARE_FUNCTION(execQuestStepCompleted); \
	DECLARE_FUNCTION(execQuestTaskCompleted); \
	DECLARE_FUNCTION(execQuestTaskProgressMade); \
	DECLARE_FUNCTION(execQuestNewState); \
	DECLARE_FUNCTION(execQuestSucceeded); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execQuestForgotten); \
	DECLARE_FUNCTION(execQuestStarted); \
	DECLARE_FUNCTION(execNarrativeTaskCompleted); \
	DECLARE_FUNCTION(execOnRep_PendingUpdateList);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientReceiveSave_Implementation(TArray<FNarrativeSavedQuest> const& SavedQuests, TArray<FString> const& Tasks, TArray<int32> const& Quantities); \
	virtual void ServerExitDialogue_Implementation(); \
	virtual void ServerSelectDialogueOption_Implementation(FName const& OptionID); \
	virtual void ClientRecieveDialogueChunk_Implementation(TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	virtual void ClientExitDialogue_Implementation(); \
	virtual void ClientBeginDialogue_Implementation(TSubclassOf<UDialogue>  Dialogue, AActor* NPC, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
 \
	DECLARE_FUNCTION(execClientReceiveSave); \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execSetSharedNarrativeComponent); \
	DECLARE_FUNCTION(execGetQuest); \
	DECLARE_FUNCTION(execGetAllQuests); \
	DECLARE_FUNCTION(execGetInProgressQuests); \
	DECLARE_FUNCTION(execGetSucceededQuests); \
	DECLARE_FUNCTION(execGetFailedQuests); \
	DECLARE_FUNCTION(execHasCompletedTaskInQuest); \
	DECLARE_FUNCTION(execGetNumberOfTimesTaskWasCompleted); \
	DECLARE_FUNCTION(execHasCompletedTask); \
	DECLARE_FUNCTION(execIsInDialogue); \
	DECLARE_FUNCTION(execServerExitDialogue); \
	DECLARE_FUNCTION(execTryExitDialogue); \
	DECLARE_FUNCTION(execServerSelectDialogueOption); \
	DECLARE_FUNCTION(execSelectDialogueOption); \
	DECLARE_FUNCTION(execClientRecieveDialogueChunk); \
	DECLARE_FUNCTION(execClientExitDialogue); \
	DECLARE_FUNCTION(execClientBeginDialogue); \
	DECLARE_FUNCTION(execBeginDialogue); \
	DECLARE_FUNCTION(execForgetQuest); \
	DECLARE_FUNCTION(execRestartQuest); \
	DECLARE_FUNCTION(execBeginQuest); \
	DECLARE_FUNCTION(execIsQuestFinished); \
	DECLARE_FUNCTION(execIsQuestFailed); \
	DECLARE_FUNCTION(execIsQuestSucceeded); \
	DECLARE_FUNCTION(execIsQuestInProgress); \
	DECLARE_FUNCTION(execIsQuestStartedOrFinished); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execDialogueFinished); \
	DECLARE_FUNCTION(execDialogueBegan); \
	DECLARE_FUNCTION(execDialogueLineFinished); \
	DECLARE_FUNCTION(execDialogueLineStarted); \
	DECLARE_FUNCTION(execDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execLoadComplete); \
	DECLARE_FUNCTION(execSaveComplete); \
	DECLARE_FUNCTION(execBeginLoad); \
	DECLARE_FUNCTION(execBeginSave); \
	DECLARE_FUNCTION(execQuestStepCompleted); \
	DECLARE_FUNCTION(execQuestTaskCompleted); \
	DECLARE_FUNCTION(execQuestTaskProgressMade); \
	DECLARE_FUNCTION(execQuestNewState); \
	DECLARE_FUNCTION(execQuestSucceeded); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execQuestForgotten); \
	DECLARE_FUNCTION(execQuestStarted); \
	DECLARE_FUNCTION(execNarrativeTaskCompleted); \
	DECLARE_FUNCTION(execOnRep_PendingUpdateList);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_EVENT_PARMS \
	struct NarrativeComponent_eventClientBeginDialogue_Parms \
	{ \
		TSubclassOf<UDialogue>  Dialogue; \
		AActor* NPC; \
		TArray<FName> NPCReplyChainIDs; \
		TArray<FName> AvailableResponseIDs; \
	}; \
	struct NarrativeComponent_eventClientReceiveSave_Parms \
	{ \
		TArray<FNarrativeSavedQuest> SavedQuests; \
		TArray<FString> Tasks; \
		TArray<int32> Quantities; \
	}; \
	struct NarrativeComponent_eventClientRecieveDialogueChunk_Parms \
	{ \
		TArray<FName> NPCReplyChainIDs; \
		TArray<FName> AvailableResponseIDs; \
	}; \
	struct NarrativeComponent_eventServerSelectDialogueOption_Parms \
	{ \
		FName OptionID; \
	};


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeComponent(); \
	friend struct Z_Construct_UClass_UNarrativeComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PendingUpdateList=NETFIELD_REP_START, \
		SharedNarrativeComp, \
		NETFIELD_REP_END=SharedNarrativeComp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUNarrativeComponent(); \
	friend struct Z_Construct_UClass_UNarrativeComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PendingUpdateList=NETFIELD_REP_START, \
		SharedNarrativeComp, \
		NETFIELD_REP_END=SharedNarrativeComp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeComponent(UNarrativeComponent&&); \
	NO_API UNarrativeComponent(const UNarrativeComponent&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeComponent(UNarrativeComponent&&); \
	NO_API UNarrativeComponent(const UNarrativeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeComponent)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_166_PROLOG \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_EVENT_PARMS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h


#define FOREACH_ENUM_EUPDATETYPE(op) \
	op(EUpdateType::UT_CompleteTask) \
	op(EUpdateType::UT_BeginQuest) \
	op(EUpdateType::UT_ForgetQuest) \
	op(EUpdateType::UT_RestartQuest) 

enum class EUpdateType : uint8;
template<> NARRATIVE_API UEnum* StaticEnum<EUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
