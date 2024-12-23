// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class APlayerState;
class UDialogue;
class UDialogueNode;
class UDialogueNode_NPC;
class UDialogueNode_Player;
class UNarrativeDataTask;
class UNarrativePartyComponent;
class UNarrativeTask;
class UQuest;
class UQuestBranch;
class UQuestState;
struct FDialogueLine;
struct FNarrativeSavedQuest;
struct FSpeakerInfo;
#ifdef NARRATIVE_NarrativeComponent_generated_h
#error "NarrativeComponent.generated.h already included, missing '#pragma once' in NarrativeComponent.h"
#endif
#define NARRATIVE_NarrativeComponent_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueInfo_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FDialogueInfo>();

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrativeUpdate_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FNarrativeUpdate>();

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_172_DELEGATE \
NARRATIVE_API void FOnNarrativeTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnNarrativeTaskCompleted, const UNarrativeDataTask* NarrativeTask, const FString& Name);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_175_DELEGATE \
NARRATIVE_API void FOnDialogueBegan_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueBegan, UDialogue* Dialogue);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_176_DELEGATE \
NARRATIVE_API void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, UDialogue* Dialogue, bool bStartingNewDialogue);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_177_DELEGATE \
NARRATIVE_API void FDialogueOptionSelected_DelegateWrapper(const FMulticastScriptDelegate& DialogueOptionSelected, UDialogue* Dialogue, UDialogueNode_Player* PlayerReply);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_178_DELEGATE \
NARRATIVE_API void FDialogueRepliesAvailable_DelegateWrapper(const FMulticastScriptDelegate& DialogueRepliesAvailable, UDialogue* Dialogue, TArray<UDialogueNode_Player*> const& PlayerReplies);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_179_DELEGATE \
NARRATIVE_API void FNPCDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_180_DELEGATE \
NARRATIVE_API void FNPCDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_181_DELEGATE \
NARRATIVE_API void FPlayerDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_182_DELEGATE \
NARRATIVE_API void FPlayerDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_185_DELEGATE \
NARRATIVE_API void FOnBeginSave_DelegateWrapper(const FMulticastScriptDelegate& OnBeginSave, const FString& SaveGameName);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_186_DELEGATE \
NARRATIVE_API void FOnSaveComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSaveComplete, const FString& SaveGameName);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_187_DELEGATE \
NARRATIVE_API void FOnBeginLoad_DelegateWrapper(const FMulticastScriptDelegate& OnBeginLoad, const FString& SaveGameName);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_188_DELEGATE \
NARRATIVE_API void FOnLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadComplete, const FString& SaveGameName);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_191_DELEGATE \
NARRATIVE_API void FOnJoinedParty_DelegateWrapper(const FMulticastScriptDelegate& OnJoinedParty, UNarrativePartyComponent* NewParty, UNarrativePartyComponent* LeftParty);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_192_DELEGATE \
NARRATIVE_API void FOnLeaveParty_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveParty, UNarrativePartyComponent* LeftParty);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientReceiveSave_Implementation(TArray<FNarrativeSavedQuest> const& SavedQuests, TArray<FString> const& Tasks, TArray<int32> const& Quantities); \
	virtual void ServerTryExitDialogue_Implementation(); \
	virtual void ServerTrySkipCurrentDialogueLine_Implementation(); \
	virtual void ServerSelectDialogueOption_Implementation(FName const& OptionID); \
	virtual void ClientSelectDialogueOption_Implementation(FName const& OptionID, APlayerState* Selector); \
	virtual void ClientRecieveDialogueChunk_Implementation(TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	virtual void ClientExitPartyDialogue_Implementation(); \
	virtual void ClientExitDialogue_Implementation(); \
	virtual void ClientBeginPartyDialogue_Implementation(TSubclassOf<UDialogue>  Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	virtual void ClientBeginDialogue_Implementation(TSubclassOf<UDialogue>  Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
 \
	DECLARE_FUNCTION(execClientReceiveSave); \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetQuestInstance); \
	DECLARE_FUNCTION(execGetAllQuests); \
	DECLARE_FUNCTION(execGetInProgressQuests); \
	DECLARE_FUNCTION(execGetSucceededQuests); \
	DECLARE_FUNCTION(execGetFailedQuests); \
	DECLARE_FUNCTION(execGetNumberOfTimesTaskWasCompleted); \
	DECLARE_FUNCTION(execHasCompletedTask); \
	DECLARE_FUNCTION(execIsInDialogue); \
	DECLARE_FUNCTION(execServerTryExitDialogue); \
	DECLARE_FUNCTION(execTryExitDialogue); \
	DECLARE_FUNCTION(execServerTrySkipCurrentDialogueLine); \
	DECLARE_FUNCTION(execTrySkipCurrentDialogueLine); \
	DECLARE_FUNCTION(execServerSelectDialogueOption); \
	DECLARE_FUNCTION(execClientSelectDialogueOption); \
	DECLARE_FUNCTION(execTrySelectDialogueOption); \
	DECLARE_FUNCTION(execClientRecieveDialogueChunk); \
	DECLARE_FUNCTION(execClientExitPartyDialogue); \
	DECLARE_FUNCTION(execClientExitDialogue); \
	DECLARE_FUNCTION(execClientBeginPartyDialogue); \
	DECLARE_FUNCTION(execClientBeginDialogue); \
	DECLARE_FUNCTION(execBeginDialogue); \
	DECLARE_FUNCTION(execHasDialogueAvailable); \
	DECLARE_FUNCTION(execForgetQuest); \
	DECLARE_FUNCTION(execRestartQuest); \
	DECLARE_FUNCTION(execBeginQuest); \
	DECLARE_FUNCTION(execIsQuestFinished); \
	DECLARE_FUNCTION(execIsQuestFailed); \
	DECLARE_FUNCTION(execIsQuestSucceeded); \
	DECLARE_FUNCTION(execIsQuestInProgress); \
	DECLARE_FUNCTION(execIsQuestStartedOrFinished); \
	DECLARE_FUNCTION(execGetCurrentDialogue); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execDialogueFinished); \
	DECLARE_FUNCTION(execDialogueBegan); \
	DECLARE_FUNCTION(execDialogueLineFinished); \
	DECLARE_FUNCTION(execDialogueLineStarted); \
	DECLARE_FUNCTION(execDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execLoadComplete); \
	DECLARE_FUNCTION(execSaveComplete); \
	DECLARE_FUNCTION(execBeginLoad); \
	DECLARE_FUNCTION(execBeginSave); \
	DECLARE_FUNCTION(execQuestBranchCompleted); \
	DECLARE_FUNCTION(execQuestTaskCompleted); \
	DECLARE_FUNCTION(execQuestTaskProgressMade); \
	DECLARE_FUNCTION(execQuestNewState); \
	DECLARE_FUNCTION(execQuestSucceeded); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execQuestForgotten); \
	DECLARE_FUNCTION(execQuestStarted); \
	DECLARE_FUNCTION(execNarrativeDataTaskCompleted); \
	DECLARE_FUNCTION(execOnRep_PendingUpdateList); \
	DECLARE_FUNCTION(execOnRep_PartyComponent);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_CALLBACK_WRAPPERS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeComponent(); \
	friend struct Z_Construct_UClass_UNarrativeComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PendingUpdateList=NETFIELD_REP_START, \
		PartyComponent, \
		NETFIELD_REP_END=PartyComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeComponent(UNarrativeComponent&&); \
	NO_API UNarrativeComponent(const UNarrativeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeComponent) \
	NO_API virtual ~UNarrativeComponent();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_198_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_CALLBACK_WRAPPERS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h_201_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeComponent_h


#define FOREACH_ENUM_EUPDATETYPE(op) \
	op(EUpdateType::UT_None) \
	op(EUpdateType::UT_CompleteTask) \
	op(EUpdateType::UT_BeginQuest) \
	op(EUpdateType::UT_ForgetQuest) \
	op(EUpdateType::UT_RestartQuest) \
	op(EUpdateType::UT_QuestNewState) \
	op(EUpdateType::UT_TaskProgressMade) 

enum class EUpdateType : uint8;
template<> struct TIsUEnumClass<EUpdateType> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
