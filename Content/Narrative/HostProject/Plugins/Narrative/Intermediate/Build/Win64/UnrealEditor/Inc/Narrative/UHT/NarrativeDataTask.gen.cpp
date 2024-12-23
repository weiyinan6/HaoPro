// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeDataTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDataTask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDataTask();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UNarrativeDataTask::StaticRegisterNativesUNarrativeDataTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDataTask);
	UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister()
	{
		return UNarrativeDataTask::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeDataTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArgumentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArgument_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultArgument;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeDataTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDataTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data Tasks are lightweight tasks that consist of a Task Name, ie \"FindItem\", and an argument, ie \"Pickaxe\".\n * \n * You can create data tasks in the content browser and store them using the CompleteNarrativeDataTask function. These data tasks are really useful for two main reasons:\n * 1. They can be used to move the player through a quest. IE KillNPC: Boss, FindItem: Dragonstone, etc\n * 2. Narrative saves these to disk, meaning you can check if the player has ever killed a given NPC, found a given item, etc (using HasCompletedTask function)\n * Dialogues can easily check these too, which is powerful, ie If HasCompletedTask \"KillNPC: King\" an NPC could say \"How could you have slain the king!\"\n */" },
		{ "IncludePath", "NarrativeDataTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeDataTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Data Tasks are lightweight tasks that consist of a Task Name, ie \"FindItem\", and an argument, ie \"Pickaxe\".\n\nYou can create data tasks in the content browser and store them using the CompleteNarrativeDataTask function. These data tasks are really useful for two main reasons:\n1. They can be used to move the player through a quest. IE KillNPC: Boss, FindItem: Dragonstone, etc\n2. Narrative saves these to disk, meaning you can check if the player has ever killed a given NPC, found a given item, etc (using HasCompletedTask function)\nDialogues can easily check these too, which is powerful, ie If HasCompletedTask \"KillNPC: King\" an NPC could say \"How could you have slain the king!\"" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskName_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**A short name describing what this Task is*/" },
		{ "ModuleRelativePath", "Public/NarrativeDataTask.h" },
		{ "ToolTip", "A short name describing what this Task is" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDataTask, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskName_MetaData), Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskDescription_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**A description of this task. Will get used as a tooltip in the quest editor so write something useful!  */" },
		{ "ModuleRelativePath", "Public/NarrativeDataTask.h" },
		{ "ToolTip", "A description of this task. Will get used as a tooltip in the quest editor so write something useful!" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskDescription = { "TaskDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDataTask, TaskDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskDescription_MetaData), Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_ArgumentName_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**The name of the argument the data task takes, for example a task called FindItems argument name might be \"Item Name\" for example  */" },
		{ "ModuleRelativePath", "Public/NarrativeDataTask.h" },
		{ "ToolTip", "The name of the argument the data task takes, for example a task called FindItems argument name might be \"Item Name\" for example" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_ArgumentName = { "ArgumentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDataTask, ArgumentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_ArgumentName_MetaData), Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_ArgumentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskCategory_MetaData[] = {
		{ "Category", "Task Details" },
		{ "Comment", "/**The category of this Task, used for organization in the quest tool*/" },
		{ "ModuleRelativePath", "Public/NarrativeDataTask.h" },
		{ "ToolTip", "The category of this Task, used for organization in the quest tool" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskCategory = { "TaskCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDataTask, TaskCategory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskCategory_MetaData), Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskCategory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_DefaultArgument_MetaData[] = {
		{ "Category", "Autofill" },
		{ "Comment", "/**Default argument to autofill */" },
		{ "ModuleRelativePath", "Public/NarrativeDataTask.h" },
		{ "ToolTip", "Default argument to autofill" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_DefaultArgument = { "DefaultArgument", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDataTask, DefaultArgument), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_DefaultArgument_MetaData), Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_DefaultArgument_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_ArgumentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_TaskCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDataTask_Statics::NewProp_DefaultArgument,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeDataTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDataTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDataTask_Statics::ClassParams = {
		&UNarrativeDataTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNarrativeDataTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeDataTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDataTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeDataTask()
	{
		if (!Z_Registration_Info_UClass_UNarrativeDataTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDataTask.OuterSingleton, Z_Construct_UClass_UNarrativeDataTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeDataTask.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeDataTask>()
	{
		return UNarrativeDataTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDataTask);
	UNarrativeDataTask::~UNarrativeDataTask() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDataTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDataTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDataTask, UNarrativeDataTask::StaticClass, TEXT("UNarrativeDataTask"), &Z_Registration_Info_UClass_UNarrativeDataTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDataTask), 2696973422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDataTask_h_1796576299(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDataTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeDataTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
