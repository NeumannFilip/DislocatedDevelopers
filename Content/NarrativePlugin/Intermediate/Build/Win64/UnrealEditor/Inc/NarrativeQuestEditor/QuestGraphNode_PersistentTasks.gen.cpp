// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_PersistentTasks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_PersistentTasks() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_PersistentTasks_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_PersistentTasks();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestGraphNode_PersistentTasks::StaticRegisterNativesUQuestGraphNode_PersistentTasks()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_PersistentTasks);
	UClass* Z_Construct_UClass_UQuestGraphNode_PersistentTasks_NoRegister()
	{
		return UQuestGraphNode_PersistentTasks::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode_PersistentTasks.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_PersistentTasks.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_PersistentTasks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::ClassParams = {
		&UQuestGraphNode_PersistentTasks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGraphNode_PersistentTasks()
	{
		if (!Z_Registration_Info_UClass_UQuestGraphNode_PersistentTasks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_PersistentTasks.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_PersistentTasks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGraphNode_PersistentTasks.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_PersistentTasks>()
	{
		return UQuestGraphNode_PersistentTasks::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_PersistentTasks);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_PersistentTasks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_PersistentTasks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_PersistentTasks, UQuestGraphNode_PersistentTasks::StaticClass, TEXT("UQuestGraphNode_PersistentTasks"), &Z_Registration_Info_UClass_UQuestGraphNode_PersistentTasks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_PersistentTasks), 3284681927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_PersistentTasks_h_2798844780(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_PersistentTasks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_PersistentTasks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
