// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraph();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References
	void UDialogueGraph::StaticRegisterNativesUDialogueGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraph);
	UClass* Z_Construct_UClass_UDialogueGraph_NoRegister()
	{
		return UDialogueGraph::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraph.h" },
		{ "ModuleRelativePath", "Private/DialogueGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraph_Statics::ClassParams = {
		&UDialogueGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraph_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDialogueGraph()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraph.OuterSingleton, Z_Construct_UClass_UDialogueGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraph.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraph>()
	{
		return UDialogueGraph::StaticClass();
	}
	UDialogueGraph::UDialogueGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraph);
	UDialogueGraph::~UDialogueGraph() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraph, UDialogueGraph::StaticClass, TEXT("UDialogueGraph"), &Z_Registration_Info_UClass_UDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraph), 1646334362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraph_h_1511422343(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
