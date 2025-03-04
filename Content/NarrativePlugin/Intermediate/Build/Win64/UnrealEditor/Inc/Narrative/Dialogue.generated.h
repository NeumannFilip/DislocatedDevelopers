// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueNode_Player;
struct FDialogueLine;
class UDialogueNode_NPC;
struct FSpeakerInfo;
class UDialogueNode;
#ifdef NARRATIVE_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define NARRATIVE_Dialogue_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpeakerInfo_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FSpeakerInfo>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_RPC_WRAPPERS \
	virtual void OnPlayerDialogueLineFinished_Implementation(UDialogueNode_Player* Node, FDialogueLine const& DialogueLine); \
	virtual void OnPlayerDialogueLineStarted_Implementation(UDialogueNode_Player* Node, FDialogueLine const& DialogueLine); \
	virtual void OnNPCDialogueLineFinished_Implementation(UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker); \
	virtual void OnNPCDialogueLineStarted_Implementation(UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker); \
	virtual FString GetStringVariable_Implementation(UDialogueNode* Node, FDialogueLine const& Line, const FString& VariableName); \
	virtual float GetLineDuration_Implementation(UDialogueNode* Node, FDialogueLine const& Line); \
	virtual void PlayPlayerDialogue_Implementation(UDialogueNode_Player* PlayerReply, FDialogueLine const& Line); \
	virtual void PlayNPCDialogue_Implementation(UDialogueNode_NPC* NPCReply, FDialogueLine const& Line, FSpeakerInfo const& Speaker); \
	virtual void PlayDialogueSound_Implementation(FDialogueLine const& Line); \
	virtual void PlayDialogueAnimation_Implementation(UDialogueNode* Node, FDialogueLine const& Line); \
 \
	DECLARE_FUNCTION(execFinishPlayerDialogue); \
	DECLARE_FUNCTION(execFinishNPCDialogue); \
	DECLARE_FUNCTION(execPlayNextNPCReply); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execGetStringVariable); \
	DECLARE_FUNCTION(execGetLineDuration); \
	DECLARE_FUNCTION(execPlayPlayerDialogue); \
	DECLARE_FUNCTION(execPlayNPCDialogue); \
	DECLARE_FUNCTION(execPlayDialogueSound); \
	DECLARE_FUNCTION(execPlayDialogueAnimation); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execSkipCurrentLine);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishPlayerDialogue); \
	DECLARE_FUNCTION(execFinishNPCDialogue); \
	DECLARE_FUNCTION(execPlayNextNPCReply); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execGetStringVariable); \
	DECLARE_FUNCTION(execGetLineDuration); \
	DECLARE_FUNCTION(execPlayPlayerDialogue); \
	DECLARE_FUNCTION(execPlayNPCDialogue); \
	DECLARE_FUNCTION(execPlayDialogueSound); \
	DECLARE_FUNCTION(execPlayDialogueAnimation); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execSkipCurrentLine);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_EVENT_PARMS \
	struct Dialogue_eventGetLineDuration_Parms \
	{ \
		UDialogueNode* Node; \
		FDialogueLine Line; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Dialogue_eventGetLineDuration_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Dialogue_eventGetStringVariable_Parms \
	{ \
		UDialogueNode* Node; \
		FDialogueLine Line; \
		FString VariableName; \
		FString ReturnValue; \
	}; \
	struct Dialogue_eventOnNPCDialogueLineFinished_Parms \
	{ \
		UDialogueNode_NPC* Node; \
		FDialogueLine DialogueLine; \
		FSpeakerInfo Speaker; \
	}; \
	struct Dialogue_eventOnNPCDialogueLineStarted_Parms \
	{ \
		UDialogueNode_NPC* Node; \
		FDialogueLine DialogueLine; \
		FSpeakerInfo Speaker; \
	}; \
	struct Dialogue_eventOnPlayerDialogueLineFinished_Parms \
	{ \
		UDialogueNode_Player* Node; \
		FDialogueLine DialogueLine; \
	}; \
	struct Dialogue_eventOnPlayerDialogueLineStarted_Parms \
	{ \
		UDialogueNode_Player* Node; \
		FDialogueLine DialogueLine; \
	}; \
	struct Dialogue_eventPlayDialogueAnimation_Parms \
	{ \
		UDialogueNode* Node; \
		FDialogueLine Line; \
	}; \
	struct Dialogue_eventPlayDialogueSound_Parms \
	{ \
		FDialogueLine Line; \
	}; \
	struct Dialogue_eventPlayNPCDialogue_Parms \
	{ \
		UDialogueNode_NPC* NPCReply; \
		FDialogueLine Line; \
		FSpeakerInfo Speaker; \
	}; \
	struct Dialogue_eventPlayPlayerDialogue_Parms \
	{ \
		UDialogueNode_Player* PlayerReply; \
		FDialogueLine Line; \
	};


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogue(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogue)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_53_PROLOG \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_EVENT_PARMS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
