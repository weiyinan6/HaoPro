// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/DialogueBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UDialogueBlueprintGeneratedClass::StaticRegisterNativesUDialogueBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass_NoRegister()
	{
		return UDialogueBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint generated class for Dialogue blueprints. The Dialogue compiler compiles the Dialogue and stores it in\n * the DialogueTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/\n */" },
		{ "IncludePath", "DialogueBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/DialogueBlueprintGeneratedClass.h" },
		{ "ToolTip", "Blueprint generated class for Dialogue blueprints. The Dialogue compiler compiles the Dialogue and stores it in\nthe DialogueTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate_MetaData[] = {
		{ "Comment", "//The Dialogue template to be created \n" },
		{ "ModuleRelativePath", "Public/DialogueBlueprintGeneratedClass.h" },
		{ "ToolTip", "The Dialogue template to be created" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate = { "DialogueTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprintGeneratedClass, DialogueTemplate), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate_MetaData), Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::ClassParams = {
		&UDialogueBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009200A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueBlueprintGeneratedClass>()
	{
		return UDialogueBlueprintGeneratedClass::StaticClass();
	}
	UDialogueBlueprintGeneratedClass::UDialogueBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBlueprintGeneratedClass);
	UDialogueBlueprintGeneratedClass::~UDialogueBlueprintGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBlueprintGeneratedClass, UDialogueBlueprintGeneratedClass::StaticClass, TEXT("UDialogueBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBlueprintGeneratedClass), 3386857028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueBlueprintGeneratedClass_h_587123449(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
