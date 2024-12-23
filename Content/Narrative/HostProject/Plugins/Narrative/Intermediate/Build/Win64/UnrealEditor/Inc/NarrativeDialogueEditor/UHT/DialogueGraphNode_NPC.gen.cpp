// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphNode_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_NPC() {}
// Cross Module References
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NPC();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NPC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References
	void UDialogueGraphNode_NPC::StaticRegisterNativesUDialogueGraphNode_NPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode_NPC);
	UClass* Z_Construct_UClass_UDialogueGraphNode_NPC_NoRegister()
	{
		return UDialogueGraphNode_NPC::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphNode_NPC.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphNode_NPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_NPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::ClassParams = {
		&UDialogueGraphNode_NPC::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode_NPC()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraphNode_NPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_NPC.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraphNode_NPC.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphNode_NPC>()
	{
		return UDialogueGraphNode_NPC::StaticClass();
	}
	UDialogueGraphNode_NPC::UDialogueGraphNode_NPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_NPC);
	UDialogueGraphNode_NPC::~UDialogueGraphNode_NPC() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_NPC, UDialogueGraphNode_NPC::StaticClass, TEXT("UDialogueGraphNode_NPC"), &Z_Registration_Info_UClass_UDialogueGraphNode_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_NPC), 2761003004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_3064465779(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
