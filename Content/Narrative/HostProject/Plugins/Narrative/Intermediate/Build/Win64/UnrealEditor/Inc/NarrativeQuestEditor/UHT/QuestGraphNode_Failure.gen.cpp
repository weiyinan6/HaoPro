// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_Failure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_Failure() {}
// Cross Module References
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Failure();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Failure_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	void UQuestGraphNode_Failure::StaticRegisterNativesUQuestGraphNode_Failure()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_Failure);
	UClass* Z_Construct_UClass_UQuestGraphNode_Failure_NoRegister()
	{
		return UQuestGraphNode_Failure::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGraphNode_Failure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGraphNode_Failure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestGraphNode_State,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Failure_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphNode_Failure_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode_Failure.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_Failure.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGraphNode_Failure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_Failure>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_Failure_Statics::ClassParams = {
		&UQuestGraphNode_Failure::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Failure_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphNode_Failure_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestGraphNode_Failure()
	{
		if (!Z_Registration_Info_UClass_UQuestGraphNode_Failure.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_Failure.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_Failure_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGraphNode_Failure.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_Failure>()
	{
		return UQuestGraphNode_Failure::StaticClass();
	}
	UQuestGraphNode_Failure::UQuestGraphNode_Failure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_Failure);
	UQuestGraphNode_Failure::~UQuestGraphNode_Failure() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Failure_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Failure_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_Failure, UQuestGraphNode_Failure::StaticClass, TEXT("UQuestGraphNode_Failure"), &Z_Registration_Info_UClass_UQuestGraphNode_Failure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_Failure), 1867110766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Failure_h_1727990149(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Failure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphNode_Failure_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
