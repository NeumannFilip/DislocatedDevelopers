// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueEditorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueEditorTypes() {}
// Cross Module References
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorTypes_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References
	void UDialogueEditorTypes::StaticRegisterNativesUDialogueEditorTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueEditorTypes);
	UClass* Z_Construct_UClass_UDialogueEditorTypes_NoRegister()
	{
		return UDialogueEditorTypes::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueEditorTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueEditorTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditorTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueEditorTypes.h" },
		{ "ModuleRelativePath", "Private/DialogueEditorTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueEditorTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueEditorTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueEditorTypes_Statics::ClassParams = {
		&UDialogueEditorTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDialogueEditorTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueEditorTypes()
	{
		if (!Z_Registration_Info_UClass_UDialogueEditorTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueEditorTypes.OuterSingleton, Z_Construct_UClass_UDialogueEditorTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueEditorTypes.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueEditorTypes>()
	{
		return UDialogueEditorTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEditorTypes);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueEditorTypes, UDialogueEditorTypes::StaticClass, TEXT("UDialogueEditorTypes"), &Z_Registration_Info_UClass_UDialogueEditorTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueEditorTypes), 1126510547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_843284391(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
