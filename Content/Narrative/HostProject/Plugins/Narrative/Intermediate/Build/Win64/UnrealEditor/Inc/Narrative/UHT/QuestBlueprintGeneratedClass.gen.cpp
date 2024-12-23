// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/QuestBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UQuestBlueprintGeneratedClass::StaticRegisterNativesUQuestBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass_NoRegister()
	{
		return UQuestBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint generated class for quest blueprints. The quest compiler compiles the quest and stores it in\n * the QuestTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/\n */" },
		{ "IncludePath", "QuestBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/QuestBlueprintGeneratedClass.h" },
		{ "ToolTip", "Blueprint generated class for quest blueprints. The quest compiler compiles the quest and stores it in\nthe QuestTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate_MetaData[] = {
		{ "Comment", "//The quest template to be created \n" },
		{ "ModuleRelativePath", "Public/QuestBlueprintGeneratedClass.h" },
		{ "ToolTip", "The quest template to be created" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate = { "QuestTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBlueprintGeneratedClass, QuestTemplate), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate_MetaData), Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::ClassParams = {
		&UQuestBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009200A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestBlueprintGeneratedClass>()
	{
		return UQuestBlueprintGeneratedClass::StaticClass();
	}
	UQuestBlueprintGeneratedClass::UQuestBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBlueprintGeneratedClass);
	UQuestBlueprintGeneratedClass::~UQuestBlueprintGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestBlueprintGeneratedClass, UQuestBlueprintGeneratedClass::StaticClass, TEXT("UQuestBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBlueprintGeneratedClass), 1370568254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestBlueprintGeneratedClass_h_1750969193(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
