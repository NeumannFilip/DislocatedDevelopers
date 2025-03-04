// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/QuestSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSM() {}
// Cross Module References
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EStateQuestResult();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeNodeBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateQuestResult;
	static UEnum* EStateQuestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateQuestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateQuestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EStateQuestResult, Z_Construct_UPackage__Script_Narrative(), TEXT("EStateQuestResult"));
		}
		return Z_Registration_Info_UEnum_EStateQuestResult.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EStateQuestResult>()
	{
		return EStateQuestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EStateQuestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::Enumerators[] = {
		{ "EStateQuestResult::NotAccepted", (int64)EStateQuestResult::NotAccepted },
		{ "EStateQuestResult::Accepted", (int64)EStateQuestResult::Accepted },
		{ "EStateQuestResult::Rejected", (int64)EStateQuestResult::Rejected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::Enum_MetaDataParams[] = {
		{ "Accepted.Comment", "// Success - state is an accept state\n" },
		{ "Accepted.Name", "EStateQuestResult::Accepted" },
		{ "Accepted.ToolTip", "Success - state is an accept state" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Used for checking the result of our state machine.\n*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "NotAccepted.Comment", "// Implicit fail - The state is not marked as accept\n" },
		{ "NotAccepted.Name", "EStateQuestResult::NotAccepted" },
		{ "NotAccepted.ToolTip", "Implicit fail - The state is not marked as accept" },
		{ "Rejected.Comment", "// Explicit fail - state is marked as failure\n" },
		{ "Rejected.Name", "EStateQuestResult::Rejected" },
		{ "Rejected.ToolTip", "Explicit fail - state is marked as failure" },
		{ "ToolTip", "Used for checking the result of our state machine." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EStateQuestResult",
		"EStateQuestResult",
		Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Narrative_EStateQuestResult()
	{
		if (!Z_Registration_Info_UEnum_EStateQuestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateQuestResult.InnerSingleton, Z_Construct_UEnum_Narrative_EStateQuestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateQuestResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTask;
class UScriptStruct* FQuestTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTask, Z_Construct_UPackage__Script_Narrative(), TEXT("QuestTask"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FQuestTask>()
{
	return FQuestTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Argument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetroactive_MetaData[];
#endif
		static void NewProp_bRetroactive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetroactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A quest is a series of state machines, branches are taken by completing all the FNarrativeTasks in that branch.\n" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "A quest is a series of state machines, branches are taken by completing all the FNarrativeTasks in that branch." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The event the player needs to do to complete this task*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The event the player needs to do to complete this task" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTask, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The reference to be passed into the action*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The reference to be passed into the action" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTask, Argument), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "1" },
		{ "Comment", "/**The amount of times we need to complete this action to move on to the next part of the quest*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The amount of times we need to complete this action to move on to the next part of the quest" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTask, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Should this task be hidden from the player (Great for quests with hidden options)*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Should this task be hidden from the player (Great for quests with hidden options)" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** SINGLE PLAYER ONLY: Should this task be optional?*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "SINGLE PLAYER ONLY: Should this task be optional?" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** SINGLE PLAYER ONLY: Should it count if the player has already done this task in the past?*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "SINGLE PLAYER ONLY: Should it count if the player has already done this task in the past?" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->bRetroactive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive = { "bRetroactive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Description for this task. For example \"Kill 10 Goblins\", \"Obtain an Iron Sword\", \"Find the briefcase\", etc... */" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Description for this task. For example \"Kill 10 Goblins\", \"Obtain an Iron Sword\", \"Find the briefcase\", etc..." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription = { "TaskDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTask, TaskDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTask, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"QuestTask",
		sizeof(FQuestTask),
		alignof(FQuestTask),
		Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTask()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton, Z_Construct_UScriptStruct_FQuestTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateMachineResult;
class UScriptStruct* FStateMachineResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateMachineResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateMachineResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineResult, Z_Construct_UPackage__Script_Narrative(), TEXT("StateMachineResult"));
	}
	return Z_Registration_Info_UScriptStruct_StateMachineResult.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FStateMachineResult>()
{
	return FStateMachineResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateMachineResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompletionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompletionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinalState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the result of running a state machine. Contains useful info for checking state machine result.\n*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Represents the result of running a state machine. Contains useful info for checking state machine result." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_MetaData[] = {
		{ "Comment", "/**Allows us to check how the machine ended*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Allows us to check how the machine ended" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType = { "CompletionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateMachineResult, CompletionType), Z_Construct_UEnum_Narrative_EStateQuestResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_MetaData)) }; // 2933899444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_Branch_MetaData[] = {
		{ "Comment", "/**The branch we took to get to finalstate*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The branch we took to get to finalstate" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateMachineResult, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_Branch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_Branch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState_MetaData[] = {
		{ "Comment", "/**The state that the machine ended on*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The state that the machine ended on" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState = { "FinalState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateMachineResult, FinalState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateMachineResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_Branch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"StateMachineResult",
		sizeof(FStateMachineResult),
		alignof(FStateMachineResult),
		Z_Construct_UScriptStruct_FStateMachineResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult()
	{
		if (!Z_Registration_Info_UScriptStruct_StateMachineResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateMachineResult.InnerSingleton, Z_Construct_UScriptStruct_FStateMachineResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateMachineResult.InnerSingleton;
	}
	void UQuestNode::StaticRegisterNativesUQuestNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestNode);
	UClass* Z_Construct_UClass_UQuestNode_NoRegister()
	{
		return UQuestNode::StaticClass();
	}
	struct Z_Construct_UClass_UQuestNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastExecTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningQuest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**Base class for states and branches in the quests state machine*/" },
		{ "IncludePath", "QuestSM.h" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Base class for states and branches in the quests state machine" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Description for this quest node. For example \"Kill 10 Goblins\", \"Find the Gemstone\", or \"I've found the Gemstone, I need to return to King Edward\" */" },
		{ "DisplayAfter", "ID" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Description for this quest node. For example \"Kill 10 Goblins\", \"Find the Gemstone\", or \"I've found the Gemstone, I need to return to King Edward\"" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNode, Description), METADATA_PARAMS(Z_Construct_UClass_UQuestNode_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::NewProp_LastExecTime_MetaData[] = {
		{ "Comment", "//TODO can probably remove this. Last time we went through this branch or state. Used for PIE debugging\n" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "TODO can probably remove this. Last time we went through this branch or state. Used for PIE debugging" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_LastExecTime = { "LastExecTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNode, LastExecTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UQuestNode_Statics::NewProp_LastExecTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::NewProp_LastExecTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest_MetaData[] = {
		{ "Comment", "//The quest object that owns this node. \n" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The quest object that owns this node." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest = { "OwningQuest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNode, OwningQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_LastExecTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestNode_Statics::ClassParams = {
		&UQuestNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestNode()
	{
		if (!Z_Registration_Info_UClass_UQuestNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestNode.OuterSingleton, Z_Construct_UClass_UQuestNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestNode.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestNode>()
	{
		return UQuestNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestNode);
	struct Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnStateReachedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UQuestState::StaticRegisterNativesUQuestState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestState);
	UClass* Z_Construct_UClass_UQuestState_NoRegister()
	{
		return UQuestState::StaticClass();
	}
	struct Z_Construct_UClass_UQuestState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateReached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateReached;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompletionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompletionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSM.h" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_MetaData[] = {
		{ "Category", "Quest State" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestState, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::NewProp_OnStateReached_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_OnStateReached = { "OnStateReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestState, OnStateReached), Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestState_Statics::NewProp_OnStateReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::NewProp_OnStateReached_MetaData)) }; // 127042827
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType_MetaData[] = {
		{ "Category", "Quest State" },
		{ "Comment", "/**If input runs out on this state, this is how the result will be interpreted.*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "If input runs out on this state, this is how the result will be interpreted." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType = { "CompletionType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestState, CompletionType), Z_Construct_UEnum_Narrative_EStateQuestResult, METADATA_PARAMS(Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType_MetaData)) }; // 2933899444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_OnStateReached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_CompletionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestState_Statics::ClassParams = {
		&UQuestState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestState()
	{
		if (!Z_Registration_Info_UClass_UQuestState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestState.OuterSingleton, Z_Construct_UClass_UQuestState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestState.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestState>()
	{
		return UQuestState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestState);
	void UQuestBranch::StaticRegisterNativesUQuestBranch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBranch);
	UClass* Z_Construct_UClass_UQuestBranch_NoRegister()
	{
		return UQuestBranch::StaticClass();
	}
	struct Z_Construct_UClass_UQuestBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddMultipleTasks_MetaData[];
#endif
		static void NewProp_bAddMultipleTasks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddMultipleTasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSM.h" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_Task_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The task the player needs to complete */" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The task the player needs to complete" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBranch, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UClass_UQuestBranch_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks_MetaData[] = {
		{ "Comment", "/**Should we have more than one task? */" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Should we have more than one task?" },
	};
#endif
	void Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks_SetBit(void* Obj)
	{
		((UQuestBranch*)Obj)->bAddMultipleTasks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks = { "bAddMultipleTasks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestBranch), &Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Tasks to complete for this branch to be taken*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Tasks to complete for this branch to be taken" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBranch, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Should this branch be hidden from the player on the narrative demo UI (Great for quests with hidden options that we want to be part\n\x09of the quest logic, but we don't want the UI to show)*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Should this branch be hidden from the player on the narrative demo UI (Great for quests with hidden options that we want to be part\n       of the quest logic, but we don't want the UI to show)" },
	};
#endif
	void Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UQuestBranch*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestBranch), &Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**State where we will go if this branch is taken. Branch will be ignored if this is null*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "State where we will go if this branch is taken. Branch will be ignored if this is null" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState = { "DestinationState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBranch, DestinationState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_bAddMultipleTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_Tasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBranch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBranch_Statics::ClassParams = {
		&UQuestBranch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestBranch()
	{
		if (!Z_Registration_Info_UClass_UQuestBranch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBranch.OuterSingleton, Z_Construct_UClass_UQuestBranch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestBranch.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestBranch>()
	{
		return UQuestBranch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBranch);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::EnumInfo[] = {
		{ EStateQuestResult_StaticEnum, TEXT("EStateQuestResult"), &Z_Registration_Info_UEnum_EStateQuestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2933899444U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ScriptStructInfo[] = {
		{ FQuestTask::StaticStruct, Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps, TEXT("QuestTask"), &Z_Registration_Info_UScriptStruct_QuestTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTask), 3308170920U) },
		{ FStateMachineResult::StaticStruct, Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewStructOps, TEXT("StateMachineResult"), &Z_Registration_Info_UScriptStruct_StateMachineResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateMachineResult), 4056786523U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestNode, UQuestNode::StaticClass, TEXT("UQuestNode"), &Z_Registration_Info_UClass_UQuestNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestNode), 679907276U) },
		{ Z_Construct_UClass_UQuestState, UQuestState::StaticClass, TEXT("UQuestState"), &Z_Registration_Info_UClass_UQuestState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestState), 3255101910U) },
		{ Z_Construct_UClass_UQuestBranch, UQuestBranch::StaticClass, TEXT("UQuestBranch"), &Z_Registration_Info_UClass_UQuestBranch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBranch), 648236047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_2522678842(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
