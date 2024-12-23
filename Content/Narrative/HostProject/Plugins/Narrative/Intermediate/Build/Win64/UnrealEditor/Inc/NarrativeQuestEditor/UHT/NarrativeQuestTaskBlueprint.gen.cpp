// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/NarrativeQuestTaskBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeQuestTaskBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeTaskBlueprint();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeTaskBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UNarrativeTaskBlueprint::StaticRegisterNativesUNarrativeTaskBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTaskBlueprint);
	UClass* Z_Construct_UClass_UNarrativeTaskBlueprint_NoRegister()
	{
		return UNarrativeTaskBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeTaskBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tasks are blueprints that manage a task for the player to complete. This is mostly used by the quest editor.\n * This is different from Data Tasks which are just data assets: a TaskName and Argument, ie \"FindItem:Sword\",\n *\n * A good example is the GoToLocation task that comes with narrative, which checks if the player has reached a goal location. This type\n * of task wouldn't be possible with a data task, which doesn't have any logic or variables.\n */" },
		{ "IncludePath", "NarrativeQuestTaskBlueprint.h" },
		{ "ModuleRelativePath", "Private/NarrativeQuestTaskBlueprint.h" },
		{ "ToolTip", "Tasks are blueprints that manage a task for the player to complete. This is mostly used by the quest editor.\nThis is different from Data Tasks which are just data assets: a TaskName and Argument, ie \"FindItem:Sword\",\n\nA good example is the GoToLocation task that comes with narrative, which checks if the player has reached a goal location. This type\nof task wouldn't be possible with a data task, which doesn't have any logic or variables." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTaskBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::ClassParams = {
		&UNarrativeTaskBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNarrativeTaskBlueprint()
	{
		if (!Z_Registration_Info_UClass_UNarrativeTaskBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTaskBlueprint.OuterSingleton, Z_Construct_UClass_UNarrativeTaskBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeTaskBlueprint.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UNarrativeTaskBlueprint>()
	{
		return UNarrativeTaskBlueprint::StaticClass();
	}
	UNarrativeTaskBlueprint::UNarrativeTaskBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTaskBlueprint);
	UNarrativeTaskBlueprint::~UNarrativeTaskBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_NarrativeQuestTaskBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_NarrativeQuestTaskBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTaskBlueprint, UNarrativeTaskBlueprint::StaticClass, TEXT("UNarrativeTaskBlueprint"), &Z_Registration_Info_UClass_UNarrativeTaskBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTaskBlueprint), 2011128652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_NarrativeQuestTaskBlueprint_h_3254666291(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_NarrativeQuestTaskBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_NarrativeQuestTaskBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
