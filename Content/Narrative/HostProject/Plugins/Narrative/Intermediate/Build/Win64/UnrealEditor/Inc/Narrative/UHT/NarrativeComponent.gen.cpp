// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeComponent.h"
#include "Narrative/Public/Dialogue.h"
#include "Narrative/Public/DialogueSM.h"
#include "Narrative/Public/NarrativeSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativePartyComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EUpdateType();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueInfo();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedQuest();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeUpdate();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueInfo;
class UScriptStruct* FDialogueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueInfo, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("DialogueInfo"));
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueInfo, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue_MetaData), Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueInfo, NPC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC_MetaData), Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"DialogueInfo",
		Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers),
		sizeof(FDialogueInfo),
		alignof(FDialogueInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers) < 2048);
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
			Z_Registration_Info_UEnum_EUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EUpdateType, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EUpdateType"));
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
		{ "EUpdateType::UT_None", (int64)EUpdateType::UT_None },
		{ "EUpdateType::UT_CompleteTask", (int64)EUpdateType::UT_CompleteTask },
		{ "EUpdateType::UT_BeginQuest", (int64)EUpdateType::UT_BeginQuest },
		{ "EUpdateType::UT_ForgetQuest", (int64)EUpdateType::UT_ForgetQuest },
		{ "EUpdateType::UT_RestartQuest", (int64)EUpdateType::UT_RestartQuest },
		{ "EUpdateType::UT_QuestNewState", (int64)EUpdateType::UT_QuestNewState },
		{ "EUpdateType::UT_TaskProgressMade", (int64)EUpdateType::UT_TaskProgressMade },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "UT_BeginQuest.Name", "EUpdateType::UT_BeginQuest" },
		{ "UT_CompleteTask.Name", "EUpdateType::UT_CompleteTask" },
		{ "UT_ForgetQuest.Name", "EUpdateType::UT_ForgetQuest" },
		{ "UT_None.Name", "EUpdateType::UT_None" },
		{ "UT_QuestNewState.Name", "EUpdateType::UT_QuestNewState" },
		{ "UT_RestartQuest.Name", "EUpdateType::UT_RestartQuest" },
		{ "UT_TaskProgressMade.Name", "EUpdateType::UT_TaskProgressMade" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EUpdateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EUpdateType",
		"EUpdateType",
		Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EUpdateType_Statics::Enum_MetaDataParams)
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
		Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeUpdate, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("NarrativeUpdate"));
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntPayload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntPayload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nUQuests aren't replicated the proper UE way (replicated flag on objects), because this is really complex and hasn't been very successful in testing.\nIt would also hog a lot more network performance, as quests often have hundreds of states, tasks, and branches,\nall of which would be sending network updates and replicating. \n\nSo in the meantime, the server authoritatively Begins, Forgets, Restarts, Updates quests etc, and then informs the client about\nthese changes via the FNarrativeUpdate stream so the clients can \"replay\" these actions in the order they happened and keep sync with the server. \n\nUsing this mechanism instead of RPCs ensures the updates are sent in the correct order. This is really important\nfor ensuring the client correctly stays in sync with the server. \n*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "UQuests aren't replicated the proper UE way (replicated flag on objects), because this is really complex and hasn't been very successful in testing.\nIt would also hog a lot more network performance, as quests often have hundreds of states, tasks, and branches,\nall of which would be sending network updates and replicating.\n\nSo in the meantime, the server authoritatively Begins, Forgets, Restarts, Updates quests etc, and then informs the client about\nthese changes via the FNarrativeUpdate stream so the clients can \"replay\" these actions in the order they happened and keep sync with the server.\n\nUsing this mechanism instead of RPCs ensures the updates are sent in the correct order. This is really important\nfor ensuring the client correctly stays in sync with the server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeUpdate>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "//What sort of update this is\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "What sort of update this is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, UpdateType), Z_Construct_UEnum_Narrative_EUpdateType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_MetaData), Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_MetaData) }; // 1490709536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "//The quest that was updated \n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "The quest that was updated" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass_MetaData), Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "//Optional payload with some string data about the update\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Optional payload with some string data about the update" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, Payload), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload_MetaData), Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_Inner = { "IntPayload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_MetaData[] = {
		{ "Comment", "//Some updates need to send some ints over the network, for example TaskProgressMade uses task idx and new progress \n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Some updates need to send some ints over the network, for example TaskProgressMade uses task idx and new progress" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload = { "IntPayload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, IntPayload), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_MetaData), Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"NarrativeUpdate",
		Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers),
		sizeof(FNarrativeUpdate),
		alignof(FNarrativeUpdate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers) < 2048);
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
			const UNarrativeDataTask* NarrativeTask;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask = { "NarrativeTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnNarrativeTaskCompleted_Parms, NarrativeTask), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask_MetaData), Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnNarrativeTaskCompleted_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name_MetaData), Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name_MetaData) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnNarrativeTaskCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnNarrativeTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnNarrativeTaskCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNarrativeTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnNarrativeTaskCompleted, const UNarrativeDataTask* NarrativeTask, const FString& Name)
{
	struct _Script_Narrative_eventOnNarrativeTaskCompleted_Parms
	{
		const UNarrativeDataTask* NarrativeTask;
		FString Name;
	};
	_Script_Narrative_eventOnNarrativeTaskCompleted_Parms Parms;
	Parms.NarrativeTask=NarrativeTask;
	Parms.Name=Name;
	OnNarrativeTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnDialogueBegan__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::_Script_Narrative_eventOnDialogueBegan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::_Script_Narrative_eventOnDialogueBegan_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDialogueBegan_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueBegan, UDialogue* Dialogue)
{
	struct _Script_Narrative_eventOnDialogueBegan_Parms
	{
		UDialogue* Dialogue;
	};
	_Script_Narrative_eventOnDialogueBegan_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnDialogueBegan.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnDialogueFinished_Parms
		{
			UDialogue* Dialogue;
			bool bStartingNewDialogue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartingNewDialogue_MetaData[];
#endif
		static void NewProp_bStartingNewDialogue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartingNewDialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_SetBit(void* Obj)
	{
		((_Script_Narrative_eventOnDialogueFinished_Parms*)Obj)->bStartingNewDialogue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue = { "bStartingNewDialogue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Narrative_eventOnDialogueFinished_Parms), &Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_MetaData), Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnDialogueFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::_Script_Narrative_eventOnDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::_Script_Narrative_eventOnDialogueFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, UDialogue* Dialogue, bool bStartingNewDialogue)
{
	struct _Script_Narrative_eventOnDialogueFinished_Parms
	{
		UDialogue* Dialogue;
		bool bStartingNewDialogue;
	};
	_Script_Narrative_eventOnDialogueFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.bStartingNewDialogue=bStartingNewDialogue ? true : false;
	OnDialogueFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventDialogueOptionSelected_Parms
		{
			UDialogue* Dialogue;
			UDialogueNode_Player* PlayerReply;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventDialogueOptionSelected_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::NewProp_PlayerReply = { "PlayerReply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventDialogueOptionSelected_Parms, PlayerReply), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::NewProp_PlayerReply,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "DialogueOptionSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::_Script_Narrative_eventDialogueOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::_Script_Narrative_eventDialogueOptionSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDialogueOptionSelected_DelegateWrapper(const FMulticastScriptDelegate& DialogueOptionSelected, UDialogue* Dialogue, UDialogueNode_Player* PlayerReply)
{
	struct _Script_Narrative_eventDialogueOptionSelected_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* PlayerReply;
	};
	_Script_Narrative_eventDialogueOptionSelected_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.PlayerReply=PlayerReply;
	DialogueOptionSelected.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_MetaData), Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_MetaData) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "DialogueRepliesAvailable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::_Script_Narrative_eventDialogueRepliesAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::_Script_Narrative_eventDialogueRepliesAvailable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDialogueRepliesAvailable_DelegateWrapper(const FMulticastScriptDelegate& DialogueRepliesAvailable, UDialogue* Dialogue, TArray<UDialogueNode_Player*> const& PlayerReplies)
{
	struct _Script_Narrative_eventDialogueRepliesAvailable_Parms
	{
		UDialogue* Dialogue;
		TArray<UDialogueNode_Player*> PlayerReplies;
	};
	_Script_Narrative_eventDialogueRepliesAvailable_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.PlayerReplies=PlayerReplies;
	DialogueRepliesAvailable.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker_MetaData), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker_MetaData) }; // 1043363632
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "NPCDialogueLineStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::_Script_Narrative_eventNPCDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::_Script_Narrative_eventNPCDialogueLineStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FNPCDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
{
	struct _Script_Narrative_eventNPCDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
	_Script_Narrative_eventNPCDialogueLineStarted_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	Parms.Speaker=Speaker;
	NPCDialogueLineStarted.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker_MetaData) }; // 1043363632
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "NPCDialogueLineFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::_Script_Narrative_eventNPCDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::_Script_Narrative_eventNPCDialogueLineFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FNPCDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
{
	struct _Script_Narrative_eventNPCDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
	_Script_Narrative_eventNPCDialogueLineFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	Parms.Speaker=Speaker;
	NPCDialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "PlayerDialogueLineStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::_Script_Narrative_eventPlayerDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::_Script_Narrative_eventPlayerDialogueLineStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
{
	struct _Script_Narrative_eventPlayerDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
	_Script_Narrative_eventPlayerDialogueLineStarted_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	PlayerDialogueLineStarted.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "PlayerDialogueLineFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::_Script_Narrative_eventPlayerDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::_Script_Narrative_eventPlayerDialogueLineFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
{
	struct _Script_Narrative_eventPlayerDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
	_Script_Narrative_eventPlayerDialogueLineFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	PlayerDialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnBeginSave_Parms, SaveGameName), METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnBeginSave__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::_Script_Narrative_eventOnBeginSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::_Script_Narrative_eventOnBeginSave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBeginSave_DelegateWrapper(const FMulticastScriptDelegate& OnBeginSave, const FString& SaveGameName)
{
	struct _Script_Narrative_eventOnBeginSave_Parms
	{
		FString SaveGameName;
	};
	_Script_Narrative_eventOnBeginSave_Parms Parms;
	Parms.SaveGameName=SaveGameName;
	OnBeginSave.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnSaveComplete_Parms, SaveGameName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnSaveComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::_Script_Narrative_eventOnSaveComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::_Script_Narrative_eventOnSaveComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSaveComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSaveComplete, const FString& SaveGameName)
{
	struct _Script_Narrative_eventOnSaveComplete_Parms
	{
		FString SaveGameName;
	};
	_Script_Narrative_eventOnSaveComplete_Parms Parms;
	Parms.SaveGameName=SaveGameName;
	OnSaveComplete.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnBeginLoad_Parms, SaveGameName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnBeginLoad__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::_Script_Narrative_eventOnBeginLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::_Script_Narrative_eventOnBeginLoad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBeginLoad_DelegateWrapper(const FMulticastScriptDelegate& OnBeginLoad, const FString& SaveGameName)
{
	struct _Script_Narrative_eventOnBeginLoad_Parms
	{
		FString SaveGameName;
	};
	_Script_Narrative_eventOnBeginLoad_Parms Parms;
	Parms.SaveGameName=SaveGameName;
	OnBeginLoad.ProcessMulticastDelegate<UObject>(&Parms);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnLoadComplete_Parms, SaveGameName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnLoadComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::_Script_Narrative_eventOnLoadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::_Script_Narrative_eventOnLoadComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadComplete, const FString& SaveGameName)
{
	struct _Script_Narrative_eventOnLoadComplete_Parms
	{
		FString SaveGameName;
	};
	_Script_Narrative_eventOnLoadComplete_Parms Parms;
	Parms.SaveGameName=SaveGameName;
	OnLoadComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnJoinedParty_Parms
		{
			UNarrativePartyComponent* NewParty;
			UNarrativePartyComponent* LeftParty;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewParty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftParty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftParty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty = { "NewParty", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnJoinedParty_Parms, NewParty), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty_MetaData), Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty = { "LeftParty", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnJoinedParty_Parms, LeftParty), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty_MetaData), Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Parties\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Parties" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnJoinedParty__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::_Script_Narrative_eventOnJoinedParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::_Script_Narrative_eventOnJoinedParty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnJoinedParty_DelegateWrapper(const FMulticastScriptDelegate& OnJoinedParty, UNarrativePartyComponent* NewParty, UNarrativePartyComponent* LeftParty)
{
	struct _Script_Narrative_eventOnJoinedParty_Parms
	{
		UNarrativePartyComponent* NewParty;
		UNarrativePartyComponent* LeftParty;
	};
	_Script_Narrative_eventOnJoinedParty_Parms Parms;
	Parms.NewParty=NewParty;
	Parms.LeftParty=LeftParty;
	OnJoinedParty.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnLeaveParty_Parms
		{
			UNarrativePartyComponent* LeftParty;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftParty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftParty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty = { "LeftParty", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnLeaveParty_Parms, LeftParty), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty_MetaData), Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnLeaveParty__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::_Script_Narrative_eventOnLeaveParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::_Script_Narrative_eventOnLeaveParty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLeaveParty_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveParty, UNarrativePartyComponent* LeftParty)
{
	struct _Script_Narrative_eventOnLeaveParty_Parms
	{
		UNarrativePartyComponent* LeftParty;
	};
	_Script_Narrative_eventOnLeaveParty_Parms Parms;
	Parms.LeftParty=LeftParty;
	OnLeaveParty.ProcessMulticastDelegate<UObject>(&Parms);
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
	DEFINE_FUNCTION(UNarrativeComponent::execGetParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativePartyComponent**)Z_Param__Result=P_THIS->GetParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execGetQuestInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_QuestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuest**)Z_Param__Result=P_THIS->GetQuestInstance(Z_Param_QuestClass);
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
	DEFINE_FUNCTION(UNarrativeComponent::execGetNumberOfTimesTaskWasCompleted)
	{
		P_GET_OBJECT(UNarrativeDataTask,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTimesTaskWasCompleted(Z_Param_Task,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execHasCompletedTask)
	{
		P_GET_OBJECT(UNarrativeDataTask,Z_Param_Task);
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
	DEFINE_FUNCTION(UNarrativeComponent::execServerTryExitDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTryExitDialogue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execTryExitDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryExitDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execServerTrySkipCurrentDialogueLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTrySkipCurrentDialogueLine_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execTrySkipCurrentDialogueLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TrySkipCurrentDialogueLine();
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
	DEFINE_FUNCTION(UNarrativeComponent::execClientSelectDialogueOption)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionID);
		P_GET_OBJECT(APlayerState,Z_Param_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSelectDialogueOption_Implementation(Z_Param_OptionID,Z_Param_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execTrySelectDialogueOption)
	{
		P_GET_OBJECT(UDialogueNode_Player,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySelectDialogueOption(Z_Param_Option);
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
	DEFINE_FUNCTION(UNarrativeComponent::execClientExitPartyDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientExitPartyDialogue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientExitDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientExitDialogue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientBeginPartyDialogue)
	{
		P_GET_OBJECT(UClass,Z_Param_Dialogue);
		P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
		P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientBeginPartyDialogue_Implementation(Z_Param_Dialogue,Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execClientBeginDialogue)
	{
		P_GET_OBJECT(UClass,Z_Param_Dialogue);
		P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
		P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientBeginDialogue_Implementation(Z_Param_Dialogue,Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execBeginDialogue)
	{
		P_GET_OBJECT(UClass,Z_Param_Dialogue);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginDialogue(Z_Param_Dialogue,Z_Param_StartFromID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execHasDialogueAvailable)
	{
		P_GET_OBJECT(UClass,Z_Param_Dialogue);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDialogueAvailable(Z_Param_Dialogue,Z_Param_StartFromID);
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
	DEFINE_FUNCTION(UNarrativeComponent::execGetCurrentDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDialogue**)Z_Param__Result=P_THIS->GetCurrentDialogue();
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
		P_GET_UBOOL(Z_Param_bStartingNewDialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueFinished(Z_Param_Dialogue,Z_Param_bStartingNewDialogue);
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
	DEFINE_FUNCTION(UNarrativeComponent::execQuestBranchCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestBranchCompleted(Z_Param_Quest,Z_Param_Branch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestTaskCompleted)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestTaskCompleted(Z_Param_Quest,Z_Param_Task,Z_Param_Branch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execQuestTaskProgressMade)
	{
		P_GET_OBJECT(UQuest,Z_Param_Quest);
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestTaskProgressMade(Z_Param_Quest,Z_Param_Task,Z_Param_Branch,Z_Param_OldProgress,Z_Param_NewProgress);
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
	DEFINE_FUNCTION(UNarrativeComponent::execNarrativeDataTaskCompleted)
	{
		P_GET_OBJECT(UNarrativeDataTask,Z_Param_NarrativeTask);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NarrativeDataTaskCompleted(Z_Param_NarrativeTask,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execOnRep_PendingUpdateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PendingUpdateList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeComponent::execOnRep_PartyComponent)
	{
		P_GET_OBJECT(UNarrativePartyComponent,Z_Param_OldPartyComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PartyComponent(Z_Param_OldPartyComponent);
		P_NATIVE_END;
	}
	struct NarrativeComponent_eventClientBeginDialogue_Parms
	{
		TSubclassOf<UDialogue>  Dialogue;
		TArray<FName> NPCReplyChainIDs;
		TArray<FName> AvailableResponseIDs;
	};
	struct NarrativeComponent_eventClientBeginPartyDialogue_Parms
	{
		TSubclassOf<UDialogue>  Dialogue;
		TArray<FName> NPCReplyChainIDs;
		TArray<FName> AvailableResponseIDs;
	};
	struct NarrativeComponent_eventClientReceiveSave_Parms
	{
		TArray<FNarrativeSavedQuest> SavedQuests;
		TArray<FString> Tasks;
		TArray<int32> Quantities;
	};
	struct NarrativeComponent_eventClientRecieveDialogueChunk_Parms
	{
		TArray<FName> NPCReplyChainIDs;
		TArray<FName> AvailableResponseIDs;
	};
	struct NarrativeComponent_eventClientSelectDialogueOption_Parms
	{
		FName OptionID;
		APlayerState* Selector;
	};
	struct NarrativeComponent_eventServerSelectDialogueOption_Parms
	{
		FName OptionID;
	};
	static FName NAME_UNarrativeComponent_ClientBeginDialogue = FName(TEXT("ClientBeginDialogue"));
	void UNarrativeComponent::ClientBeginDialogue(TSubclassOf<UDialogue>  Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
	{
		NarrativeComponent_eventClientBeginDialogue_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.NPCReplyChainIDs=NPCReplyChainIDs;
		Parms.AvailableResponseIDs=AvailableResponseIDs;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientBeginDialogue),&Parms);
	}
	static FName NAME_UNarrativeComponent_ClientBeginPartyDialogue = FName(TEXT("ClientBeginPartyDialogue"));
	void UNarrativeComponent::ClientBeginPartyDialogue(TSubclassOf<UDialogue>  Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
	{
		NarrativeComponent_eventClientBeginPartyDialogue_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.NPCReplyChainIDs=NPCReplyChainIDs;
		Parms.AvailableResponseIDs=AvailableResponseIDs;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientBeginPartyDialogue),&Parms);
	}
	static FName NAME_UNarrativeComponent_ClientExitDialogue = FName(TEXT("ClientExitDialogue"));
	void UNarrativeComponent::ClientExitDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientExitDialogue),NULL);
	}
	static FName NAME_UNarrativeComponent_ClientExitPartyDialogue = FName(TEXT("ClientExitPartyDialogue"));
	void UNarrativeComponent::ClientExitPartyDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientExitPartyDialogue),NULL);
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
	static FName NAME_UNarrativeComponent_ClientSelectDialogueOption = FName(TEXT("ClientSelectDialogueOption"));
	void UNarrativeComponent::ClientSelectDialogueOption(FName const& OptionID, APlayerState* Selector)
	{
		NarrativeComponent_eventClientSelectDialogueOption_Parms Parms;
		Parms.OptionID=OptionID;
		Parms.Selector=Selector;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ClientSelectDialogueOption),&Parms);
	}
	static FName NAME_UNarrativeComponent_ServerSelectDialogueOption = FName(TEXT("ServerSelectDialogueOption"));
	void UNarrativeComponent::ServerSelectDialogueOption(FName const& OptionID)
	{
		NarrativeComponent_eventServerSelectDialogueOption_Parms Parms;
		Parms.OptionID=OptionID;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ServerSelectDialogueOption),&Parms);
	}
	static FName NAME_UNarrativeComponent_ServerTryExitDialogue = FName(TEXT("ServerTryExitDialogue"));
	void UNarrativeComponent::ServerTryExitDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ServerTryExitDialogue),NULL);
	}
	static FName NAME_UNarrativeComponent_ServerTrySkipCurrentDialogueLine = FName(TEXT("ServerTrySkipCurrentDialogueLine"));
	void UNarrativeComponent::ServerTrySkipCurrentDialogueLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeComponent_ServerTrySkipCurrentDialogueLine),NULL);
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
			{ "ClientBeginPartyDialogue", &UNarrativeComponent::execClientBeginPartyDialogue },
			{ "ClientExitDialogue", &UNarrativeComponent::execClientExitDialogue },
			{ "ClientExitPartyDialogue", &UNarrativeComponent::execClientExitPartyDialogue },
			{ "ClientReceiveSave", &UNarrativeComponent::execClientReceiveSave },
			{ "ClientRecieveDialogueChunk", &UNarrativeComponent::execClientRecieveDialogueChunk },
			{ "ClientSelectDialogueOption", &UNarrativeComponent::execClientSelectDialogueOption },
			{ "DeleteSave", &UNarrativeComponent::execDeleteSave },
			{ "DialogueBegan", &UNarrativeComponent::execDialogueBegan },
			{ "DialogueFinished", &UNarrativeComponent::execDialogueFinished },
			{ "DialogueLineFinished", &UNarrativeComponent::execDialogueLineFinished },
			{ "DialogueLineStarted", &UNarrativeComponent::execDialogueLineStarted },
			{ "DialogueRepliesAvailable", &UNarrativeComponent::execDialogueRepliesAvailable },
			{ "ForgetQuest", &UNarrativeComponent::execForgetQuest },
			{ "GetAllQuests", &UNarrativeComponent::execGetAllQuests },
			{ "GetCurrentDialogue", &UNarrativeComponent::execGetCurrentDialogue },
			{ "GetFailedQuests", &UNarrativeComponent::execGetFailedQuests },
			{ "GetInProgressQuests", &UNarrativeComponent::execGetInProgressQuests },
			{ "GetNumberOfTimesTaskWasCompleted", &UNarrativeComponent::execGetNumberOfTimesTaskWasCompleted },
			{ "GetOwningController", &UNarrativeComponent::execGetOwningController },
			{ "GetOwningPawn", &UNarrativeComponent::execGetOwningPawn },
			{ "GetParty", &UNarrativeComponent::execGetParty },
			{ "GetQuestInstance", &UNarrativeComponent::execGetQuestInstance },
			{ "GetSucceededQuests", &UNarrativeComponent::execGetSucceededQuests },
			{ "HasCompletedTask", &UNarrativeComponent::execHasCompletedTask },
			{ "HasDialogueAvailable", &UNarrativeComponent::execHasDialogueAvailable },
			{ "IsInDialogue", &UNarrativeComponent::execIsInDialogue },
			{ "IsQuestFailed", &UNarrativeComponent::execIsQuestFailed },
			{ "IsQuestFinished", &UNarrativeComponent::execIsQuestFinished },
			{ "IsQuestInProgress", &UNarrativeComponent::execIsQuestInProgress },
			{ "IsQuestStartedOrFinished", &UNarrativeComponent::execIsQuestStartedOrFinished },
			{ "IsQuestSucceeded", &UNarrativeComponent::execIsQuestSucceeded },
			{ "Load", &UNarrativeComponent::execLoad },
			{ "LoadComplete", &UNarrativeComponent::execLoadComplete },
			{ "NarrativeDataTaskCompleted", &UNarrativeComponent::execNarrativeDataTaskCompleted },
			{ "OnRep_PartyComponent", &UNarrativeComponent::execOnRep_PartyComponent },
			{ "OnRep_PendingUpdateList", &UNarrativeComponent::execOnRep_PendingUpdateList },
			{ "QuestBranchCompleted", &UNarrativeComponent::execQuestBranchCompleted },
			{ "QuestFailed", &UNarrativeComponent::execQuestFailed },
			{ "QuestForgotten", &UNarrativeComponent::execQuestForgotten },
			{ "QuestNewState", &UNarrativeComponent::execQuestNewState },
			{ "QuestStarted", &UNarrativeComponent::execQuestStarted },
			{ "QuestSucceeded", &UNarrativeComponent::execQuestSucceeded },
			{ "QuestTaskCompleted", &UNarrativeComponent::execQuestTaskCompleted },
			{ "QuestTaskProgressMade", &UNarrativeComponent::execQuestTaskProgressMade },
			{ "RestartQuest", &UNarrativeComponent::execRestartQuest },
			{ "Save", &UNarrativeComponent::execSave },
			{ "SaveComplete", &UNarrativeComponent::execSaveComplete },
			{ "ServerSelectDialogueOption", &UNarrativeComponent::execServerSelectDialogueOption },
			{ "ServerTryExitDialogue", &UNarrativeComponent::execServerTryExitDialogue },
			{ "ServerTrySkipCurrentDialogueLine", &UNarrativeComponent::execServerTrySkipCurrentDialogueLine },
			{ "TryExitDialogue", &UNarrativeComponent::execTryExitDialogue },
			{ "TrySelectDialogueOption", &UNarrativeComponent::execTrySelectDialogueOption },
			{ "TrySkipCurrentDialogueLine", &UNarrativeComponent::execTrySkipCurrentDialogueLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics
	{
		struct NarrativeComponent_eventBeginDialogue_Parms
		{
			TSubclassOf<UDialogue>  Dialogue;
			FName StartFromID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, StartFromID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventBeginDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventBeginDialogue_Parms), &Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_StartFromID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* Only callable on the server. Server grabs root dialogue node, validates its conditions, and sends it to the client via ClientRecieveDialogueOptions\n\x09*\n\x09*  NOTE: If using multi-NPC dialogues you'll need to ensure each speaker has their avatar correctly assigned. To do this, either set a SpeakerAvatarClass\n\x09* in your speaker info and let narrative spawn your speaker avatars in and it will correctly have them assigned, or if your avatars already exist in the \n\x09* level just add the Speakers ID to them as a tag and narrative will automatically find them for you. If neither of those work you can override the FindSpeakerAvatar function. \n\x09* \n\x09@param Dialogue The dialogue to begin \n\x09@param DefaultNPCAvatar The NPC Avatar to use. For multi-NPC dialogues each speaker obviously needs their own avatar assigned - see the functions comment on how to do this.  \n\x09@param StartFromID The ID of the node you want to jump to. Can be left empty and the dialogue will begin from the root node.\n\n\x09@return Whether the dialogue was successfully started \n\x09*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Only callable on the server. Server grabs root dialogue node, validates its conditions, and sends it to the client via ClientRecieveDialogueOptions\n\n NOTE: If using multi-NPC dialogues you'll need to ensure each speaker has their avatar correctly assigned. To do this, either set a SpeakerAvatarClass\nin your speaker info and let narrative spawn your speaker avatars in and it will correctly have them assigned, or if your avatars already exist in the\nlevel just add the Speakers ID to them as a tag and narrative will automatically find them for you. If neither of those work you can override the FindSpeakerAvatar function.\n\n       @param Dialogue The dialogue to begin\n       @param DefaultNPCAvatar The NPC Avatar to use. For multi-NPC dialogues each speaker obviously needs their own avatar assigned - see the functions comment on how to do this.\n       @param StartFromID The ID of the node you want to jump to. Can be left empty and the dialogue will begin from the root node.\n\n       @return Whether the dialogue was successfully started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NarrativeComponent_eventBeginDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NarrativeComponent_eventBeginDialogue_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginLoad_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginLoad", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NarrativeComponent_eventBeginLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginLoad_Statics::NarrativeComponent_eventBeginLoad_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, StartFromID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginQuest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NarrativeComponent_eventBeginQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NarrativeComponent_eventBeginQuest_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginSave_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginSave", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NarrativeComponent_eventBeginSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginSave_Statics::NarrativeComponent_eventBeginSave_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_Dialogue,
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientBeginDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers), sizeof(NarrativeComponent_eventClientBeginDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeComponent_eventClientBeginDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginPartyDialogue_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginPartyDialogue_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginPartyDialogue_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to inform client to start party dialogue. Also sends the initial chunk*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to inform client to start party dialogue. Also sends the initial chunk" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientBeginPartyDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers), sizeof(NarrativeComponent_eventClientBeginPartyDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeComponent_eventClientBeginPartyDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientExitDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to tell client to end dialogue*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to tell client to end dialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientExitPartyDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_Inner = { "SavedQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedQuest, METADATA_PARAMS(0, nullptr) }; // 2887675159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests = { "SavedQuests", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, SavedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_SavedQuests_MetaData) }; // 2887675159
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_Inner = { "Quantities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities = { "Quantities", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, Quantities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_MetaData) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientReceiveSave", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers), sizeof(NarrativeComponent_eventClientReceiveSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeComponent_eventClientReceiveSave_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientRecieveDialogueChunk_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientRecieveDialogueChunk_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_MetaData) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientRecieveDialogueChunk", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers), sizeof(NarrativeComponent_eventClientRecieveDialogueChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeComponent_eventClientRecieveDialogueChunk_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID = { "OptionID", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientSelectDialogueOption_Parms, OptionID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID_MetaData), Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientSelectDialogueOption_Parms, Selector), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_Selector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Allows the server to inform a client to select a dialogue option. Used by party dialogues */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Allows the server to inform a client to select a dialogue option. Used by party dialogues" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientSelectDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers), sizeof(NarrativeComponent_eventClientSelectDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeComponent_eventClientSelectDialogueOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::FuncParams);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDeleteSave_Parms, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName_MetaData), Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_SaveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDeleteSave_Parms, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot_MetaData), Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_Slot_MetaData) };
	void Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventDeleteSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventDeleteSave_Parms), &Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DeleteSave", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NarrativeComponent_eventDeleteSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DeleteSave_Statics::NarrativeComponent_eventDeleteSave_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NewProp_Dialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueBegan", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NarrativeComponent_eventDialogueBegan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NarrativeComponent_eventDialogueBegan_Parms) < MAX_uint16);
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
			bool bStartingNewDialogue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartingNewDialogue_MetaData[];
#endif
		static void NewProp_bStartingNewDialogue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartingNewDialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventDialogueFinished_Parms*)Obj)->bStartingNewDialogue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue = { "bStartingNewDialogue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventDialogueFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_MetaData), Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NarrativeComponent_eventDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NarrativeComponent_eventDialogueFinished_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueLineFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NarrativeComponent_eventDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NarrativeComponent_eventDialogueLineFinished_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueLineStarted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NarrativeComponent_eventDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NarrativeComponent_eventDialogueLineStarted_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData), Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_MetaData) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueRepliesAvailable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NarrativeComponent_eventDialogueRepliesAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NarrativeComponent_eventDialogueRepliesAvailable_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventForgetQuest_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventForgetQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventForgetQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ForgetQuest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NarrativeComponent_eventForgetQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NarrativeComponent_eventForgetQuest_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetAllQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetAllQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NarrativeComponent_eventGetAllQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NarrativeComponent_eventGetAllQuests_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetAllQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics
	{
		struct NarrativeComponent_eventGetCurrentDialogue_Parms
		{
			UDialogue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetCurrentDialogue_Parms, ReturnValue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NarrativeComponent_eventGetCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NarrativeComponent_eventGetCurrentDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetFailedQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetFailedQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NarrativeComponent_eventGetFailedQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NarrativeComponent_eventGetFailedQuests_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetInProgressQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetInProgressQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NarrativeComponent_eventGetInProgressQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NarrativeComponent_eventGetInProgressQuests_Parms) < MAX_uint16);
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
			const UNarrativeDataTask* Task;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetNumberOfTimesTaskWasCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NarrativeComponent_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NarrativeComponent_eventGetOwningController_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NarrativeComponent_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NarrativeComponent_eventGetOwningPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics
	{
		struct NarrativeComponent_eventGetParty_Parms
		{
			UNarrativePartyComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetParty_Parms, ReturnValue), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**Return our parties component, if we have one*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Return our parties component, if we have one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetParty", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NarrativeComponent_eventGetParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NarrativeComponent_eventGetParty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics
	{
		struct NarrativeComponent_eventGetQuestInstance_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetQuestInstance_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetQuestInstance_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_QuestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Given a Quest class return its active quest object if we've started this quest */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Given a Quest class return its active quest object if we've started this quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetQuestInstance", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NarrativeComponent_eventGetQuestInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NarrativeComponent_eventGetQuestInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetSucceededQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetSucceededQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NarrativeComponent_eventGetSucceededQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NarrativeComponent_eventGetSucceededQuests_Parms) < MAX_uint16);
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
			const UNarrativeDataTask* Task;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity_MetaData), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity_MetaData) };
	void Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventHasCompletedTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventHasCompletedTask_Parms), &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Check if the player has ever completed a given data task. For example you could check if the player has ever talked to a given NPC, taken a certain item, etc\n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Check if the player has ever completed a given data task. For example you could check if the player has ever talked to a given NPC, taken a certain item, etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "HasCompletedTask", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NarrativeComponent_eventHasCompletedTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NarrativeComponent_eventHasCompletedTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics
	{
		struct NarrativeComponent_eventHasDialogueAvailable_Parms
		{
			TSubclassOf<UDialogue>  Dialogue;
			FName StartFromID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasDialogueAvailable_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasDialogueAvailable_Parms, StartFromID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventHasDialogueAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventHasDialogueAvailable_Parms), &Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_StartFromID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* \n\x09""Check if calling BeginDialogue on a given dialogue asset would actually play any dialogue.\n\x09\n\x09THIS WILL ONLY WORK ON THE AUTHORITY. Server should use this function then replicate any needed stuff to clients, this will always \n\x09return false on clients as they do not have the authority to begin dialogues. \n\n\x09""Essentially the same as BeginDialogue, just doesn't actually start the dialogue, just gives you\n\x09the bool return value to check if any dialogue would have started. \n\n\x09Same as BeginDialogue, however doesn't actually begin the dialogue.*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Check if calling BeginDialogue on a given dialogue asset would actually play any dialogue.\n\nTHIS WILL ONLY WORK ON THE AUTHORITY. Server should use this function then replicate any needed stuff to clients, this will always\nreturn false on clients as they do not have the authority to begin dialogues.\n\nEssentially the same as BeginDialogue, just doesn't actually start the dialogue, just gives you\nthe bool return value to check if any dialogue would have started.\n\nSame as BeginDialogue, however doesn't actually begin the dialogue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "HasDialogueAvailable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NarrativeComponent_eventHasDialogueAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NarrativeComponent_eventHasDialogueAvailable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::FuncParams);
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
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsInDialogue_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsInDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NarrativeComponent_eventIsInDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NarrativeComponent_eventIsInDialogue_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestFailed_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestFailed_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestFailed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NarrativeComponent_eventIsQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NarrativeComponent_eventIsQuestFailed_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestFinished_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NarrativeComponent_eventIsQuestFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NarrativeComponent_eventIsQuestFinished_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestInProgress_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestInProgress_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestInProgress", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NarrativeComponent_eventIsQuestInProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NarrativeComponent_eventIsQuestInProgress_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestStartedOrFinished_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestStartedOrFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestStartedOrFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestStartedOrFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NarrativeComponent_eventIsQuestStartedOrFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NarrativeComponent_eventIsQuestStartedOrFinished_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestSucceeded_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventIsQuestSucceeded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestSucceeded_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestSucceeded", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NarrativeComponent_eventIsQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NarrativeComponent_eventIsQuestSucceeded_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventLoad_Parms, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName_MetaData), Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_SaveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventLoad_Parms, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot_MetaData), Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_Slot_MetaData) };
	void Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventLoad_Parms), &Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "Load", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NarrativeComponent_eventLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_Load_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_Load_Statics::NarrativeComponent_eventLoad_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventLoadComplete_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "LoadComplete", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NarrativeComponent_eventLoadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::NarrativeComponent_eventLoadComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_LoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_LoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics
	{
		struct NarrativeComponent_eventNarrativeDataTaskCompleted_Parms
		{
			const UNarrativeDataTask* NarrativeTask;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask = { "NarrativeTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventNarrativeDataTaskCompleted_Parms, NarrativeTask), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask_MetaData), Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventNarrativeDataTaskCompleted_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "NarrativeDataTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NarrativeComponent_eventNarrativeDataTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NarrativeComponent_eventNarrativeDataTaskCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics
	{
		struct NarrativeComponent_eventOnRep_PartyComponent_Parms
		{
			UNarrativePartyComponent* OldPartyComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPartyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPartyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent = { "OldPartyComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventOnRep_PartyComponent_Parms, OldPartyComponent), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent_MetaData), Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "OnRep_PartyComponent", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NarrativeComponent_eventOnRep_PartyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NarrativeComponent_eventOnRep_PartyComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "OnRep_PendingUpdateList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics
	{
		struct NarrativeComponent_eventQuestBranchCompleted_Parms
		{
			const UQuest* Quest;
			const UQuestBranch* Branch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestBranchCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestBranchCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NarrativeComponent_eventQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NarrativeComponent_eventQuestBranchCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestFailed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NarrativeComponent_eventQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NarrativeComponent_eventQuestFailed_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestForgotten_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestForgotten", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NarrativeComponent_eventQuestForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NarrativeComponent_eventQuestForgotten_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestNewState", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NarrativeComponent_eventQuestNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NarrativeComponent_eventQuestNewState_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestStarted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NarrativeComponent_eventQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NarrativeComponent_eventQuestStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestSucceeded", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NarrativeComponent_eventQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NarrativeComponent_eventQuestSucceeded_Parms) < MAX_uint16);
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
			const UNarrativeTask* Task;
			const UQuestBranch* Branch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NarrativeComponent_eventQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NarrativeComponent_eventQuestTaskCompleted_Parms) < MAX_uint16);
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
			const UNarrativeTask* Task;
			const UQuestBranch* Branch;
			int32 OldProgress;
			int32 NewProgress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewProgress;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch_MetaData), Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_OldProgress = { "OldProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, OldProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, NewProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_OldProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestTaskProgressMade", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NarrativeComponent_eventQuestTaskProgressMade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NarrativeComponent_eventQuestTaskProgressMade_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventRestartQuest_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventRestartQuest_Parms, StartFromID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventRestartQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventRestartQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "RestartQuest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NarrativeComponent_eventRestartQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NarrativeComponent_eventRestartQuest_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventSave_Parms, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName_MetaData), Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventSave_Parms, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot_MetaData), Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot_MetaData) };
	void Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventSave_Parms), &Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_Save_Statics::Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**\n\x09* \n\x09* Save every quest we've done, and every legacy task the player has ever completed\n\x09* \n\x09* BE CAREFUL: If you ship your game and players save their game, and you then modify a quest and ship that update to \n\x09* people, it can break their save file, especially if they were at a state that you later remove or change the ID of. It is recommended to not touch\n\x09* quests as much as possible once they are shipped for this reason, especially do not remove/rename states the player can be at.\n\x09* \n\x09@param SaveName the name of the save game. */" },
		{ "CPP_Default_SaveName", "NarrativeSaveData" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Save every quest we've done, and every legacy task the player has ever completed\n\nBE CAREFUL: If you ship your game and players save their game, and you then modify a quest and ship that update to\npeople, it can break their save file, especially if they were at a state that you later remove or change the ID of. It is recommended to not touch\nquests as much as possible once they are shipped for this reason, especially do not remove/rename states the player can be at.\n\n       @param SaveName the name of the save game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "Save", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NarrativeComponent_eventSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_Save_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_Save_Statics::NarrativeComponent_eventSave_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventSaveComplete_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NewProp_SaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "SaveComplete", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NarrativeComponent_eventSaveComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::NarrativeComponent_eventSaveComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_SaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_SaveComplete_Statics::FuncParams);
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID = { "OptionID", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventServerSelectDialogueOption_Parms, OptionID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID_MetaData), Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID_MetaData) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerSelectDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers), sizeof(NarrativeComponent_eventServerSelectDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeComponent_eventServerSelectDialogueOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerTryExitDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Attempt to skip the current dialogue line */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Attempt to skip the current dialogue line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerTrySkipCurrentDialogueLine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TryExitDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics
	{
		struct NarrativeComponent_eventTrySelectDialogueOption_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventTrySelectDialogueOption_Parms, Option), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called by the client when it tries selecting a dialogue option - the server ultimately decides if this goes through or not,\n\x09though the server validates replies before it sends them to you, so this should never fail */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called by the client when it tries selecting a dialogue option - the server ultimately decides if this goes through or not,\n       though the server validates replies before it sends them to you, so this should never fail" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TrySelectDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NarrativeComponent_eventTrySelectDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NarrativeComponent_eventTrySelectDialogueOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics
	{
		struct NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms
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
	void Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms), &Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Attempt to skip the current dialogue line\n\x09Return true if we skipped the line, or if called on a client return true if we were able to ask server to skip the line (isn't guaranteed, server still needs to auth it)\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Attempt to skip the current dialogue line\n       Return true if we skipped the line, or if called on a client return true if we were able to ask server to skip the line (isn't guaranteed, server still needs to auth it)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TrySkipCurrentDialogueLine", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNarrativeDataTaskCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNarrativeDataTaskCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestBranchCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestBranchCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestNewState_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestNewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestTaskProgressChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestTaskProgressChanged;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinedParty_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinedParty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaveParty_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaveParty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueBegan_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueBegan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueOptionSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueOptionSelected;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyComponent;
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginDialogue, "BeginDialogue" }, // 523004720
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginLoad, "BeginLoad" }, // 1391545547
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginQuest, "BeginQuest" }, // 4277469631
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginSave, "BeginSave" }, // 2799808158
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue, "ClientBeginDialogue" }, // 324571696
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue, "ClientBeginPartyDialogue" }, // 2837687801
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue, "ClientExitDialogue" }, // 343761505
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue, "ClientExitPartyDialogue" }, // 2547402231
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave, "ClientReceiveSave" }, // 3161458420
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk, "ClientRecieveDialogueChunk" }, // 917945910
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption, "ClientSelectDialogueOption" }, // 3382784273
		{ &Z_Construct_UFunction_UNarrativeComponent_DeleteSave, "DeleteSave" }, // 3990046813
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueBegan, "DialogueBegan" }, // 1521430018
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueFinished, "DialogueFinished" }, // 4196313053
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished, "DialogueLineFinished" }, // 2465604271
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted, "DialogueLineStarted" }, // 1189412627
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable, "DialogueRepliesAvailable" }, // 180257772
		{ &Z_Construct_UFunction_UNarrativeComponent_ForgetQuest, "ForgetQuest" }, // 4031315858
		{ &Z_Construct_UFunction_UNarrativeComponent_GetAllQuests, "GetAllQuests" }, // 3774976512
		{ &Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue, "GetCurrentDialogue" }, // 809676632
		{ &Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests, "GetFailedQuests" }, // 1071688890
		{ &Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests, "GetInProgressQuests" }, // 4243003879
		{ &Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted, "GetNumberOfTimesTaskWasCompleted" }, // 463128197
		{ &Z_Construct_UFunction_UNarrativeComponent_GetOwningController, "GetOwningController" }, // 1581425624
		{ &Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn, "GetOwningPawn" }, // 431816249
		{ &Z_Construct_UFunction_UNarrativeComponent_GetParty, "GetParty" }, // 2767217296
		{ &Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance, "GetQuestInstance" }, // 401864729
		{ &Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests, "GetSucceededQuests" }, // 2293593118
		{ &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask, "HasCompletedTask" }, // 1391190407
		{ &Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable, "HasDialogueAvailable" }, // 682360725
		{ &Z_Construct_UFunction_UNarrativeComponent_IsInDialogue, "IsInDialogue" }, // 722942799
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed, "IsQuestFailed" }, // 1766575948
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished, "IsQuestFinished" }, // 4135999636
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress, "IsQuestInProgress" }, // 2716406258
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished, "IsQuestStartedOrFinished" }, // 2863888016
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded, "IsQuestSucceeded" }, // 4200774700
		{ &Z_Construct_UFunction_UNarrativeComponent_Load, "Load" }, // 2996188421
		{ &Z_Construct_UFunction_UNarrativeComponent_LoadComplete, "LoadComplete" }, // 1979906873
		{ &Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted, "NarrativeDataTaskCompleted" }, // 2193080740
		{ &Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent, "OnRep_PartyComponent" }, // 2200427215
		{ &Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList, "OnRep_PendingUpdateList" }, // 2478544420
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted, "QuestBranchCompleted" }, // 1004101382
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestFailed, "QuestFailed" }, // 3516353334
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestForgotten, "QuestForgotten" }, // 1389491990
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestNewState, "QuestNewState" }, // 423986592
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestStarted, "QuestStarted" }, // 3976156861
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded, "QuestSucceeded" }, // 3826366959
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted, "QuestTaskCompleted" }, // 4090190351
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade, "QuestTaskProgressMade" }, // 3767473417
		{ &Z_Construct_UFunction_UNarrativeComponent_RestartQuest, "RestartQuest" }, // 3308365424
		{ &Z_Construct_UFunction_UNarrativeComponent_Save, "Save" }, // 3298484214
		{ &Z_Construct_UFunction_UNarrativeComponent_SaveComplete, "SaveComplete" }, // 2753690431
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption, "ServerSelectDialogueOption" }, // 2844484191
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue, "ServerTryExitDialogue" }, // 2584084857
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine, "ServerTrySkipCurrentDialogueLine" }, // 2752242220
		{ &Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue, "TryExitDialogue" }, // 2373392419
		{ &Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption, "TrySelectDialogueOption" }, // 4021465175
		{ &Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine, "TrySkipCurrentDialogueLine" }, // 3940761691
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n* Add this component to your Player Controller. \n* Narrative Component acts as the connection to the Narrative system and allows you to start quests, dialogues, complete Tasks, etc.\n*/" },
		{ "DisplayName", "Narrative Component" },
		{ "IncludePath", "NarrativeComponent.h" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Add this component to your Player Controller.\nNarrative Component acts as the connection to the Narrative system and allows you to start quests, dialogues, complete Tasks, etc." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a narrative data task is completed by the player */" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a narrative data task is completed by the player" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted = { "OnNarrativeDataTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnNarrativeDataTaskCompleted), Z_Construct_UDelegateFunction_Narrative_OnNarrativeTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted_MetaData) }; // 836484413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective has been completed.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest objective has been completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted = { "OnQuestBranchCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestBranchCompleted), Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted_MetaData) }; // 1020185813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective is updated and we've received a new objective*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest objective is updated and we've received a new objective" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState = { "OnQuestNewState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestNewState), Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState_MetaData) }; // 308258444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a quest step has made progress. ie 6 out of 10 wolves killed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest task in a quest step has made progress. ie 6 out of 10 wolves killed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged = { "OnQuestTaskProgressChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestTaskProgressChanged), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged_MetaData) }; // 1727782443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a step is completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest task in a step is completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted = { "OnQuestTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestTaskCompleted), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted_MetaData) }; // 2456509379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is completed.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded = { "OnQuestSucceeded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestSucceeded), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded_MetaData) }; // 2365104296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is failed.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is failed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed = { "OnQuestFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestFailed), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed_MetaData) }; // 3919280106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is started.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted = { "OnQuestStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestStarted), Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted_MetaData) }; // 1068058913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is forgotten.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is forgotten." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten = { "OnQuestForgotten", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestForgotten), Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten_MetaData) }; // 2940675377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is restarted.*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is restarted." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted = { "OnQuestRestarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestRestarted), Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted_MetaData) }; // 3223953902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a save has begun*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a save has begun" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave = { "OnBeginSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnBeginSave), Z_Construct_UDelegateFunction_Narrative_OnBeginSave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginSave_MetaData) }; // 1726991092
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a save has completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a save has completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete = { "OnSaveComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnSaveComplete), Z_Construct_UDelegateFunction_Narrative_OnSaveComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnSaveComplete_MetaData) }; // 1503273548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a load has begun*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a load has begun" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad = { "OnBeginLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnBeginLoad), Z_Construct_UDelegateFunction_Narrative_OnBeginLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnBeginLoad_MetaData) }; // 616483122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when a load has completed*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a load has completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete = { "OnLoadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnLoadComplete), Z_Construct_UDelegateFunction_Narrative_OnLoadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLoadComplete_MetaData) }; // 959808106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when we've joined a party*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when we've joined a party" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty = { "OnJoinedParty", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnJoinedParty), Z_Construct_UDelegateFunction_Narrative_OnJoinedParty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty_MetaData) }; // 3864352385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when we've left a party*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when we've left a party" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty = { "OnLeaveParty", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnLeaveParty), Z_Construct_UDelegateFunction_Narrative_OnLeaveParty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty_MetaData) }; // 1100806385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue starts*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan = { "OnDialogueBegan", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueBegan), Z_Construct_UDelegateFunction_Narrative_OnDialogueBegan__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan_MetaData) }; // 474051979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue has been finished for any reason*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue has been finished for any reason" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueFinished), Z_Construct_UDelegateFunction_Narrative_OnDialogueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished_MetaData) }; // 3849379759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue option is selected*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue option is selected" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected = { "OnDialogueOptionSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueOptionSelected), Z_Construct_UDelegateFunction_Narrative_DialogueOptionSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected_MetaData) }; // 3078256221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when the NPC(s) have finished talking and the players replies are available*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when the NPC(s) have finished talking and the players replies are available" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable = { "OnDialogueRepliesAvailable", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueRepliesAvailable), Z_Construct_UDelegateFunction_Narrative_DialogueRepliesAvailable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable_MetaData) }; // 3245241499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line starts*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted = { "OnNPCDialogueLineStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnNPCDialogueLineStarted), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted_MetaData) }; // 1244968956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line finishes*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line finishes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished = { "OnNPCDialogueLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnNPCDialogueLineFinished), Z_Construct_UDelegateFunction_Narrative_NPCDialogueLineFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished_MetaData) }; // 634471726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line starts*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted = { "OnPlayerDialogueLineStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnPlayerDialogueLineStarted), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted_MetaData) }; // 2086021168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line finishes*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line finishes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished = { "OnPlayerDialogueLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnPlayerDialogueLineFinished), Z_Construct_UDelegateFunction_Narrative_PlayerDialogueLineFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished_MetaData) }; // 1223465447
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_Inner = { "PendingUpdateList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeUpdate, METADATA_PARAMS(0, nullptr) }; // 3211493124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_MetaData[] = {
		{ "Comment", "//Server replicates these back to client so client can keep its state machine in sync with the servers\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Server replicates these back to client so client can keep its state machine in sync with the servers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList = { "PendingUpdateList", "OnRep_PendingUpdateList", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, PendingUpdateList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_MetaData) }; // 3211493124
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_Inner = { "QuestList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//A list of all the quests the player is involved in\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "A list of all the quests the player is involved in" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList = { "QuestList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, QuestList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//Current dialogue the player is in \n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "Current dialogue the player is in" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, CurrentDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_ValueProp = { "MasterTaskList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_Key_KeyProp = { "MasterTaskList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/*A map of every narrative task the player has ever completed, where the key is the amount of times the action has been completed\n\x09""a TMap means we can very efficiently track large numbers of actions, such as shooting where the player may shoot a gun thousands of times\n\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "A map of every narrative task the player has ever completed, where the key is the amount of times the action has been completed\n       a TMap means we can very efficiently track large numbers of actions, such as shooting where the player may shoot a gun thousands of times" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList = { "MasterTaskList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, MasterTaskList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent_MetaData[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/** The party we're in, if any. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "The party we're in, if any." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent = { "PartyComponent", "OnRep_PartyComponent", (EPropertyFlags)0x002008010008003c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, PartyComponent), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC_MetaData[] = {
		{ "Comment", "//We cache the OwningController, we won't cache pawn as this might change\n" },
		{ "ModuleRelativePath", "Public/NarrativeComponent.h" },
		{ "ToolTip", "We cache the OwningController, we won't cache pawn as this might change" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC_MetaData), Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers) < 2048);
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
		static const FName Name_PartyComponent(TEXT("PartyComponent"));

		const bool bIsValid = true
			&& Name_PendingUpdateList == ClassReps[(int32)ENetFields_Private::PendingUpdateList].Property->GetFName()
			&& Name_PartyComponent == ClassReps[(int32)ENetFields_Private::PartyComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeComponent);
	UNarrativeComponent::~UNarrativeComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::EnumInfo[] = {
		{ EUpdateType_StaticEnum, TEXT("EUpdateType"), &Z_Registration_Info_UEnum_EUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1490709536U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ScriptStructInfo[] = {
		{ FDialogueInfo::StaticStruct, Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewStructOps, TEXT("DialogueInfo"), &Z_Registration_Info_UScriptStruct_DialogueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueInfo), 591431421U) },
		{ FNarrativeUpdate::StaticStruct, Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewStructOps, TEXT("NarrativeUpdate"), &Z_Registration_Info_UScriptStruct_NarrativeUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeUpdate), 3211493124U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeComponent, UNarrativeComponent::StaticClass, TEXT("UNarrativeComponent"), &Z_Registration_Info_UClass_UNarrativeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeComponent), 765651972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_12117031(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
