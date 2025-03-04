// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_State() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestGraphNode_State::execOnReachStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReachStep();
		P_NATIVE_END;
	}
	void UQuestGraphNode_State::StaticRegisterNativesUQuestGraphNode_State()
	{
		UClass* Class = UQuestGraphNode_State::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReachStep", &UQuestGraphNode_State::execOnReachStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the player reaches this step in the quest\n" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_State.h" },
		{ "ToolTip", "Called when the player reaches this step in the quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestGraphNode_State, nullptr, "OnReachStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_State);
	UClass* Z_Construct_UClass_UQuestGraphNode_State_NoRegister()
	{
		return UQuestGraphNode_State::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGraphNode_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReachStepCustomNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnReachStepCustomNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGraphNode_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestGraphNode_State_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestGraphNode_State_OnReachStep, "OnReachStep" }, // 793473693
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphNode_State_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode_State.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_State.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGraphNode_State, State), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_OnReachStepCustomNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/QuestGraphNode_State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_OnReachStepCustomNode = { "OnReachStepCustomNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGraphNode_State, OnReachStepCustomNode), Z_Construct_UClass_UK2Node_CustomEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_OnReachStepCustomNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_OnReachStepCustomNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_OnReachStepCustomNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGraphNode_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_State>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_State_Statics::ClassParams = {
		&UQuestGraphNode_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGraphNode_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGraphNode_State()
	{
		if (!Z_Registration_Info_UClass_UQuestGraphNode_State.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_State.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_State_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGraphNode_State.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_State>()
	{
		return UQuestGraphNode_State::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_State);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_State, UQuestGraphNode_State::StaticClass, TEXT("UQuestGraphNode_State"), &Z_Registration_Info_UClass_UQuestGraphNode_State, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_State), 1830591777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_659374925(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
