// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class UNarrativeComponent;
#ifdef NARRATIVE_NarrativeEvent_generated_h
#error "NarrativeEvent.generated.h already included, missing '#pragma once' in NarrativeEvent.h"
#endif
#define NARRATIVE_NarrativeEvent_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execExecuteEvent);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_CALLBACK_WRAPPERS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeEvent(); \
	friend struct Z_Construct_UClass_UNarrativeEvent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeEvent)


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeEvent(UNarrativeEvent&&); \
	NO_API UNarrativeEvent(const UNarrativeEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeEvent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeEvent) \
	NO_API virtual ~UNarrativeEvent();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_58_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_CALLBACK_WRAPPERS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h


#define FOREACH_ENUM_EPARTYEVENTPOLICY(op) \
	op(EPartyEventPolicy::Party) \
	op(EPartyEventPolicy::AllPartyMembers) \
	op(EPartyEventPolicy::PartyLeader) 

enum class EPartyEventPolicy;
template<> struct TIsUEnumClass<EPartyEventPolicy> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EPartyEventPolicy>();

#define FOREACH_ENUM_EEVENTRUNTIME(op) \
	op(EEventRuntime::Start) \
	op(EEventRuntime::End) \
	op(EEventRuntime::Both) 

enum class EEventRuntime : uint8;
template<> struct TIsUEnumClass<EEventRuntime> { enum { Value = true }; };
template<> NARRATIVE_API UEnum* StaticEnum<EEventRuntime>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
