// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeEvent() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNarrativeEvent::execGetGraphDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeEvent::execExecuteEvent)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_OBJECT(UNarrativeComponent,Z_Param_NarrativeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteEvent_Implementation(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
		P_NATIVE_END;
	}
	static FName NAME_UNarrativeEvent_ExecuteEvent = FName(TEXT("ExecuteEvent"));
	bool UNarrativeEvent::ExecuteEvent(APawn* Pawn, APlayerController* Controller, UNarrativeComponent* NarrativeComponent)
	{
		NarrativeEvent_eventExecuteEvent_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Controller=Controller;
		Parms.NarrativeComponent=NarrativeComponent;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeEvent_ExecuteEvent),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UNarrativeEvent_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
	FString UNarrativeEvent::GetGraphDisplayText()
	{
		NarrativeEvent_eventGetGraphDisplayText_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeEvent_GetGraphDisplayText),&Parms);
		return Parms.ReturnValue;
	}
	void UNarrativeEvent::StaticRegisterNativesUNarrativeEvent()
	{
		UClass* Class = UNarrativeEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteEvent", &UNarrativeEvent::execExecuteEvent },
			{ "GetGraphDisplayText", &UNarrativeEvent::execGetGraphDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, NarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent_MetaData)) };
	void Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeEvent_eventExecuteEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeEvent_eventExecuteEvent_Parms), &Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "ExecuteEvent", nullptr, nullptr, sizeof(NarrativeEvent_eventExecuteEvent_Parms), Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeEvent_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "Comment", "/**Define the text that will show up on a node if this condition is added to it */" },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
		{ "ToolTip", "Define the text that will show up on a node if this condition is added to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "GetGraphDisplayText", nullptr, nullptr, sizeof(NarrativeEvent_eventGetGraphDisplayText_Parms), Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEvent);
	UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister()
	{
		return UNarrativeEvent::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSharedComponent_MetaData[];
#endif
		static void NewProp_bUseSharedComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSharedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent, "ExecuteEvent" }, // 3375702261
		{ &Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText, "GetGraphDisplayText" }, // 2978054159
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Subclass this in BP to execute some logic when a particular quest step or dialogue option is reached  */" },
		{ "IncludePath", "NarrativeEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
		{ "ToolTip", "Subclass this in BP to execute some logic when a particular quest step or dialogue option is reached" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/**\n\x09If true, run this event on the players shared narrative comp instead of their local one\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
		{ "ToolTip", "If true, run this event on the players shared narrative comp instead of their local one" },
	};
#endif
	void Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_SetBit(void* Obj)
	{
		((UNarrativeEvent*)Obj)->bUseSharedComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent = { "bUseSharedComponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNarrativeEvent), &Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEvent_Statics::ClassParams = {
		&UNarrativeEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeEvent()
	{
		if (!Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton, Z_Construct_UClass_UNarrativeEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeEvent>()
	{
		return UNarrativeEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEvent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeEvent, UNarrativeEvent::StaticClass, TEXT("UNarrativeEvent"), &Z_Registration_Info_UClass_UNarrativeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEvent), 4118348099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_4219622067(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
