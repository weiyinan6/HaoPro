// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Public/QuestBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestBlueprint();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestBlueprint::StaticRegisterNativesUQuestBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBlueprint);
	UClass* Z_Construct_UClass_UQuestBlueprint_NoRegister()
	{
		return UQuestBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UQuestBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A special type of blueprint that includes a node based quest editor.\n */" },
		{ "IncludePath", "QuestBlueprint.h" },
		{ "ModuleRelativePath", "Public/QuestBlueprint.h" },
		{ "ToolTip", "A special type of blueprint that includes a node based quest editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph_MetaData[] = {
		{ "Comment", "/** Graph for quest asset */" },
		{ "ModuleRelativePath", "Public/QuestBlueprint.h" },
		{ "ToolTip", "Graph for quest asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph = { "QuestGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBlueprint, QuestGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph_MetaData), Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate = { "QuestTemplate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBlueprint, QuestTemplate), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate_MetaData), Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBlueprint_Statics::ClassParams = {
		&UQuestBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBlueprint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestBlueprint()
	{
		if (!Z_Registration_Info_UClass_UQuestBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBlueprint.OuterSingleton, Z_Construct_UClass_UQuestBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestBlueprint.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestBlueprint>()
	{
		return UQuestBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBlueprint);
	UQuestBlueprint::~UQuestBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestBlueprint, UQuestBlueprint::StaticClass, TEXT("UQuestBlueprint"), &Z_Registration_Info_UClass_UQuestBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBlueprint), 1874462613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_687562368(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
