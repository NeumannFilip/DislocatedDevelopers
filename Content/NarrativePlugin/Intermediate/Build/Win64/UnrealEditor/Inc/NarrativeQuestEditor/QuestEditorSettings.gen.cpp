// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorSettings() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UQuestEditorSettings::StaticRegisterNativesUQuestEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorSettings);
	UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister()
	{
		return UQuestEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailedNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentTasksNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentTasksNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestBranch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQuestBranch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQuestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestEditorSettings.h" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor = { "FailedNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, FailedNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor = { "SuccessNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, SuccessNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor = { "StateNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, StateNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor = { "RootNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, RootNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor = { "TaskNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, TaskNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor = { "PersistentTasksNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, PersistentTasksNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "QuestBranch" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch = { "DefaultQuestBranch", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, DefaultQuestBranch), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "QuestState" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState = { "DefaultQuestState", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEditorSettings, DefaultQuestState), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorSettings_Statics::ClassParams = {
		&UQuestEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton, Z_Construct_UClass_UQuestEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestEditorSettings>()
	{
		return UQuestEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorSettings, UQuestEditorSettings::StaticClass, TEXT("UQuestEditorSettings"), &Z_Registration_Info_UClass_UQuestEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorSettings), 2794171588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_1271548800(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
