// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestEditorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorTypes();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorTypes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestEditorTypes::StaticRegisterNativesUQuestEditorTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorTypes);
	UClass* Z_Construct_UClass_UQuestEditorTypes_NoRegister()
	{
		return UQuestEditorTypes::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestEditorTypes.h" },
		{ "ModuleRelativePath", "Private/QuestEditorTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorTypes_Statics::ClassParams = {
		&UQuestEditorTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestEditorTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestEditorTypes()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorTypes.OuterSingleton, Z_Construct_UClass_UQuestEditorTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorTypes.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestEditorTypes>()
	{
		return UQuestEditorTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorTypes);
	UQuestEditorTypes::~UQuestEditorTypes() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorTypes, UQuestEditorTypes::StaticClass, TEXT("UQuestEditorTypes"), &Z_Registration_Info_UClass_UQuestEditorTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorTypes), 3728628740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorTypes_h_1393182165(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestEditorTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
