// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogue;
class UDialogueNode;
struct FDialogueLine;
struct FSpeakerInfo;
class UDialogueNode_Player;
class UDialogueNode_NPC;
class UQuest;
class UQuestBranch;
struct FQuestTask;
class UQuestState;
#ifdef NARRATIVE_NarrativeTestingWidget_generated_h
#error "NarrativeTestingWidget.generated.h already included, missing '#pragma once' in NarrativeTestingWidget.h"
#endif
#define NARRATIVE_NarrativeTestingWidget_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_151_DELEGATE \
struct NarrativeTestingWidget_eventDialogueLineFinished_Parms \
{ \
	UDialogue* Dialogue; \
	UDialogueNode* Node; \
	FDialogueLine DialogueLine; \
	FSpeakerInfo Speaker; \
}; \
static inline void FDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& DialogueLineFinished, UDialogue* Dialogue, UDialogueNode* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker) \
{ \
	NarrativeTestingWidget_eventDialogueLineFinished_Parms Parms; \
	Parms.Dialogue=Dialogue; \
	Parms.Node=Node; \
	Parms.DialogueLine=DialogueLine; \
	Parms.Speaker=Speaker; \
	DialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execOnDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execOnDialogueFinished); \
	DECLARE_FUNCTION(execOnDialogueBegan); \
	DECLARE_FUNCTION(execOnDialogueUpdated); \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execOnSaveComplete); \
	DECLARE_FUNCTION(execOnBeginLoad); \
	DECLARE_FUNCTION(execOnBeginSave); \
	DECLARE_FUNCTION(execOnQuestStepCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressMade); \
	DECLARE_FUNCTION(execOnQuestNewState); \
	DECLARE_FUNCTION(execOnQuestSucceeded); \
	DECLARE_FUNCTION(execOnQuestFailed); \
	DECLARE_FUNCTION(execOnQuestStarted); \
	DECLARE_FUNCTION(execInit);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execOnDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execOnDialogueFinished); \
	DECLARE_FUNCTION(execOnDialogueBegan); \
	DECLARE_FUNCTION(execOnDialogueUpdated); \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execOnSaveComplete); \
	DECLARE_FUNCTION(execOnBeginLoad); \
	DECLARE_FUNCTION(execOnBeginSave); \
	DECLARE_FUNCTION(execOnQuestStepCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressMade); \
	DECLARE_FUNCTION(execOnQuestNewState); \
	DECLARE_FUNCTION(execOnQuestSucceeded); \
	DECLARE_FUNCTION(execOnQuestFailed); \
	DECLARE_FUNCTION(execOnQuestStarted); \
	DECLARE_FUNCTION(execInit);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_EVENT_PARMS \
	struct NarrativeTestingWidget_eventBPOnBeginLoad_Parms \
	{ \
		FString SaveName; \
	}; \
	struct NarrativeTestingWidget_eventBPOnBeginSave_Parms \
	{ \
		FString SaveName; \
	}; \
	struct NarrativeTestingWidget_eventBPOnDialogueBegan_Parms \
	{ \
		UDialogue* Dialogue; \
	}; \
	struct NarrativeTestingWidget_eventBPOnDialogueFinished_Parms \
	{ \
		UDialogue* Dialogue; \
	}; \
	struct NarrativeTestingWidget_eventBPOnDialogueRepliesAvailable_Parms \
	{ \
		UDialogue* Dialogue; \
		TArray<UDialogueNode_Player*> PlayerReplies; \
	}; \
	struct NarrativeTestingWidget_eventBPOnDialogueUpdated_Parms \
	{ \
		UDialogue* Dialogue; \
		TArray<UDialogueNode_NPC*> NPCReplies; \
		TArray<UDialogueNode_Player*> PlayerReplies; \
	}; \
	struct NarrativeTestingWidget_eventBPOnLoadComplete_Parms \
	{ \
		FString SaveName; \
	}; \
	struct NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms \
	{ \
		UDialogue* Dialogue; \
		UDialogueNode_NPC* Node; \
		FDialogueLine DialogueLine; \
		FSpeakerInfo Speaker; \
	}; \
	struct NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms \
	{ \
		UDialogue* Dialogue; \
		UDialogueNode_NPC* Node; \
		FDialogueLine DialogueLine; \
		FSpeakerInfo Speaker; \
	}; \
	struct NarrativeTestingWidget_eventBPOnPlayerDialogueLineFinished_Parms \
	{ \
		UDialogue* Dialogue; \
		UDialogueNode_Player* Node; \
		FDialogueLine DialogueLine; \
	}; \
	struct NarrativeTestingWidget_eventBPOnPlayerDialogueLineStarted_Parms \
	{ \
		UDialogue* Dialogue; \
		UDialogueNode_Player* Node; \
		FDialogueLine DialogueLine; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestFailed_Parms \
	{ \
		const UQuest* Quest; \
		FText QuestFailedMessage; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestNewState_Parms \
	{ \
		UQuest* Quest; \
		const UQuestState* NewState; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestStarted_Parms \
	{ \
		const UQuest* Quest; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestStepCompleted_Parms \
	{ \
		const UQuest* Quest; \
		const UQuestBranch* Step; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestSucceeded_Parms \
	{ \
		const UQuest* Quest; \
		FText QuestSucceededMessage; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestTaskCompleted_Parms \
	{ \
		const UQuest* Quest; \
		FQuestTask Task; \
		const UQuestBranch* Step; \
	}; \
	struct NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms \
	{ \
		const UQuest* Quest; \
		FQuestTask Task; \
		const UQuestBranch* Step; \
		int32 CurrentProgress; \
		int32 RequiredProgress; \
	}; \
	struct NarrativeTestingWidget_eventBPOnSaveComplete_Parms \
	{ \
		FString SaveName; \
	};


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeTestingWidget(); \
	friend struct Z_Construct_UClass_UNarrativeTestingWidget_Statics; \
public: \
	DECLARE_CLASS(UNarrativeTestingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeTestingWidget)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNarrativeTestingWidget(); \
	friend struct Z_Construct_UClass_UNarrativeTestingWidget_Statics; \
public: \
	DECLARE_CLASS(UNarrativeTestingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeTestingWidget)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeTestingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeTestingWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeTestingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeTestingWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeTestingWidget(UNarrativeTestingWidget&&); \
	NO_API UNarrativeTestingWidget(const UNarrativeTestingWidget&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeTestingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeTestingWidget(UNarrativeTestingWidget&&); \
	NO_API UNarrativeTestingWidget(const UNarrativeTestingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeTestingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeTestingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeTestingWidget)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_17_PROLOG \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_EVENT_PARMS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeTestingWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
