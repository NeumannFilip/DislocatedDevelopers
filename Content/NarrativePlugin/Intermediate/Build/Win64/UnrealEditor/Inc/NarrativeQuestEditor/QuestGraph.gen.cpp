// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraph() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraph_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UQuestGraph::execOnPIEObjectiveUpdated)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_QuestName);
		P_GET_TARRAY(FText,Z_Param_NewObjectives);
		P_GET_PROPERTY(FTextProperty,Z_Param_NewStateText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPIEObjectiveUpdated(Z_Param_QuestName,Z_Param_NewObjectives,Z_Param_NewStateText);
		P_NATIVE_END;
	}
	void UQuestGraph::StaticRegisterNativesUQuestGraph()
	{
		UClass* Class = UQuestGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPIEObjectiveUpdated", &UQuestGraph::execOnPIEObjectiveUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics
	{
		struct QuestGraph_eventOnPIEObjectiveUpdated_Parms
		{
			FText QuestName;
			TArray<FText> NewObjectives;
			FText NewStateText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewObjectives_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewObjectives;
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewStateText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestGraph_eventOnPIEObjectiveUpdated_Parms, QuestName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_NewObjectives_Inner = { "NewObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_NewObjectives = { "NewObjectives", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestGraph_eventOnPIEObjectiveUpdated_Parms, NewObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_NewStateText = { "NewStateText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestGraph_eventOnPIEObjectiveUpdated_Parms, NewStateText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_QuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_NewObjectives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_NewObjectives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::NewProp_NewStateText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the players objective is updated in a PIE Session. Used to show debug updates to designers\n" },
		{ "ModuleRelativePath", "Private/QuestGraph.h" },
		{ "ToolTip", "Called when the players objective is updated in a PIE Session. Used to show debug updates to designers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestGraph, nullptr, "OnPIEObjectiveUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::QuestGraph_eventOnPIEObjectiveUpdated_Parms), Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraph);
	UClass* Z_Construct_UClass_UQuestGraph_NoRegister()
	{
		return UQuestGraph::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestGraph_OnPIEObjectiveUpdated, "OnPIEObjectiveUpdated" }, // 3847816283
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraph.h" },
		{ "ModuleRelativePath", "Private/QuestGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraph_Statics::ClassParams = {
		&UQuestGraph::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGraph()
	{
		if (!Z_Registration_Info_UClass_UQuestGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraph.OuterSingleton, Z_Construct_UClass_UQuestGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGraph.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraph>()
	{
		return UQuestGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraph);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraph, UQuestGraph::StaticClass, TEXT("UQuestGraph"), &Z_Registration_Info_UClass_UQuestGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraph), 1651711756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraph_h_1440939058(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
