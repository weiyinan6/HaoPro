// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeDialogueSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVE_NarrativeDialogueSequence_generated_h
#error "NarrativeDialogueSequence.generated.h already included, missing '#pragma once' in NarrativeDialogueSequence.h"
#endif
#define NARRATIVE_NarrativeDialogueSequence_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotTrackingSettings_Statics; \
	NARRATIVE_API static class UScriptStruct* StaticStruct();


template<> NARRATIVE_API UScriptStruct* StaticStruct<struct FShotTrackingSettings>();

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execGetShotAnchorTransform); \
	DECLARE_FUNCTION(execPlaySequence);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_CALLBACK_WRAPPERS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeDialogueSequence(); \
	friend struct Z_Construct_UClass_UNarrativeDialogueSequence_Statics; \
public: \
	DECLARE_CLASS(UNarrativeDialogueSequence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeDialogueSequence)


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeDialogueSequence(UNarrativeDialogueSequence&&); \
	NO_API UNarrativeDialogueSequence(const UNarrativeDialogueSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeDialogueSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeDialogueSequence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeDialogueSequence) \
	NO_API virtual ~UNarrativeDialogueSequence();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_82_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_CALLBACK_WRAPPERS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeDialogueSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSequence_h


#define FOREACH_ENUM_EANCHORORIGINRULE(op) \
	op(EAnchorOriginRule::AOR_Disabled) \
	op(EAnchorOriginRule::AOR_ConversationCenter) \
	op(EAnchorOriginRule::AOR_Speaker) \
	op(EAnchorOriginRule::AOR_Listener) \
	op(EAnchorOriginRule::AOR_Custom) 

enum class EAnchorOriginRule : uint8;
template<> struct TIsUEnumClass<EAnchorOriginRule> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EAnchorOriginRule>();

#define FOREACH_ENUM_EANCHORROTATIONRULE(op) \
	op(EAnchorRotationRule::ARR_AnchorActorForwardVector) \
	op(EAnchorRotationRule::ARR_Conversation) 

enum class EAnchorRotationRule : uint8;
template<> struct TIsUEnumClass<EAnchorRotationRule> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EAnchorRotationRule>();

#define FOREACH_ENUM_ESHOTTRACKINGRULE(op) \
	op(EShotTrackingRule::STR_Disabled) \
	op(EShotTrackingRule::STR_Speaker) \
	op(EShotTrackingRule::STR_Listener) \
	op(EShotTrackingRule::STR_Custom) 

enum class EShotTrackingRule : uint8;
template<> struct TIsUEnumClass<EShotTrackingRule> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EShotTrackingRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
