// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeTask() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UNarrativeTask::StaticRegisterNativesUNarrativeTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTask);
	UClass* Z_Construct_UClass_UNarrativeTask_NoRegister()
	{
		return UNarrativeTask::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArgumentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArgument_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultArgument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutofillDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutofillDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNextStateID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultNextStateID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNextStateDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultNextStateDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NarrativeTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskName_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**A short name describing what this Task is*/" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "A short name describing what this Task is" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, TaskName), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskDescription_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**A description of this task. Will get used as a tooltip in the quest editor so write something useful!  */" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "A description of this task. Will get used as a tooltip in the quest editor so write something useful!" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskDescription = { "TaskDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, TaskDescription), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_ArgumentName_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**The name of the argument this tasks takes (For example if your Task is called \"Talk To Character\", the argument name might be \"Character Name\")*/" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "The name of the argument this tasks takes (For example if your Task is called \"Talk To Character\", the argument name might be \"Character Name\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_ArgumentName = { "ArgumentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, ArgumentName), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_ArgumentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_ArgumentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskCategory_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**The category of this Task, used for organization in the quest tool*/" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "The category of this Task, used for organization in the quest tool" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskCategory = { "TaskCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, TaskCategory), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultArgument_MetaData[] = {
		{ "Category", "Autofill" },
		{ "Comment", "/**Default argument to autofill */" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "Default argument to autofill" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultArgument = { "DefaultArgument", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, DefaultArgument), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultArgument_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultArgument_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_AutofillDescription_MetaData[] = {
		{ "Category", "Autofill" },
		{ "Comment", "/**Default description to autofill */" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "Default description to autofill" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_AutofillDescription = { "AutofillDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, AutofillDescription), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_AutofillDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_AutofillDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateID_MetaData[] = {
		{ "Category", "Autofill" },
		{ "Comment", "/**Destination state willhave its ID filled out with this */" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "Destination state willhave its ID filled out with this" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateID = { "DefaultNextStateID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, DefaultNextStateID), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateDescription_MetaData[] = {
		{ "Category", "Autofill" },
		{ "Comment", "/**Destination state willhave its description filled out with this */" },
		{ "ModuleRelativePath", "Public/NarrativeTask.h" },
		{ "ToolTip", "Destination state willhave its description filled out with this" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateDescription = { "DefaultNextStateDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTask, DefaultNextStateDescription), METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_ArgumentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TaskCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultArgument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_AutofillDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DefaultNextStateDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTask_Statics::ClassParams = {
		&UNarrativeTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeTask()
	{
		if (!Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton, Z_Construct_UClass_UNarrativeTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeTask>()
	{
		return UNarrativeTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTask);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTask, UNarrativeTask::StaticClass, TEXT("UNarrativeTask"), &Z_Registration_Info_UClass_UNarrativeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTask), 1447750140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTask_h_2337304866(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
