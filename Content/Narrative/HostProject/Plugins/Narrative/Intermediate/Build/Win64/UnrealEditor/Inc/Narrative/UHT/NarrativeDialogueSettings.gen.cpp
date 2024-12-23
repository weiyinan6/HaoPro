// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeDialogueSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDialogueSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueSettings();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UNarrativeDialogueSettings::StaticRegisterNativesUNarrativeDialogueSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDialogueSettings);
	UClass* Z_Construct_UClass_UNarrativeDialogueSettings_NoRegister()
	{
		return UNarrativeDialogueSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeDialogueSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLineAudioSilence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueLineAudioSilence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDialogueTextDisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDialogueTextDisplayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LettersPerSecondLineDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LettersPerSecondLineDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSelectSingleResponse_MetaData[];
#endif
		static void NewProp_bAutoSelectSingleResponse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSelectSingleResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVerticalWiring_MetaData[];
#endif
		static void NewProp_bEnableVerticalWiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVerticalWiring;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeDialogueSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime dialogue settings for narrative \n */" },
		{ "IncludePath", "NarrativeDialogueSettings.h" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Runtime dialogue settings for narrative" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "//Optional buffer of silence added to the end of dialogue lines\n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Optional buffer of silence added to the end of dialogue lines" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence = { "DialogueLineAudioSilence", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, DialogueLineAudioSilence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence_MetaData), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "//How long should the text be displayed for at a minimum? Since default letters per minute is 25 this prevents a reply like \"no\" from being played too quickly\n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "How long should the text be displayed for at a minimum? Since default letters per minute is 25 this prevents a reply like \"no\" from being played too quickly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime = { "MinDialogueTextDisplayTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, MinDialogueTextDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime_MetaData), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "//If a dialogue doesn't have audio supplied, how long should the text be displayed on the screen for? Lower letters per minute means player gets more time \n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "If a dialogue doesn't have audio supplied, how long should the text be displayed on the screen for? Lower letters per minute means player gets more time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration = { "LettersPerSecondLineDuration", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, LettersPerSecondLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration_MetaData), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "Comment", "//If there is only one player response available, should we autoselect it, regardless of whether bAutoSelect is checked?\n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "If there is only one player response available, should we autoselect it, regardless of whether bAutoSelect is checked?" },
	};
#endif
	void Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_SetBit(void* Obj)
	{
		((UNarrativeDialogueSettings*)Obj)->bAutoSelectSingleResponse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse = { "bAutoSelectSingleResponse", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeDialogueSettings), &Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_MetaData), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "Comment", "//Expiremental - won't autoarrange old dialogues, and you'll need to move your nodes into the correct position yourself. \n//Also makes dialogue nodes sort themselves from left to right instead of top to bottom\n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Expiremental - won't autoarrange old dialogues, and you'll need to move your nodes into the correct position yourself.\nAlso makes dialogue nodes sort themselves from left to right instead of top to bottom" },
	};
#endif
	void Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_SetBit(void* Obj)
	{
		((UNarrativeDialogueSettings*)Obj)->bEnableVerticalWiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring = { "bEnableVerticalWiring", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeDialogueSettings), &Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_MetaData), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_Inner = { "SpeakerColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "Comment", "//Default speaker colors\n" },
		{ "ModuleRelativePath", "Public/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Default speaker colors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors = { "SpeakerColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, SpeakerColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_MetaData), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeDialogueSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDialogueSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::ClassParams = {
		&UNarrativeDialogueSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeDialogueSettings()
	{
		if (!Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton, Z_Construct_UClass_UNarrativeDialogueSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeDialogueSettings>()
	{
		return UNarrativeDialogueSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDialogueSettings);
	UNarrativeDialogueSettings::~UNarrativeDialogueSettings() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDialogueSettings, UNarrativeDialogueSettings::StaticClass, TEXT("UNarrativeDialogueSettings"), &Z_Registration_Info_UClass_UNarrativeDialogueSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDialogueSettings), 423802677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_1354630816(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDialogueSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
