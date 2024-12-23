// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeNodeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class UNarrativeComponent;
enum class EEventRuntime : uint8;
#ifdef NARRATIVE_NarrativeNodeBase_generated_h
#error "NarrativeNodeBase.generated.h already included, missing '#pragma once' in NarrativeNodeBase.h"
#endif
#define NARRATIVE_NarrativeNodeBase_generated_h

#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_SPARSE_DATA
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreConditionsMet); \
	DECLARE_FUNCTION(execProcessEvents);


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_ACCESSORS
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeNodeBase(); \
	friend struct Z_Construct_UClass_UNarrativeNodeBase_Statics; \
public: \
	DECLARE_CLASS(UNarrativeNodeBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeNodeBase)


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeNodeBase(UNarrativeNodeBase&&); \
	NO_API UNarrativeNodeBase(const UNarrativeNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeNodeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeNodeBase) \
	NO_API virtual ~UNarrativeNodeBase();


#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_13_PROLOG
#define FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_SPARSE_DATA \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_ACCESSORS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeNodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeNodeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
