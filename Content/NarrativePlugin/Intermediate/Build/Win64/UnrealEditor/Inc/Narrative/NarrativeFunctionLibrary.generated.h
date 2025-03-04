// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UNarrativeTask;
class UNarrativeComponent;
class AActor;
#ifdef NARRATIVE_NarrativeFunctionLibrary_generated_h
#error "NarrativeFunctionLibrary.generated.h already included, missing '#pragma once' in NarrativeFunctionLibrary.h"
#endif
#define NARRATIVE_NarrativeFunctionLibrary_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTaskByName); \
	DECLARE_FUNCTION(execCompleteNarrativeTask); \
	DECLARE_FUNCTION(execGetSharedNarrativeComponentFromTarget); \
	DECLARE_FUNCTION(execGetNarrativeComponentFromTarget); \
	DECLARE_FUNCTION(execGetNarrativeComponent);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTaskByName); \
	DECLARE_FUNCTION(execCompleteNarrativeTask); \
	DECLARE_FUNCTION(execGetSharedNarrativeComponentFromTarget); \
	DECLARE_FUNCTION(execGetNarrativeComponentFromTarget); \
	DECLARE_FUNCTION(execGetNarrativeComponent);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNarrativeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNarrativeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeFunctionLibrary)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNarrativeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNarrativeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNarrativeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeFunctionLibrary)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeFunctionLibrary(UNarrativeFunctionLibrary&&); \
	NO_API UNarrativeFunctionLibrary(const UNarrativeFunctionLibrary&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeFunctionLibrary(UNarrativeFunctionLibrary&&); \
	NO_API UNarrativeFunctionLibrary(const UNarrativeFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeFunctionLibrary)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
