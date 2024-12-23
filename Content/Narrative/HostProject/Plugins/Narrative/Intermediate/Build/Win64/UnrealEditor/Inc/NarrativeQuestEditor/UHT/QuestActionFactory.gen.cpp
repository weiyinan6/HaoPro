// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestActionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestActionFactory() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestActionFactory();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestActionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestActionFactory::StaticRegisterNativesUQuestActionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestActionFactory);
	UClass* Z_Construct_UClass_UQuestActionFactory_NoRegister()
	{
		return UQuestActionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestActionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestActionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestActionFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestActionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestActionFactory.h" },
		{ "ModuleRelativePath", "Private/QuestActionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestActionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestActionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestActionFactory_Statics::ClassParams = {
		&UQuestActionFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestActionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestActionFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestActionFactory()
	{
		if (!Z_Registration_Info_UClass_UQuestActionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestActionFactory.OuterSingleton, Z_Construct_UClass_UQuestActionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestActionFactory.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestActionFactory>()
	{
		return UQuestActionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestActionFactory);
	UQuestActionFactory::~UQuestActionFactory() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestActionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestActionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestActionFactory, UQuestActionFactory::StaticClass, TEXT("UQuestActionFactory"), &Z_Registration_Info_UClass_UQuestActionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestActionFactory), 2223175945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestActionFactory_h_138177288(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestActionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestActionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
