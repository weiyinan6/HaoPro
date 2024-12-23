// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Public/DialogueBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueBlueprint();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References
	void UDialogueBlueprint::StaticRegisterNativesUDialogueBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBlueprint);
	UClass* Z_Construct_UClass_UDialogueBlueprint_NoRegister()
	{
		return UDialogueBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LegacyAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A special type of blueprint that includes a node based dialogue editor.\n */" },
		{ "IncludePath", "DialogueBlueprint.h" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
		{ "ToolTip", "A special type of blueprint that includes a node based dialogue editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph_MetaData[] = {
		{ "Comment", "/** Graph for dialogue asset */" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
		{ "ToolTip", "Graph for dialogue asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph = { "DialogueGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprint, DialogueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph_MetaData), Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate = { "DialogueTemplate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprint, DialogueTemplate), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate_MetaData), Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset_MetaData[] = {
		{ "Comment", "//If set, the factory will use this legacy asset as a template for the new asset\n" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
		{ "ToolTip", "If set, the factory will use this legacy asset as a template for the new asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset = { "LegacyAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprint, LegacyAsset), Z_Construct_UClass_UDialogueAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset_MetaData), Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBlueprint_Statics::ClassParams = {
		&UDialogueBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBlueprint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueBlueprint()
	{
		if (!Z_Registration_Info_UClass_UDialogueBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBlueprint.OuterSingleton, Z_Construct_UClass_UDialogueBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueBlueprint.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueBlueprint>()
	{
		return UDialogueBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBlueprint);
	UDialogueBlueprint::~UDialogueBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBlueprint, UDialogueBlueprint::StaticClass, TEXT("UDialogueBlueprint"), &Z_Registration_Info_UClass_UDialogueBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBlueprint), 628745981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_2111857711(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
