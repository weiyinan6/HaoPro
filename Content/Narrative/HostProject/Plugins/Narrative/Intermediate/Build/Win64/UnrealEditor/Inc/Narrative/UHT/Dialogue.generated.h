// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDialogueNode;
class UDialogueNode_NPC;
class UDialogueNode_Player;
class UNarrativeDialogueSequence;
struct FDialogueLine;
struct FSpeakerInfo;
#ifdef NARRATIVE_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define NARRATIVE_Dialogue_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpeakerInfo_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FSpeakerInfo>();

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct(); \
	typedef FSpeakerInfo Super;


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FPlayerSpeakerInfo>();

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConversationCenterPoint); \
	DECLARE_FUNCTION(execIsPartyDialogue); \
	DECLARE_FUNCTION(execBlendingOutFinished); \
	DECLARE_FUNCTION(execFinishPlayerDialogue); \
	DECLARE_FUNCTION(execFinishNPCDialogue); \
	DECLARE_FUNCTION(execPlayNextNPCReply); \
	DECLARE_FUNCTION(execStopDialogueSequence); \
	DECLARE_FUNCTION(execPlayDialogueSequence); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execGetStringVariable); \
	DECLARE_FUNCTION(execGetLineDuration); \
	DECLARE_FUNCTION(execPlayPlayerDialogue); \
	DECLARE_FUNCTION(execPlayNPCDialogue); \
	DECLARE_FUNCTION(execFinishDialogueNode); \
	DECLARE_FUNCTION(execPlayDialogueNode); \
	DECLARE_FUNCTION(execPlayDialogueSound); \
	DECLARE_FUNCTION(execStopDialogueAnimation); \
	DECLARE_FUNCTION(execPlayDialogueAnimation); \
	DECLARE_FUNCTION(execDestroySpeakerAvatar); \
	DECLARE_FUNCTION(execLinkSpeakerAvatar); \
	DECLARE_FUNCTION(execTickDialogue); \
	DECLARE_FUNCTION(execGetSpeakerHeadLocation); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execGetPlayerAvatar); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execCanSkipCurrentLine); \
	DECLARE_FUNCTION(execSkipCurrentLine); \
	DECLARE_FUNCTION(execEndCurrentLine);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_CALLBACK_WRAPPERS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogue) \
	NO_API virtual ~UDialogue();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_78_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_CALLBACK_WRAPPERS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
