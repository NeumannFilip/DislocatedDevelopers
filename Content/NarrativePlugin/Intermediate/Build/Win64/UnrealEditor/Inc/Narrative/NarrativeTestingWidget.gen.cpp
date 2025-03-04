// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeTestingWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeTestingWidget() {}
// Cross Module References
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTestingWidget();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTestingWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics
	{
		struct NarrativeTestingWidget_eventDialogueLineFinished_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode* Node;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "DialogueLineFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::NarrativeTestingWidget_eventDialogueLineFinished_Parms), Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnPlayerDialogueLineFinished)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDialogueLineFinished(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnPlayerDialogueLineStarted)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDialogueLineStarted(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnNPCDialogueLineFinished)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UDialogueNode_NPC,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNPCDialogueLineFinished(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine,Z_Param_Out_Speaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnNPCDialogueLineStarted)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(UDialogueNode_NPC,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNPCDialogueLineStarted(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine,Z_Param_Out_Speaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnDialogueRepliesAvailable)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UDialogueNode_Player*,Z_Param_Out_PlayerReplies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueRepliesAvailable(Z_Param_Dialogue,Z_Param_Out_PlayerReplies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnDialogueFinished)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueFinished(Z_Param_Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnDialogueBegan)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueBegan(Z_Param_Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnDialogueUpdated)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_TARRAY_REF(UDialogueNode_NPC*,Z_Param_Out_NPCReplies);
		P_GET_TARRAY_REF(UDialogueNode_Player*,Z_Param_Out_PlayerReplies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueUpdated(Z_Param_Dialogue,Z_Param_Out_NPCReplies,Z_Param_Out_PlayerReplies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnLoadComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadComplete(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnSaveComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveComplete(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnBeginLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginLoad(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnBeginSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginSave(Z_Param_SaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestStepCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStepCompleted(Z_Param_Quest,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestTaskCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskCompleted(Z_Param_Quest,Z_Param_Out_Task,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestTaskProgressMade)
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
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestNewState)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestNewState(Z_Param_Quest,Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestSucceeded)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestSucceededMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestSucceeded(Z_Param_Quest,Z_Param_Out_QuestSucceededMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestFailed)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestFailedMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestFailed(Z_Param_Quest,Z_Param_Out_QuestFailedMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execOnQuestStarted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStarted(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTestingWidget::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	static FName NAME_UNarrativeTestingWidget_BPOnBeginLoad = FName(TEXT("BPOnBeginLoad"));
	void UNarrativeTestingWidget::BPOnBeginLoad(const FString& SaveName)
	{
		NarrativeTestingWidget_eventBPOnBeginLoad_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnBeginLoad),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnBeginSave = FName(TEXT("BPOnBeginSave"));
	void UNarrativeTestingWidget::BPOnBeginSave(const FString& SaveName)
	{
		NarrativeTestingWidget_eventBPOnBeginSave_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnBeginSave),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnDialogueBegan = FName(TEXT("BPOnDialogueBegan"));
	void UNarrativeTestingWidget::BPOnDialogueBegan(UDialogue* Dialogue)
	{
		NarrativeTestingWidget_eventBPOnDialogueBegan_Parms Parms;
		Parms.Dialogue=Dialogue;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnDialogueBegan),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnDialogueFinished = FName(TEXT("BPOnDialogueFinished"));
	void UNarrativeTestingWidget::BPOnDialogueFinished(UDialogue* Dialogue)
	{
		NarrativeTestingWidget_eventBPOnDialogueFinished_Parms Parms;
		Parms.Dialogue=Dialogue;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnDialogueFinished),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable = FName(TEXT("BPOnDialogueRepliesAvailable"));
	void UNarrativeTestingWidget::BPOnDialogueRepliesAvailable(UDialogue* Dialogue, TArray<UDialogueNode_Player*> const& PlayerReplies)
	{
		NarrativeTestingWidget_eventBPOnDialogueRepliesAvailable_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.PlayerReplies=PlayerReplies;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnDialogueUpdated = FName(TEXT("BPOnDialogueUpdated"));
	void UNarrativeTestingWidget::BPOnDialogueUpdated(UDialogue* Dialogue, TArray<UDialogueNode_NPC*> const& NPCReplies, TArray<UDialogueNode_Player*> const& PlayerReplies)
	{
		NarrativeTestingWidget_eventBPOnDialogueUpdated_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.NPCReplies=NPCReplies;
		Parms.PlayerReplies=PlayerReplies;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnDialogueUpdated),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnLoadComplete = FName(TEXT("BPOnLoadComplete"));
	void UNarrativeTestingWidget::BPOnLoadComplete(const FString& SaveName)
	{
		NarrativeTestingWidget_eventBPOnLoadComplete_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnLoadComplete),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished = FName(TEXT("BPOnNPCDialogueLineFinished"));
	void UNarrativeTestingWidget::BPOnNPCDialogueLineFinished(UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
	{
		NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		Parms.Speaker=Speaker;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted = FName(TEXT("BPOnNPCDialogueLineStarted"));
	void UNarrativeTestingWidget::BPOnNPCDialogueLineStarted(UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
	{
		NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		Parms.Speaker=Speaker;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished = FName(TEXT("BPOnPlayerDialogueLineFinished"));
	void UNarrativeTestingWidget::BPOnPlayerDialogueLineFinished(UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
	{
		NarrativeTestingWidget_eventBPOnPlayerDialogueLineFinished_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted = FName(TEXT("BPOnPlayerDialogueLineStarted"));
	void UNarrativeTestingWidget::BPOnPlayerDialogueLineStarted(UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
	{
		NarrativeTestingWidget_eventBPOnPlayerDialogueLineStarted_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestFailed = FName(TEXT("BPOnQuestFailed"));
	void UNarrativeTestingWidget::BPOnQuestFailed(const UQuest* Quest, FText const& QuestFailedMessage)
	{
		NarrativeTestingWidget_eventBPOnQuestFailed_Parms Parms;
		Parms.Quest=Quest;
		Parms.QuestFailedMessage=QuestFailedMessage;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestFailed),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestNewState = FName(TEXT("BPOnQuestNewState"));
	void UNarrativeTestingWidget::BPOnQuestNewState(UQuest* Quest, const UQuestState* NewState)
	{
		NarrativeTestingWidget_eventBPOnQuestNewState_Parms Parms;
		Parms.Quest=Quest;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestNewState),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestStarted = FName(TEXT("BPOnQuestStarted"));
	void UNarrativeTestingWidget::BPOnQuestStarted(const UQuest* Quest)
	{
		NarrativeTestingWidget_eventBPOnQuestStarted_Parms Parms;
		Parms.Quest=Quest;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestStarted),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestStepCompleted = FName(TEXT("BPOnQuestStepCompleted"));
	void UNarrativeTestingWidget::BPOnQuestStepCompleted(const UQuest* Quest, const UQuestBranch* Step)
	{
		NarrativeTestingWidget_eventBPOnQuestStepCompleted_Parms Parms;
		Parms.Quest=Quest;
		Parms.Step=Step;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestStepCompleted),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestSucceeded = FName(TEXT("BPOnQuestSucceeded"));
	void UNarrativeTestingWidget::BPOnQuestSucceeded(const UQuest* Quest, FText const& QuestSucceededMessage)
	{
		NarrativeTestingWidget_eventBPOnQuestSucceeded_Parms Parms;
		Parms.Quest=Quest;
		Parms.QuestSucceededMessage=QuestSucceededMessage;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestSucceeded),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestTaskCompleted = FName(TEXT("BPOnQuestTaskCompleted"));
	void UNarrativeTestingWidget::BPOnQuestTaskCompleted(const UQuest* Quest, FQuestTask const& Task, const UQuestBranch* Step)
	{
		NarrativeTestingWidget_eventBPOnQuestTaskCompleted_Parms Parms;
		Parms.Quest=Quest;
		Parms.Task=Task;
		Parms.Step=Step;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestTaskCompleted),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnQuestTaskProgressMade = FName(TEXT("BPOnQuestTaskProgressMade"));
	void UNarrativeTestingWidget::BPOnQuestTaskProgressMade(const UQuest* Quest, FQuestTask const& Task, const UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress)
	{
		NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms Parms;
		Parms.Quest=Quest;
		Parms.Task=Task;
		Parms.Step=Step;
		Parms.CurrentProgress=CurrentProgress;
		Parms.RequiredProgress=RequiredProgress;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnQuestTaskProgressMade),&Parms);
	}
	static FName NAME_UNarrativeTestingWidget_BPOnSaveComplete = FName(TEXT("BPOnSaveComplete"));
	void UNarrativeTestingWidget::BPOnSaveComplete(const FString& SaveName)
	{
		NarrativeTestingWidget_eventBPOnSaveComplete_Parms Parms;
		Parms.SaveName=SaveName;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTestingWidget_BPOnSaveComplete),&Parms);
	}
	void UNarrativeTestingWidget::StaticRegisterNativesUNarrativeTestingWidget()
	{
		UClass* Class = UNarrativeTestingWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UNarrativeTestingWidget::execInit },
			{ "OnBeginLoad", &UNarrativeTestingWidget::execOnBeginLoad },
			{ "OnBeginSave", &UNarrativeTestingWidget::execOnBeginSave },
			{ "OnDialogueBegan", &UNarrativeTestingWidget::execOnDialogueBegan },
			{ "OnDialogueFinished", &UNarrativeTestingWidget::execOnDialogueFinished },
			{ "OnDialogueRepliesAvailable", &UNarrativeTestingWidget::execOnDialogueRepliesAvailable },
			{ "OnDialogueUpdated", &UNarrativeTestingWidget::execOnDialogueUpdated },
			{ "OnLoadComplete", &UNarrativeTestingWidget::execOnLoadComplete },
			{ "OnNPCDialogueLineFinished", &UNarrativeTestingWidget::execOnNPCDialogueLineFinished },
			{ "OnNPCDialogueLineStarted", &UNarrativeTestingWidget::execOnNPCDialogueLineStarted },
			{ "OnPlayerDialogueLineFinished", &UNarrativeTestingWidget::execOnPlayerDialogueLineFinished },
			{ "OnPlayerDialogueLineStarted", &UNarrativeTestingWidget::execOnPlayerDialogueLineStarted },
			{ "OnQuestFailed", &UNarrativeTestingWidget::execOnQuestFailed },
			{ "OnQuestNewState", &UNarrativeTestingWidget::execOnQuestNewState },
			{ "OnQuestStarted", &UNarrativeTestingWidget::execOnQuestStarted },
			{ "OnQuestStepCompleted", &UNarrativeTestingWidget::execOnQuestStepCompleted },
			{ "OnQuestSucceeded", &UNarrativeTestingWidget::execOnQuestSucceeded },
			{ "OnQuestTaskCompleted", &UNarrativeTestingWidget::execOnQuestTaskCompleted },
			{ "OnQuestTaskProgressMade", &UNarrativeTestingWidget::execOnQuestTaskProgressMade },
			{ "OnSaveComplete", &UNarrativeTestingWidget::execOnSaveComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnBeginLoad_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnBeginLoad", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnBeginLoad_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnBeginSave_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnBeginSave", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnBeginSave_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnDialogueBegan", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnDialogueBegan_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnDialogueFinished", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnDialogueFinished_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnDialogueRepliesAvailable", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnDialogueRepliesAvailable_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplies;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueUpdated_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies_Inner = { "NPCReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies = { "NPCReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueUpdated_Parms, NPCReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnDialogueUpdated_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_NPCReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::NewProp_PlayerReplies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnDialogueUpdated", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnDialogueUpdated_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnLoadComplete_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnLoadComplete", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnLoadComplete_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnNPCDialogueLineFinished", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnNPCDialogueLineFinished_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnNPCDialogueLineStarted", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnNPCDialogueLineStarted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnPlayerDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnPlayerDialogueLineFinished", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnPlayerDialogueLineFinished_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnPlayerDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnPlayerDialogueLineStarted", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnPlayerDialogueLineStarted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestFailed", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestFailed_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestNewState", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestNewState_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestStarted", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestStarted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestStepCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestStepCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestStepCompleted", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestStepCompleted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestSucceeded", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestSucceeded_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskCompleted_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestTaskCompleted", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestTaskCompleted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms, RequiredProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnQuestTaskProgressMade", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnQuestTaskProgressMade_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventBPOnSaveComplete_Parms, SaveName), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::NewProp_SaveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "BPOnSaveComplete", nullptr, nullptr, sizeof(NarrativeTestingWidget_eventBPOnSaveComplete_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics
	{
		struct NarrativeTestingWidget_eventOnBeginLoad_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnBeginLoad_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnBeginLoad", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::NarrativeTestingWidget_eventOnBeginLoad_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics
	{
		struct NarrativeTestingWidget_eventOnBeginSave_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnBeginSave_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnBeginSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::NarrativeTestingWidget_eventOnBeginSave_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics
	{
		struct NarrativeTestingWidget_eventOnDialogueBegan_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnDialogueBegan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::NarrativeTestingWidget_eventOnDialogueBegan_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics
	{
		struct NarrativeTestingWidget_eventOnDialogueFinished_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnDialogueFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::NarrativeTestingWidget_eventOnDialogueFinished_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics
	{
		struct NarrativeTestingWidget_eventOnDialogueRepliesAvailable_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NewProp_PlayerReplies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnDialogueRepliesAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::NarrativeTestingWidget_eventOnDialogueRepliesAvailable_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics
	{
		struct NarrativeTestingWidget_eventOnDialogueUpdated_Parms
		{
			UDialogue* Dialogue;
			TArray<UDialogueNode_NPC*> NPCReplies;
			TArray<UDialogueNode_Player*> PlayerReplies;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplies;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueUpdated_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies_Inner = { "NPCReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies = { "NPCReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueUpdated_Parms, NPCReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnDialogueUpdated_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_NPCReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NewProp_PlayerReplies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnDialogueUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::NarrativeTestingWidget_eventOnDialogueUpdated_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics
	{
		struct NarrativeTestingWidget_eventOnLoadComplete_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnLoadComplete_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnLoadComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::NarrativeTestingWidget_eventOnLoadComplete_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics
	{
		struct NarrativeTestingWidget_eventOnNPCDialogueLineFinished_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnNPCDialogueLineFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::NarrativeTestingWidget_eventOnNPCDialogueLineFinished_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics
	{
		struct NarrativeTestingWidget_eventOnNPCDialogueLineStarted_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnNPCDialogueLineStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::NarrativeTestingWidget_eventOnNPCDialogueLineStarted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics
	{
		struct NarrativeTestingWidget_eventOnPlayerDialogueLineFinished_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnPlayerDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnPlayerDialogueLineFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::NarrativeTestingWidget_eventOnPlayerDialogueLineFinished_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics
	{
		struct NarrativeTestingWidget_eventOnPlayerDialogueLineStarted_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnPlayerDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnPlayerDialogueLineStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::NarrativeTestingWidget_eventOnPlayerDialogueLineStarted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestFailed_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::NarrativeTestingWidget_eventOnQuestFailed_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestNewState_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestNewState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::NarrativeTestingWidget_eventOnQuestNewState_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestStarted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::NarrativeTestingWidget_eventOnQuestStarted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestStepCompleted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestStepCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestStepCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestStepCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::NarrativeTestingWidget_eventOnQuestStepCompleted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestSucceeded_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestSucceeded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::NarrativeTestingWidget_eventOnQuestSucceeded_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestTaskCompleted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskCompleted_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestTaskCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::NarrativeTestingWidget_eventOnQuestTaskCompleted_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics
	{
		struct NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms, Task), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Task_MetaData)) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms, RequiredProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnQuestTaskProgressMade", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::NarrativeTestingWidget_eventOnQuestTaskProgressMade_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics
	{
		struct NarrativeTestingWidget_eventOnSaveComplete_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NarrativeTestingWidget_eventOnSaveComplete_Parms, SaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTestingWidget, nullptr, "OnSaveComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::NarrativeTestingWidget_eventOnSaveComplete_Parms), Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTestingWidget);
	UClass* Z_Construct_UClass_UNarrativeTestingWidget_NoRegister()
	{
		return UNarrativeTestingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeTestingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeTestingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeTestingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginLoad, "BPOnBeginLoad" }, // 961946822
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnBeginSave, "BPOnBeginSave" }, // 3732655650
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueBegan, "BPOnDialogueBegan" }, // 1264238348
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueFinished, "BPOnDialogueFinished" }, // 899520825
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueRepliesAvailable, "BPOnDialogueRepliesAvailable" }, // 3259908970
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnDialogueUpdated, "BPOnDialogueUpdated" }, // 3412245578
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnLoadComplete, "BPOnLoadComplete" }, // 1782967682
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineFinished, "BPOnNPCDialogueLineFinished" }, // 4059288368
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnNPCDialogueLineStarted, "BPOnNPCDialogueLineStarted" }, // 3847145233
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineFinished, "BPOnPlayerDialogueLineFinished" }, // 2845285533
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnPlayerDialogueLineStarted, "BPOnPlayerDialogueLineStarted" }, // 3473870737
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestFailed, "BPOnQuestFailed" }, // 3883314212
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestNewState, "BPOnQuestNewState" }, // 4037623510
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStarted, "BPOnQuestStarted" }, // 2315364823
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestStepCompleted, "BPOnQuestStepCompleted" }, // 372668133
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestSucceeded, "BPOnQuestSucceeded" }, // 4060150410
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskCompleted, "BPOnQuestTaskCompleted" }, // 3378020629
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnQuestTaskProgressMade, "BPOnQuestTaskProgressMade" }, // 2228288768
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_BPOnSaveComplete, "BPOnSaveComplete" }, // 1616407675
		{ &Z_Construct_UDelegateFunction_UNarrativeTestingWidget_DialogueLineFinished__DelegateSignature, "DialogueLineFinished__DelegateSignature" }, // 3268178529
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_Init, "Init" }, // 2811263824
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginLoad, "OnBeginLoad" }, // 422806807
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnBeginSave, "OnBeginSave" }, // 2221872176
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueBegan, "OnDialogueBegan" }, // 1905527890
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueFinished, "OnDialogueFinished" }, // 3548542494
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueRepliesAvailable, "OnDialogueRepliesAvailable" }, // 715343872
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnDialogueUpdated, "OnDialogueUpdated" }, // 3711639321
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnLoadComplete, "OnLoadComplete" }, // 3539313376
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineFinished, "OnNPCDialogueLineFinished" }, // 720167611
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnNPCDialogueLineStarted, "OnNPCDialogueLineStarted" }, // 2952369454
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineFinished, "OnPlayerDialogueLineFinished" }, // 4036292809
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnPlayerDialogueLineStarted, "OnPlayerDialogueLineStarted" }, // 2473988420
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestFailed, "OnQuestFailed" }, // 1159689880
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestNewState, "OnQuestNewState" }, // 1550485984
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStarted, "OnQuestStarted" }, // 1378129609
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestStepCompleted, "OnQuestStepCompleted" }, // 2737064018
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestSucceeded, "OnQuestSucceeded" }, // 3879778826
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskCompleted, "OnQuestTaskCompleted" }, // 4017197684
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnQuestTaskProgressMade, "OnQuestTaskProgressMade" }, // 2896822919
		{ &Z_Construct_UFunction_UNarrativeTestingWidget_OnSaveComplete, "OnSaveComplete" }, // 331653448
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTestingWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the Narrative demo widget that ships with narrative. \n */" },
		{ "IncludePath", "NarrativeTestingWidget.h" },
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
		{ "ToolTip", "Base class for the Narrative demo widget that ships with narrative." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTestingWidget_Statics::NewProp_NarrativeComponent_MetaData[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//The narrative component to show quest updates from. Most of the time this will just be the same as DialogueNarrativeComp\n" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/NarrativeTestingWidget.h" },
		{ "ToolTip", "The narrative component to show quest updates from. Most of the time this will just be the same as DialogueNarrativeComp" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTestingWidget_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x001100000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeTestingWidget, NarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNarrativeTestingWidget_Statics::NewProp_NarrativeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTestingWidget_Statics::NewProp_NarrativeComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTestingWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTestingWidget_Statics::NewProp_NarrativeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeTestingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTestingWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTestingWidget_Statics::ClassParams = {
		&UNarrativeTestingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeTestingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTestingWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeTestingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTestingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeTestingWidget()
	{
		if (!Z_Registration_Info_UClass_UNarrativeTestingWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTestingWidget.OuterSingleton, Z_Construct_UClass_UNarrativeTestingWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeTestingWidget.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeTestingWidget>()
	{
		return UNarrativeTestingWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTestingWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTestingWidget, UNarrativeTestingWidget::StaticClass, TEXT("UNarrativeTestingWidget"), &Z_Registration_Info_UClass_UNarrativeTestingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTestingWidget), 4191108338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_66744746(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
