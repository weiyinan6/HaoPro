// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAssetFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueAssetFactory();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueAssetFactory_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueBlueprint_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References
	void UDialogueAssetFactory::StaticRegisterNativesUDialogueAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueAssetFactory);
	UClass* Z_Construct_UClass_UDialogueAssetFactory_NoRegister()
	{
		return UDialogueAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LegacyAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueAssetFactory.h" },
		{ "ModuleRelativePath", "Private/DialogueAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Dialogue Asset" },
		{ "Comment", "// End of UFactory interface\n" },
		{ "ModuleRelativePath", "Private/DialogueAssetFactory.h" },
		{ "ToolTip", "End of UFactory interface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAssetFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass_MetaData), Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset_MetaData[] = {
		{ "Comment", "//If set, the factory will use this legacy asset as a template for the new asset\n" },
		{ "ModuleRelativePath", "Private/DialogueAssetFactory.h" },
		{ "ToolTip", "If set, the factory will use this legacy asset as a template for the new asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset = { "LegacyAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAssetFactory, LegacyAsset), Z_Construct_UClass_UDialogueAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset_MetaData), Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAssetFactory_Statics::ClassParams = {
		&UDialogueAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueAssetFactory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UDialogueAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueAssetFactory.OuterSingleton, Z_Construct_UClass_UDialogueAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueAssetFactory.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueAssetFactory>()
	{
		return UDialogueAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAssetFactory);
	UDialogueAssetFactory::~UDialogueAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueAssetFactory, UDialogueAssetFactory::StaticClass, TEXT("UDialogueAssetFactory"), &Z_Registration_Info_UClass_UDialogueAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueAssetFactory), 2314442546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_390980709(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
