// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerController;
class UNarrativeComponent;
class UNarrativeTask;
class UQuest;
class UQuestBranch;
class UQuestNode;
class UQuestState;
enum class EQuestCompletion : uint8;
#ifdef NARRATIVE_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define NARRATIVE_Quest_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_18_DELEGATE \
NARRATIVE_API void FOnQuestBranchCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestBranchCompleted, const UQuest* Quest, const UQuestBranch* Branch);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_19_DELEGATE \
NARRATIVE_API void FOnQuestNewState_DelegateWrapper(const FMulticastScriptDelegate& OnQuestNewState, UQuest* Quest, const UQuestState* NewState);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_20_DELEGATE \
NARRATIVE_API void FOnQuestTaskProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskProgressChanged, const UQuest* Quest, const UNarrativeTask* ProgressedTask, const UQuestBranch* Branch, int32 OldProgress, int32 NewProgress);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_21_DELEGATE \
NARRATIVE_API void FOnQuestTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskCompleted, const UQuest* Quest, const UNarrativeTask* CompletedTask, const UQuestBranch* Branch);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_22_DELEGATE \
NARRATIVE_API void FOnQuestSucceeded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestSucceeded, const UQuest* Quest, FText const& QuestSucceededMessage);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_23_DELEGATE \
NARRATIVE_API void FOnQuestFailed_DelegateWrapper(const FMulticastScriptDelegate& OnQuestFailed, const UQuest* Quest, FText const& QuestFailedMessage);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_24_DELEGATE \
NARRATIVE_API void FOnQuestStarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStarted, const UQuest* Quest);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_25_DELEGATE \
NARRATIVE_API void FOnQuestForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnQuestForgotten, const UQuest* Quest);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_26_DELEGATE \
NARRATIVE_API void FOnQuestRestarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRestarted, const UQuest* Quest);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGroupMembers); \
	DECLARE_FUNCTION(execGetOwningComp); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetQuestCompletion); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execGetBranches); \
	DECLARE_FUNCTION(execGetStates); \
	DECLARE_FUNCTION(execGetQuestStartState); \
	DECLARE_FUNCTION(execSpawnQuestActor); \
	DECLARE_FUNCTION(execEnterState); \
	DECLARE_FUNCTION(execOnQuestBranchCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressChanged); \
	DECLARE_FUNCTION(execSucceedQuest); \
	DECLARE_FUNCTION(execFailQuest); \
	DECLARE_FUNCTION(execSetQuestDescription); \
	DECLARE_FUNCTION(execSetQuestName); \
	DECLARE_FUNCTION(execGetQuestDescription); \
	DECLARE_FUNCTION(execGetQuestName); \
	DECLARE_FUNCTION(execGetBranch); \
	DECLARE_FUNCTION(execGetState);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_CALLBACK_WRAPPERS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UQuest)


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuest) \
	NO_API virtual ~UQuest();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_38_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_CALLBACK_WRAPPERS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h


#define FOREACH_ENUM_EQUESTCOMPLETION(op) \
	op(EQuestCompletion::QC_NotStarted) \
	op(EQuestCompletion::QC_Started) \
	op(EQuestCompletion::QC_Succeded) \
	op(EQuestCompletion::QC_Failed) 

enum class EQuestCompletion : uint8;
template<> struct TIsUEnumClass<EQuestCompletion> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EQuestCompletion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
