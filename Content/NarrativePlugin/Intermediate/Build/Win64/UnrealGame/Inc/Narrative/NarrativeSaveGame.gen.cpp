// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSaveGame() {}
// Cross Module References
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSavedQuestBranch();
	UPackage* Z_Construct_UPackage__Script_Narrative();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedQuest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeSaveGame_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedQuestBranch;
class UScriptStruct* FSavedQuestBranch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedQuestBranch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedQuestBranch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedQuestBranch, Z_Construct_UPackage__Script_Narrative(), TEXT("SavedQuestBranch"));
	}
	return Z_Registration_Info_UScriptStruct_SavedQuestBranch.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FSavedQuestBranch>()
{
	return FSavedQuestBranch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSavedQuestBranch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedQuestBranch>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3308170920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks_MetaData[] = {
		{ "Comment", "//All we need to save a branch is remember what progress the tasks had \n" },
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
		{ "ToolTip", "All we need to save a branch is remember what progress the tasks had" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedQuestBranch, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks_MetaData)) }; // 3308170920
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_Tasks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"SavedQuestBranch",
		sizeof(FSavedQuestBranch),
		alignof(FSavedQuestBranch),
		Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSavedQuestBranch()
	{
		if (!Z_Registration_Info_UScriptStruct_SavedQuestBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedQuestBranch.InnerSingleton, Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SavedQuestBranch.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeSavedQuest;
class UScriptStruct* FNarrativeSavedQuest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeSavedQuest, Z_Construct_UPackage__Script_Narrative(), TEXT("NarrativeSavedQuest"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FNarrativeSavedQuest>()
{
	return FNarrativeSavedQuest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentStateID;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentStateBranchIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateBranchIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentStateBranchIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStateBranchData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateBranchData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentStateBranchData;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReachedStateNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachedStateNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReachedStateNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeSavedQuest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeSavedQuest, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID = { "CurrentStateID", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeSavedQuest, CurrentStateID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs_Inner = { "CurrentStateBranchIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs_MetaData[] = {
		{ "Comment", "//All the branches that lead of the current state\n" },
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
		{ "ToolTip", "All the branches that lead of the current state" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs = { "CurrentStateBranchIDs", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeSavedQuest, CurrentStateBranchIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData_Inner = { "CurrentStateBranchData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedQuestBranch, METADATA_PARAMS(nullptr, 0) }; // 3959535230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData_MetaData[] = {
		{ "Comment", "//The saved branch itself \n" },
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
		{ "ToolTip", "The saved branch itself" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData = { "CurrentStateBranchData", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeSavedQuest, CurrentStateBranchData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData_MetaData)) }; // 3959535230
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_Inner = { "ReachedStateNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames = { "ReachedStateNames", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrativeSavedQuest, ReachedStateNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateBranchData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"NarrativeSavedQuest",
		sizeof(FNarrativeSavedQuest),
		alignof(FNarrativeSavedQuest),
		Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedQuest()
	{
		if (!Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.InnerSingleton;
	}
	void UNarrativeSaveGame::StaticRegisterNativesUNarrativeSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSaveGame);
	UClass* Z_Construct_UClass_UNarrativeSaveGame_NoRegister()
	{
		return UNarrativeSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedQuests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedQuests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedQuests;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MasterTaskList_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterTaskList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterTaskList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MasterTaskList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Narrative Savegame object \n */" },
		{ "IncludePath", "NarrativeSaveGame.h" },
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
		{ "ToolTip", "Narrative Savegame object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests_Inner = { "SavedQuests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedQuest, METADATA_PARAMS(nullptr, 0) }; // 1446043974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests = { "SavedQuests", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeSaveGame, SavedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests_MetaData)) }; // 1446043974
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_ValueProp = { "MasterTaskList", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_Key_KeyProp = { "MasterTaskList_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/NarrativeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList = { "MasterTaskList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNarrativeSaveGame, MasterTaskList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_SavedQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveGame_Statics::NewProp_MasterTaskList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSaveGame_Statics::ClassParams = {
		&UNarrativeSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNarrativeSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNarrativeSaveGame()
	{
		if (!Z_Registration_Info_UClass_UNarrativeSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSaveGame.OuterSingleton, Z_Construct_UClass_UNarrativeSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeSaveGame.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeSaveGame>()
	{
		return UNarrativeSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSaveGame);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics::ScriptStructInfo[] = {
		{ FSavedQuestBranch::StaticStruct, Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewStructOps, TEXT("SavedQuestBranch"), &Z_Registration_Info_UScriptStruct_SavedQuestBranch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedQuestBranch), 3959535230U) },
		{ FNarrativeSavedQuest::StaticStruct, Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewStructOps, TEXT("NarrativeSavedQuest"), &Z_Registration_Info_UScriptStruct_NarrativeSavedQuest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeSavedQuest), 1446043974U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSaveGame, UNarrativeSaveGame::StaticClass, TEXT("UNarrativeSaveGame"), &Z_Registration_Info_UClass_UNarrativeSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSaveGame), 1451582385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_158035157(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeSaveGame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
