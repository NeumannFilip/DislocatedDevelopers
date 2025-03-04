// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeComponent() {}
// Cross Module References
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueInfo();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EUpdateType();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeUpdate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedQuest();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueInfo;
class UScriptStruct* FDialogueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueInfo, Z_Construct_UPackage__Script_Narrative(), TEXT("DialogueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FDialogueInfo>()
{
	return FDialogueInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueInfo, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueInfo, NPC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"DialogueInfo",
		sizeof(FDialogueInfo),
		alignof(FDialogueInfo),
		Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueInfo.InnerSingleton, Z_Construct_UScriptStruct_FDialogueInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateType;
	static UEnum* EUpdateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUpdateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EUpdateType, Z_Construct_UPackage__Script_Narrative(), TEXT("EUpdateType"));
		}
		return Z_Registration_Info_UEnum_EUpdateType.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EUpdateType>()
	{
		return EUpdateType_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EUpdateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enumerators[] = {
		{ "EUpdateType::UT_CompleteTask", (int64)EUpdateType::UT_CompleteTask },
		{ "EUpdateType::UT_BeginQuest", (int64)EUpdateType::UT_BeginQuest },
		{ "EUpdateType::UT_ForgetQuest", (int64)EUpdateType::UT_ForgetQuest },
		{ "EUpdateType::UT_RestartQuest", (int64)EUpdateType::UT_RestartQuest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "UT_BeginQuest.Name", "EUpdateType::UT_BeginQuest" },
		{ "UT_CompleteTask.Name", "EUpdateType::UT_CompleteTask" },
		{ "UT_ForgetQuest.Name", "EUpdateType::UT_ForgetQuest" },
		{ "UT_RestartQuest.Name", "EUpdateType::UT_RestartQuest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EUpdateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EUpdateType",
		"EUpdateType",
		Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Narrative_EUpdateType()
	{
		if (!Z_Registration_Info_UEnum_EUpdateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateType.InnerSingleton, Z_Construct_UEnum_Narrative_EUpdateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUpdateType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeUpdate;
class UScriptStruct* FNarrativeUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeUpdate, Z_Construct_UPackage__Script_Narrative(), TEXT("NarrativeUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FNarrativeUpdate>()
{
	return FNarrativeUpdate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNarrativeUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nRepresents a change in state to the narrative components state machine.\n\nBeginning/Forgetting/Restarting quests and completing quest actions all need to be processed\nin the same order on the client that the server processed them in to ensure server/client state machines sync.\nSo to ensure order we replicate a buffer of these Tasks back to the client which then processes them in order to ensure sync.\n*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Represents a change in state to the narrative components state machine.\n\nBeginning/Forgetting/Restarting quests and completing quest actions all need to be processed\nin the same order on the client that the server processed them in to ensure server/client state machines sync.\nSo to ensure order we replicate a buffer of these Tasks back to the client which then processes them in order to ensure sync." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeUpdate>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_MetaData[] = {
		{ "Comment", "//What sort of update this is\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "What sort of update this is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeUpdate, UpdateType), Z_Construct_UEnum_Narrative_EUpdateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_MetaData)) }; // 2406096204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass_MetaData[] = {
		{ "Comment", "//The quest that was updated \n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "The quest that was updated" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeUpdate, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "Comment", "//Optional payload with some string data about the update\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Optional payload with some string data about the update" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeUpdate, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"NarrativeUpdate",
		sizeof(FNarrativeUpdate),
		alignof(FNarrativeUpdate),
		Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNarrativeUpdate()
	{
		if (!Z_Registration_Info_UScriptStruct_NarrativeUpdate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeUpdate.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NarrativeUpdate.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnNarrativeTaskCompleted_Parms
		{
			const UNarrativeTask* NarrativeTask;
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask = { "NarrativeTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnNarrativeTaskCompleted_Parms, NarrativeTask), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnNarrativeTaskCompleted_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//General\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "General" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnNarrativeTaskCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnNarrativeTaskCompleted_Parms), Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestStepCompleted_Parms
		{
			const UQuest* Quest;
			const UQuestBranch* Step;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestStepCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestStepCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Quests\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Quests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestStepCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestStepCompleted_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestNewState_Parms
		{
			UQuest* Quest;
			const UQuestState* NewState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestNewState__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::_Script_Narrative_eventOnQuestNewState_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestTaskProgressMade_Parms
		{
			const UQuest* Quest;
			FQuestTask ProgressedTask;
			const UQuestBranch* Step;
			int32 CurrentProgress;
			int32 RequiredProgress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressedTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressedTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_ProgressedTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_ProgressedTask = { "ProgressedTask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressMade_Parms, ProgressedTask), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_ProgressedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_ProgressedTask_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressMade_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressMade_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressMade_Parms, RequiredProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_ProgressedTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestTaskProgressMade__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::_Script_Narrative_eventOnQuestTaskProgressMade_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestTaskCompleted_Parms
		{
			const UQuest* Quest;
			FQuestTask CompletedTask;
			const UQuestBranch* Step;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask = { "CompletedTask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskCompleted_Parms, CompletedTask), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestTaskCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestTaskCompleted_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestSucceeded_Parms
		{
			const UQuest* Quest;
			FText QuestSucceededMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceededMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestSucceeded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::_Script_Narrative_eventOnQuestSucceeded_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestFailed_Parms
		{
			const UQuest* Quest;
			FText QuestFailedMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailedMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::_Script_Narrative_eventOnQuestFailed_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestStarted_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestStarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestStarted_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestForgotten_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestForgotten_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestForgotten__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::_Script_Narrative_eventOnQuestForgotten_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestRestarted_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestRestarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestRestarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestRestarted_Parms), Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnDialogueBegan_Parms
		{
			UDialogue* Dialogue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Dialogue\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Dialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnDialogueBegan__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::_Script_Narrative_eventOnDialogueBegan_Parms), Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnDialogueFinished_Parms
		{
			UDialogue* Dialogue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnDialogueFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::_Script_Narrative_eventOnDialogueFinished_Parms), Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventDialogueRepliesAvailable_Parms
		{
			UDialogue* Dialogue;
			TArray<UDialogueNode_Player*> PlayerReplies;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerReplies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "DialogueRepliesAvailable__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::_Script_Narrative_eventDialogueRepliesAvailable_Parms), Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventNPCDialogueLineStarted_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode_NPC* Node;
			FDialogueLine DialogueLine;
			FSpeakerInfo Speaker;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "NPCDialogueLineStarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::_Script_Narrative_eventNPCDialogueLineStarted_Parms), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventNPCDialogueLineFinished_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode_NPC* Node;
			FDialogueLine DialogueLine;
			FSpeakerInfo Speaker;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "NPCDialogueLineFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::_Script_Narrative_eventNPCDialogueLineFinished_Parms), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventPlayerDialogueLineStarted_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode_Player* Node;
			FDialogueLine DialogueLine;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "PlayerDialogueLineStarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::_Script_Narrative_eventPlayerDialogueLineStarted_Parms), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventPlayerDialogueLineFinished_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode_Player* Node;
			FDialogueLine DialogueLine;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "PlayerDialogueLineFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::_Script_Narrative_eventPlayerDialogueLineFinished_Parms), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnBeginSave_Parms
		{
			FString SaveGameName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnBeginSave_Parms, SaveGameName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Save/Load functionality\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Save/Load functionality" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnBeginSave__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::_Script_Narrative_eventOnBeginSave_Parms), Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnSaveComplete_Parms
		{
			FString SaveGameName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnSaveComplete_Parms, SaveGameName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnSaveComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::_Script_Narrative_eventOnSaveComplete_Parms), Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnBeginLoad_Parms
		{
			FString SaveGameName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnBeginLoad_Parms, SaveGameName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnBeginLoad__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::_Script_Narrative_eventOnBeginLoad_Parms), Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnLoadComplete_Parms
		{
			FString SaveGameName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Narrative_eventOnLoadComplete_Parms, SaveGameName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnLoadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::_Script_Narrative_eventOnLoadComplete_Parms), Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientReceiveSave)
	{
		P_GET_TARRAY(FNarrativeSavedQuest,Z_Param_SavedQuests);
		P_GET_TARRAY(FString,Z_Param_Tasks);
		P_GET_TARRAY(int32,Z_Param_Quantities);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReceiveSave_Implementation(Z_Param_SavedQuests,Z_Param_Tasks,Z_Param_Quantities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execDeleteSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteSave(Z_Param_SaveName,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Load(Z_Param_SaveName,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Save(Z_Param_SaveName,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execSetSharedNarrativeComponent)
	{
		P_GET_OBJECT(UNarrativeComponent,Z_Param_NewSharedNarrativeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSharedNarrativeComponent(Z_Param_NewSharedNarrativeComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuest**)Z_Param__Result=P_THIS->GetQuest(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetAllQuests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetAllQuests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetInProgressQuests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetInProgressQuests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetSucceededQuests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetSucceededQuests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetFailedQuests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetFailedQuests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execHasCompletedTaskInQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCompletedTaskInQuest(Z_Param_QuestClass,Z_Param_Task,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetNumberOfTimesTaskWasCompleted)
	{
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTimesTaskWasCompleted(Z_Param_Task,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execHasCompletedTask)
	{
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCompletedTask(Z_Param_Task,Z_Param_Name,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execIsInDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execServerExitDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerExitDialogue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execTryExitDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryExitDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execServerSelectDialogueOption)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSelectDialogueOption_Implementation(Z_Param_OptionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execSelectDialogueOption)
	{
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectDialogueOption(Z_Param_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientRecieveDialogueChunk)
	{
		P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
		P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRecieveDialogueChunk_Implementation(Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientExitDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientExitDialogue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientBeginDialogue)
	{
		P_GET_OBJECT(UClass,Z_Param_Dialogue);
		P_GET_OBJECT(AActor,Z_Param_NPC);
		P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
		P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientBeginDialogue_Implementation(Z_Param_Dialogue,Z_Param_NPC,Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execBeginDialogue)
	{
		P_GET_OBJECT(UClass,Z_Param_Dialogue);
		P_GET_OBJECT(AActor,Z_Param_NPC);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginDialogue(Z_Param_Dialogue,Z_Param_NPC,Z_Param_StartFromID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execForgetQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ForgetQuest(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execRestartQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RestartQuest(Z_Param_QuestClass,Z_Param_StartFromID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execBeginQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuest**)Z_Param__Result=P_THIS->BeginQuest(Z_Param_QuestClass,Z_Param_StartFromID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execIsQuestFinished)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQuestFinished(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execIsQuestFailed)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQuestFailed(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execIsQuestSucceeded)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQuestSucceeded(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execIsQuestInProgress)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQuestInProgress(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execIsQuestStartedOrFinished)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQuestStartedOrFinished(Z_Param_QuestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetOwningController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetOwningPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execDialogueFinished)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueFinished(Z_Param_Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execDialogueBegan)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueBegan(Z_Param_Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execDialogueLineFinished)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueLineFinished(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execDialogueLineStarted)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueLineStarted(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execDialogueRepliesAvailable)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UDialogueNode_Player*,Z_Param_Out_PlayerReplies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueRepliesAvailable(Z_Param_Dialogue,Z_Param_Out_PlayerReplies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execLoadComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadComplete(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execSaveComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveComplete(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execBeginLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginLoad(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execBeginSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginSave(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestStepCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestStepCompleted(Z_Param_Quest,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestTaskCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestTaskCompleted(Z_Param_Quest,Z_Param_Out_Task,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestTaskProgressMade)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_ProgressedObjective);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequiredProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestTaskProgressMade(Z_Param_Quest,Z_Param_Out_ProgressedObjective,Z_Param_Step,Z_Param_CurrentProgress,Z_Param_RequiredProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestNewState)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestNewState(Z_Param_Quest,Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestSucceeded)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestSucceededMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestSucceeded(Z_Param_Quest,Z_Param_Out_QuestSucceededMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestFailed)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestFailedMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestFailed(Z_Param_Quest,Z_Param_Out_QuestFailedMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestForgotten)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestForgotten(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestStarted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestStarted(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execNarrativeTaskCompleted)
	{
		P_GET_OBJECT(UNarrativeTask,Z_Param_NarrativeTask);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NarrativeTaskCompleted(Z_Param_NarrativeTask,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execOnRep_PendingUpdateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PendingUpdateList();
		P_NATIVE_END;
	}
	static FName NAME_UNarrativeComponent_ClientBeginDialogue = FName(TEXT("ClientBeginDialogue"));
	void UNarrativeComponent::ClientBeginDialogue(TSubclassOf<UDialogue>  Dialogue, AActor* NPC, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
	{
		NarrativeComponent_eventClientBeginDialogue_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.NPC=NPC;
		Parms.NPCReplyChainIDs=NPCReplyChainIDs;
		Parms.AvailableResponseIDs=AvailableResponseIDs;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientBeginDialogue),&Parms);
	}
	static FName NAME_UNarrativeComponent_ClientExitDialogue = FName(TEXT("ClientExitDialogue"));
	void UNarrativeComponent::ClientExitDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientExitDialogue),NULL);
	}
	static FName NAME_UNarrativeComponent_ClientReceiveSave = FName(TEXT("ClientReceiveSave"));
	void UNarrativeComponent::ClientReceiveSave(TArray<FNarrativeSavedQuest> const& SavedQuests, TArray<FString> const& Tasks, TArray<int32> const& Quantities)
	{
		NarrativeComponent_eventClientReceiveSave_Parms Parms;
		Parms.SavedQuests=SavedQuests;
		Parms.Tasks=Tasks;
		Parms.Quantities=Quantities;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientReceiveSave),&Parms);
	}
	static FName NAME_UNarrativeComponent_ClientRecieveDialogueChunk = FName(TEXT("ClientRecieveDialogueChunk"));
	void UNarrativeComponent::ClientRecieveDialogueChunk(TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
	{
		NarrativeComponent_eventClientRecieveDialogueChunk_Parms Parms;
		Parms.NPCReplyChainIDs=NPCReplyChainIDs;
		Parms.AvailableResponseIDs=AvailableResponseIDs;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientRecieveDialogueChunk),&Parms);
	}
	static FName NAME_UNarrativeComponent_ServerExitDialogue = FName(TEXT("ServerExitDialogue"));
	void UNarrativeComponent::ServerExitDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ServerExitDialogue),NULL);
	}
	static FName NAME_UNarrativeComponent_ServerSelectDialogueOption = FName(TEXT("ServerSelectDialogueOption"));
	void UNarrativeComponent::ServerSelectDialogueOption(FName const& OptionID)
	{
		NarrativeComponent_eventServerSelectDialogueOption_Parms Parms;
		Parms.OptionID=OptionID;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ServerSelectDialogueOption),&Parms);
	}
	void UNarrativeComponent::StaticRegisterNativesUNarrativeComponent()
	{
		UClass* Class = UNarrativeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDialogue", &UNarrativeComponent::execBeginDialogue },
			{ "BeginLoad", &UNarrativeComponent::execBeginLoad },
			{ "BeginQuest", &UNarrativeComponent::execBeginQuest },
			{ "BeginSave", &UNarrativeComponent::execBeginSave },
			{ "ClientBeginDialogue", &UNarrativeComponent::execClientBeginDialogue },
			{ "ClientExitDialogue", &UNarrativeComponent::execClientExitDialogue },
			{ "ClientReceiveSave", &UNarrativeComponent::execClientReceiveSave },
			{ "ClientRecieveDialogueChunk", &UNarrativeComponent::execClientRecieveDialogueChunk },
			{ "DeleteSave", &UNarrativeComponent::execDeleteSave },
			{ "DialogueBegan", &UNarrativeComponent::execDialogueBegan },
			{ "DialogueFinished", &UNarrativeComponent::execDialogueFinished },
			{ "DialogueLineFinished", &UNarrativeComponent::execDialogueLineFinished },
			{ "DialogueLineStarted", &UNarrativeComponent::execDialogueLineStarted },
			{ "DialogueRepliesAvailable", &UNarrativeComponent::execDialogueRepliesAvailable },
			{ "ForgetQuest", &UNarrativeComponent::execForgetQuest },
			{ "GetAllQuests", &UNarrativeComponent::execGetAllQuests },
			{ "GetFailedQuests", &UNarrativeComponent::execGetFailedQuests },
			{ "GetInProgressQuests", &UNarrativeComponent::execGetInProgressQuests },
			{ "GetNumberOfTimesTaskWasCompleted", &UNarrativeComponent::execGetNumberOfTimesTaskWasCompleted },
			{ "GetOwningController", &UNarrativeComponent::execGetOwningController },
			{ "GetOwningPawn", &UNarrativeComponent::execGetOwningPawn },
			{ "GetQuest", &UNarrativeComponent::execGetQuest },
			{ "GetSucceededQuests", &UNarrativeComponent::execGetSucceededQuests },
			{ "HasCompletedTask", &UNarrativeComponent::execHasCompletedTask },
			{ "HasCompletedTaskInQuest", &UNarrativeComponent::execHasCompletedTaskInQuest },
			{ "IsInDialogue", &UNarrativeComponent::execIsInDialogue },
			{ "IsQuestFailed", &UNarrativeComponent::execIsQuestFailed },
			{ "IsQuestFinished", &UNarrativeComponent::execIsQuestFinished },
			{ "IsQuestInProgress", &UNarrativeComponent::execIsQuestInProgress },
			{ "IsQuestStartedOrFinished", &UNarrativeComponent::execIsQuestStartedOrFinished },
			{ "IsQuestSucceeded", &UNarrativeComponent::execIsQuestSucceeded },
			{ "Load", &UNarrativeComponent::execLoad },
			{ "LoadComplete", &UNarrativeComponent::execLoadComplete },
			{ "NarrativeTaskCompleted", &UNarrativeComponent::execNarrativeTaskCompleted },
			{ "OnRep_PendingUpdateList", &UNarrativeComponent::execOnRep_PendingUpdateList },
			{ "QuestFailed", &UNarrativeComponent::execQuestFailed },
			{ "QuestForgotten", &UNarrativeComponent::execQuestForgotten },
			{ "QuestNewState", &UNarrativeComponent::execQuestNewState },
			{ "QuestStarted", &UNarrativeComponent::execQuestStarted },
			{ "QuestStepCompleted", &UNarrativeComponent::execQuestStepCompleted },
			{ "QuestSucceeded", &UNarrativeComponent::execQuestSucceeded },
			{ "QuestTaskCompleted", &UNarrativeComponent::execQuestTaskCompleted },
			{ "QuestTaskProgressMade", &UNarrativeComponent::execQuestTaskProgressMade },
			{ "RestartQuest", &UNarrativeComponent::execRestartQuest },
			{ "Save", &UNarrativeComponent::execSave },
			{ "SaveComplete", &UNarrativeComponent::execSaveComplete },
			{ "SelectDialogueOption", &UNarrativeComponent::execSelectDialogueOption },
			{ "ServerExitDialogue", &UNarrativeComponent::execServerExitDialogue },
			{ "ServerSelectDialogueOption", &UNarrativeComponent::execServerSelectDialogueOption },
			{ "SetSharedNarrativeComponent", &UNarrativeComponent::execSetSharedNarrativeComponent },
			{ "TryExitDialogue", &UNarrativeComponent::execTryExitDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics
	{
		struct NarrativeComponent_eventBeginDialogue_Parms
		{
			TSubclassOf<UDialogue>  Dialogue;
			AActor* NPC;
			FName StartFromID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, NPC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, StartFromID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventBeginDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventBeginDialogue_Parms), &Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_NPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_StartFromID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* Only callable on the server. Server grabs root dialogue node, validates its conditions, and sends it to the client via ClientRecieveDialogueOptions\n\x09*\n\x09@param DialogueBlueprint The dialogue to begin \n\x09@param NPC the actor we're talking to \n\x09@param NPCName The NPCs name \n\n\x09@return Whether the dialogue was successfully started \n\x09*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "DefaultToSelf", "NPC" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Only callable on the server. Server grabs root dialogue node, validates its conditions, and sends it to the client via ClientRecieveDialogueOptions\n\n       @param DialogueBlueprint The dialogue to begin\n       @param NPC the actor we're talking to\n       @param NPCName The NPCs name\n\n       @return Whether the dialogue was successfully started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NarrativeComponent_eventBeginDialogue_Parms), Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_BeginDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics
	{
		struct NarrativeComponent_eventBeginLoad_Parms
		{
			FString SaveName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginLoad_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginLoad", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NarrativeComponent_eventBeginLoad_Parms), Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_BeginLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics
	{
		struct NarrativeComponent_eventBeginQuest_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			FName StartFromID;
			UQuest* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, StartFromID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_StartFromID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Begin a given quest. Return quest if success. \n\x09\n\x09@param QuestAsset The quest to use\n\x09@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest from the start\n\n\x09@return The created UQuest instance\n\x09*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Begin a given quest. Return quest if success.\n\n@param QuestAsset The quest to use\n@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest from the start\n\n@return The created UQuest instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NarrativeComponent_eventBeginQuest_Parms), Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_BeginQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics
	{
		struct NarrativeComponent_eventBeginSave_Parms
		{
			FString SaveName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginSave_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NarrativeComponent_eventBeginSave_Parms), Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_BeginSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NPCReplyChainIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplyChainIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplyChainIDs;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvailableResponseIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableResponseIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableResponseIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, NPC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to tell client to start dialogue. Also sends the initial chunk*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to tell client to start dialogue. Also sends the initial chunk" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientBeginDialogue", nullptr, nullptr, sizeof(NarrativeComponent_eventClientBeginDialogue_Parms), Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to tell client to end dialogue*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to tell client to end dialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientExitDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedQuests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedQuests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedQuests;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_Inner = { "SavedQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedQuest, METADATA_PARAMS(nullptr, 0) }; // 1446043974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests = { "SavedQuests", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, SavedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_MetaData)) }; // 1446043974
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_Inner = { "Quantities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities = { "Quantities", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, Quantities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**\n\x09Once server loads a save in, it sends all the info to the client via this RPC so it can load it in. We do this so loading save\n\x09games can be done by the server and flow down to the client.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Once server loads a save in, it sends all the info to the client via this RPC so it can load it in. We do this so loading save\ngames can be done by the server and flow down to the client." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientReceiveSave", nullptr, nullptr, sizeof(NarrativeComponent_eventClientReceiveSave_Parms), Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_NPCReplyChainIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplyChainIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplyChainIDs;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvailableResponseIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableResponseIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableResponseIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientRecieveDialogueChunk_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventClientRecieveDialogueChunk_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to send valid dialogue chunks to the client*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to send valid dialogue chunks to the client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientRecieveDialogueChunk", nullptr, nullptr, sizeof(NarrativeComponent_eventClientRecieveDialogueChunk_Parms), Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics
	{
		struct NarrativeComponent_eventDeleteSave_Parms
		{
			FString SaveName;
			int32 Slot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDeleteSave_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDeleteSave_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot_MetaData)) };
	void Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventDeleteSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventDeleteSave_Parms), &Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**Deletes a saved game from disk. USE THIS WITH CAUTION. Return true if save file deleted, false if delete failed or file didn't exist.*/" },
		{ "CPP_Default_SaveName", "NarrativeSaveData" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Deletes a saved game from disk. USE THIS WITH CAUTION. Return true if save file deleted, false if delete failed or file didn't exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DeleteSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NarrativeComponent_eventDeleteSave_Parms), Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_DeleteSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics
	{
		struct NarrativeComponent_eventDialogueBegan_Parms
		{
			UDialogue* Dialogue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueBegan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NarrativeComponent_eventDialogueBegan_Parms), Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics
	{
		struct NarrativeComponent_eventDialogueFinished_Parms
		{
			UDialogue* Dialogue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NarrativeComponent_eventDialogueFinished_Parms), Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics
	{
		struct NarrativeComponent_eventDialogueLineFinished_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode* Node;
			FDialogueLine DialogueLine;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueLineFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NarrativeComponent_eventDialogueLineFinished_Parms), Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics
	{
		struct NarrativeComponent_eventDialogueLineStarted_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode* Node;
			FDialogueLine DialogueLine;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueLineStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NarrativeComponent_eventDialogueLineStarted_Parms), Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics
	{
		struct NarrativeComponent_eventDialogueRepliesAvailable_Parms
		{
			UDialogue* Dialogue;
			TArray<UDialogueNode_Player*> PlayerReplies;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerReplies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueRepliesAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NarrativeComponent_eventDialogueRepliesAvailable_Parms), Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics
	{
		struct NarrativeComponent_eventForgetQuest_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventForgetQuest_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventForgetQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventForgetQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Forget a given quest. The quest will be removed from the players quest list, \n\x09""and the quest can be started again later using BeginQuest() if desired.\n\n\x09@param QuestAsset The quest to use\n\x09@return Whether or not the quest was forgotten or not\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Forget a given quest. The quest will be removed from the players quest list,\nand the quest can be started again later using BeginQuest() if desired.\n\n@param QuestAsset The quest to use\n@return Whether or not the quest was forgotten or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ForgetQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NarrativeComponent_eventForgetQuest_Parms), Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ForgetQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics
	{
		struct NarrativeComponent_eventGetAllQuests_Parms
		{
			TArray<UQuest*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetAllQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all quests that are started, failed, or succeeded, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all quests that are started, failed, or succeeded, in chronological order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetAllQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NarrativeComponent_eventGetAllQuests_Parms), Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetAllQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics
	{
		struct NarrativeComponent_eventGetFailedQuests_Parms
		{
			TArray<UQuest*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetFailedQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all failed quests, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all failed quests, in chronological order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetFailedQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NarrativeComponent_eventGetFailedQuests_Parms), Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics
	{
		struct NarrativeComponent_eventGetInProgressQuests_Parms
		{
			TArray<UQuest*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetInProgressQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all quests that are in progress, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all quests that are in progress, in chronological order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetInProgressQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NarrativeComponent_eventGetInProgressQuests_Parms), Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics
	{
		struct NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms
		{
			const UNarrativeTask* Task;
			FString Name;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* \n\x09IN MULTIPLAYER GAMES, THIS FUNCTION WILL ONLY WORK ON THE SERVER. Please see MasterTaskList comment for more info. \n\n\x09""Check how many times the player has ever completed a narrative Task. Very efficient.\n\x09\n\x09Very powerful for scripting, for example we could check if the player has talked to an NPC at least 10 times and then change the dialogue\n\x09text to a more personalized greeting since the NPC would know the player better. \n\n\x09@return The number of times the Task has been completed by this narrative component. \n\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "IN MULTIPLAYER GAMES, THIS FUNCTION WILL ONLY WORK ON THE SERVER. Please see MasterTaskList comment for more info.\n\nCheck how many times the player has ever completed a narrative Task. Very efficient.\n\nVery powerful for scripting, for example we could check if the player has talked to an NPC at least 10 times and then change the dialogue\ntext to a more personalized greeting since the NPC would know the player better.\n\n@return The number of times the Task has been completed by this narrative component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetNumberOfTimesTaskWasCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms), Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics
	{
		struct NarrativeComponent_eventGetOwningController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetOwningController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NarrativeComponent_eventGetOwningController_Parms), Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetOwningController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics
	{
		struct NarrativeComponent_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetOwningPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NarrativeComponent_eventGetOwningPawn_Parms), Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics
	{
		struct NarrativeComponent_eventGetQuest_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			UQuest* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetQuest_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetQuest_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Given a Quest class return its active quest object if we've started this quest */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Given a Quest class return its active quest object if we've started this quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::NarrativeComponent_eventGetQuest_Parms), Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics
	{
		struct NarrativeComponent_eventGetSucceededQuests_Parms
		{
			TArray<UQuest*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventGetSucceededQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all succeeded quests, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all succeeded quests, in chronological order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetSucceededQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NarrativeComponent_eventGetSucceededQuests_Parms), Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics
	{
		struct NarrativeComponent_eventHasCompletedTask_Parms
		{
			const UNarrativeTask* Task;
			FString Name;
			int32 Quantity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Quantity), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity_MetaData)) };
	void Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventHasCompletedTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventHasCompletedTask_Parms), &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Check if the player has ever completed a specific action. For example you could check if the player has ever talked to a given NPC, taken a certain item, etc\n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Check if the player has ever completed a specific action. For example you could check if the player has ever talked to a given NPC, taken a certain item, etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "HasCompletedTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NarrativeComponent_eventHasCompletedTask_Parms), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics
	{
		struct NarrativeComponent_eventHasCompletedTaskInQuest_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			const UNarrativeTask* Task;
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTaskInQuest_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTaskInQuest_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTaskInQuest_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventHasCompletedTaskInQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventHasCompletedTaskInQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Check if the player has ever completed a specific task that updated a quest. For example if a quest had a task called \"Talk to Chef\", you could\n\x09use this to check if the player had ever completed that task during the quest.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Check if the player has ever completed a specific task that updated a quest. For example if a quest had a task called \"Talk to Chef\", you could\n       use this to check if the player had ever completed that task during the quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "HasCompletedTaskInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::NarrativeComponent_eventHasCompletedTaskInQuest_Parms), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics
	{
		struct NarrativeComponent_eventIsInDialogue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsInDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsInDialogue_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Return true if we're in a dialogue \n\n\x09@return Whether true if we're in a dialogue, false otherwise \n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return true if we're in a dialogue\n\n       @return Whether true if we're in a dialogue, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsInDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NarrativeComponent_eventIsInDialogue_Parms), Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_IsInDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics
	{
		struct NarrativeComponent_eventIsQuestFailed_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestFailed_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestFailed_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest has been completed and was failed\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest has been completed and was failed\n@param QuestAsset The quest to check" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NarrativeComponent_eventIsQuestFailed_Parms), Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics
	{
		struct NarrativeComponent_eventIsQuestFinished_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestFinished_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest has been completed, regardless of whether we failed or succeeded the quest\n\x09@param QuestAsset The quest to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest has been completed, regardless of whether we failed or succeeded the quest\n@param QuestAsset The quest to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NarrativeComponent_eventIsQuestFinished_Parms), Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics
	{
		struct NarrativeComponent_eventIsQuestInProgress_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestInProgress_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestInProgress_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest is in progress but false if the quest is finished\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest is in progress but false if the quest is finished\n@param QuestAsset The quest to check" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestInProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NarrativeComponent_eventIsQuestInProgress_Parms), Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics
	{
		struct NarrativeComponent_eventIsQuestStartedOrFinished_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestStartedOrFinished_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestStartedOrFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestStartedOrFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest is started or finished\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest is started or finished\n@param QuestAsset The quest to check" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestStartedOrFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NarrativeComponent_eventIsQuestStartedOrFinished_Parms), Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics
	{
		struct NarrativeComponent_eventIsQuestSucceeded_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestSucceeded_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestSucceeded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestSucceeded_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest has been completed and was succeeded\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest has been completed and was succeeded\n@param QuestAsset The quest to check" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestSucceeded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NarrativeComponent_eventIsQuestSucceeded_Parms), Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_Load_Statics
	{
		struct NarrativeComponent_eventLoad_Parms
		{
			FString SaveName;
			int32 Slot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventLoad_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventLoad_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot_MetaData)) };
	void Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventLoad_Parms), &Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_Load_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Load_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**Load narratives state back in from disk\n\x09@param SaveName the name of the save game. */" },
		{ "CPP_Default_SaveName", "NarrativeSaveData" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Load narratives state back in from disk\n       @param SaveName the name of the save game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "Load", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NarrativeComponent_eventLoad_Parms), Z_Construct_UFunction_UNarrativeComponent_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics
	{
		struct NarrativeComponent_eventLoadComplete_Parms
		{
			FString SaveName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventLoadComplete_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "LoadComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NarrativeComponent_eventLoadComplete_Parms), Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_LoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics
	{
		struct NarrativeComponent_eventNarrativeTaskCompleted_Parms
		{
			const UNarrativeTask* NarrativeTask;
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_NarrativeTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_NarrativeTask = { "NarrativeTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventNarrativeTaskCompleted_Parms, NarrativeTask), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_NarrativeTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_NarrativeTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventNarrativeTaskCompleted_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_NarrativeTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "NarrativeTaskCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::NarrativeComponent_eventNarrativeTaskCompleted_Parms), Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "OnRep_PendingUpdateList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics
	{
		struct NarrativeComponent_eventQuestFailed_Parms
		{
			const UQuest* Quest;
			FText QuestFailedMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailedMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NarrativeComponent_eventQuestFailed_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics
	{
		struct NarrativeComponent_eventQuestForgotten_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestForgotten_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestForgotten", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NarrativeComponent_eventQuestForgotten_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestForgotten()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics
	{
		struct NarrativeComponent_eventQuestNewState_Parms
		{
			UQuest* Quest;
			const UQuestState* NewState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestNewState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NarrativeComponent_eventQuestNewState_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics
	{
		struct NarrativeComponent_eventQuestStarted_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NarrativeComponent_eventQuestStarted_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics
	{
		struct NarrativeComponent_eventQuestStepCompleted_Parms
		{
			const UQuest* Quest;
			const UQuestBranch* Step;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestStepCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestStepCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestStepCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::NarrativeComponent_eventQuestStepCompleted_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics
	{
		struct NarrativeComponent_eventQuestSucceeded_Parms
		{
			const UQuest* Quest;
			FText QuestSucceededMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceededMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestSucceeded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NarrativeComponent_eventQuestSucceeded_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics
	{
		struct NarrativeComponent_eventQuestTaskCompleted_Parms
		{
			const UQuest* Quest;
			FQuestTask Task;
			const UQuestBranch* Step;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestTaskCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NarrativeComponent_eventQuestTaskCompleted_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics
	{
		struct NarrativeComponent_eventQuestTaskProgressMade_Parms
		{
			const UQuest* Quest;
			FQuestTask ProgressedObjective;
			const UQuestBranch* Step;
			int32 CurrentProgress;
			int32 RequiredProgress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressedObjective_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressedObjective;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_ProgressedObjective_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_ProgressedObjective = { "ProgressedObjective", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, ProgressedObjective), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_ProgressedObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_ProgressedObjective_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, RequiredProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_ProgressedObjective,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestTaskProgressMade", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NarrativeComponent_eventQuestTaskProgressMade_Parms), Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics
	{
		struct NarrativeComponent_eventRestartQuest_Parms
		{
			TSubclassOf<UQuest>  QuestClass;
			FName StartFromID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventRestartQuest_Parms, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventRestartQuest_Parms, StartFromID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventRestartQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventRestartQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_StartFromID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Restart a given quest. Will only actually restart the quest if it has been started.\n\x09If the quest hasn't started,  this will do nothing.\n\n\x09@param QuestAsset The quest to use\n\x09@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest its default start state\n\n\x09@return Whether or not the quest was restarted or not\n\x09*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Restart a given quest. Will only actually restart the quest if it has been started.\nIf the quest hasn't started,  this will do nothing.\n\n@param QuestAsset The quest to use\n@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest its default start state\n\n@return Whether or not the quest was restarted or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "RestartQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NarrativeComponent_eventRestartQuest_Parms), Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_RestartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_Save_Statics
	{
		struct NarrativeComponent_eventSave_Parms
		{
			FString SaveName;
			int32 Slot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventSave_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventSave_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot_MetaData)) };
	void Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NarrativeComponent_eventSave_Parms), &Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Save_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**Save every quest we've done, and ever task the player has ever completed\n\x09* \n\x09* This is very efficient, even if the player has completed millions of tasks save files should be really small, \n\x09* since narrative just saves the task and the number of times it was done, rather than millions of a task.\n\x09* \n\x09@param SaveName the name of the save game. */" },
		{ "CPP_Default_SaveName", "NarrativeSaveData" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Save every quest we've done, and ever task the player has ever completed\n\nThis is very efficient, even if the player has completed millions of tasks save files should be really small,\nsince narrative just saves the task and the number of times it was done, rather than millions of a task.\n\n       @param SaveName the name of the save game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "Save", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NarrativeComponent_eventSave_Parms), Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics
	{
		struct NarrativeComponent_eventSaveComplete_Parms
		{
			FString SaveName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventSaveComplete_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "SaveComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NarrativeComponent_eventSaveComplete_Parms), Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_SaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics
	{
		struct NarrativeComponent_eventSelectDialogueOption_Parms
		{
			UDialogueNode_Player* Option;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Option;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventSelectDialogueOption_Parms, Option), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Selects a dialogue option. Will update the dialogue and automatically start playing the next bit of dialogue*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Selects a dialogue option. Will update the dialogue and automatically start playing the next bit of dialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "SelectDialogueOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::NarrativeComponent_eventSelectDialogueOption_Parms), Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerExitDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID = { "OptionID", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventServerSelectDialogueOption_Parms, OptionID), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Tell the server we've selected a dialogue option*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Tell the server we've selected a dialogue option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerSelectDialogueOption", nullptr, nullptr, sizeof(NarrativeComponent_eventServerSelectDialogueOption_Parms), Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics
	{
		struct NarrativeComponent_eventSetSharedNarrativeComponent_Parms
		{
			UNarrativeComponent* NewSharedNarrativeComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSharedNarrativeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSharedNarrativeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::NewProp_NewSharedNarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::NewProp_NewSharedNarrativeComponent = { "NewSharedNarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeComponent_eventSetSharedNarrativeComponent_Parms, NewSharedNarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::NewProp_NewSharedNarrativeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::NewProp_NewSharedNarrativeComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::NewProp_NewSharedNarrativeComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shared Quests" },
		{ "Comment", "/**Set this players shared component. Any tasks the player completes will be forwarded to the shared component.\n\x09\n\x09This means if you complete a find like \"FindItem_Sword\", your entire teams shared component will also have that task completed. \n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Set this players shared component. Any tasks the player completes will be forwarded to the shared component.\n\n       This means if you complete a find like \"FindItem_Sword\", your entire teams shared component will also have that task completed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "SetSharedNarrativeComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::NarrativeComponent_eventSetSharedNarrativeComponent_Parms), Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* Exit the dialogue, but authoritatively check we're allowed to before doing so. \n\x09* \n\x09@return Whether the dialogue was successfully exited\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Exit the dialogue, but authoritatively check we're allowed to before doing so.\n\n       @return Whether the dialogue was successfully exited" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TryExitDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeComponent);
	UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister()
	{
		return UNarrativeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNarrativeTaskCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNarrativeTaskCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestStepCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestStepCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestNewState_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestNewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestTaskProgressMade_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestTaskProgressMade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestTaskCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestTaskCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestSucceeded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestSucceeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestForgotten_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestForgotten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestRestarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestRestarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginSave_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginLoad_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueBegan_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueBegan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueRepliesAvailable_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueRepliesAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCDialogueLineStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCDialogueLineStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCDialogueLineFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCDialogueLineFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDialogueLineStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDialogueLineStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDialogueLineFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDialogueLineFinished;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingUpdateList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingUpdateList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingUpdateList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDialogue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MasterTaskList_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterTaskList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterTaskList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MasterTaskList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedNarrativeComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedNarrativeComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginDialogue, "BeginDialogue" }, // 3736604896
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginLoad, "BeginLoad" }, // 2964796917
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginQuest, "BeginQuest" }, // 1738592716
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginSave, "BeginSave" }, // 1854858077
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue, "ClientBeginDialogue" }, // 1654624883
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue, "ClientExitDialogue" }, // 1957411828
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave, "ClientReceiveSave" }, // 3356942454
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk, "ClientRecieveDialogueChunk" }, // 2618849052
		{ &Z_Construct_UFunction_UNarrativeComponent_DeleteSave, "DeleteSave" }, // 3203039633
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueBegan, "DialogueBegan" }, // 576670233
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueFinished, "DialogueFinished" }, // 209990981
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished, "DialogueLineFinished" }, // 608712897
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted, "DialogueLineStarted" }, // 1077396901
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable, "DialogueRepliesAvailable" }, // 277943989
		{ &Z_Construct_UFunction_UNarrativeComponent_ForgetQuest, "ForgetQuest" }, // 309646828
		{ &Z_Construct_UFunction_UNarrativeComponent_GetAllQuests, "GetAllQuests" }, // 2076038276
		{ &Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests, "GetFailedQuests" }, // 3663150863
		{ &Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests, "GetInProgressQuests" }, // 3061137849
		{ &Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted, "GetNumberOfTimesTaskWasCompleted" }, // 1598441157
		{ &Z_Construct_UFunction_UNarrativeComponent_GetOwningController, "GetOwningController" }, // 1873334794
		{ &Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn, "GetOwningPawn" }, // 393025743
		{ &Z_Construct_UFunction_UNarrativeComponent_GetQuest, "GetQuest" }, // 3405809494
		{ &Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests, "GetSucceededQuests" }, // 1146649161
		{ &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask, "HasCompletedTask" }, // 1266493894
		{ &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTaskInQuest, "HasCompletedTaskInQuest" }, // 2489969145
		{ &Z_Construct_UFunction_UNarrativeComponent_IsInDialogue, "IsInDialogue" }, // 4249521634
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed, "IsQuestFailed" }, // 61195056
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished, "IsQuestFinished" }, // 3270125313
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress, "IsQuestInProgress" }, // 1083046047
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished, "IsQuestStartedOrFinished" }, // 3861826546
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded, "IsQuestSucceeded" }, // 3186924563
		{ &Z_Construct_UFunction_UNarrativeComponent_Load, "Load" }, // 177882547
		{ &Z_Construct_UFunction_UNarrativeComponent_LoadComplete, "LoadComplete" }, // 220711653
		{ &Z_Construct_UFunction_UNarrativeComponent_NarrativeTaskCompleted, "NarrativeTaskCompleted" }, // 2379355749
		{ &Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList, "OnRep_PendingUpdateList" }, // 982595484
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestFailed, "QuestFailed" }, // 2974196166
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestForgotten, "QuestForgotten" }, // 21930536
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestNewState, "QuestNewState" }, // 1818799821
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestStarted, "QuestStarted" }, // 4160506477
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestStepCompleted, "QuestStepCompleted" }, // 3479272543
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded, "QuestSucceeded" }, // 6754853
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted, "QuestTaskCompleted" }, // 1828774999
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade, "QuestTaskProgressMade" }, // 4136374089
		{ &Z_Construct_UFunction_UNarrativeComponent_RestartQuest, "RestartQuest" }, // 14320292
		{ &Z_Construct_UFunction_UNarrativeComponent_Save, "Save" }, // 2650844705
		{ &Z_Construct_UFunction_UNarrativeComponent_SaveComplete, "SaveComplete" }, // 3875155141
		{ &Z_Construct_UFunction_UNarrativeComponent_SelectDialogueOption, "SelectDialogueOption" }, // 1105462210
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerExitDialogue, "ServerExitDialogue" }, // 1300942232
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption, "ServerSelectDialogueOption" }, // 1058017506
		{ &Z_Construct_UFunction_UNarrativeComponent_SetSharedNarrativeComponent, "SetSharedNarrativeComponent" }, // 570886656
		{ &Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue, "TryExitDialogue" }, // 3849992289
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\nNarrative Component acts as the connection to the Narrative system and allows you to start quests, complete Tasks, etc.\nIn order to use Narrative you must add a Narrative Component to your Pawn/Controller/PlayerState etc. Like you would an AbilitySystemComponent\n*/" },
		{ "DisplayName", "Narrative Component" },
		{ "IncludePath", "NarrativeComponent.h" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Narrative Component acts as the connection to the Narrative system and allows you to start quests, complete Tasks, etc.\nIn order to use Narrative you must add a Narrative Component to your Pawn/Controller/PlayerState etc. Like you would an AbilitySystemComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a narrative action is completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a narrative action is completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeTaskCompleted = { "OnNarrativeTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnNarrativeTaskCompleted), Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeTaskCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeTaskCompleted_MetaData)) }; // 115604134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStepCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective has been completed.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest objective has been completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStepCompleted = { "OnQuestStepCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestStepCompleted), Z_Construct_UDelegateFunction_Narrative_OnQuestStepCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStepCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStepCompleted_MetaData)) }; // 672094039
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective is updated and we've received a new objective*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest objective is updated and we've received a new objective" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState = { "OnQuestNewState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestNewState), Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState_MetaData)) }; // 1044799670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressMade_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a quest step has made progress. ie 6 out of 10 wolves killed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest task in a quest step has made progress. ie 6 out of 10 wolves killed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressMade = { "OnQuestTaskProgressMade", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestTaskProgressMade), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressMade__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressMade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressMade_MetaData)) }; // 3802722025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a step is completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest task in a step is completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted = { "OnQuestTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestTaskCompleted), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted_MetaData)) }; // 656863117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is completed.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded = { "OnQuestSucceeded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestSucceeded), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded_MetaData)) }; // 171928054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is failed.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is failed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed = { "OnQuestFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestFailed), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed_MetaData)) }; // 2536729703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is started.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted = { "OnQuestStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestStarted), Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted_MetaData)) }; // 2939341876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is forgotten.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is forgotten." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten = { "OnQuestForgotten", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestForgotten), Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten_MetaData)) }; // 3383778632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is restarted.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is restarted." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted = { "OnQuestRestarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestRestarted), Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted_MetaData)) }; // 2841311744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a save has begun*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a save has begun" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave = { "OnBeginSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnBeginSave), Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave_MetaData)) }; // 567704079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a save has completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a save has completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete = { "OnSaveComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnSaveComplete), Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete_MetaData)) }; // 2504719894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a load has begun*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a load has begun" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad = { "OnBeginLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnBeginLoad), Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad_MetaData)) }; // 2540502963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a load has completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a load has completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete = { "OnLoadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnLoadComplete), Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete_MetaData)) }; // 816134142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue starts*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan = { "OnDialogueBegan", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueBegan), Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan_MetaData)) }; // 2230951112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue has been finished for any reason*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue has been finished for any reason" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueFinished), Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished_MetaData)) }; // 175870421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when the NPC(s) have finished talking and the players replies are available*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when the NPC(s) have finished talking and the players replies are available" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable = { "OnDialogueRepliesAvailable", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueRepliesAvailable), Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable_MetaData)) }; // 1658881484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line starts*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted = { "OnNPCDialogueLineStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnNPCDialogueLineStarted), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted_MetaData)) }; // 1107407790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line finishes*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line finishes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished = { "OnNPCDialogueLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnNPCDialogueLineFinished), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished_MetaData)) }; // 3638649658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line starts*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted = { "OnPlayerDialogueLineStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnPlayerDialogueLineStarted), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted_MetaData)) }; // 2208147085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line finishes*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line finishes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished = { "OnPlayerDialogueLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OnPlayerDialogueLineFinished), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished_MetaData)) }; // 2653385832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_Inner = { "PendingUpdateList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNarrativeUpdate, METADATA_PARAMS(nullptr, 0) }; // 503939649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_MetaData[] = {
		{ "Comment", "//Server replicates these back to client so client can keep its state machine in sync with the servers\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Server replicates these back to client so client can keep its state machine in sync with the servers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList = { "PendingUpdateList", "OnRep_PendingUpdateList", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, PendingUpdateList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_MetaData)) }; // 503939649
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_Inner = { "QuestList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//A list of all the quests the player is involved in\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "A list of all the quests the player is involved in" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList = { "QuestList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, QuestList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//Current dialogue the player is in \n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Current dialogue the player is in" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, CurrentDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_ValueProp = { "MasterTaskList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_Key_KeyProp = { "MasterTaskList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/*A map of every narrative task the player has ever completed, where the key is the amount of times the action has been completed\n\x09""a TMap means we can very efficiently track large numbers of actions, such as shooting where the player may shoot a gun thousands of times */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "A map of every narrative task the player has ever completed, where the key is the amount of times the action has been completed\n       a TMap means we can very efficiently track large numbers of actions, such as shooting where the player may shoot a gun thousands of times" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList = { "MasterTaskList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, MasterTaskList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SharedNarrativeComp_MetaData[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/** Pointer to an optional shared narrative component. If set solo completed tasks get forwarded to this shared comp. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Pointer to an optional shared narrative component. If set solo completed tasks get forwarded to this shared comp." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SharedNarrativeComp = { "SharedNarrativeComp", nullptr, (EPropertyFlags)0x001000000008003c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, SharedNarrativeComp), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SharedNarrativeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SharedNarrativeComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC_MetaData[] = {
		{ "Comment", "//We cache the OwningController, we won't cache pawn as this might change\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "We cache the OwningController, we won't cache pawn as this might change" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeComponent, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeTaskCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStepCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressMade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SharedNarrativeComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeComponent_Statics::ClassParams = {
		&UNarrativeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeComponent()
	{
		if (!Z_Registration_Info_UClass_UNarrativeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeComponent.OuterSingleton, Z_Construct_UClass_UNarrativeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeComponent.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeComponent>()
	{
		return UNarrativeComponent::StaticClass();
	}

	void UNarrativeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PendingUpdateList(TEXT("PendingUpdateList"));
		static const FName Name_SharedNarrativeComp(TEXT("SharedNarrativeComp"));

		const bool bIsValid = true
			&& Name_PendingUpdateList == ClassReps[(int32)ENetFields_Private::PendingUpdateList].Property->GetFName()
			&& Name_SharedNarrativeComp == ClassReps[(int32)ENetFields_Private::SharedNarrativeComp].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::EnumInfo[] = {
		{ EUpdateType_StaticEnum, TEXT("EUpdateType"), &Z_Registration_Info_UEnum_EUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2406096204U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ScriptStructInfo[] = {
		{ FDialogueInfo::StaticStruct, Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewStructOps, TEXT("DialogueInfo"), &Z_Registration_Info_UScriptStruct_DialogueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueInfo), 2379768089U) },
		{ FNarrativeUpdate::StaticStruct, Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewStructOps, TEXT("NarrativeUpdate"), &Z_Registration_Info_UScriptStruct_NarrativeUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeUpdate), 503939649U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeComponent, UNarrativeComponent::StaticClass, TEXT("UNarrativeComponent"), &Z_Registration_Info_UClass_UNarrativeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeComponent), 1422393155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_835888698(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
