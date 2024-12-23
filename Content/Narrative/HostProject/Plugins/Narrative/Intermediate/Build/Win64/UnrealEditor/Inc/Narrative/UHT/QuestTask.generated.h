// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestBranch;
#ifdef NARRATIVE_QuestTask_generated_h
#error "QuestTask.generated.h already included, missing '#pragma once' in QuestTask.h"
#endif
#define NARRATIVE_QuestTask_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsComplete); \
	DECLARE_FUNCTION(execGetTaskNodeDescription); \
	DECLARE_FUNCTION(execGetTaskProgressText); \
	DECLARE_FUNCTION(execGetTaskDescription); \
	DECLARE_FUNCTION(execGetOwningBranch); \
	DECLARE_FUNCTION(execCompleteTask); \
	DECLARE_FUNCTION(execAddProgress); \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execTickTask);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_CALLBACK_WRAPPERS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeTask(); \
	friend struct Z_Construct_UClass_UNarrativeTask_Statics; \
public: \
	DECLARE_CLASS(UNarrativeTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeTask)


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeTask(UNarrativeTask&&); \
	NO_API UNarrativeTask(const UNarrativeTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNarrativeTask) \
	NO_API virtual ~UNarrativeTask();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_17_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_CALLBACK_WRAPPERS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
