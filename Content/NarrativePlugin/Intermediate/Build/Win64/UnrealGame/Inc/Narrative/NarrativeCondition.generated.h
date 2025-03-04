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
#ifdef NARRATIVE_NarrativeCondition_generated_h
#error "NarrativeCondition.generated.h already included, missing '#pragma once' in NarrativeCondition.h"
#endif
#define NARRATIVE_NarrativeCondition_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_RPC_WRAPPERS \
	virtual FString GetGraphDisplayText_Implementation(); \
	virtual bool CheckCondition_Implementation(APawn* Pawn, APlayerController* Controller, UNarrativeComponent* NarrativeComponent); \
 \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execCheckCondition);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execCheckCondition);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_EVENT_PARMS \
	struct NarrativeCondition_eventCheckCondition_Parms \
	{ \
		APawn* Pawn; \
		APlayerController* Controller; \
		UNarrativeComponent* NarrativeComponent; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		NarrativeCondition_eventCheckCondition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct NarrativeCondition_eventGetGraphDisplayText_Parms \
	{ \
		FString ReturnValue; \
	};


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeCondition(); \
	friend struct Z_Construct_UClass_UNarrativeCondition_Statics; \
public: \
	DECLARE_CLASS(UNarrativeCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeCondition)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNarrativeCondition(); \
	friend struct Z_Construct_UClass_UNarrativeCondition_Statics; \
public: \
	DECLARE_CLASS(UNarrativeCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeCondition)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeCondition(UNarrativeCondition&&); \
	NO_API UNarrativeCondition(const UNarrativeCondition&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeCondition(UNarrativeCondition&&); \
	NO_API UNarrativeCondition(const UNarrativeCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeCondition)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_12_PROLOG \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_EVENT_PARMS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
