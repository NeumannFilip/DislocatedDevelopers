// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQuestCompletion : uint8;
class UQuestNode;
class UQuest;
class UQuestBranch;
struct FQuestTask;
class UQuestState;
class APawn;
class UNarrativeComponent;
#ifdef NARRATIVE_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define NARRATIVE_Quest_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQuestCompletion); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execOnSaveComplete); \
	DECLARE_FUNCTION(execOnBeginLoad); \
	DECLARE_FUNCTION(execOnBeginSave); \
	DECLARE_FUNCTION(execOnQuestStepCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressMade); \
	DECLARE_FUNCTION(execOnQuestNewState); \
	DECLARE_FUNCTION(execOnQuestSucceeded); \
	DECLARE_FUNCTION(execOnQuestFailed); \
	DECLARE_FUNCTION(execOnQuestStarted); \
	DECLARE_FUNCTION(execGetQuestDescription); \
	DECLARE_FUNCTION(execGetQuestName); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetOwningNarrativeComponent);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQuestCompletion); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execOnSaveComplete); \
	DECLARE_FUNCTION(execOnBeginLoad); \
	DECLARE_FUNCTION(execOnBeginSave); \
	DECLARE_FUNCTION(execOnQuestStepCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressMade); \
	DECLARE_FUNCTION(execOnQuestNewState); \
	DECLARE_FUNCTION(execOnQuestSucceeded); \
	DECLARE_FUNCTION(execOnQuestFailed); \
	DECLARE_FUNCTION(execOnQuestStarted); \
	DECLARE_FUNCTION(execGetQuestDescription); \
	DECLARE_FUNCTION(execGetQuestName); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetOwningNarrativeComponent);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_EVENT_PARMS \
	struct Quest_eventBPOnBeginLoad_Parms \
	{ \
		FString SaveName; \
	}; \
	struct Quest_eventBPOnBeginSave_Parms \
	{ \
		FString SaveName; \
	}; \
	struct Quest_eventBPOnLoadComplete_Parms \
	{ \
		FString SaveName; \
	}; \
	struct Quest_eventBPOnQuestFailed_Parms \
	{ \
		const UQuest* Quest; \
		FText QuestFailedMessage; \
	}; \
	struct Quest_eventBPOnQuestNewState_Parms \
	{ \
		UQuest* Quest; \
		const UQuestState* NewState; \
	}; \
	struct Quest_eventBPOnQuestStarted_Parms \
	{ \
		const UQuest* Quest; \
	}; \
	struct Quest_eventBPOnQuestStepCompleted_Parms \
	{ \
		const UQuest* Quest; \
		const UQuestBranch* Step; \
	}; \
	struct Quest_eventBPOnQuestSucceeded_Parms \
	{ \
		const UQuest* Quest; \
		FText QuestSucceededMessage; \
	}; \
	struct Quest_eventBPOnQuestTaskProgressMade_Parms \
	{ \
		const UQuest* Quest; \
		FQuestTask Task; \
		const UQuestBranch* Step; \
		int32 CurrentProgress; \
		int32 RequiredProgress; \
	}; \
	struct Quest_eventBPOnSaveComplete_Parms \
	{ \
		FString SaveName; \
	}; \
	struct Quest_eventGetTaskInitialProgress_Parms \
	{ \
		FQuestTask Task; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Quest_eventGetTaskInitialProgress_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuest)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuest)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuest)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_38_PROLOG \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_EVENT_PARMS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h


#define FOREACH_ENUM_EQUESTCOMPLETION(op) \
	op(EQuestCompletion::QC_NotStarted) \
	op(EQuestCompletion::QC_Started) \
	op(EQuestCompletion::QC_Succeded) \
	op(EQuestCompletion::QC_Failed) 

enum class EQuestCompletion : uint8;
template<> NARRATIVE_API UEnum* StaticEnum<EQuestCompletion>();

#define FOREACH_ENUM_EQUESTPROGRESS(op) \
	op(EQuestProgress::QP_NoChange) \
	op(EQuestProgress::QP_MadeProgress) \
	op(EQuestProgress::QP_Updated) \
	op(EQuestProgress::QP_Failed) \
	op(EQuestProgress::QP_Succeeded) 

enum class EQuestProgress : uint8;
template<> NARRATIVE_API UEnum* StaticEnum<EQuestProgress>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
