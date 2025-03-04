// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCondition() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNarrativeCondition::execGetGraphDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeCondition::execCheckCondition)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_OBJECT(UNarrativeComponent,Z_Param_NarrativeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
		P_NATIVE_END;
	}
	static FName NAME_UNarrativeCondition_CheckCondition = FName(TEXT("CheckCondition"));
	bool UNarrativeCondition::CheckCondition(APawn* Pawn, APlayerController* Controller, UNarrativeComponent* NarrativeComponent)
	{
		NarrativeCondition_eventCheckCondition_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Controller=Controller;
		Parms.NarrativeComponent=NarrativeComponent;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeCondition_CheckCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UNarrativeCondition_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
	FString UNarrativeCondition::GetGraphDisplayText()
	{
		NarrativeCondition_eventGetGraphDisplayText_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeCondition_GetGraphDisplayText),&Parms);
		return Parms.ReturnValue;
	}
	void UNarrativeCondition::StaticRegisterNativesUNarrativeCondition()
	{
		UClass* Class = UNarrativeCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCondition", &UNarrativeCondition::execCheckCondition },
			{ "GetGraphDisplayText", &UNarrativeCondition::execGetGraphDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, NarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent_MetaData)) };
	void Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeCondition_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeCondition_eventCheckCondition_Parms), &Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/** Check whether this condition is true or false*/" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Check whether this condition is true or false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCondition, nullptr, "CheckCondition", nullptr, nullptr, sizeof(NarrativeCondition_eventCheckCondition_Parms), Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeCondition_CheckCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeCondition_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/**Define the text that will show up on a node if this condition is added to it */" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Define the text that will show up on a node if this condition is added to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCondition, nullptr, "GetGraphDisplayText", nullptr, nullptr, sizeof(NarrativeCondition_eventGetGraphDisplayText_Parms), Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCondition);
	UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister()
	{
		return UNarrativeCondition::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckSharedComponent_MetaData[];
#endif
		static void NewProp_bCheckSharedComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckSharedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNot_MetaData[];
#endif
		static void NewProp_bNot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCondition_CheckCondition, "CheckCondition" }, // 1509610640
		{ &Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText, "GetGraphDisplayText" }, // 1942151561
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Subclass this in blueprint to conditionally include or exclude dialogue/quest options \n */" },
		{ "IncludePath", "NarrativeCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Subclass this in blueprint to conditionally include or exclude dialogue/quest options" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent_MetaData[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/**\n\x09If true, narrative will check this condition on the shared component instead of the local one. \n\x09If this is true but no shared component exists narrative will revert back to the local one, and will warn you in the log\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "If true, narrative will check this condition on the shared component instead of the local one.\nIf this is true but no shared component exists narrative will revert back to the local one, and will warn you in the log" },
	};
#endif
	void Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent_SetBit(void* Obj)
	{
		((UNarrativeCondition*)Obj)->bCheckSharedComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent = { "bCheckSharedComponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNarrativeCondition), &Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_MetaData[] = {
		{ "Category", "Conditions" },
		{ "Comment", "//Set this to true to flip the result of this condition\n" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Set this to true to flip the result of this condition" },
	};
#endif
	void Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_SetBit(void* Obj)
	{
		((UNarrativeCondition*)Obj)->bNot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot = { "bNot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNarrativeCondition), &Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bCheckSharedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCondition_Statics::ClassParams = {
		&UNarrativeCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeCondition()
	{
		if (!Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton, Z_Construct_UClass_UNarrativeCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeCondition>()
	{
		return UNarrativeCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCondition);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCondition, UNarrativeCondition::StaticClass, TEXT("UNarrativeCondition"), &Z_Registration_Info_UClass_UNarrativeCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCondition), 2819275069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_1957620028(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
