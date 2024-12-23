// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeDefaultCinecam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDefaultCinecam() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	NARRATIVE_API UClass* Z_Construct_UClass_ANarrativeDefaultCinecam();
	NARRATIVE_API UClass* Z_Construct_UClass_ANarrativeDefaultCinecam_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void ANarrativeDefaultCinecam::StaticRegisterNativesANarrativeDefaultCinecam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeDefaultCinecam);
	UClass* Z_Construct_UClass_ANarrativeDefaultCinecam_NoRegister()
	{
		return ANarrativeDefaultCinecam::StaticClass();
	}
	struct Z_Construct_UClass_ANarrativeDefaultCinecam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "NarrativeDefaultCinecam.h" },
		{ "ModuleRelativePath", "Public/NarrativeDefaultCinecam.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeDefaultCinecam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::ClassParams = {
		&ANarrativeDefaultCinecam::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANarrativeDefaultCinecam()
	{
		if (!Z_Registration_Info_UClass_ANarrativeDefaultCinecam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeDefaultCinecam.OuterSingleton, Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANarrativeDefaultCinecam.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<ANarrativeDefaultCinecam>()
	{
		return ANarrativeDefaultCinecam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeDefaultCinecam);
	ANarrativeDefaultCinecam::~ANarrativeDefaultCinecam() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDefaultCinecam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDefaultCinecam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeDefaultCinecam, ANarrativeDefaultCinecam::StaticClass, TEXT("ANarrativeDefaultCinecam"), &Z_Registration_Info_UClass_ANarrativeDefaultCinecam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeDefaultCinecam), 4060776709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDefaultCinecam_h_2971556336(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDefaultCinecam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDefaultCinecam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
