// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVE_QuestSM_generated_h
#error "QuestSM.generated.h already included, missing '#pragma once' in QuestSM.h"
#endif
#define NARRATIVE_QuestSM_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTask_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FQuestTask>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateMachineResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FStateMachineResult>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_RPC_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestNode(); \
	friend struct Z_Construct_UClass_UQuestNode_Statics; \
public: \
	DECLARE_CLASS(UQuestNode, UNarrativeNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuestNode)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_INCLASS \
private: \
	static void StaticRegisterNativesUQuestNode(); \
	friend struct Z_Construct_UClass_UQuestNode_Statics; \
public: \
	DECLARE_CLASS(UQuestNode, UNarrativeNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuestNode)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestNode(UQuestNode&&); \
	NO_API UQuestNode(const UQuestNode&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestNode() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestNode(UQuestNode&&); \
	NO_API UQuestNode(const UQuestNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestNode)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_131_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UQuestNode>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_166_DELEGATE \
static inline void FOnStateReachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStateReachedEvent) \
{ \
	OnStateReachedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_RPC_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestState(); \
	friend struct Z_Construct_UClass_UQuestState_Statics; \
public: \
	DECLARE_CLASS(UQuestState, UQuestNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuestState)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_INCLASS \
private: \
	static void StaticRegisterNativesUQuestState(); \
	friend struct Z_Construct_UClass_UQuestState_Statics; \
public: \
	DECLARE_CLASS(UQuestState, UQuestNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuestState)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestState(UQuestState&&); \
	NO_API UQuestState(const UQuestState&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestState(UQuestState&&); \
	NO_API UQuestState(const UQuestState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestState)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_168_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UQuestState>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_RPC_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestBranch(); \
	friend struct Z_Construct_UClass_UQuestBranch_Statics; \
public: \
	DECLARE_CLASS(UQuestBranch, UQuestNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuestBranch)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_INCLASS \
private: \
	static void StaticRegisterNativesUQuestBranch(); \
	friend struct Z_Construct_UClass_UQuestBranch_Statics; \
public: \
	DECLARE_CLASS(UQuestBranch, UQuestNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuestBranch)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestBranch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestBranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestBranch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestBranch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestBranch(UQuestBranch&&); \
	NO_API UQuestBranch(const UQuestBranch&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestBranch(UQuestBranch&&); \
	NO_API UQuestBranch(const UQuestBranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestBranch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestBranch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestBranch)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_194_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UQuestBranch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h


#define FOREACH_ENUM_ESTATEQUESTRESULT(op) \
	op(EStateQuestResult::NotAccepted) \
	op(EStateQuestResult::Accepted) \
	op(EStateQuestResult::Rejected) 

enum class EStateQuestResult : uint8;
template<> NARRATIVE_API UEnum* StaticEnum<EStateQuestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
