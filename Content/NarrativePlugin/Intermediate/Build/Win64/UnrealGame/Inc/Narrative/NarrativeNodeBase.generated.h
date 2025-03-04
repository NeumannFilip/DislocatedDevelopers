// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class UNarrativeComponent;
#ifdef NARRATIVE_NarrativeNodeBase_generated_h
#error "NarrativeNodeBase.generated.h already included, missing '#pragma once' in NarrativeNodeBase.h"
#endif
#define NARRATIVE_NarrativeNodeBase_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreConditionsMet); \
	DECLARE_FUNCTION(execProcessEvents);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreConditionsMet); \
	DECLARE_FUNCTION(execProcessEvents);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeNodeBase(); \
	friend struct Z_Construct_UClass_UNarrativeNodeBase_Statics; \
public: \
	DECLARE_CLASS(UNarrativeNodeBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeNodeBase)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNarrativeNodeBase(); \
	friend struct Z_Construct_UClass_UNarrativeNodeBase_Statics; \
public: \
	DECLARE_CLASS(UNarrativeNodeBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeNodeBase)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeNodeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeNodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeNodeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeNodeBase(UNarrativeNodeBase&&); \
	NO_API UNarrativeNodeBase(const UNarrativeNodeBase&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeNodeBase(UNarrativeNodeBase&&); \
	NO_API UNarrativeNodeBase(const UNarrativeNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeNodeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeNodeBase)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_12_PROLOG
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeNodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
