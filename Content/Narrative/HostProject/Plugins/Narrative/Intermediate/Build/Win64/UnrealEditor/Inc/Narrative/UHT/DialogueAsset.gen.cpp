// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/DialogueAsset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueAsset();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UDialogueAsset::StaticRegisterNativesUDialogueAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueAsset);
	UClass* Z_Construct_UClass_UDialogueAsset_NoRegister()
	{
		return UDialogueAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Legacy dialogue asset, still included so users of previous versions can right click and convert these into DialogueBlueprints \n */" },
		{ "IncludePath", "DialogueAsset.h" },
		{ "ModuleRelativePath", "Public/DialogueAsset.h" },
		{ "ToolTip", "Legacy dialogue asset, still included so users of previous versions can right click and convert these into DialogueBlueprints" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAsset, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue_MetaData), Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph_MetaData[] = {
		{ "Comment", "/** Graph for quest asset */" },
		{ "ModuleRelativePath", "Public/DialogueAsset.h" },
		{ "ToolTip", "Graph for quest asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph = { "DialogueGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAsset, DialogueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph_MetaData), Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(0, nullptr) }; // 490872384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "/** Info about the graphs we last edited */" },
		{ "ModuleRelativePath", "Public/DialogueAsset.h" },
		{ "ToolTip", "Info about the graphs we last edited" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAsset, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_MetaData), Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_MetaData) }; // 490872384
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAsset_Statics::ClassParams = {
		&UDialogueAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueAsset()
	{
		if (!Z_Registration_Info_UClass_UDialogueAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueAsset.OuterSingleton, Z_Construct_UClass_UDialogueAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueAsset.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueAsset>()
	{
		return UDialogueAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAsset);
	UDialogueAsset::~UDialogueAsset() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueAsset, UDialogueAsset::StaticClass, TEXT("UDialogueAsset"), &Z_Registration_Info_UClass_UDialogueAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueAsset), 2281467845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueAsset_h_1318038835(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
