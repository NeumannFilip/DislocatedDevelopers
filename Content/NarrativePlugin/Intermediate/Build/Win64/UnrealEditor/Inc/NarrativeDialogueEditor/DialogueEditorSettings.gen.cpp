// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueEditorSettings() {}
// Cross Module References
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorSettings_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UDialogueEditorSettings::StaticRegisterNativesUDialogueEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueEditorSettings);
	UClass* Z_Construct_UClass_UDialogueEditorSettings_NoRegister()
	{
		return UDialogueEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNPCDialogueClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNPCDialogueClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerDialogueClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlayerDialogueClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDialogueClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWarnings_MetaData[];
#endif
		static void NewProp_bEnableWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarnMissingSoundCues_MetaData[];
#endif
		static void NewProp_bWarnMissingSoundCues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnMissingSoundCues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueEditorSettings.h" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor = { "RootNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditorSettings, RootNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor = { "PlayerNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditorSettings, PlayerNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor = { "NPCNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditorSettings, NPCNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "DialogueNode_NPC" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass = { "DefaultNPCDialogueClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultNPCDialogueClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "DialogueNode_Player" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass = { "DefaultPlayerDialogueClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultPlayerDialogueClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "Dialogue" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass = { "DefaultDialogueClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultDialogueClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_SetBit(void* Obj)
	{
		((UDialogueEditorSettings*)Obj)->bEnableWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings = { "bEnableWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueEditorSettings), &Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_SetBit(void* Obj)
	{
		((UDialogueEditorSettings*)Obj)->bWarnMissingSoundCues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues = { "bWarnMissingSoundCues", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueEditorSettings), &Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueEditorSettings_Statics::ClassParams = {
		&UDialogueEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDialogueEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueEditorSettings.OuterSingleton, Z_Construct_UClass_UDialogueEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueEditorSettings.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueEditorSettings>()
	{
		return UDialogueEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueEditorSettings, UDialogueEditorSettings::StaticClass, TEXT("UDialogueEditorSettings"), &Z_Registration_Info_UClass_UDialogueEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueEditorSettings), 2722116496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_2026812939(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
