// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestTaskBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTaskBlueprintFactory() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeConditionFactory();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeConditionFactory_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestTaskBlueprintFactory::StaticRegisterNativesUQuestTaskBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestTaskBlueprintFactory);
	UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory_NoRegister()
	{
		return UQuestTaskBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating a new QuestTaskBlueprint \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuestTaskBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/QuestTaskBlueprintFactory.h" },
		{ "ToolTip", "Factory for creating a new QuestTaskBlueprint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestTaskBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::ClassParams = {
		&UQuestTaskBlueprintFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UQuestTaskBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestTaskBlueprintFactory.OuterSingleton, Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestTaskBlueprintFactory.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestTaskBlueprintFactory>()
	{
		return UQuestTaskBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestTaskBlueprintFactory);
	UQuestTaskBlueprintFactory::~UQuestTaskBlueprintFactory() {}
	void UNarrativeEventBlueprintFactory::StaticRegisterNativesUNarrativeEventBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEventBlueprintFactory);
	UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory_NoRegister()
	{
		return UNarrativeEventBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sticking events and conditions in here too because adding 4 code files for boilerplate factories feels overkill \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuestTaskBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/QuestTaskBlueprintFactory.h" },
		{ "ToolTip", "Sticking events and conditions in here too because adding 4 code files for boilerplate factories feels overkill" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEventBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::ClassParams = {
		&UNarrativeEventBlueprintFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory.OuterSingleton, Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UNarrativeEventBlueprintFactory>()
	{
		return UNarrativeEventBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEventBlueprintFactory);
	UNarrativeEventBlueprintFactory::~UNarrativeEventBlueprintFactory() {}
	void UNarrativeConditionFactory::StaticRegisterNativesUNarrativeConditionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeConditionFactory);
	UClass* Z_Construct_UClass_UNarrativeConditionFactory_NoRegister()
	{
		return UNarrativeConditionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeConditionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeConditionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeConditionFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeConditionFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuestTaskBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/QuestTaskBlueprintFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeConditionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeConditionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeConditionFactory_Statics::ClassParams = {
		&UNarrativeConditionFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeConditionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeConditionFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNarrativeConditionFactory()
	{
		if (!Z_Registration_Info_UClass_UNarrativeConditionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeConditionFactory.OuterSingleton, Z_Construct_UClass_UNarrativeConditionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeConditionFactory.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UNarrativeConditionFactory>()
	{
		return UNarrativeConditionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeConditionFactory);
	UNarrativeConditionFactory::~UNarrativeConditionFactory() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestTaskBlueprintFactory, UQuestTaskBlueprintFactory::StaticClass, TEXT("UQuestTaskBlueprintFactory"), &Z_Registration_Info_UClass_UQuestTaskBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestTaskBlueprintFactory), 3673612231U) },
		{ Z_Construct_UClass_UNarrativeEventBlueprintFactory, UNarrativeEventBlueprintFactory::StaticClass, TEXT("UNarrativeEventBlueprintFactory"), &Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEventBlueprintFactory), 1754237008U) },
		{ Z_Construct_UClass_UNarrativeConditionFactory, UNarrativeConditionFactory::StaticClass, TEXT("UNarrativeConditionFactory"), &Z_Registration_Info_UClass_UNarrativeConditionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeConditionFactory), 2856584420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_3415634179(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
