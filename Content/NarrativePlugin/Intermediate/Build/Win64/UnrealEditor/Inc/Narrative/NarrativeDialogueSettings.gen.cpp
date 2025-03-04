// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeDialogueSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDialogueSettings() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueSettings_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UNarrativeDialogueSettings::StaticRegisterNativesUNarrativeDialogueSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDialogueSettings);
	UClass* Z_Construct_UClass_UNarrativeDialogueSettings_NoRegister()
	{
		return UNarrativeDialogueSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeDialogueSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDialogueTextDisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDialogueTextDisplayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LettersPerMinute_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LettersPerMinute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestartDialogueSequenceIfAlreadyPlaying_MetaData[];
#endif
		static void NewProp_bRestartDialogueSequenceIfAlreadyPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestartDialogueSequenceIfAlreadyPlaying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeDialogueSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime dialogue settings for narrative \n */" },
		{ "IncludePath", "NarrativeDialogueSettings.h" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Runtime dialogue settings for narrative" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "//How long should the text be displayed for at a minimum? Since default letters per minute is 25 this prevents a reply like \"no\" from being played too quickly\n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "How long should the text be displayed for at a minimum? Since default letters per minute is 25 this prevents a reply like \"no\" from being played too quickly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime = { "MinDialogueTextDisplayTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, MinDialogueTextDisplayTime), METADATA_PARAMS(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerMinute_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "//If a dialogue doesn't have audio supplied, how long should the text be displayed on the screen for? Lower letters per minute means player gets more time \n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "If a dialogue doesn't have audio supplied, how long should the text be displayed on the screen for? Lower letters per minute means player gets more time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerMinute = { "LettersPerMinute", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, LettersPerMinute), METADATA_PARAMS(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerMinute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerMinute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "Comment", "//When enabled if narrative tries playing a dialogue shot but that shot is already playing, it will restart the shot. Otherwise, it will just let the already started shot continue. \n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "When enabled if narrative tries playing a dialogue shot but that shot is already playing, it will restart the shot. Otherwise, it will just let the already started shot continue." },
	};
#endif
	void Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying_SetBit(void* Obj)
	{
		((UNarrativeDialogueSettings*)Obj)->bRestartDialogueSequenceIfAlreadyPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying = { "bRestartDialogueSequenceIfAlreadyPlaying", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNarrativeDialogueSettings), &Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerMinute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bRestartDialogueSequenceIfAlreadyPlaying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeDialogueSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDialogueSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::ClassParams = {
		&UNarrativeDialogueSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeDialogueSettings()
	{
		if (!Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton, Z_Construct_UClass_UNarrativeDialogueSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeDialogueSettings>()
	{
		return UNarrativeDialogueSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDialogueSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDialogueSettings, UNarrativeDialogueSettings::StaticClass, TEXT("UNarrativeDialogueSettings"), &Z_Registration_Info_UClass_UNarrativeDialogueSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDialogueSettings), 1592694405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_3182760783(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
