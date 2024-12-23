// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Private/NarrativeTaskManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeTaskManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTaskManager();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTaskManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UNarrativeTaskManager::StaticRegisterNativesUNarrativeTaskManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTaskManager);
	UClass* Z_Construct_UClass_UNarrativeTaskManager_NoRegister()
	{
		return UNarrativeTaskManager::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeTaskManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeTaskMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NarrativeTaskMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeTaskMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NarrativeTaskMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeTaskManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTaskManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages a map of UNarrativeTasks. Makes it really easy to grab a task asset using its string Name at runtime. \n */" },
		{ "IncludePath", "NarrativeTaskManager.h" },
		{ "ModuleRelativePath", "Private/NarrativeTaskManager.h" },
		{ "ToolTip", "Manages a map of UNarrativeTasks. Makes it really easy to grab a task asset using its string Name at runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_ValueProp = { "NarrativeTaskMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_Key_KeyProp = { "NarrativeTaskMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_MetaData[] = {
		{ "Comment", "//Allows for efficiently grabbing a narrative event asset by its name \n" },
		{ "ModuleRelativePath", "Private/NarrativeTaskManager.h" },
		{ "ToolTip", "Allows for efficiently grabbing a narrative event asset by its name" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap = { "NarrativeTaskMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTaskManager, NarrativeTaskMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_MetaData), Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTaskManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTaskManager_Statics::NewProp_NarrativeTaskMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeTaskManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTaskManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTaskManager_Statics::ClassParams = {
		&UNarrativeTaskManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeTaskManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTaskManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTaskManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeTaskManager()
	{
		if (!Z_Registration_Info_UClass_UNarrativeTaskManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTaskManager.OuterSingleton, Z_Construct_UClass_UNarrativeTaskManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeTaskManager.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeTaskManager>()
	{
		return UNarrativeTaskManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTaskManager);
	UNarrativeTaskManager::~UNarrativeTaskManager() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Private_NarrativeTaskManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Private_NarrativeTaskManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTaskManager, UNarrativeTaskManager::StaticClass, TEXT("UNarrativeTaskManager"), &Z_Registration_Info_UClass_UNarrativeTaskManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTaskManager), 2958753316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Private_NarrativeTaskManager_h_4183385734(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Private_NarrativeTaskManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Private_NarrativeTaskManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
