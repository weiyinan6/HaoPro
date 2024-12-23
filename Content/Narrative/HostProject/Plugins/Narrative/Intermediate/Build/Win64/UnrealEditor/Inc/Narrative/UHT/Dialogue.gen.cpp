// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/Dialogue.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "Narrative/Public/DialogueSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSpeakerInfo();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpeakerInfo;
class UScriptStruct* FSpeakerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpeakerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpeakerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeakerInfo, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("SpeakerInfo"));
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SpeakerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpeakerShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSpeakerShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAvatarClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpeakerAvatarClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAvatarTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerAvatarTransform;
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
		{ "Comment", "/**Represents the configuration for a speaker in this dialogue*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Represents the configuration for a speaker in this dialogue" },
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerInfo, SpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID_MetaData), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerName_MetaData[] = {
		{ "Category", "Speaker Details" },
		{ "Comment", "//The display name of this speaker (will default to SpeakerID if empty). \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The display name of this speaker (will default to SpeakerID if empty)." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerInfo, SpeakerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerName_MetaData), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultSpeakerShot_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Sequence to use whenever this speaker is talking (will be overriden by shot set on line)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Sequence to use whenever this speaker is talking (will be overriden by shot set on line)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultSpeakerShot = { "DefaultSpeakerShot", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerInfo, DefaultSpeakerShot), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultSpeakerShot_MetaData), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultSpeakerShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarClass_MetaData[] = {
		{ "Category", "Speaker Details" },
		{ "Comment", "/**\n\x09Set this to a valid actor class if you want narrative to automatically spawn your speaker avatar in, and destroy it when the dialogue ends. \n\n\x09If you leave this empty, narrative will try find an actor in the world with the Speaker ID added as a tag, and use that as the avatar instead.\n\n\x09If you require different functionality, override the LinkSpeakerAvatar function. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Set this to a valid actor class if you want narrative to automatically spawn your speaker avatar in, and destroy it when the dialogue ends.\n\nIf you leave this empty, narrative will try find an actor in the world with the Speaker ID added as a tag, and use that as the avatar instead.\n\nIf you require different functionality, override the LinkSpeakerAvatar function." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarClass = { "SpeakerAvatarClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerInfo, SpeakerAvatarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarClass_MetaData), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarTransform_MetaData[] = {
		{ "Category", "Speaker Details" },
		{ "Comment", "//The transform for the SpeakerActor that gets spawned in, if one is set. \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The transform for the SpeakerActor that gets spawned in, if one is set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarTransform = { "SpeakerAvatarTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerInfo, SpeakerAvatarTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarTransform_MetaData), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "Speaker Details" },
		{ "Comment", "//Custom node colour for this NPC in the graph\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Custom node colour for this NPC in the graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerInfo, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor_MetaData), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_DefaultSpeakerShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_SpeakerAvatarTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_NodeColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"SpeakerInfo",
		Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers),
		sizeof(FSpeakerInfo),
		alignof(FSpeakerInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SpeakerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpeakerInfo.InnerSingleton, Z_Construct_UScriptStruct_FSpeakerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpeakerInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlayerSpeakerInfo>() == std::is_polymorphic<FSpeakerInfo>(), "USTRUCT FPlayerSpeakerInfo cannot be polymorphic unless super FSpeakerInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo;
class UScriptStruct* FPlayerSpeakerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSpeakerInfo, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("PlayerSpeakerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FPlayerSpeakerInfo>()
{
	return FPlayerSpeakerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectingReplyShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectingReplyShot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Special speaker type created for the player*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Special speaker type created for the player" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSpeakerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewProp_SelectingReplyShot_MetaData[] = {
		{ "Category", "Sequences" },
		{ "Comment", "//Sequence to play when player is selecting their reply, overrides SelectingReplyShot\n" },
		{ "DisplayAfter", "SelectingReplyShot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Sequence to play when player is selecting their reply, overrides SelectingReplyShot" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewProp_SelectingReplyShot = { "SelectingReplyShot", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSpeakerInfo, SelectingReplyShot), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewProp_SelectingReplyShot_MetaData), Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewProp_SelectingReplyShot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewProp_SelectingReplyShot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		Z_Construct_UScriptStruct_FSpeakerInfo,
		&NewStructOps,
		"PlayerSpeakerInfo",
		Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::PropPointers),
		sizeof(FPlayerSpeakerInfo),
		alignof(FPlayerSpeakerInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerSpeakerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UDialogue::execGetConversationCenterPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetConversationCenterPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execIsPartyDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartyDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execBlendingOutFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendingOutFinished();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UDialogue::execStopDialogueSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDialogueSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayDialogueSequence)
	{
		P_GET_OBJECT(UNarrativeDialogueSequence,Z_Param_Sequence);
		P_GET_OBJECT(AActor,Z_Param_Speaker);
		P_GET_OBJECT(AActor,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogueSequence(Z_Param_Sequence,Z_Param_Speaker,Z_Param_Listener);
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
	DEFINE_FUNCTION(UDialogue::execFinishDialogueNode)
	{
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_GET_OBJECT(AActor,Z_Param_SpeakerActor);
		P_GET_OBJECT(AActor,Z_Param_ListenerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDialogueNode_Implementation(Z_Param_Node,Z_Param_Out_Line,Z_Param_Out_Speaker,Z_Param_SpeakerActor,Z_Param_ListenerActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayDialogueNode)
	{
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Speaker);
		P_GET_OBJECT(AActor,Z_Param_SpeakerActor);
		P_GET_OBJECT(AActor,Z_Param_ListenerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogueNode_Implementation(Z_Param_Node,Z_Param_Out_Line,Z_Param_Out_Speaker,Z_Param_SpeakerActor,Z_Param_ListenerActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayDialogueSound)
	{
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_GET_OBJECT(AActor,Z_Param_Speaker);
		P_GET_OBJECT(AActor,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogueSound_Implementation(Z_Param_Out_Line,Z_Param_Speaker,Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execStopDialogueAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDialogueAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execPlayDialogueAnimation)
	{
		P_GET_OBJECT(UDialogueNode,Z_Param_Node);
		P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_Line);
		P_GET_OBJECT(AActor,Z_Param_Speaker);
		P_GET_OBJECT(AActor,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogueAnimation_Implementation(Z_Param_Node,Z_Param_Out_Line,Z_Param_Speaker,Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execDestroySpeakerAvatar)
	{
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Info);
		P_GET_OBJECT(AActor,Z_Param_SpeakerAvatar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySpeakerAvatar_Implementation(Z_Param_Out_Info,Z_Param_SpeakerAvatar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execLinkSpeakerAvatar)
	{
		P_GET_STRUCT_REF(FSpeakerInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->LinkSpeakerAvatar_Implementation(Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execTickDialogue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickDialogue_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetSpeakerHeadLocation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSpeakerHeadLocation_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetAvatar)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SpeakerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatar(Z_Param_Out_SpeakerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetPlayerAvatar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetPlayerAvatar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDialogueNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execCanSkipCurrentLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSkipCurrentLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execSkipCurrentLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SkipCurrentLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogue::execEndCurrentLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCurrentLine();
		P_NATIVE_END;
	}
	struct Dialogue_eventDestroySpeakerAvatar_Parms
	{
		FSpeakerInfo Info;
		AActor* SpeakerAvatar;
	};
	struct Dialogue_eventFinishDialogueNode_Parms
	{
		UDialogueNode* Node;
		FDialogueLine Line;
		FSpeakerInfo Speaker;
		AActor* SpeakerActor;
		AActor* ListenerActor;
	};
	struct Dialogue_eventGetLineDuration_Parms
	{
		UDialogueNode* Node;
		FDialogueLine Line;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		Dialogue_eventGetLineDuration_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct Dialogue_eventGetSpeakerHeadLocation_Parms
	{
		AActor* Actor;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		Dialogue_eventGetSpeakerHeadLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct Dialogue_eventGetStringVariable_Parms
	{
		const UDialogueNode* Node;
		FDialogueLine Line;
		FString VariableName;
		FString ReturnValue;
	};
	struct Dialogue_eventLinkSpeakerAvatar_Parms
	{
		FSpeakerInfo Info;
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		Dialogue_eventLinkSpeakerAvatar_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct Dialogue_eventOnNPCDialogueLineFinished_Parms
	{
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
	struct Dialogue_eventOnNPCDialogueLineStarted_Parms
	{
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
	struct Dialogue_eventOnPlayerDialogueLineFinished_Parms
	{
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
	struct Dialogue_eventOnPlayerDialogueLineStarted_Parms
	{
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
	struct Dialogue_eventPlayDialogueAnimation_Parms
	{
		UDialogueNode* Node;
		FDialogueLine Line;
		AActor* Speaker;
		AActor* Listener;
	};
	struct Dialogue_eventPlayDialogueNode_Parms
	{
		UDialogueNode* Node;
		FDialogueLine Line;
		FSpeakerInfo Speaker;
		AActor* SpeakerActor;
		AActor* ListenerActor;
	};
	struct Dialogue_eventPlayDialogueSound_Parms
	{
		FDialogueLine Line;
		AActor* Speaker;
		AActor* Listener;
	};
	struct Dialogue_eventPlayNPCDialogue_Parms
	{
		UDialogueNode_NPC* NPCReply;
		FDialogueLine Line;
		FSpeakerInfo Speaker;
	};
	struct Dialogue_eventPlayPlayerDialogue_Parms
	{
		UDialogueNode_Player* PlayerReply;
		FDialogueLine Line;
	};
	struct Dialogue_eventTickDialogue_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UDialogue_DestroySpeakerAvatar = FName(TEXT("DestroySpeakerAvatar"));
	void UDialogue::DestroySpeakerAvatar(FSpeakerInfo const& Info, AActor* SpeakerAvatar)
	{
		Dialogue_eventDestroySpeakerAvatar_Parms Parms;
		Parms.Info=Info;
		Parms.SpeakerAvatar=SpeakerAvatar;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_DestroySpeakerAvatar),&Parms);
	}
	static FName NAME_UDialogue_FinishDialogueNode = FName(TEXT("FinishDialogueNode"));
	void UDialogue::FinishDialogueNode(UDialogueNode* Node, FDialogueLine const& Line, FSpeakerInfo const& Speaker, AActor* SpeakerActor, AActor* ListenerActor)
	{
		Dialogue_eventFinishDialogueNode_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		Parms.Speaker=Speaker;
		Parms.SpeakerActor=SpeakerActor;
		Parms.ListenerActor=ListenerActor;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_FinishDialogueNode),&Parms);
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
	static FName NAME_UDialogue_GetSpeakerHeadLocation = FName(TEXT("GetSpeakerHeadLocation"));
	FVector UDialogue::GetSpeakerHeadLocation(AActor* Actor) const
	{
		Dialogue_eventGetSpeakerHeadLocation_Parms Parms;
		Parms.Actor=Actor;
		const_cast<UDialogue*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDialogue_GetSpeakerHeadLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDialogue_GetStringVariable = FName(TEXT("GetStringVariable"));
	FString UDialogue::GetStringVariable(const UDialogueNode* Node, FDialogueLine const& Line, const FString& VariableName)
	{
		Dialogue_eventGetStringVariable_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		Parms.VariableName=VariableName;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_GetStringVariable),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDialogue_K2_OnBeginDialogue = FName(TEXT("K2_OnBeginDialogue"));
	void UDialogue::K2_OnBeginDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_K2_OnBeginDialogue),NULL);
	}
	static FName NAME_UDialogue_K2_OnEndDialogue = FName(TEXT("K2_OnEndDialogue"));
	void UDialogue::K2_OnEndDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_K2_OnEndDialogue),NULL);
	}
	static FName NAME_UDialogue_LinkSpeakerAvatar = FName(TEXT("LinkSpeakerAvatar"));
	AActor* UDialogue::LinkSpeakerAvatar(FSpeakerInfo const& Info)
	{
		Dialogue_eventLinkSpeakerAvatar_Parms Parms;
		Parms.Info=Info;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_LinkSpeakerAvatar),&Parms);
		return Parms.ReturnValue;
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
	void UDialogue::PlayDialogueAnimation(UDialogueNode* Node, FDialogueLine const& Line, AActor* Speaker, AActor* Listener)
	{
		Dialogue_eventPlayDialogueAnimation_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		Parms.Speaker=Speaker;
		Parms.Listener=Listener;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_PlayDialogueAnimation),&Parms);
	}
	static FName NAME_UDialogue_PlayDialogueNode = FName(TEXT("PlayDialogueNode"));
	void UDialogue::PlayDialogueNode(UDialogueNode* Node, FDialogueLine const& Line, FSpeakerInfo const& Speaker, AActor* SpeakerActor, AActor* ListenerActor)
	{
		Dialogue_eventPlayDialogueNode_Parms Parms;
		Parms.Node=Node;
		Parms.Line=Line;
		Parms.Speaker=Speaker;
		Parms.SpeakerActor=SpeakerActor;
		Parms.ListenerActor=ListenerActor;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_PlayDialogueNode),&Parms);
	}
	static FName NAME_UDialogue_PlayDialogueSound = FName(TEXT("PlayDialogueSound"));
	void UDialogue::PlayDialogueSound(FDialogueLine const& Line, AActor* Speaker, AActor* Listener)
	{
		Dialogue_eventPlayDialogueSound_Parms Parms;
		Parms.Line=Line;
		Parms.Speaker=Speaker;
		Parms.Listener=Listener;
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
	static FName NAME_UDialogue_StopDialogueAnimation = FName(TEXT("StopDialogueAnimation"));
	void UDialogue::StopDialogueAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_StopDialogueAnimation),NULL);
	}
	static FName NAME_UDialogue_TickDialogue = FName(TEXT("TickDialogue"));
	void UDialogue::TickDialogue(const float DeltaTime)
	{
		Dialogue_eventTickDialogue_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UDialogue_TickDialogue),&Parms);
	}
	void UDialogue::StaticRegisterNativesUDialogue()
	{
		UClass* Class = UDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlendingOutFinished", &UDialogue::execBlendingOutFinished },
			{ "CanSkipCurrentLine", &UDialogue::execCanSkipCurrentLine },
			{ "DestroySpeakerAvatar", &UDialogue::execDestroySpeakerAvatar },
			{ "EndCurrentLine", &UDialogue::execEndCurrentLine },
			{ "FinishDialogueNode", &UDialogue::execFinishDialogueNode },
			{ "FinishNPCDialogue", &UDialogue::execFinishNPCDialogue },
			{ "FinishPlayerDialogue", &UDialogue::execFinishPlayerDialogue },
			{ "GetAvatar", &UDialogue::execGetAvatar },
			{ "GetConversationCenterPoint", &UDialogue::execGetConversationCenterPoint },
			{ "GetLineDuration", &UDialogue::execGetLineDuration },
			{ "GetNodes", &UDialogue::execGetNodes },
			{ "GetPlayerAvatar", &UDialogue::execGetPlayerAvatar },
			{ "GetSpeakerHeadLocation", &UDialogue::execGetSpeakerHeadLocation },
			{ "GetStringVariable", &UDialogue::execGetStringVariable },
			{ "IsPartyDialogue", &UDialogue::execIsPartyDialogue },
			{ "LinkSpeakerAvatar", &UDialogue::execLinkSpeakerAvatar },
			{ "OnNPCDialogueLineFinished", &UDialogue::execOnNPCDialogueLineFinished },
			{ "OnNPCDialogueLineStarted", &UDialogue::execOnNPCDialogueLineStarted },
			{ "OnPlayerDialogueLineFinished", &UDialogue::execOnPlayerDialogueLineFinished },
			{ "OnPlayerDialogueLineStarted", &UDialogue::execOnPlayerDialogueLineStarted },
			{ "PlayDialogueAnimation", &UDialogue::execPlayDialogueAnimation },
			{ "PlayDialogueNode", &UDialogue::execPlayDialogueNode },
			{ "PlayDialogueSequence", &UDialogue::execPlayDialogueSequence },
			{ "PlayDialogueSound", &UDialogue::execPlayDialogueSound },
			{ "PlayNextNPCReply", &UDialogue::execPlayNextNPCReply },
			{ "PlayNPCDialogue", &UDialogue::execPlayNPCDialogue },
			{ "PlayPlayerDialogue", &UDialogue::execPlayPlayerDialogue },
			{ "SkipCurrentLine", &UDialogue::execSkipCurrentLine },
			{ "StopDialogueAnimation", &UDialogue::execStopDialogueAnimation },
			{ "StopDialogueSequence", &UDialogue::execStopDialogueSequence },
			{ "TickDialogue", &UDialogue::execTickDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogue_BlendingOutFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_BlendingOutFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_BlendingOutFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "BlendingOutFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_BlendingOutFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_BlendingOutFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_BlendingOutFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_BlendingOutFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics
	{
		struct Dialogue_eventCanSkipCurrentLine_Parms
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
	void Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Dialogue_eventCanSkipCurrentLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dialogue_eventCanSkipCurrentLine_Parms), &Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**Return true if the current dialogue line can be skipped, or if we can ask the server to do a skip*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Return true if the current dialogue line can be skipped, or if we can ask the server to do a skip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "CanSkipCurrentLine", nullptr, nullptr, Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::Dialogue_eventCanSkipCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::Dialogue_eventCanSkipCurrentLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_CanSkipCurrentLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_CanSkipCurrentLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerAvatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventDestroySpeakerAvatar_Parms, Info), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_Info_MetaData), Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_Info_MetaData) }; // 1043363632
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_SpeakerAvatar = { "SpeakerAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventDestroySpeakerAvatar_Parms, SpeakerAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::NewProp_SpeakerAvatar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Clean up a given actor from the world\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Clean up a given actor from the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "DestroySpeakerAvatar", nullptr, nullptr, Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::PropPointers), sizeof(Dialogue_eventDestroySpeakerAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventDestroySpeakerAvatar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_EndCurrentLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_EndCurrentLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Ends the current dialogue line \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Ends the current dialogue line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_EndCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "EndCurrentLine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_EndCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_EndCurrentLine_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_EndCurrentLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_EndCurrentLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventFinishDialogueNode_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventFinishDialogueNode_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Line_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventFinishDialogueNode_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Speaker_MetaData), Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Speaker_MetaData) }; // 1043363632
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_SpeakerActor = { "SpeakerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventFinishDialogueNode_Parms, SpeakerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_ListenerActor = { "ListenerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventFinishDialogueNode_Parms, ListenerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_SpeakerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::NewProp_ListenerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Finish playing a dialogue node. Stops the currently playing audio, montage, etc. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Finish playing a dialogue node. Stops the currently playing audio, montage, etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "FinishDialogueNode", nullptr, nullptr, Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::PropPointers), sizeof(Dialogue_eventFinishDialogueNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventFinishDialogueNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_FinishDialogueNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_FinishDialogueNode_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "FinishNPCDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_FinishNPCDialogue_Statics::Function_MetaDataParams) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "FinishPlayerDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_FinishPlayerDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_FinishPlayerDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetAvatar_Statics
	{
		struct Dialogue_eventGetAvatar_Parms
		{
			FName SpeakerID;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetAvatar_Parms, SpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_SpeakerID_MetaData), Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_SpeakerID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_SpeakerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Grab the avatar for a given speaker, if one exists. */" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Grab the avatar for a given speaker, if one exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetAvatar", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_GetAvatar_Statics::Dialogue_eventGetAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetAvatar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_GetAvatar_Statics::Dialogue_eventGetAvatar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_GetAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics
	{
		struct Dialogue_eventGetConversationCenterPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetConversationCenterPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**Return the average location of all of the speakers in the dialogue*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Return the average location of all of the speakers in the dialogue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetConversationCenterPoint", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::Dialogue_eventGetConversationCenterPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::Dialogue_eventGetConversationCenterPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_GetConversationCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetConversationCenterPoint_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetLineDuration_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetLineDuration_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line_MetaData) }; // 1051335597
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetLineDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*Returns how long narrative should wait before moving onto the next line. Returning -1 causes the line to last forever, until \n\x09*\n\x09* Narrative has a good built in line duration system so its rare you'd ever need to override, however if you need to the the option is here. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Returns how long narrative should wait before moving onto the next line. Returning -1 causes the line to last forever, until\n       *\n       * Narrative has a good built in line duration system so its rare you'd ever need to override, however if you need to the the option is here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetLineDuration", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers), sizeof(Dialogue_eventGetLineDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetLineDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventGetLineDuration_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogue_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetNodes", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_GetNodes_Statics::Dialogue_eventGetNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_GetNodes_Statics::Dialogue_eventGetNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics
	{
		struct Dialogue_eventGetPlayerAvatar_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetPlayerAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//* Sometimes our actual pawn shows up in dialogues, other times we use a special avatar actor that is spawned in. Return whichever one is being used. */\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "/ Sometimes our actual pawn shows up in dialogues, other times we use a special avatar actor that is spawned in. Return whichever one is being used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetPlayerAvatar", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::Dialogue_eventGetPlayerAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::Dialogue_eventGetPlayerAvatar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_GetPlayerAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetPlayerAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetSpeakerHeadLocation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetSpeakerHeadLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Return the location of the actors head - basically the location the dialogue camera will aim itself at. \n\x09* \n\x09* By default, narrative will check for a skeletal mesh tagged with \"body\" with a bone/socket named \"head\", and if this cannot be found, it will\n\x09* fall back to using GetActorEyesViewPoint.\n\x09* \n\x09* However, you can override this function if you need more complex functionality\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Return the location of the actors head - basically the location the dialogue camera will aim itself at.\n*\n* By default, narrative will check for a skeletal mesh tagged with \"body\" with a bone/socket named \"head\", and if this cannot be found, it will\n* fall back to using GetActorEyesViewPoint.\n*\n* However, you can override this function if you need more complex functionality" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetSpeakerHeadLocation", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::PropPointers), sizeof(Dialogue_eventGetSpeakerHeadLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventGetSpeakerHeadLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetStringVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node_MetaData), Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName_MetaData), Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventGetStringVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Allows you to use variables in your dialogue, ie Hello {PlayerName}.\n\x09*\n\x09* Simply override this function, then check the value of variable name and return whatever value you like!\n\x09*\n\x09* ie if(VariableName == \"PlayerName\") {return OwningPawn->GetUsername();}; - then Hello {PlayerName}! will automatically become Hello xXNoobPwner420Xx! etc \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Allows you to use variables in your dialogue, ie Hello {PlayerName}.\n\nSimply override this function, then check the value of variable name and return whatever value you like!\n\nie if(VariableName == \"PlayerName\") {return OwningPawn->GetUsername();}; - then Hello {PlayerName}! will automatically become Hello xXNoobPwner420Xx! etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetStringVariable", nullptr, nullptr, Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers), sizeof(Dialogue_eventGetStringVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventGetStringVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_GetStringVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_GetStringVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics
	{
		struct Dialogue_eventIsPartyDialogue_Parms
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
	void Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Dialogue_eventIsPartyDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dialogue_eventIsPartyDialogue_Parms), &Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Return true if this is a party dialogue, false if solo. \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Return true if this is a party dialogue, false if solo." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "IsPartyDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::Dialogue_eventIsPartyDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::Dialogue_eventIsPartyDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_IsPartyDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_IsPartyDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Called when the dialogue Begins.\n\x09*/" },
		{ "DisplayName", "OnBeginDialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ScriptName", "OnBeginDialogue" },
		{ "ToolTip", "Called when the dialogue Begins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "K2_OnBeginDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_K2_OnEndDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_K2_OnEndDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Called when the dialogue ends.\n\x09*/" },
		{ "DisplayName", "OnEndDialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ScriptName", "OnEndDialogue" },
		{ "ToolTip", "Called when the dialogue ends." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_K2_OnEndDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "K2_OnEndDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_K2_OnEndDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_K2_OnEndDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_K2_OnEndDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_K2_OnEndDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventLinkSpeakerAvatar_Parms, Info), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_Info_MetaData), Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_Info_MetaData) }; // 1043363632
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventLinkSpeakerAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Narrative needs to know which speaker ID links to which Speaker Avatar, so it knows where to point the camera, who to play\n\x09* animations on, and much more. This function links each Speaker to its Speaker Avatar. It does this by spawning the actor \n\x09* if an AvatarActorClass is set, or by finding an actor in the world with the SpeakerID added as a tag.\n\x09* \n\x09* Finally, we still weren't able to find an Avatar to link to the speaker, we'll fall back to the DefaultNPCAvatar for NPCs or \n\x09* the players Pawn for Player nodes. \n\x09* \n\x09* If that doesn't work for your game, you can override this function\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Narrative needs to know which speaker ID links to which Speaker Avatar, so it knows where to point the camera, who to play\n* animations on, and much more. This function links each Speaker to its Speaker Avatar. It does this by spawning the actor\n* if an AvatarActorClass is set, or by finding an actor in the world with the SpeakerID added as a tag.\n*\n* Finally, we still weren't able to find an Avatar to link to the speaker, we'll fall back to the DefaultNPCAvatar for NPCs or\n* the players Pawn for Player nodes.\n*\n* If that doesn't work for your game, you can override this function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "LinkSpeakerAvatar", nullptr, nullptr, Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::PropPointers), sizeof(Dialogue_eventLinkSpeakerAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventLinkSpeakerAvatar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::NewProp_Speaker_MetaData) }; // 1043363632
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnNPCDialogueLineFinished", nullptr, nullptr, Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::PropPointers), sizeof(Dialogue_eventOnNPCDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventOnNPCDialogueLineFinished_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::NewProp_Speaker_MetaData) }; // 1043363632
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnNPCDialogueLineStarted", nullptr, nullptr, Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::PropPointers), sizeof(Dialogue_eventOnNPCDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventOnNPCDialogueLineStarted_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnPlayerDialogueLineFinished", nullptr, nullptr, Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::PropPointers), sizeof(Dialogue_eventOnPlayerDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventOnPlayerDialogueLineFinished_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventOnPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData), Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::NewProp_DialogueLine_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "OnPlayerDialogueLineStarted", nullptr, nullptr, Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::PropPointers), sizeof(Dialogue_eventOnPlayerDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventOnPlayerDialogueLineStarted_Parms) < MAX_uint16);
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueAnimation_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueAnimation_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line_MetaData) }; // 1051335597
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueAnimation_Parms, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueAnimation_Parms, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Play a dialogue animation. Override this if you want to change how narrative plays animations\n\x09*\n\x09* Default implementation just plays the supplied anim montage on the NPC actor you gave it.\n\x09* \n\x09* Speaker and Listener are the avatar actors for the speaker and listener that were spawned by narrative, or OwningPawn/NPCActor\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Play a dialogue animation. Override this if you want to change how narrative plays animations\n*\n* Default implementation just plays the supplied anim montage on the NPC actor you gave it.\n*\n* Speaker and Listener are the avatar actors for the speaker and listener that were spawned by narrative, or OwningPawn/NPCActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayDialogueAnimation", nullptr, nullptr, Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers), sizeof(Dialogue_eventPlayDialogueAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventPlayDialogueAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_PlayDialogueAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayDialogueAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueNode_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueNode_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Line_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueNode_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Speaker_MetaData), Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Speaker_MetaData) }; // 1043363632
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_SpeakerActor = { "SpeakerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueNode_Parms, SpeakerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_ListenerActor = { "ListenerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueNode_Parms, ListenerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_SpeakerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::NewProp_ListenerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Play a dialogue node. Narrative plays some audio, a montage, and updates the camera by default\n\x09* however if you want modify this behavior or add extra behavior you can override this function!\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Play a dialogue node. Narrative plays some audio, a montage, and updates the camera by default\n* however if you want modify this behavior or add extra behavior you can override this function!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayDialogueNode", nullptr, nullptr, Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::PropPointers), sizeof(Dialogue_eventPlayDialogueNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventPlayDialogueNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_PlayDialogueNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayDialogueNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics
	{
		struct Dialogue_eventPlayDialogueSequence_Parms
		{
			UNarrativeDialogueSequence* Sequence;
			AActor* Speaker;
			AActor* Listener;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSequence_Parms, Sequence), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSequence_Parms, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSequence_Parms, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Tell the dialogue sequence player to start or stop playing a dialogue shot.\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Tell the dialogue sequence player to start or stop playing a dialogue shot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayDialogueSequence", nullptr, nullptr, Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::Dialogue_eventPlayDialogueSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::Dialogue_eventPlayDialogueSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_PlayDialogueSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_PlayDialogueSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSound_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line_MetaData) }; // 1051335597
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSound_Parms, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayDialogueSound_Parms, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Play a dialogue sound. Override this if you want to change how narrative plays sounds.\n\x09*\n\x09* Default implementation just plays the sound at the location of the NPC, or in 2D if no NPC was supplied. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* Play a dialogue sound. Override this if you want to change how narrative plays sounds.\n*\n* Default implementation just plays the sound at the location of the NPC, or in 2D if no NPC was supplied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayDialogueSound", nullptr, nullptr, Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers), sizeof(Dialogue_eventPlayDialogueSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayDialogueSound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventPlayDialogueSound_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayNextNPCReply", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayNextNPCReply_Statics::Function_MetaDataParams) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_NPCReply = { "NPCReply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayNPCDialogue_Parms, NPCReply), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayNPCDialogue_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Line_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayNPCDialogue_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker_MetaData), Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::NewProp_Speaker_MetaData) }; // 1043363632
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayNPCDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::PropPointers), sizeof(Dialogue_eventPlayNPCDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayNPCDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventPlayNPCDialogue_Parms) < MAX_uint16);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_PlayerReply = { "PlayerReply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayPlayerDialogue_Parms, PlayerReply), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventPlayPlayerDialogue_Parms, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line_MetaData), Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::NewProp_Line_MetaData) }; // 1051335597
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "PlayPlayerDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::PropPointers), sizeof(Dialogue_eventPlayPlayerDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_PlayPlayerDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventPlayPlayerDialogue_Parms) < MAX_uint16);
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
		struct Dialogue_eventSkipCurrentLine_Parms
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
	void Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Dialogue_eventSkipCurrentLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dialogue_eventSkipCurrentLine_Parms), &Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Skips the current dialogue line, providing it can be skipped\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Skips the current dialogue line, providing it can be skipped" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "SkipCurrentLine", nullptr, nullptr, Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Dialogue_eventSkipCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::Dialogue_eventSkipCurrentLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_SkipCurrentLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_SkipCurrentLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_StopDialogueAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_StopDialogueAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* stop any animations that were playing on the speaker avatar\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* stop any animations that were playing on the speaker avatar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_StopDialogueAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "StopDialogueAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_StopDialogueAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_StopDialogueAnimation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_StopDialogueAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_StopDialogueAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_StopDialogueSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_StopDialogueSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_StopDialogueSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "StopDialogueSequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_StopDialogueSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_StopDialogueSequence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDialogue_StopDialogueSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_StopDialogueSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_TickDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_TickDialogue_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogue_TickDialogue_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventTickDialogue_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_TickDialogue_Statics::NewProp_DeltaTime_MetaData), Z_Construct_UFunction_UDialogue_TickDialogue_Statics::NewProp_DeltaTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_TickDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_TickDialogue_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_TickDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09* Useful when dialogues need to do something every tick\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Useful when dialogues need to do something every tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_TickDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "TickDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogue_TickDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_TickDialogue_Statics::PropPointers), sizeof(Dialogue_eventTickDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_TickDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_TickDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_TickDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Dialogue_eventTickDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogue_TickDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_TickDialogue_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeakerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSpeakerInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartySpeakerInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartySpeakerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PartySpeakerInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreeMovement_MetaData[];
#endif
		static void NewProp_bFreeMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeExited_MetaData[];
#endif
		static void NewProp_bCanBeExited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeExited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRotateSpeakers_MetaData[];
#endif
		static void NewProp_bAutoRotateSpeakers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRotateSpeakers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStopMovement_MetaData[];
#endif
		static void NewProp_bAutoStopMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStopMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHeadBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultHeadBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueCameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueCameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultDialogueShot;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeakerAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSpeakerAvatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentListenerAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentListenerAvatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPartySpeakerAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPartySpeakerAvatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSequencePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogueSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDialogueSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSpeakerMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSpeakerMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueAudio;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerAvatars_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerAvatars_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAvatars_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpeakerAvatars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldViewTarget;
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogue_BlendingOutFinished, "BlendingOutFinished" }, // 2621221438
		{ &Z_Construct_UFunction_UDialogue_CanSkipCurrentLine, "CanSkipCurrentLine" }, // 3491202514
		{ &Z_Construct_UFunction_UDialogue_DestroySpeakerAvatar, "DestroySpeakerAvatar" }, // 394894203
		{ &Z_Construct_UFunction_UDialogue_EndCurrentLine, "EndCurrentLine" }, // 1937972147
		{ &Z_Construct_UFunction_UDialogue_FinishDialogueNode, "FinishDialogueNode" }, // 2400180919
		{ &Z_Construct_UFunction_UDialogue_FinishNPCDialogue, "FinishNPCDialogue" }, // 1637593617
		{ &Z_Construct_UFunction_UDialogue_FinishPlayerDialogue, "FinishPlayerDialogue" }, // 222537072
		{ &Z_Construct_UFunction_UDialogue_GetAvatar, "GetAvatar" }, // 2631379035
		{ &Z_Construct_UFunction_UDialogue_GetConversationCenterPoint, "GetConversationCenterPoint" }, // 1363853249
		{ &Z_Construct_UFunction_UDialogue_GetLineDuration, "GetLineDuration" }, // 622193599
		{ &Z_Construct_UFunction_UDialogue_GetNodes, "GetNodes" }, // 4274221229
		{ &Z_Construct_UFunction_UDialogue_GetPlayerAvatar, "GetPlayerAvatar" }, // 1140816689
		{ &Z_Construct_UFunction_UDialogue_GetSpeakerHeadLocation, "GetSpeakerHeadLocation" }, // 803943155
		{ &Z_Construct_UFunction_UDialogue_GetStringVariable, "GetStringVariable" }, // 321220472
		{ &Z_Construct_UFunction_UDialogue_IsPartyDialogue, "IsPartyDialogue" }, // 2783076488
		{ &Z_Construct_UFunction_UDialogue_K2_OnBeginDialogue, "K2_OnBeginDialogue" }, // 1475747005
		{ &Z_Construct_UFunction_UDialogue_K2_OnEndDialogue, "K2_OnEndDialogue" }, // 776335190
		{ &Z_Construct_UFunction_UDialogue_LinkSpeakerAvatar, "LinkSpeakerAvatar" }, // 1275108572
		{ &Z_Construct_UFunction_UDialogue_OnNPCDialogueLineFinished, "OnNPCDialogueLineFinished" }, // 3543333184
		{ &Z_Construct_UFunction_UDialogue_OnNPCDialogueLineStarted, "OnNPCDialogueLineStarted" }, // 1058246553
		{ &Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineFinished, "OnPlayerDialogueLineFinished" }, // 1510930492
		{ &Z_Construct_UFunction_UDialogue_OnPlayerDialogueLineStarted, "OnPlayerDialogueLineStarted" }, // 502584789
		{ &Z_Construct_UFunction_UDialogue_PlayDialogueAnimation, "PlayDialogueAnimation" }, // 2449194048
		{ &Z_Construct_UFunction_UDialogue_PlayDialogueNode, "PlayDialogueNode" }, // 2339772688
		{ &Z_Construct_UFunction_UDialogue_PlayDialogueSequence, "PlayDialogueSequence" }, // 320152852
		{ &Z_Construct_UFunction_UDialogue_PlayDialogueSound, "PlayDialogueSound" }, // 3762996845
		{ &Z_Construct_UFunction_UDialogue_PlayNextNPCReply, "PlayNextNPCReply" }, // 3796383329
		{ &Z_Construct_UFunction_UDialogue_PlayNPCDialogue, "PlayNPCDialogue" }, // 3883540268
		{ &Z_Construct_UFunction_UDialogue_PlayPlayerDialogue, "PlayPlayerDialogue" }, // 2349907720
		{ &Z_Construct_UFunction_UDialogue_SkipCurrentLine, "SkipCurrentLine" }, // 3504329062
		{ &Z_Construct_UFunction_UDialogue_StopDialogueAnimation, "StopDialogueAnimation" }, // 4052375594
		{ &Z_Construct_UFunction_UDialogue_StopDialogueSequence, "StopDialogueSequence" }, // 4034781205
		{ &Z_Construct_UFunction_UDialogue_TickDialogue, "TickDialogue" }, // 2569679426
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Created at runtime, but also used as a template, similar to UWidgetTrees in UWidgetBlueprints. \n" },
		{ "DisplayName", "Dialogue" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Created at runtime, but also used as a template, similar to UWidgetTrees in UWidgetBlueprints." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(0, nullptr) }; // 1043363632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_MetaData[] = {
		{ "Category", "Speakers" },
		{ "Comment", "//All the NPC speakers in this dialogue - for the player fill out the PlayerSpeakerInfo below! \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "TitleProperty", "SpeakerID" },
		{ "ToolTip", "All the NPC speakers in this dialogue - for the player fill out the PlayerSpeakerInfo below!" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_MetaData) }; // 1043363632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerSpeakerInfo_MetaData[] = {
		{ "Category", "Speakers" },
		{ "Comment", "//The speaker info for our player\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The speaker info for our player" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerSpeakerInfo = { "PlayerSpeakerInfo", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, PlayerSpeakerInfo), Z_Construct_UScriptStruct_FPlayerSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerSpeakerInfo_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerSpeakerInfo_MetaData) }; // 1728489324
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo_Inner = { "PartySpeakerInfo", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerSpeakerInfo, METADATA_PARAMS(0, nullptr) }; // 1728489324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "//For parties, each player in the party gets their own speaker info \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "For parties, each player in the party gets their own speaker info" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo = { "PartySpeakerInfo", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, PartySpeakerInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo_MetaData) }; // 1728489324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//If true, narrative UI won't show mouse cursor and set input mode to UI - you'll still be able to control your player.\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "If true, narrative UI won't show mouse cursor and set input mode to UI - you'll still be able to control your player." },
	};
#endif
	void Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement_SetBit(void* Obj)
	{
		((UDialogue*)Obj)->bFreeMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement = { "bFreeMovement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogue), &Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//If false, default UI will disallow closing of the dialogue with ESC, and you'll need to wait for it to end \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "If false, default UI will disallow closing of the dialogue with ESC, and you'll need to wait for it to end" },
	};
#endif
	void Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_SetBit(void* Obj)
	{
		((UDialogue*)Obj)->bCanBeExited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited = { "bCanBeExited", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogue), &Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//If enabled, narrative will automatically rotate the speakers to face whoever is currently talking.\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "If enabled, narrative will automatically rotate the speakers to face whoever is currently talking." },
	};
#endif
	void Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers_SetBit(void* Obj)
	{
		((UDialogue*)Obj)->bAutoRotateSpeakers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers = { "bAutoRotateSpeakers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogue), &Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/*\n\x09* If selected, automatically stop the characters movement when the dialogue begins. This is useful because\n\x09* a camera shot will automatically play but then if the speaker is still moving, the shot won't be lined up correctly \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* If selected, automatically stop the characters movement when the dialogue begins. This is useful because\n* a camera shot will automatically play but then if the speaker is still moving, the shot won't be lined up correctly" },
	};
#endif
	void Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement_SetBit(void* Obj)
	{
		((UDialogue*)Obj)->bAutoStopMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement = { "bAutoStopMovement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogue), &Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultHeadBoneName_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/*\n\x09* By default Narrative will aim the camera at the bone named \"head\" - this is the name of the UE4/5 skeletons head bone so will work with most games.\n\x09* If your head bone has a different name, you can input it here - if you need anything more complex simply override the GetSpeakerHeadLocation function\n\x09* and return the location of your avatars head. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "* By default Narrative will aim the camera at the bone named \"head\" - this is the name of the UE4/5 skeletons head bone so will work with most games.\n* If your head bone has a different name, you can input it here - if you need anything more complex simply override the GetSpeakerHeadLocation function\n* and return the location of your avatars head." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultHeadBoneName = { "DefaultHeadBoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DefaultHeadBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultHeadBoneName_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultHeadBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueBlendOutTime_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//Time to blend back into the players camera after dialogue ends\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Time to blend back into the players camera after dialogue ends" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueBlendOutTime = { "DialogueBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DialogueBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueBlendOutTime_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueBlendOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueCameraShake_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Camera shake the dialogue camera will play\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Camera shake the dialogue camera will play" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueCameraShake = { "DialogueCameraShake", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DialogueCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueCameraShake_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueCameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultDialogueShot_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//If a shot, its speaker, etc doesn't have a shot the dialogue will use this one as a default \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "If a shot, its speaker, etc doesn't have a shot the dialogue will use this one as a default" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultDialogueShot = { "DefaultDialogueShot", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DefaultDialogueShot), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultDialogueShot_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultDialogueShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, OwningComp), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue_MetaData[] = {
		{ "Comment", "//The first thing the NPC says in the dialog\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The first thing the NPC says in the dialog" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue = { "RootDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, RootDialogue), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_RootDialogue_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_Inner = { "NPCReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_MetaData[] = {
		{ "Comment", "//Holds all of the npc replies in the dialogue\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Holds all of the npc replies in the dialogue" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies = { "NPCReplies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, NPCReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplies_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "Comment", "//Holds all of the player replies in the dialogue\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Holds all of the player replies in the dialogue" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerReplies_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_Inner = { "NPCReplyChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_MetaData[] = {
		{ "Comment", "//The NPC replies in the current chunk \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The NPC replies in the current chunk" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain = { "NPCReplyChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, NPCReplyChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_NPCReplyChain_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_Inner = { "AvailableResponses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_MetaData[] = {
		{ "Comment", "//The player responses once NPC has finished talking the current chunk \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The player responses once NPC has finished talking the current chunk" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses = { "AvailableResponses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, AvailableResponses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_AvailableResponses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//The current dialogue node narrative is playing\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current dialogue node narrative is playing" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentNode), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//The current speaker that is talking\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current speaker that is talking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker = { "CurrentSpeaker", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentSpeaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeaker_MetaData) }; // 1043363632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeakerAvatar_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//The current speaker avatar that is talking\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current speaker avatar that is talking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeakerAvatar = { "CurrentSpeakerAvatar", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentSpeakerAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeakerAvatar_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeakerAvatar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentListenerAvatar_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//The current listener avatar, if the speaker is directing their line at someone\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current listener avatar, if the speaker is directing their line at someone" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentListenerAvatar = { "CurrentListenerAvatar", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentListenerAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentListenerAvatar_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentListenerAvatar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentPartySpeakerAvatar_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//In party dialogue, we need a way to point the camera at the speaker instead of our own one, we do so via this variable\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "In party dialogue, we need a way to point the camera at the speaker instead of our own one, we do so via this variable" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentPartySpeakerAvatar = { "CurrentPartySpeakerAvatar", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentPartySpeakerAvatar), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentPartySpeakerAvatar_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentPartySpeakerAvatar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//The current line that is being played \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "The current line that is being played" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine = { "CurrentLine", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Sequence actor responsible for playing any cinematic shots during the dialogue\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Sequence actor responsible for playing any cinematic shots during the dialogue" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer = { "DialogueSequencePlayer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DialogueSequencePlayer), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentDialogueSequence_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Current dialogue sequence being played \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Current dialogue sequence being played" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentDialogueSequence = { "CurrentDialogueSequence", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, CurrentDialogueSequence), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentDialogueSequence_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentDialogueSequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSpeakerMontage_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Current montage playing on the current speaker actor \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Current montage playing on the current speaker actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSpeakerMontage = { "DialogueSpeakerMontage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DialogueSpeakerMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSpeakerMontage_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSpeakerMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Audio component responsible for playing any audio during the dialogue\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Audio component responsible for playing any audio during the dialogue" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio = { "DialogueAudio", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, DialogueAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_ValueProp = { "SpeakerAvatars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_Key_KeyProp = { "SpeakerAvatars_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_MetaData[] = {
		{ "Comment", "//All spawned speaker actors, with the speaker ID mapping to that speakers avatar\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "All spawned speaker actors, with the speaker ID mapping to that speakers avatar" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars = { "SpeakerAvatars", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, SpeakerAvatars), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_OldViewTarget_MetaData[] = {
		{ "Comment", "//We cache the players old view target so we can set the view target back to it after dialogue ends \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "We cache the players old view target so we can set the view target back to it after dialogue ends" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_OldViewTarget = { "OldViewTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, OldViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_OldViewTarget_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_OldViewTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished = { "TimerHandle_NPCReplyFinished", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, TimerHandle_NPCReplyFinished), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_NPCReplyFinished_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished = { "TimerHandle_PlayerReplyFinished", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, TimerHandle_PlayerReplyFinished), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished_MetaData), Z_Construct_UClass_UDialogue_Statics::NewProp_TimerHandle_PlayerReplyFinished_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Speakers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PlayerSpeakerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PartySpeakerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_bFreeMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_bCanBeExited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoRotateSpeakers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_bAutoStopMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultHeadBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueCameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DefaultDialogueShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OwningPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OwningController,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentSpeakerAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentListenerAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentPartySpeakerAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_CurrentDialogueSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueSpeakerMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DialogueAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_SpeakerAvatars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_OldViewTarget,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::PropPointers) < 2048);
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
	UDialogue::~UDialogue() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ScriptStructInfo[] = {
		{ FSpeakerInfo::StaticStruct, Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewStructOps, TEXT("SpeakerInfo"), &Z_Registration_Info_UScriptStruct_SpeakerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpeakerInfo), 1043363632U) },
		{ FPlayerSpeakerInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics::NewStructOps, TEXT("PlayerSpeakerInfo"), &Z_Registration_Info_UScriptStruct_PlayerSpeakerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerSpeakerInfo), 1728489324U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogue, UDialogue::StaticClass, TEXT("UDialogue"), &Z_Registration_Info_UClass_UDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogue), 2939780162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_1244115521(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
