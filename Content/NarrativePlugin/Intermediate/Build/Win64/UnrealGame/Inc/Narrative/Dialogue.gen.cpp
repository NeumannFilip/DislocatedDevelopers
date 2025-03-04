// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/Dialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}
// Cross Module References
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpeakerInfo;
class UScriptStruct* FSpeakerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpeakerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpeakerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeakerInfo, Z_Construct_UPackage__Script_Narrative(), TEXT("SpeakerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SpeakerInfo.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FSpeakerInfo>()
{
	return FSpeakerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpeakerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShotSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultShotSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpeakerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "Category", "Speaker Details" },
		{ "Comment", "//The name of this speaker. \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The name of this speaker." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerInfo, SpeakerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShot_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Default shot to play whilst this speaker is talking\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Default shot to play whilst this speaker is talking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShot = { "DefaultShot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerInfo, DefaultShot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShotSettings_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Default playback settings for when this speakers shot is playing\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Default playback settings for when this speakers shot is playing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShotSettings = { "DefaultShotSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerInfo, DefaultShotSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShotSettings_MetaData)) }; // 353246906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Custom node colour for this NPC in the graph\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Custom node colour for this NPC in the graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerInfo, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultShotSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"SpeakerInfo",
		sizeof(FSpeakerInfo),
		alignof(FSpeakerInfo),
		Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SpeakerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpeakerInfo.InnerSingleton, Z_Construct_UScriptStruct_FSpeakerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpeakerInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UDialogue::execFinishPlayerDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishPlayerDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execFinishNPCDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishNPCDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayNextNPCReply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNextNPCReply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execOnPlayerDialogueLineFinished)
	{
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDialogueLineFinished_Implementation(Z_Param_Node,Z_Param_Out_DialogueLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execOnPlayerDialogueLineStarted)
	{
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDialogueLineStarted_Implementation(Z_Param_Node,Z_Param_Out_DialogueLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execOnNPCDialogueLineFinished)
	{
		P_GET_OBJECT(UDialogueNode_NPC,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNPCDialogueLineFinished_Implementation(Z_Param_Node,Z_Param_Out_DialogueLine,Z_Param_Out_Speaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execOnNPCDialogueLineStarted)
	{
		P_GET_OBJECT(UDialogueNode_NPC,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNPCDialogueLineStarted_Implementation(Z_Param_Node,Z_Param_Out_DialogueLine,Z_Param_Out_Speaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetStringVariable)
	{
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringVariable_Implementation(Z_Param_Node,Z_Param_Out_Line,Z_Param_VariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetLineDuration)
	{
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLineDuration_Implementation(Z_Param_Node,Z_Param_Out_Line);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayPlayerDialogue)
	{
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_PlayerReply);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayPlayerDialogue_Implementation(Z_Param_PlayerReply,Z_Param_Out_Line);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayNPCDialogue)
	{
		P_GET_OBJECT(UDialogueNode_NPC,Z_Param_NPCReply);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNPCDialogue_Implementation(Z_Param_NPCReply,Z_Param_Out_Line,Z_Param_Out_Speaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayDialogueSound)
	{
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogueSound_Implementation(Z_Param_Out_Line);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayDialogueAnimation)
	{
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogueAnimation_Implementation(Z_Param_Node,Z_Param_Out_Line);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDialogueNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execSkipCurrentLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkipCurrentLine();
		P_NATIVE_END;
	}
	static FName NAME_UDialogue_GetLineDuration = FName(TEXT("GetLineDuration"));
	float UDialogue::GetLineDuration(UDialogueNode* Node, FDialogueLine const& Line)
	{
		Dialogue_eventGetLineDuration_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_GetLineDuration),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDialogue_GetStringVariable = FName(TEXT("GetStringVariable"));
	FString UDialogue::GetStringVariable(UDialogueNode* Node, FDialogueLine const& Line, const FString& VariableName)
	{
		Dialogue_eventGetStringVariable_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		Parms.VariableName=VariableName;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_GetStringVariable),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDialogue_OnBeginDialogue = FName(TEXT("OnBeginDialogue"));
	void UDialogue::OnBeginDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_OnBeginDialogue),NULL);
	}
	static FName NAME_UDialogue_OnEndDialogue = FName(TEXT("OnEndDialogue"));
	void UDialogue::OnEndDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_OnEndDialogue),NULL);
	}
	static FName NAME_UDialogue_OnNPCDialogueLineFinished = FName(TEXT("OnNPCDialogueLineFinished"));
	void UDialogue::OnNPCDialogueLineFinished(UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
	{
		Dialogue_eventOnNPCDialogueLineFinished_Parms Parms;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		Parms.Speaker=Speaker;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_OnNPCDialogueLineFinished),&Parms);
	}
	static FName NAME_UDialogue_OnNPCDialogueLineStarted = FName(TEXT("OnNPCDialogueLineStarted"));
	void UDialogue::OnNPCDialogueLineStarted(UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
	{
		Dialogue_eventOnNPCDialogueLineStarted_Parms Parms;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		Parms.Speaker=Speaker;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_OnNPCDialogueLineStarted),&Parms);
	}
	static FName NAME_UDialogue_OnPlayerDialogueLineFinished = FName(TEXT("OnPlayerDialogueLineFinished"));
	void UDialogue::OnPlayerDialogueLineFinished(UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
	{
		Dialogue_eventOnPlayerDialogueLineFinished_Parms Parms;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_OnPlayerDialogueLineFinished),&Parms);
	}
	static FName NAME_UDialogue_OnPlayerDialogueLineStarted = FName(TEXT("OnPlayerDialogueLineStarted"));
	void UDialogue::OnPlayerDialogueLineStarted(UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
	{
		Dialogue_eventOnPlayerDialogueLineStarted_Parms Parms;
		Parms.Node=Node;
		Parms.DialogueLine=DialogueLine;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_OnPlayerDialogueLineStarted),&Parms);
	}
	static FName NAME_UDialogue_PlayDialogueAnimation = FName(TEXT("PlayDialogueAnimation"));
	void UDialogue::PlayDialogueAnimation(UDialogueNode* Node, FDialogueLine const& Line)
	{
		Dialogue_eventPlayDialogueAnimation_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_PlayDialogueAnimation),&Parms);
	}
	static FName NAME_UDialogue_PlayDialogueSound = FName(TEXT("PlayDialogueSound"));
	void UDialogue::PlayDialogueSound(FDialogueLine const& Line)
	{
		Dialogue_eventPlayDialogueSound_Parms Parms;
		Parms.Line=Line;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_PlayDialogueSound),&Parms);
	}
	static FName NAME_UDialogue_PlayNPCDialogue = FName(TEXT("PlayNPCDialogue"));
	void UDialogue::PlayNPCDialogue(UDialogueNode_NPC* NPCReply, FDialogueLine const& Line, FSpeakerInfo const& Speaker)
	{
		Dialogue_eventPlayNPCDialogue_Parms Parms;
		Parms.NPCReply=NPCReply;
		Parms.Line=Line;
		Parms.Speaker=Speaker;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_PlayNPCDialogue),&Parms);
	}
	static FName NAME_UDialogue_PlayPlayerDialogue = FName(TEXT("PlayPlayerDialogue"));
	void UDialogue::PlayPlayerDialogue(UDialogueNode_Player* PlayerReply, FDialogueLine const& Line)
	{
		Dialogue_eventPlayPlayerDialogue_Parms Parms;
		Parms.PlayerReply=PlayerReply;
		Parms.Line=Line;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_PlayPlayerDialogue),&Parms);
	}
	void UDialogue::StaticRegisterNativesUDialogue()
	{
		UClass* Class = UDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishNPCDialogue", &UDialogue::execFinishNPCDialogue },
			{ "FinishPlayerDialogue", &UDialogue::execFinishPlayerDialogue },
			{ "GetLineDuration", &UDialogue::execGetLineDuration },
			{ "GetNodes", &UDialogue::execGetNodes },
			{ "GetStringVariable", &UDialogue::execGetStringVariable },
			{ "OnNPCDialogueLineFinished", &UDialogue::execOnNPCDialogueLineFinished },
			{ "OnNPCDialogueLineStarted", &UDialogue::execOnNPCDialogueLineStarted },
			{ "OnPlayerDialogueLineFinished", &UDialogue::execOnPlayerDialogueLineFinished },
			{ "OnPlayerDialogueLineStarted", &UDialogue::execOnPlayerDialogueLineStarted },
			{ "PlayDialogueAnimation", &UDialogue::execPlayDialogueAnimation },
			{ "PlayDialogueSound", &UDialogue::execPlayDialogueSound },
			{ "PlayNextNPCReply", &UDialogue::execPlayNextNPCReply },
			{ "PlayNPCDialogue", &UDialogue::execPlayNPCDialogue },
			{ "PlayPlayerDialogue", &UDialogue::execPlayPlayerDialogue },
			{ "SkipCurrentLine", &UDialogue::execSkipCurrentLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "FinishNPCDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_FinishNPCDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "FinishPlayerDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_FinishPlayerDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetLineDuration_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetLineDuration_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetLineDuration_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line_MetaData)) }; // 3629491894
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetLineDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*Returns how long narrative should wait before moving onto the next line.\n\x09*\n\x09* By default, we wait the length of the dialogue audio, or if no audio is supplied\n\x09* we wait at a rate of 25 letters per second to give the reader time to finish reading.\n\x09*\n\x09* However if you want to change how long narrative waits for a dialogue line you can override this function. \n\x09* \n\x09* This words per minute can be configured in the Narrative settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Returns how long narrative should wait before moving onto the next line.\n       *\n       * By default, we wait the length of the dialogue audio, or if no audio is supplied\n       * we wait at a rate of 25 letters per second to give the reader time to finish reading.\n       *\n       * However if you want to change how long narrative waits for a dialogue line you can override this function.\n       *\n       * This words per minute can be configured in the Narrative settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetLineDuration", nullptr, nullptr, sizeof(Dialogue_eventGetLineDuration_Parms), Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_GetLineDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetNodes_Statics
	{
		struct Dialogue_eventGetNodes_Parms
		{
			TArray<UDialogueNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogue_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogue_GetNodes_Statics::Dialogue_eventGetNodes_Parms), Z_Construct_UFunction_UDialogue_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetStringVariable_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, VariableName), METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Allows you to use variables in your dialogue, ie Hello {PlayerName}.\n\x09*\n\x09* Simply override this function, then check the value of variable name and return whatever value you like!\n\x09*\n\x09* ie if(VariableName == \"PlayerName\") {return OwningPawn->GetUsername();};\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Allows you to use variables in your dialogue, ie Hello {PlayerName}.\n\nSimply override this function, then check the value of variable name and return whatever value you like!\n\nie if(VariableName == \"PlayerName\") {return OwningPawn->GetUsername();};" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetStringVariable", nullptr, nullptr, sizeof(Dialogue_eventGetStringVariable_Parms), Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_GetStringVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_OnBeginDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnBeginDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnBeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnBeginDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnBeginDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnBeginDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_OnBeginDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_OnBeginDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_OnEndDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnEndDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnEndDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnEndDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnEndDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnEndDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_OnEndDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_OnEndDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Called when an NPC Dialogue line is finished\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Called when an NPC Dialogue line is finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnNPCDialogueLineFinished", nullptr, nullptr, sizeof(Dialogue_eventOnNPCDialogueLineFinished_Parms), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Called when an NPC Dialogue line starts\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Called when an NPC Dialogue line starts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnNPCDialogueLineStarted", nullptr, nullptr, sizeof(Dialogue_eventOnNPCDialogueLineStarted_Parms), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Called when a player dialogue line has started\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Called when a player dialogue line has started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnPlayerDialogueLineFinished", nullptr, nullptr, sizeof(Dialogue_eventOnPlayerDialogueLineFinished_Parms), Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Called when a player dialogue line has started\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Called when a player dialogue line has started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnPlayerDialogueLineStarted", nullptr, nullptr, sizeof(Dialogue_eventOnPlayerDialogueLineStarted_Parms), Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueAnimation_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueAnimation_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Play a dialogue animation. Override this if you want to change how narrative plays animations\n\x09*\n\x09* Default implementation just plays the supplied anim montage on the NPC actor you gave it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Play a dialogue animation. Override this if you want to change how narrative plays animations\n*\n* Default implementation just plays the supplied anim montage on the NPC actor you gave it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayDialogueAnimation", nullptr, nullptr, sizeof(Dialogue_eventPlayDialogueAnimation_Parms), Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_PlayDialogueAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSound_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Play a dialogue sound. Override this if you want to change how narrative plays sounds.\n\x09*\n\x09* Default implementation just plays the sound at the location of the NPC, or in 2D if no NPC was supplied. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Play a dialogue sound. Override this if you want to change how narrative plays sounds.\n*\n* Default implementation just plays the sound at the location of the NPC, or in 2D if no NPC was supplied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayDialogueSound", nullptr, nullptr, sizeof(Dialogue_eventPlayDialogueSound_Parms), Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_PlayDialogueSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayNextNPCReply", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_PlayNextNPCReply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCReply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_NPCReply = { "NPCReply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayNPCDialogue_Parms, NPCReply), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayNPCDialogue_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayNPCDialogue_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker_MetaData)) }; // 1843592173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_NPCReply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Allows you to override how an NPC dialogue node is played. Narrative plays some audio, a montage, and plays a cinematic shot by default,\n\x09* however if you want to do even more you can override this function\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Allows you to override how an NPC dialogue node is played. Narrative plays some audio, a montage, and plays a cinematic shot by default,\n* however if you want to do even more you can override this function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayNPCDialogue", nullptr, nullptr, sizeof(Dialogue_eventPlayNPCDialogue_Parms), Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_PlayNPCDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_PlayerReply = { "PlayerReply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayPlayerDialogue_Parms, PlayerReply), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventPlayPlayerDialogue_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line_MetaData)) }; // 3629491894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_PlayerReply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Allows you to override how an Player dialogue node is played. Narrative plays some audio, a montage, and plays a cinematic shot by default,\n\x09* however if you want modify this behavior or add extra behavior you can override this function\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Allows you to override how an Player dialogue node is played. Narrative plays some audio, a montage, and plays a cinematic shot by default,\n* however if you want modify this behavior or add extra behavior you can override this function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayPlayerDialogue", nullptr, nullptr, sizeof(Dialogue_eventPlayPlayerDialogue_Parms), Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_PlayPlayerDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Skips the current dialogue line \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Skips the current dialogue line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "SkipCurrentLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_SkipCurrentLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogue);
	UClass* Z_Construct_UClass_UDialogue_NoRegister()
	{
		return UDialogue::StaticClass();
	}
	struct Z_Construct_UClass_UDialogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speakers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeExited_MetaData[];
#endif
		static void NewProp_bCanBeExited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeExited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTalkingShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerTalkingShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTalkingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTalkingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectReplyShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectReplyShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectReplySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectReplySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootDialogue;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCReplyChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplyChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplyChain;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableResponses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableResponses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableResponses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeaker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSpeaker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSequencePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_NPCReplyFinished_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_NPCReplyFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_PlayerReplyFinished_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_PlayerReplyFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogue_FinishNPCDialogue, "FinishNPCDialogue" }, // 286983261
		{ &Z_Construct_UFunction_UDialogue_FinishPlayerDialogue, "FinishPlayerDialogue" }, // 1679476301
		{ &Z_Construct_UFunction_UDialogue_GetLineDuration, "GetLineDuration" }, // 2960195837
		{ &Z_Construct_UFunction_UDialogue_GetNodes, "GetNodes" }, // 881065333
		{ &Z_Construct_UFunction_UDialogue_GetStringVariable, "GetStringVariable" }, // 2551872822
		{ &Z_Construct_UFunction_UDialogue_OnBeginDialogue, "OnBeginDialogue" }, // 1377272207
		{ &Z_Construct_UFunction_UDialogue_OnEndDialogue, "OnEndDialogue" }, // 2719135535
		{ &Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished, "OnNPCDialogueLineFinished" }, // 745550184
		{ &Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted, "OnNPCDialogueLineStarted" }, // 1643979533
		{ &Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished, "OnPlayerDialogueLineFinished" }, // 2654499286
		{ &Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted, "OnPlayerDialogueLineStarted" }, // 4097297495
		{ &Z_Construct_UFunction_UDialogue_PlayDialogueAnimation, "PlayDialogueAnimation" }, // 1247524999
		{ &Z_Construct_UFunction_UDialogue_PlayDialogueSound, "PlayDialogueSound" }, // 2627135701
		{ &Z_Construct_UFunction_UDialogue_PlayNextNPCReply, "PlayNextNPCReply" }, // 2613871756
		{ &Z_Construct_UFunction_UDialogue_PlayNPCDialogue, "PlayNPCDialogue" }, // 1702865953
		{ &Z_Construct_UFunction_UDialogue_PlayPlayerDialogue, "PlayPlayerDialogue" }, // 2093902728
		{ &Z_Construct_UFunction_UDialogue_SkipCurrentLine, "SkipCurrentLine" }, // 199784882
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Created at runtime, but also used as a template, similar to UWidgetTrees in UWidgetBlueprints. \n" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Created at runtime, but also used as a template, similar to UWidgetTrees in UWidgetBlueprints." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(nullptr, 0) }; // 1843592173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_MetaData[] = {
		{ "Category", "Dialogue Details" },
		{ "Comment", "//All the speakers in this dialogue \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "All the speakers in this dialogue" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_MetaData)) }; // 1843592173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_MetaData[] = {
		{ "Category", "Dialogue Details" },
		{ "Comment", "//Can this dialogue be exited by pressing escape?\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Can this dialogue be exited by pressing escape?" },
	};
#endif
	void Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_SetBit(void* Obj)
	{
		((UDialogue*)Obj)->bCanBeExited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited = { "bCanBeExited", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogue), &Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingShot_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//A sequence to play whilst the player is talking\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "A sequence to play whilst the player is talking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingShot = { "PlayerTalkingShot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, PlayerTalkingShot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingShot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingSettings_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Playback settings for when the player is talking\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Playback settings for when the player is talking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingSettings = { "PlayerTalkingSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, PlayerTalkingSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingSettings_MetaData)) }; // 353246906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplyShot_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//A sequence to play whilst the NPC is waiting for the player to select their reply \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "A sequence to play whilst the NPC is waiting for the player to select their reply" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplyShot = { "SelectReplyShot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, SelectReplyShot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplyShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplyShot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplySettings_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Playback settings for when the NPC is Waiting for the player to select their reply \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Playback settings for when the NPC is Waiting for the player to select their reply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplySettings = { "SelectReplySettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, SelectReplySettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplySettings_MetaData)) }; // 353246906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, OwningComp), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_NPCActor_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//The NPCActor that we're talking to. This can be null \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The NPCActor that we're talking to. This can be null" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCActor = { "NPCActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue_MetaData[] = {
		{ "Comment", "//The first thing the NPC says in the dialog\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The first thing the NPC says in the dialog" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue = { "RootDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, RootDialogue), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_Inner = { "NPCReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_MetaData[] = {
		{ "Comment", "//Holds all of the npc replies in the dialogue\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Holds all of the npc replies in the dialogue" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies = { "NPCReplies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, NPCReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "Comment", "//Holds all of the player replies in the dialogue\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Holds all of the player replies in the dialogue" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_Inner = { "NPCReplyChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_MetaData[] = {
		{ "Comment", "//The NPC replies in the current chunk \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The NPC replies in the current chunk" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain = { "NPCReplyChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, NPCReplyChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_Inner = { "AvailableResponses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_MetaData[] = {
		{ "Comment", "//The player responses once NPC has finished talking the current chunk \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The player responses once NPC has finished talking the current chunk" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses = { "AvailableResponses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, AvailableResponses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode_MetaData[] = {
		{ "Category", "Dialogue State" },
		{ "Comment", "//The current node narrative is playing\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current node narrative is playing" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, CurrentNode), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker_MetaData[] = {
		{ "Category", "Dialogue State" },
		{ "Comment", "//The current speaker that is talking\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current speaker that is talking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker = { "CurrentSpeaker", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, CurrentSpeaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker_MetaData)) }; // 1843592173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine_MetaData[] = {
		{ "Category", "Dialogue State" },
		{ "Comment", "//The current line that is being played \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current line that is being played" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine = { "CurrentLine", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, CurrentLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Sequence actor responsible for playing any cinematic shots during the dialogue\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Sequence actor responsible for playing any cinematic shots during the dialogue" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer = { "DialogueSequencePlayer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, DialogueSequencePlayer), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio_MetaData[] = {
		{ "Comment", "//Audio component responsible for playing any audio during the dialogue\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Audio component responsible for playing any audio during the dialogue" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio = { "DialogueAudio", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, DialogueAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished = { "TimerHandle_NPCReplyFinished", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, TimerHandle_NPCReplyFinished), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished = { "TimerHandle_PlayerReplyFinished", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, TimerHandle_PlayerReplyFinished), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished_MetaData)) }; // 589591453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerTalkingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplyShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_SelectReplySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_NPCActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogue_Statics::ClassParams = {
		&UDialogue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogue()
	{
		if (!Z_Registration_Info_UClass_UDialogue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogue.OuterSingleton, Z_Construct_UClass_UDialogue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogue.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogue>()
	{
		return UDialogue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogue);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ScriptStructInfo[] = {
		{ FSpeakerInfo::StaticStruct, Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewStructOps, TEXT("SpeakerInfo"), &Z_Registration_Info_UScriptStruct_SpeakerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpeakerInfo), 1843592173U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogue, UDialogue::StaticClass, TEXT("UDialogue"), &Z_Registration_Info_UClass_UDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogue), 3416533124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_3733818539(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
