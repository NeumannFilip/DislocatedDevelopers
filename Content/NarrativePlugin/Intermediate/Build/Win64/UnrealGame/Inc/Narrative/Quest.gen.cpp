// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EQuestCompletion();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EQuestProgress();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestCompletion;
	static UEnum* EQuestCompletion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EQuestCompletion, Z_Construct_UPackage__Script_Narrative(), TEXT("EQuestCompletion"));
		}
		return Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EQuestCompletion>()
	{
		return EQuestCompletion_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EQuestCompletion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enumerators[] = {
		{ "EQuestCompletion::QC_NotStarted", (int64)EQuestCompletion::QC_NotStarted },
		{ "EQuestCompletion::QC_Started", (int64)EQuestCompletion::QC_Started },
		{ "EQuestCompletion::QC_Succeded", (int64)EQuestCompletion::QC_Succeded },
		{ "EQuestCompletion::QC_Failed", (int64)EQuestCompletion::QC_Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents the state of a particular quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "QC_Failed.Name", "EQuestCompletion::QC_Failed" },
		{ "QC_NotStarted.Name", "EQuestCompletion::QC_NotStarted" },
		{ "QC_Started.Name", "EQuestCompletion::QC_Started" },
		{ "QC_Succeded.Name", "EQuestCompletion::QC_Succeded" },
		{ "ToolTip", "Represents the state of a particular quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EQuestCompletion",
		"EQuestCompletion",
		Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Narrative_EQuestCompletion()
	{
		if (!Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton, Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestProgress;
	static UEnum* EQuestProgress_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestProgress.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestProgress.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EQuestProgress, Z_Construct_UPackage__Script_Narrative(), TEXT("EQuestProgress"));
		}
		return Z_Registration_Info_UEnum_EQuestProgress.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EQuestProgress>()
	{
		return EQuestProgress_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EQuestProgress_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EQuestProgress_Statics::Enumerators[] = {
		{ "EQuestProgress::QP_NoChange", (int64)EQuestProgress::QP_NoChange },
		{ "EQuestProgress::QP_MadeProgress", (int64)EQuestProgress::QP_MadeProgress },
		{ "EQuestProgress::QP_Updated", (int64)EQuestProgress::QP_Updated },
		{ "EQuestProgress::QP_Failed", (int64)EQuestProgress::QP_Failed },
		{ "EQuestProgress::QP_Succeeded", (int64)EQuestProgress::QP_Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EQuestProgress_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//Represents what happened after we completed a narrative task and updated a quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "QP_Failed.Comment", "//Updated the quest to the next step\n" },
		{ "QP_Failed.Name", "EQuestProgress::QP_Failed" },
		{ "QP_Failed.ToolTip", "Updated the quest to the next step" },
		{ "QP_MadeProgress.Comment", "//Didn't affect the quest at all\n" },
		{ "QP_MadeProgress.Name", "EQuestProgress::QP_MadeProgress" },
		{ "QP_MadeProgress.ToolTip", "Didn't affect the quest at all" },
		{ "QP_NoChange.Comment", "/**When we complete a task, it either:*/" },
		{ "QP_NoChange.Name", "EQuestProgress::QP_NoChange" },
		{ "QP_NoChange.ToolTip", "When we complete a task, it either:" },
		{ "QP_Succeeded.Comment", "//Failed the quest\n" },
		{ "QP_Succeeded.Name", "EQuestProgress::QP_Succeeded" },
		{ "QP_Succeeded.ToolTip", "Failed the quest" },
		{ "QP_Updated.Comment", "//Made progress, but didn't update the quest to the next step\n" },
		{ "QP_Updated.Name", "EQuestProgress::QP_Updated" },
		{ "QP_Updated.ToolTip", "Made progress, but didn't update the quest to the next step" },
		{ "ToolTip", "Represents what happened after we completed a narrative task and updated a quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EQuestProgress_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EQuestProgress",
		"EQuestProgress",
		Z_Construct_UEnum_Narrative_EQuestProgress_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EQuestProgress_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Narrative_EQuestProgress_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EQuestProgress_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Narrative_EQuestProgress()
	{
		if (!Z_Registration_Info_UEnum_EQuestProgress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestProgress.InnerSingleton, Z_Construct_UEnum_Narrative_EQuestProgress_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestProgress.InnerSingleton;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestCompletion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EQuestCompletion*)Z_Param__Result=P_THIS->GetQuestCompletion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuestNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnLoadComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadComplete(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnSaveComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveComplete(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnBeginLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginLoad(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnBeginSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginSave(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestStepCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStepCompleted(Z_Param_Quest,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestTaskProgressMade)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequiredProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskProgressMade(Z_Param_Quest,Z_Param_Out_Task,Z_Param_Step,Z_Param_CurrentProgress,Z_Param_RequiredProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestNewState)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestNewState(Z_Param_Quest,Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestSucceeded)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestSucceededMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestSucceeded(Z_Param_Quest,Z_Param_Out_QuestSucceededMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestFailed)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestFailedMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestFailed(Z_Param_Quest,Z_Param_Out_QuestFailedMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestStarted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStarted(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetQuestDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetQuestName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetPawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetOwningNarrativeComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=P_THIS->GetOwningNarrativeComponent();
		P_NATIVE_END;
	}
	static FName NAME_UQuest_BPOnBeginLoad = FName(TEXT("BPOnBeginLoad"));
	void UQuest::BPOnBeginLoad(const FString& SaveName)
	{
		Quest_eventBPOnBeginLoad_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnBeginLoad),&Parms);
	}
	static FName NAME_UQuest_BPOnBeginSave = FName(TEXT("BPOnBeginSave"));
	void UQuest::BPOnBeginSave(const FString& SaveName)
	{
		Quest_eventBPOnBeginSave_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnBeginSave),&Parms);
	}
	static FName NAME_UQuest_BPOnLoadComplete = FName(TEXT("BPOnLoadComplete"));
	void UQuest::BPOnLoadComplete(const FString& SaveName)
	{
		Quest_eventBPOnLoadComplete_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnLoadComplete),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestFailed = FName(TEXT("BPOnQuestFailed"));
	void UQuest::BPOnQuestFailed(const UQuest* Quest, FText const& QuestFailedMessage)
	{
		Quest_eventBPOnQuestFailed_Parms Parms;
		Parms.Quest=Quest;
		Parms.QuestFailedMessage=QuestFailedMessage;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestFailed),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestNewState = FName(TEXT("BPOnQuestNewState"));
	void UQuest::BPOnQuestNewState(UQuest* Quest, const UQuestState* NewState)
	{
		Quest_eventBPOnQuestNewState_Parms Parms;
		Parms.Quest=Quest;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestNewState),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestStarted = FName(TEXT("BPOnQuestStarted"));
	void UQuest::BPOnQuestStarted(const UQuest* Quest)
	{
		Quest_eventBPOnQuestStarted_Parms Parms;
		Parms.Quest=Quest;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestStarted),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestStepCompleted = FName(TEXT("BPOnQuestStepCompleted"));
	void UQuest::BPOnQuestStepCompleted(const UQuest* Quest, const UQuestBranch* Step)
	{
		Quest_eventBPOnQuestStepCompleted_Parms Parms;
		Parms.Quest=Quest;
		Parms.Step=Step;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestStepCompleted),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestSucceeded = FName(TEXT("BPOnQuestSucceeded"));
	void UQuest::BPOnQuestSucceeded(const UQuest* Quest, FText const& QuestSucceededMessage)
	{
		Quest_eventBPOnQuestSucceeded_Parms Parms;
		Parms.Quest=Quest;
		Parms.QuestSucceededMessage=QuestSucceededMessage;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestSucceeded),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestTaskProgressMade = FName(TEXT("BPOnQuestTaskProgressMade"));
	void UQuest::BPOnQuestTaskProgressMade(const UQuest* Quest, FQuestTask const& Task, const UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress)
	{
		Quest_eventBPOnQuestTaskProgressMade_Parms Parms;
		Parms.Quest=Quest;
		Parms.Task=Task;
		Parms.Step=Step;
		Parms.CurrentProgress=CurrentProgress;
		Parms.RequiredProgress=RequiredProgress;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestTaskProgressMade),&Parms);
	}
	static FName NAME_UQuest_BPOnSaveComplete = FName(TEXT("BPOnSaveComplete"));
	void UQuest::BPOnSaveComplete(const FString& SaveName)
	{
		Quest_eventBPOnSaveComplete_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnSaveComplete),&Parms);
	}
	static FName NAME_UQuest_GetTaskInitialProgress = FName(TEXT("GetTaskInitialProgress"));
	int32 UQuest::GetTaskInitialProgress(FQuestTask const& Task)
	{
		Quest_eventGetTaskInitialProgress_Parms Parms;
		Parms.Task=Task;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_GetTaskInitialProgress),&Parms);
		return Parms.ReturnValue;
	}
	void UQuest::StaticRegisterNativesUQuest()
	{
		UClass* Class = UQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodes", &UQuest::execGetNodes },
			{ "GetOwningNarrativeComponent", &UQuest::execGetOwningNarrativeComponent },
			{ "GetPawnOwner", &UQuest::execGetPawnOwner },
			{ "GetQuestCompletion", &UQuest::execGetQuestCompletion },
			{ "GetQuestDescription", &UQuest::execGetQuestDescription },
			{ "GetQuestName", &UQuest::execGetQuestName },
			{ "OnBeginLoad", &UQuest::execOnBeginLoad },
			{ "OnBeginSave", &UQuest::execOnBeginSave },
			{ "OnLoadComplete", &UQuest::execOnLoadComplete },
			{ "OnQuestFailed", &UQuest::execOnQuestFailed },
			{ "OnQuestNewState", &UQuest::execOnQuestNewState },
			{ "OnQuestStarted", &UQuest::execOnQuestStarted },
			{ "OnQuestStepCompleted", &UQuest::execOnQuestStepCompleted },
			{ "OnQuestSucceeded", &UQuest::execOnQuestSucceeded },
			{ "OnQuestTaskProgressMade", &UQuest::execOnQuestTaskProgressMade },
			{ "OnSaveComplete", &UQuest::execOnSaveComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnBeginLoad_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Begin Load" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnBeginLoad", nullptr, nullptr, sizeof(Quest_eventBPOnBeginLoad_Parms), Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnBeginLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnBeginLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnBeginSave_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Begin Save" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnBeginSave", nullptr, nullptr, sizeof(Quest_eventBPOnBeginSave_Parms), Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnBeginSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnBeginSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnLoadComplete_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Load Complete" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnLoadComplete", nullptr, nullptr, sizeof(Quest_eventBPOnLoadComplete_Parms), Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Failed" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestFailed", nullptr, nullptr, sizeof(Quest_eventBPOnQuestFailed_Parms), Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest New State" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestNewState", nullptr, nullptr, sizeof(Quest_eventBPOnQuestNewState_Parms), Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Started" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestStarted", nullptr, nullptr, sizeof(Quest_eventBPOnQuestStarted_Parms), Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestStepCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestStepCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Objective Completed" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestStepCompleted", nullptr, nullptr, sizeof(Quest_eventBPOnQuestStepCompleted_Parms), Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Succeeded" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestSucceeded", nullptr, nullptr, sizeof(Quest_eventBPOnQuestSucceeded_Parms), Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics
	{
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressMade_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressMade_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressMade_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressMade_Parms, RequiredProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Objective Progress Made" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestTaskProgressMade", nullptr, nullptr, sizeof(Quest_eventBPOnQuestTaskProgressMade_Parms), Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventBPOnSaveComplete_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Save Complete" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnSaveComplete", nullptr, nullptr, sizeof(Quest_eventBPOnSaveComplete_Parms), Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_BPOnSaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnSaveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetNodes_Statics
	{
		struct Quest_eventGetNodes_Parms
		{
			TArray<UQuestNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_GetNodes_Statics::Quest_eventGetNodes_Parms), Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics
	{
		struct Quest_eventGetOwningNarrativeComponent_Parms
		{
			UNarrativeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetOwningNarrativeComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningNarrativeComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::Quest_eventGetOwningNarrativeComponent_Parms), Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetPawnOwner_Statics
	{
		struct Quest_eventGetPawnOwner_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetPawnOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::Quest_eventGetPawnOwner_Parms), Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics
	{
		struct Quest_eventGetQuestCompletion_Parms
		{
			EQuestCompletion ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetQuestCompletion_Parms, ReturnValue), Z_Construct_UEnum_Narrative_EQuestCompletion, METADATA_PARAMS(nullptr, 0) }; // 2351384912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "//Grab the completion of the quest \n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Grab the completion of the quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestCompletion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Quest_eventGetQuestCompletion_Parms), Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetQuestCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestDescription_Statics
	{
		struct Quest_eventGetQuestDescription_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetQuestDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Quest_eventGetQuestDescription_Parms), Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetQuestDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestName_Statics
	{
		struct Quest_eventGetQuestName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_GetQuestName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetQuestName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Quest_eventGetQuestName_Parms), Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetQuestName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Task;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetTaskInitialProgress_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_Task_MetaData)) }; // 3308170920
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetTaskInitialProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* All tasks start at 0 progress, but we might want to override that, for example if the task is find \n\x09""10 sticks, and the player already has 3, we would want to override the initial progress to be 3 instead of the default of 0*/" },
		{ "DisplayName", "Get Task Initial Progress" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "All tasks start at 0 progress, but we might want to override that, for example if the task is find\n      10 sticks, and the player already has 3, we would want to override the initial progress to be 3 instead of the default of 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetTaskInitialProgress", nullptr, nullptr, sizeof(Quest_eventGetTaskInitialProgress_Parms), Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_GetTaskInitialProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetTaskInitialProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnBeginLoad_Statics
	{
		struct Quest_eventOnBeginLoad_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnBeginLoad_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnBeginLoad", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::Quest_eventOnBeginLoad_Parms), Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnBeginLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnBeginLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnBeginSave_Statics
	{
		struct Quest_eventOnBeginSave_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_OnBeginSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnBeginSave_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnBeginSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnBeginSave_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnBeginSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnBeginSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnBeginSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnBeginSave_Statics::Quest_eventOnBeginSave_Parms), Z_Construct_UFunction_UQuest_OnBeginSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnBeginSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnBeginSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnBeginSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnBeginSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnBeginSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnLoadComplete_Statics
	{
		struct Quest_eventOnLoadComplete_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnLoadComplete_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnLoadComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::Quest_eventOnLoadComplete_Parms), Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestFailed_Statics
	{
		struct Quest_eventOnQuestFailed_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::Quest_eventOnQuestFailed_Parms), Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestNewState_Statics
	{
		struct Quest_eventOnQuestNewState_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestNewState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::Quest_eventOnQuestNewState_Parms), Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnQuestNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestStarted_Statics
	{
		struct Quest_eventOnQuestStarted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::Quest_eventOnQuestStarted_Parms), Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics
	{
		struct Quest_eventOnQuestStepCompleted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestStepCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestStepCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestStepCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::Quest_eventOnQuestStepCompleted_Parms), Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnQuestStepCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestStepCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics
	{
		struct Quest_eventOnQuestSucceeded_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestSucceeded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::Quest_eventOnQuestSucceeded_Parms), Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnQuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics
	{
		struct Quest_eventOnQuestTaskProgressMade_Parms
		{
			const UQuest* Quest;
			FQuestTask Task;
			const UQuestBranch* Step;
			int32 CurrentProgress;
			int32 RequiredProgress;
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressMade_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressMade_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressMade_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressMade_Parms, RequiredProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestTaskProgressMade", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::Quest_eventOnQuestTaskProgressMade_Parms), Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnSaveComplete_Statics
	{
		struct Quest_eventOnSaveComplete_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnSaveComplete_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnSaveComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::Quest_eventOnSaveComplete_Parms), Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnSaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnSaveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuest);
	UClass* Z_Construct_UClass_UQuest_NoRegister()
	{
		return UQuest::StaticClass();
	}
	struct Z_Construct_UClass_UQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestStartState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestStartState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousBranch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousBranch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestCompletion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestCompletion;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestActivities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActivities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestActivities;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReachedStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachedStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReachedStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuest_BPOnBeginLoad, "BPOnBeginLoad" }, // 2246848197
		{ &Z_Construct_UFunction_UQuest_BPOnBeginSave, "BPOnBeginSave" }, // 864222048
		{ &Z_Construct_UFunction_UQuest_BPOnLoadComplete, "BPOnLoadComplete" }, // 2283551780
		{ &Z_Construct_UFunction_UQuest_BPOnQuestFailed, "BPOnQuestFailed" }, // 1178285485
		{ &Z_Construct_UFunction_UQuest_BPOnQuestNewState, "BPOnQuestNewState" }, // 2469048402
		{ &Z_Construct_UFunction_UQuest_BPOnQuestStarted, "BPOnQuestStarted" }, // 860394885
		{ &Z_Construct_UFunction_UQuest_BPOnQuestStepCompleted, "BPOnQuestStepCompleted" }, // 1167646275
		{ &Z_Construct_UFunction_UQuest_BPOnQuestSucceeded, "BPOnQuestSucceeded" }, // 1275368418
		{ &Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressMade, "BPOnQuestTaskProgressMade" }, // 4084635229
		{ &Z_Construct_UFunction_UQuest_BPOnSaveComplete, "BPOnSaveComplete" }, // 3303261448
		{ &Z_Construct_UFunction_UQuest_GetNodes, "GetNodes" }, // 257226325
		{ &Z_Construct_UFunction_UQuest_GetOwningNarrativeComponent, "GetOwningNarrativeComponent" }, // 4216710567
		{ &Z_Construct_UFunction_UQuest_GetPawnOwner, "GetPawnOwner" }, // 3988148277
		{ &Z_Construct_UFunction_UQuest_GetQuestCompletion, "GetQuestCompletion" }, // 2489430712
		{ &Z_Construct_UFunction_UQuest_GetQuestDescription, "GetQuestDescription" }, // 1682321688
		{ &Z_Construct_UFunction_UQuest_GetQuestName, "GetQuestName" }, // 1567129127
		{ &Z_Construct_UFunction_UQuest_GetTaskInitialProgress, "GetTaskInitialProgress" }, // 2022703469
		{ &Z_Construct_UFunction_UQuest_OnBeginLoad, "OnBeginLoad" }, // 4137377149
		{ &Z_Construct_UFunction_UQuest_OnBeginSave, "OnBeginSave" }, // 799799929
		{ &Z_Construct_UFunction_UQuest_OnLoadComplete, "OnLoadComplete" }, // 3519083037
		{ &Z_Construct_UFunction_UQuest_OnQuestFailed, "OnQuestFailed" }, // 2743854794
		{ &Z_Construct_UFunction_UQuest_OnQuestNewState, "OnQuestNewState" }, // 2171073645
		{ &Z_Construct_UFunction_UQuest_OnQuestStarted, "OnQuestStarted" }, // 3271487941
		{ &Z_Construct_UFunction_UQuest_OnQuestStepCompleted, "OnQuestStepCompleted" }, // 3498680956
		{ &Z_Construct_UFunction_UQuest_OnQuestSucceeded, "OnQuestSucceeded" }, // 1271735661
		{ &Z_Construct_UFunction_UQuest_OnQuestTaskProgressMade, "OnQuestTaskProgressMade" }, // 1985452566
		{ &Z_Construct_UFunction_UQuest_OnSaveComplete, "OnSaveComplete" }, // 128728939
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The current state the player is at in this quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "The current state the player is at in this quest" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, CurrentState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, OwningComp), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestName), METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestDescription), METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The beginning state of this quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "The beginning state of this quest" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState = { "QuestStartState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestStartState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_States_MetaData[] = {
		{ "Comment", "//Holds all of the states in the quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Holds all of the states in the quest" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_States_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_Branches_MetaData[] = {
		{ "Comment", "//Holds all of the branches in the quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Holds all of the branches in the quest" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_Branches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_Branches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_PreviousBranch_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The branch that was taken to get to the current state\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "The branch that was taken to get to the current state" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_PreviousBranch = { "PreviousBranch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, PreviousBranch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_PreviousBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_PreviousBranch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_MetaData[] = {
		{ "Comment", "/**Current quest progress*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Current quest progress" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion = { "QuestCompletion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestCompletion), Z_Construct_UEnum_Narrative_EQuestCompletion, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_MetaData)) }; // 2351384912
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities_Inner = { "QuestActivities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities_MetaData[] = {
		{ "Comment", "/**All input for this quest*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "All input for this quest" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities = { "QuestActivities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestActivities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_Inner = { "ReachedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**All the states we've reached so far. Useful for a quest journal, where we need to show the player what they have done so far*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "All the states we've reached so far. Useful for a quest journal, where we need to show the player what they have done so far" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates = { "ReachedStates", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, ReachedStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_Branches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_PreviousBranch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestActivities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Statics::ClassParams = {
		&UQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuest()
	{
		if (!Z_Registration_Info_UClass_UQuest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuest.OuterSingleton, Z_Construct_UClass_UQuest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuest.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuest>()
	{
		return UQuest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::EnumInfo[] = {
		{ EQuestCompletion_StaticEnum, TEXT("EQuestCompletion"), &Z_Registration_Info_UEnum_EQuestCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2351384912U) },
		{ EQuestProgress_StaticEnum, TEXT("EQuestProgress"), &Z_Registration_Info_UEnum_EQuestProgress, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 578725897U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuest, UQuest::StaticClass, TEXT("UQuest"), &Z_Registration_Info_UClass_UQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuest), 771883966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_2306292430(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
