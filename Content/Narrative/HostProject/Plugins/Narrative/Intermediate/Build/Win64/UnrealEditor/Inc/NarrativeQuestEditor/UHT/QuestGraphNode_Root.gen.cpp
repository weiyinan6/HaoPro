// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_Root() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Root();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Root_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestGraphNode_Root::StaticRegisterNativesUQuestGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_Root);
	UClass* Z_Construct_UClass_UQuestGraphNode_Root_NoRegister()
	{
		return UQuestGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestGraphNode_State,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Root_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_Root.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_Root_Statics::ClassParams = {
		&UQuestGraphNode_Root::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Root_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphNode_Root_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_UQuestGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_Root.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGraphNode_Root.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_Root>()
	{
		return UQuestGraphNode_Root::StaticClass();
	}
	UQuestGraphNode_Root::UQuestGraphNode_Root(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_Root);
	UQuestGraphNode_Root::~UQuestGraphNode_Root() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_Root, UQuestGraphNode_Root::StaticClass, TEXT("UQuestGraphNode_Root"), &Z_Registration_Info_UClass_UQuestGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_Root), 2389995017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_2736825022(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
