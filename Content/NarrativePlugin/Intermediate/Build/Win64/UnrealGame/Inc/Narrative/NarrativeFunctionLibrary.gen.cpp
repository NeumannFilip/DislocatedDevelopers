// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeFunctionLibrary() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeFunctionLibrary_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetTaskByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeTask**)Z_Param__Result=UNarrativeFunctionLibrary::GetTaskByName(Z_Param_WorldContextObject,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execCompleteNarrativeTask)
	{
		P_GET_OBJECT(UNarrativeComponent,Z_Param_Target);
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNarrativeFunctionLibrary::CompleteNarrativeTask(Z_Param_Target,Z_Param_Task,Z_Param_Argument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetSharedNarrativeComponentFromTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=UNarrativeFunctionLibrary::GetSharedNarrativeComponentFromTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetNarrativeComponentFromTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=UNarrativeFunctionLibrary::GetNarrativeComponentFromTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetNarrativeComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=UNarrativeFunctionLibrary::GetNarrativeComponent(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UNarrativeFunctionLibrary::StaticRegisterNativesUNarrativeFunctionLibrary()
	{
		UClass* Class = UNarrativeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteNarrativeTask", &UNarrativeFunctionLibrary::execCompleteNarrativeTask },
			{ "GetNarrativeComponent", &UNarrativeFunctionLibrary::execGetNarrativeComponent },
			{ "GetNarrativeComponentFromTarget", &UNarrativeFunctionLibrary::execGetNarrativeComponentFromTarget },
			{ "GetSharedNarrativeComponentFromTarget", &UNarrativeFunctionLibrary::execGetSharedNarrativeComponentFromTarget },
			{ "GetTaskByName", &UNarrativeFunctionLibrary::execGetTaskByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics
	{
		struct NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms
		{
			UNarrativeComponent* Target;
			const UNarrativeTask* Task;
			FString Argument;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Argument;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms, Target), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms, Argument), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Argument_MetaData)) };
	void Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms), &Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Calls CompleteNarrativeTask on the narrative component\n\x09*\n\x09* @return Whether the task updated a quest \n\x09*/" },
		{ "DisplayName", "Complete Narrative Task" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Calls CompleteNarrativeTask on the narrative component\n\n@return Whether the task updated a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "CompleteNarrativeTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::NarrativeFunctionLibrary_eventCompleteNarrativeTask_Parms), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics
	{
		struct NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms
		{
			const UObject* WorldContextObject;
			UNarrativeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Grab the narrative component from the local pawn or player controller, whichever it exists on. \n\x09* \n\x09* @return The narrative component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Grab the narrative component from the local pawn or player controller, whichever it exists on.\n\n@return The narrative component." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetNarrativeComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics
	{
		struct NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms
		{
			AActor* Target;
			UNarrativeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Find the narrative component from the supplied target object. \n\x09*\n\x09* @return The narrative component.\n\x09*/" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Find the narrative component from the supplied target object.\n\n@return The narrative component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetNarrativeComponentFromTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics
	{
		struct NarrativeFunctionLibrary_eventGetSharedNarrativeComponentFromTarget_Parms
		{
			AActor* Target;
			UNarrativeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetSharedNarrativeComponentFromTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetSharedNarrativeComponentFromTarget_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Find the narrative component from the supplied target object.\n\x09*\n\x09* @return The narrative component.\n\x09*/" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Find the narrative component from the supplied target object.\n\n@return The narrative component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetSharedNarrativeComponentFromTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::NarrativeFunctionLibrary_eventGetSharedNarrativeComponentFromTarget_Parms), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics
	{
		struct NarrativeFunctionLibrary_eventGetTaskByName_Parms
		{
			const UObject* WorldContextObject;
			FString EventName;
			UNarrativeTask* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetTaskByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetTaskByName_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetTaskByName_Parms, ReturnValue), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Grab a narrative task by its name. Try use asset references instead of this if possible, since an task being renamed will break your code\n" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Grab a narrative task by its name. Try use asset references instead of this if possible, since an task being renamed will break your code" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetTaskByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NarrativeFunctionLibrary_eventGetTaskByName_Parms), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeFunctionLibrary);
	UClass* Z_Construct_UClass_UNarrativeFunctionLibrary_NoRegister()
	{
		return UNarrativeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeTask, "CompleteNarrativeTask" }, // 4009240236
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent, "GetNarrativeComponent" }, // 642788516
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget, "GetNarrativeComponentFromTarget" }, // 2505535414
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetSharedNarrativeComponentFromTarget, "GetSharedNarrativeComponentFromTarget" }, // 1018088418
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName, "GetTaskByName" }, // 347879088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * General functions used by narrative \n */" },
		{ "IncludePath", "NarrativeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "General functions used by narrative" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::ClassParams = {
		&UNarrativeFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNarrativeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeFunctionLibrary.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeFunctionLibrary>()
	{
		return UNarrativeFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeFunctionLibrary, UNarrativeFunctionLibrary::StaticClass, TEXT("UNarrativeFunctionLibrary"), &Z_Registration_Info_UClass_UNarrativeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeFunctionLibrary), 3346261695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_3369298975(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
