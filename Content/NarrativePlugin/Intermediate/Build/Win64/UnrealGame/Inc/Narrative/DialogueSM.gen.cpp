// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/DialogueSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSM() {}
// Cross Module References
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeNodeBase();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnDialogueNodeFinishedPlaying__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueLine;
class UScriptStruct* FDialogueLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLine, Z_Construct_UPackage__Script_Narrative(), TEXT("DialogueLine"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FDialogueLine>()
{
	return FDialogueLine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Shot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//TODO add these to dialoguenodes and select one at random\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "TODO add these to dialoguenodes and select one at random" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09The text for this dialogue node. Narrative will automatically display this on the NarrativeDefaultUI if you're using it, otherwise you can simply grab this \n\x09yourself if you're using your own dialogue. \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The text for this dialogue node. Narrative will automatically display this on the NarrativeDefaultUI if you're using it, otherwise you can simply grab this\nyourself if you're using your own dialogue." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09If a dialogue sound is selected, narrative will automatically play the sound for you in 3D space, either at the location of the NPC, or the player, whoever is talking. \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a dialogue sound is selected, narrative will automatically play the sound for you in 3D space, either at the location of the NPC, or the player, whoever is talking." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound = { "DialogueSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09If a montage is selected, narrative will automatically play this montage on either the NPC or Player, whoever is saying the line.\n\x09\n\x09""For multi-NPC dialogues, add a tag to each mesh with the speakers name as the tag. This way narrative knows what skeletal mesh to play the animation on. \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a montage is selected, narrative will automatically play this montage on either the NPC or Player, whoever is saying the line.\n\nFor multi-NPC dialogues, add a tag to each mesh with the speakers name as the tag. This way narrative knows what skeletal mesh to play the animation on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage = { "DialogueMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, DialogueMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09If a shot is selected, narrative will automatically play this cinematic shot for you. \n\n\x09This will override a speakers selected shot. \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a shot is selected, narrative will automatically play this cinematic shot for you.\n\nThis will override a speakers selected shot." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot = { "Shot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, Shot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ShotSettings_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "//Playback settings for the shot\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Playback settings for the shot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ShotSettings = { "ShotSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLine, ShotSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ShotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ShotSettings_MetaData)) }; // 353246906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_ShotSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"DialogueLine",
		sizeof(FDialogueLine),
		alignof(FDialogueLine),
		Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton, Z_Construct_UScriptStruct_FDialogueLine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton;
	}
	void UDialogueNode::StaticRegisterNativesUDialogueNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNode);
	UClass* Z_Construct_UClass_UDialogueNode_NoRegister()
	{
		return UDialogueNode::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Shot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlternativeLines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternativeLines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlternativeLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayedLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayedLine;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Base class for states and branches in the Dialogues state machine*/" },
		{ "IncludePath", "DialogueSM.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Base class for states and branches in the Dialogues state machine" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09The text for this dialogue node. Narrative will automatically display this on the NarrativeDefaultUI if you're using it, otherwise you can simply grab this\n\x09yourself if you're using your own dialogue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The text for this dialogue node. Narrative will automatically display this on the NarrativeDefaultUI if you're using it, otherwise you can simply grab this\nyourself if you're using your own dialogue." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, Text), METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueSound_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09 If a dialogue sound is selected, narrative will automatically play the sound for you in 3D space, either at the location of the NPC, or the player, whoever is talking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a dialogue sound is selected, narrative will automatically play the sound for you in 3D space, either at the location of the NPC, or the player, whoever is talking." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueSound = { "DialogueSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueMontage_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n\x09 If a montage is selected, narrative will automatically play this montage on either the NPC or Player, whoever is saying the line.\n\n\x09 For multi-NPC dialogues, add a tag to each mesh with the speakers name as the tag. This way narrative knows what skeletal mesh to play the animation on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a montage is selected, narrative will automatically play this montage on either the NPC or Player, whoever is saying the line.\n\nFor multi-NPC dialogues, add a tag to each mesh with the speakers name as the tag. This way narrative knows what skeletal mesh to play the animation on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueMontage = { "DialogueMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, DialogueMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_Shot_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/**\n\x09 If a shot is selected, narrative will automatically play this cinematic shot for you.\n\n\x09 This will override a speakers selected shot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a shot is selected, narrative will automatically play this cinematic shot for you.\n\nThis will override a speakers selected shot." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_Shot = { "Shot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, Shot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_Shot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_Shot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_ShotSettings_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "//Playback settings for the shot\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Playback settings for the shot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_ShotSettings = { "ShotSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, ShotSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_ShotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_ShotSettings_MetaData)) }; // 353246906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_Inner = { "AlternativeLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(nullptr, 0) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Details" },
		{ "Comment", "/** If alternative lines are added in here, narrative will randomly select either the main line or one of the alternatives.\n\x09 \n\x09 This can make dialogues more random and believable. \n\x09 */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If alternative lines are added in here, narrative will randomly select either the main line or one of the alternatives.\n\n       This can make dialogues more random and believable." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines = { "AlternativeLines", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, AlternativeLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_MetaData)) }; // 3629491894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, OnDialogueFinished), Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished_MetaData)) }; // 1909682948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "//The last line the dialogue node played.\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The last line the dialogue node played." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine = { "PlayedLine", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, PlayedLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine_MetaData)) }; // 3629491894
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_Inner = { "NPCReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies = { "NPCReplies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, NPCReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue = { "OwningDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, OwningDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode, OwningComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_DialogueMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_Shot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_ShotSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNode_Statics::ClassParams = {
		&UDialogueNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueNode()
	{
		if (!Z_Registration_Info_UClass_UDialogueNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNode.OuterSingleton, Z_Construct_UClass_UDialogueNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNode.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueNode>()
	{
		return UDialogueNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNode);
	void UDialogueNode_NPC::StaticRegisterNativesUDialogueNode_NPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNode_NPC);
	UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister()
	{
		return UDialogueNode_NPC::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNode_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNode_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_NPC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueSM.h" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**The ID of the speaker for this node */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The ID of the speaker for this node" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode_NPC, SpeakerID), METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNode_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNode_NPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNode_NPC_Statics::ClassParams = {
		&UDialogueNode_NPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_NPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueNode_NPC()
	{
		if (!Z_Registration_Info_UClass_UDialogueNode_NPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNode_NPC.OuterSingleton, Z_Construct_UClass_UDialogueNode_NPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNode_NPC.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueNode_NPC>()
	{
		return UDialogueNode_NPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNode_NPC);
	DEFINE_FUNCTION(UDialogueNode_Player::execGetOptionText)
	{
		P_GET_OBJECT(UDialogue,Z_Param_InDialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOptionText(Z_Param_InDialogue);
		P_NATIVE_END;
	}
	void UDialogueNode_Player::StaticRegisterNativesUDialogueNode_Player()
	{
		UClass* Class = UDialogueNode_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOptionText", &UDialogueNode_Player::execGetOptionText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics
	{
		struct DialogueNode_Player_eventGetOptionText_Parms
		{
			UDialogue* InDialogue;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogue;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_InDialogue = { "InDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueNode_Player_eventGetOptionText_Parms, InDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueNode_Player_eventGetOptionText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_InDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Details" },
		{ "Comment", "//Have to pass dialogue in because OwningDialogue is null for some reason - TODO look into why this is\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Have to pass dialogue in because OwningDialogue is null for some reason - TODO look into why this is" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueNode_Player, nullptr, "GetOptionText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::DialogueNode_Player_eventGetOptionText_Parms), Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueNode_Player_GetOptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNode_Player);
	UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister()
	{
		return UDialogueNode_Player::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNode_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_OptionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNode_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueNode_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueNode_Player_GetOptionText, "GetOptionText" }, // 3990804053
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Player_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueSM.h" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**The shortened text to display for dialogue option when it shows up in the list of available responses. If left empty narrative will just use the main text. */" },
		{ "DisplayAfter", "Text" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The shortened text to display for dialogue option when it shows up in the list of available responses. If left empty narrative will just use the main text." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText = { "OptionText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueNode_Player, OptionText), METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNode_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNode_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNode_Player_Statics::ClassParams = {
		&UDialogueNode_Player::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueNode_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueNode_Player()
	{
		if (!Z_Registration_Info_UClass_UDialogueNode_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNode_Player.OuterSingleton, Z_Construct_UClass_UDialogueNode_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNode_Player.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueNode_Player>()
	{
		return UDialogueNode_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNode_Player);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ScriptStructInfo[] = {
		{ FDialogueLine::StaticStruct, Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps, TEXT("DialogueLine"), &Z_Registration_Info_UScriptStruct_DialogueLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueLine), 3629491894U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueNode, UDialogueNode::StaticClass, TEXT("UDialogueNode"), &Z_Registration_Info_UClass_UDialogueNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNode), 3176892919U) },
		{ Z_Construct_UClass_UDialogueNode_NPC, UDialogueNode_NPC::StaticClass, TEXT("UDialogueNode_NPC"), &Z_Registration_Info_UClass_UDialogueNode_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNode_NPC), 291471728U) },
		{ Z_Construct_UClass_UDialogueNode_Player, UDialogueNode_Player::StaticClass, TEXT("UDialogueNode_Player"), &Z_Registration_Info_UClass_UDialogueNode_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNode_Player), 4097627746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_140725232(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
