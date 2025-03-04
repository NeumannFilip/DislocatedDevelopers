// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogue;
#ifdef NARRATIVE_DialogueSM_generated_h
#error "DialogueSM.generated.h already included, missing '#pragma once' in DialogueSM.h"
#endif
#define NARRATIVE_DialogueSM_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_10_DELEGATE \
static inline void FOnDialogueNodeFinishedPlaying_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueNodeFinishedPlaying) \
{ \
	OnDialogueNodeFinishedPlaying.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueLine_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FDialogueLine>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_RPC_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueNode(); \
	friend struct Z_Construct_UClass_UDialogueNode_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode, UNarrativeNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueNode(); \
	friend struct Z_Construct_UClass_UDialogueNode_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode, UNarrativeNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueNode(UDialogueNode&&); \
	NO_API UDialogueNode(const UDialogueNode&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueNode(UDialogueNode&&); \
	NO_API UDialogueNode(const UDialogueNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueNode)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_65_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UDialogueNode>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_RPC_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueNode_NPC(); \
	friend struct Z_Construct_UClass_UDialogueNode_NPC_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode_NPC, UDialogueNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode_NPC)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueNode_NPC(); \
	friend struct Z_Construct_UClass_UDialogueNode_NPC_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode_NPC, UDialogueNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode_NPC)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode_NPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueNode_NPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode_NPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueNode_NPC(UDialogueNode_NPC&&); \
	NO_API UDialogueNode_NPC(const UDialogueNode_NPC&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode_NPC() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueNode_NPC(UDialogueNode_NPC&&); \
	NO_API UDialogueNode_NPC(const UDialogueNode_NPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode_NPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueNode_NPC)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_158_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UDialogueNode_NPC>();

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOptionText);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOptionText);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueNode_Player(); \
	friend struct Z_Construct_UClass_UDialogueNode_Player_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode_Player, UDialogueNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode_Player)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueNode_Player(); \
	friend struct Z_Construct_UClass_UDialogueNode_Player_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode_Player, UDialogueNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode_Player)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode_Player(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueNode_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueNode_Player(UDialogueNode_Player&&); \
	NO_API UDialogueNode_Player(const UDialogueNode_Player&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode_Player() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueNode_Player(UDialogueNode_Player&&); \
	NO_API UDialogueNode_Player(const UDialogueNode_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueNode_Player)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_178_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UDialogueNode_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
