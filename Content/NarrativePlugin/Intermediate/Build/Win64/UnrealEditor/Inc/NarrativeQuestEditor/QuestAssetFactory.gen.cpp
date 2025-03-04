// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestAssetFactory() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestAssetFactory_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestBlueprint_NoRegister();
// End Cross Module References
	void UQuestAssetFactory::StaticRegisterNativesUQuestAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestAssetFactory);
	UClass* Z_Construct_UClass_UQuestAssetFactory_NoRegister()
	{
		return UQuestAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating new quest assets \n */" },
		{ "IncludePath", "QuestAssetFactory.h" },
		{ "ModuleRelativePath", "Private/QuestAssetFactory.h" },
		{ "ToolTip", "Factory for creating new quest assets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestAssetFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Quest Asset" },
		{ "ModuleRelativePath", "Private/QuestAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestAssetFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestAssetFactory, ParentClass), Z_Construct_UClass_UQuestBlueprint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestAssetFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAssetFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestAssetFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestAssetFactory_Statics::ClassParams = {
		&UQuestAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAssetFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UQuestAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestAssetFactory.OuterSingleton, Z_Construct_UClass_UQuestAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestAssetFactory.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestAssetFactory>()
	{
		return UQuestAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestAssetFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestAssetFactory, UQuestAssetFactory::StaticClass, TEXT("UQuestAssetFactory"), &Z_Registration_Info_UClass_UQuestAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestAssetFactory), 1294283777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestAssetFactory_h_1151879894(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
