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
#ifdef NARRATIVE_NarrativeEvent_generated_h
#error "NarrativeEvent.generated.h already included, missing '#pragma once' in NarrativeEvent.h"
#endif
#define NARRATIVE_NarrativeEvent_generated_h

#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_RPC_WRAPPERS \
	virtual FString GetGraphDisplayText_Implementation(); \
	virtual bool ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, UNarrativeComponent* NarrativeComponent); \
 \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execExecuteEvent);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execExecuteEvent);


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_EVENT_PARMS \
	struct NarrativeEvent_eventExecuteEvent_Parms \
	{ \
		APawn* Pawn; \
		APlayerController* Controller; \
		UNarrativeComponent* NarrativeComponent; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		NarrativeEvent_eventExecuteEvent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct NarrativeEvent_eventGetGraphDisplayText_Parms \
	{ \
		FString ReturnValue; \
	};


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeEvent(); \
	friend struct Z_Construct_UClass_UNarrativeEvent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeEvent)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNarrativeEvent(); \
	friend struct Z_Construct_UClass_UNarrativeEvent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeEvent)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeEvent(UNarrativeEvent&&); \
	NO_API UNarrativeEvent(const UNarrativeEvent&); \
public:


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeEvent(UNarrativeEvent&&); \
	NO_API UNarrativeEvent(const UNarrativeEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeEvent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeEvent)


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_11_PROLOG \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_EVENT_PARMS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_INCLASS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
