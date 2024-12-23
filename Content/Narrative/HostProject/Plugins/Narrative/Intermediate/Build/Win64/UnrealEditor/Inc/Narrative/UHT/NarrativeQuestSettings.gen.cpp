// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeQuestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeQuestSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeQuestSettings();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeQuestSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UNarrativeQuestSettings::StaticRegisterNativesUNarrativeQuestSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeQuestSettings);
	UClass* Z_Construct_UClass_UNarrativeQuestSettings_NoRegister()
	{
		return UNarrativeQuestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeQuestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetTasksWhenCompleted_MetaData[];
#endif
		static void NewProp_bResetTasksWhenCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTasksWhenCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeQuestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeQuestSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime quest settings for narrative\n */" },
		{ "IncludePath", "NarrativeQuestSettings.h" },
		{ "ModuleRelativePath", "Public/NarrativeQuestSettings.h" },
		{ "ToolTip", "Runtime quest settings for narrative" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_MetaData[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "//When you complete a task, should its progress be reset after you complete it? This means you can design quests where you can come back to previously completed steps and re-complete them.\n" },
		{ "ModuleRelativePath", "Public/NarrativeQuestSettings.h" },
		{ "ToolTip", "When you complete a task, should its progress be reset after you complete it? This means you can design quests where you can come back to previously completed steps and re-complete them." },
	};
#endif
	void Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_SetBit(void* Obj)
	{
		((UNarrativeQuestSettings*)Obj)->bResetTasksWhenCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted = { "bResetTasksWhenCompleted", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeQuestSettings), &Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_MetaData), Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeQuestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeQuestSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeQuestSettings_Statics::ClassParams = {
		&UNarrativeQuestSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeQuestSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeQuestSettings()
	{
		if (!Z_Registration_Info_UClass_UNarrativeQuestSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeQuestSettings.OuterSingleton, Z_Construct_UClass_UNarrativeQuestSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeQuestSettings.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeQuestSettings>()
	{
		return UNarrativeQuestSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeQuestSettings);
	UNarrativeQuestSettings::~UNarrativeQuestSettings() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeQuestSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeQuestSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeQuestSettings, UNarrativeQuestSettings::StaticClass, TEXT("UNarrativeQuestSettings"), &Z_Registration_Info_UClass_UNarrativeQuestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeQuestSettings), 4279771670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeQuestSettings_h_2714358380(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeQuestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeQuestSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
