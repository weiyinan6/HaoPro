// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EQuestCompletion();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestBranchCompleted_Parms
		{
			const UQuest* Quest;
			const UQuestBranch* Branch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestBranchCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Quests\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Quests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestBranchCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestBranchCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestBranchCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestBranchCompleted, const UQuest* Quest, const UQuestBranch* Branch)
{
	struct _Script_Narrative_eventOnQuestBranchCompleted_Parms
	{
		const UQuest* Quest;
		const UQuestBranch* Branch;
	};
	_Script_Narrative_eventOnQuestBranchCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.Branch=Branch;
	OnQuestBranchCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestNewState_Parms
		{
			UQuest* Quest;
			const UQuestState* NewState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestNewState__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::_Script_Narrative_eventOnQuestNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::_Script_Narrative_eventOnQuestNewState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestNewState_DelegateWrapper(const FMulticastScriptDelegate& OnQuestNewState, UQuest* Quest, const UQuestState* NewState)
{
	struct _Script_Narrative_eventOnQuestNewState_Parms
	{
		UQuest* Quest;
		const UQuestState* NewState;
	};
	_Script_Narrative_eventOnQuestNewState_Parms Parms;
	Parms.Quest=Quest;
	Parms.NewState=NewState;
	OnQuestNewState.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestTaskProgressChanged_Parms
		{
			const UQuest* Quest;
			const UNarrativeTask* ProgressedTask;
			const UQuestBranch* Branch;
			int32 OldProgress;
			int32 NewProgress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressedTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressedTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressChanged_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask = { "ProgressedTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressChanged_Parms, ProgressedTask), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressChanged_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_OldProgress = { "OldProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressChanged_Parms, OldProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskProgressChanged_Parms, NewProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_OldProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestTaskProgressChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::_Script_Narrative_eventOnQuestTaskProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::_Script_Narrative_eventOnQuestTaskProgressChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestTaskProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskProgressChanged, const UQuest* Quest, const UNarrativeTask* ProgressedTask, const UQuestBranch* Branch, int32 OldProgress, int32 NewProgress)
{
	struct _Script_Narrative_eventOnQuestTaskProgressChanged_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* ProgressedTask;
		const UQuestBranch* Branch;
		int32 OldProgress;
		int32 NewProgress;
	};
	_Script_Narrative_eventOnQuestTaskProgressChanged_Parms Parms;
	Parms.Quest=Quest;
	Parms.ProgressedTask=ProgressedTask;
	Parms.Branch=Branch;
	Parms.OldProgress=OldProgress;
	Parms.NewProgress=NewProgress;
	OnQuestTaskProgressChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestTaskCompleted_Parms
		{
			const UQuest* Quest;
			const UNarrativeTask* CompletedTask;
			const UQuestBranch* Branch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompletedTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask = { "CompletedTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskCompleted_Parms, CompletedTask), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestTaskCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestTaskCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestTaskCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskCompleted, const UQuest* Quest, const UNarrativeTask* CompletedTask, const UQuestBranch* Branch)
{
	struct _Script_Narrative_eventOnQuestTaskCompleted_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* CompletedTask;
		const UQuestBranch* Branch;
	};
	_Script_Narrative_eventOnQuestTaskCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.CompletedTask=CompletedTask;
	Parms.Branch=Branch;
	OnQuestTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestSucceeded_Parms
		{
			const UQuest* Quest;
			FText QuestSucceededMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceededMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestSucceeded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::_Script_Narrative_eventOnQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::_Script_Narrative_eventOnQuestSucceeded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestSucceeded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestSucceeded, const UQuest* Quest, FText const& QuestSucceededMessage)
{
	struct _Script_Narrative_eventOnQuestSucceeded_Parms
	{
		const UQuest* Quest;
		FText QuestSucceededMessage;
	};
	_Script_Narrative_eventOnQuestSucceeded_Parms Parms;
	Parms.Quest=Quest;
	Parms.QuestSucceededMessage=QuestSucceededMessage;
	OnQuestSucceeded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestFailed_Parms
		{
			const UQuest* Quest;
			FText QuestFailedMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailedMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::_Script_Narrative_eventOnQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::_Script_Narrative_eventOnQuestFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestFailed_DelegateWrapper(const FMulticastScriptDelegate& OnQuestFailed, const UQuest* Quest, FText const& QuestFailedMessage)
{
	struct _Script_Narrative_eventOnQuestFailed_Parms
	{
		const UQuest* Quest;
		FText QuestFailedMessage;
	};
	_Script_Narrative_eventOnQuestFailed_Parms Parms;
	Parms.Quest=Quest;
	Parms.QuestFailedMessage=QuestFailedMessage;
	OnQuestFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestStarted_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestStarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStarted, const UQuest* Quest)
{
	struct _Script_Narrative_eventOnQuestStarted_Parms
	{
		const UQuest* Quest;
	};
	_Script_Narrative_eventOnQuestStarted_Parms Parms;
	Parms.Quest=Quest;
	OnQuestStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestForgotten_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestForgotten_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestForgotten__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::_Script_Narrative_eventOnQuestForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::_Script_Narrative_eventOnQuestForgotten_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnQuestForgotten, const UQuest* Quest)
{
	struct _Script_Narrative_eventOnQuestForgotten_Parms
	{
		const UQuest* Quest;
	};
	_Script_Narrative_eventOnQuestForgotten_Parms Parms;
	Parms.Quest=Quest;
	OnQuestForgotten.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics
	{
		struct _Script_Narrative_eventOnQuestRestarted_Parms
		{
			const UQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Narrative_eventOnQuestRestarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest_MetaData), Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnQuestRestarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestRestarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::_Script_Narrative_eventOnQuestRestarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestRestarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRestarted, const UQuest* Quest)
{
	struct _Script_Narrative_eventOnQuestRestarted_Parms
	{
		const UQuest* Quest;
	};
	_Script_Narrative_eventOnQuestRestarted_Parms Parms;
	Parms.Quest=Quest;
	OnQuestRestarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestCompletion;
	static UEnum* EQuestCompletion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EQuestCompletion, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EQuestCompletion"));
		}
		return Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EQuestCompletion>()
	{
		return EQuestCompletion_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EQuestCompletion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enumerators[] = {
		{ "EQuestCompletion::QC_NotStarted", (int64)EQuestCompletion::QC_NotStarted },
		{ "EQuestCompletion::QC_Started", (int64)EQuestCompletion::QC_Started },
		{ "EQuestCompletion::QC_Succeded", (int64)EQuestCompletion::QC_Succeded },
		{ "EQuestCompletion::QC_Failed", (int64)EQuestCompletion::QC_Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents the state of a particular quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "QC_Failed.DisplayName", "Failed" },
		{ "QC_Failed.Name", "EQuestCompletion::QC_Failed" },
		{ "QC_NotStarted.DisplayName", "Not Started" },
		{ "QC_NotStarted.Name", "EQuestCompletion::QC_NotStarted" },
		{ "QC_Started.DisplayName", "Started" },
		{ "QC_Started.Name", "EQuestCompletion::QC_Started" },
		{ "QC_Succeded.DisplayName", "Succeeded" },
		{ "QC_Succeded.Name", "EQuestCompletion::QC_Succeded" },
		{ "ToolTip", "Represents the state of a particular quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EQuestCompletion",
		"EQuestCompletion",
		Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_EQuestCompletion()
	{
		if (!Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton, Z_Construct_UEnum_Narrative_EQuestCompletion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton;
	}
	DEFINE_FUNCTION(UQuest::execGetGroupMembers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APlayerController*>*)Z_Param__Result=P_THIS->GetGroupMembers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetOwningComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=P_THIS->GetOwningComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetOwningPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetOwningController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestCompletion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EQuestCompletion*)Z_Param__Result=P_THIS->GetQuestCompletion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuestNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetBranches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuestBranch*>*)Z_Param__Result=P_THIS->GetBranches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuestState*>*)Z_Param__Result=P_THIS->GetStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestStartState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestState**)Z_Param__Result=P_THIS->GetQuestStartState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execSpawnQuestActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ActorTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnQuestActor_Implementation(Z_Param_ActorClass,Z_Param_Out_ActorTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execEnterState)
	{
		P_GET_OBJECT(UQuestState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestBranchCompleted)
	{
		P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestBranchCompleted(Z_Param_Branch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestTaskCompleted)
	{
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskCompleted(Z_Param_Task,Z_Param_Branch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnQuestTaskProgressChanged)
	{
		P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
		P_GET_OBJECT(UQuestBranch,Z_Param_Step);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequiredProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskProgressChanged(Z_Param_Task,Z_Param_Step,Z_Param_CurrentProgress,Z_Param_RequiredProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execSucceedQuest)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_QuestSucceededMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SucceedQuest(Z_Param_QuestSucceededMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execFailQuest)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_QuestFailedMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FailQuest(Z_Param_QuestFailedMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execSetQuestDescription)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuestDescription(Z_Param_Out_NewDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execSetQuestName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuestName(Z_Param_Out_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetQuestDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetQuestName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetQuestName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetBranch)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBranch**)Z_Param__Result=P_THIS->GetBranch(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execGetState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestState**)Z_Param__Result=P_THIS->GetState(Z_Param_ID);
		P_NATIVE_END;
	}
	struct Quest_eventBPOnQuestBranchCompleted_Parms
	{
		const UQuest* Quest;
		const UQuestBranch* Branch;
	};
	struct Quest_eventBPOnQuestFailed_Parms
	{
		const UQuest* Quest;
		FText QuestFailedMessage;
	};
	struct Quest_eventBPOnQuestNewState_Parms
	{
		UQuest* Quest;
		const UQuestState* NewState;
	};
	struct Quest_eventBPOnQuestStarted_Parms
	{
		const UQuest* Quest;
	};
	struct Quest_eventBPOnQuestSucceeded_Parms
	{
		const UQuest* Quest;
		FText QuestSucceededMessage;
	};
	struct Quest_eventBPOnQuestTaskCompleted_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* Task;
		const UQuestBranch* Step;
	};
	struct Quest_eventBPOnQuestTaskProgressChanged_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* Task;
		const UQuestBranch* Step;
		int32 CurrentProgress;
		int32 RequiredProgress;
	};
	struct Quest_eventSpawnQuestActor_Parms
	{
		TSubclassOf<AActor>  ActorClass;
		FTransform ActorTransform;
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		Quest_eventSpawnQuestActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UQuest_BPOnQuestBranchCompleted = FName(TEXT("BPOnQuestBranchCompleted"));
	void UQuest::BPOnQuestBranchCompleted(const UQuest* Quest, const UQuestBranch* Branch)
	{
		Quest_eventBPOnQuestBranchCompleted_Parms Parms;
		Parms.Quest=Quest;
		Parms.Branch=Branch;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestBranchCompleted),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestFailed = FName(TEXT("BPOnQuestFailed"));
	void UQuest::BPOnQuestFailed(const UQuest* Quest, FText const& QuestFailedMessage)
	{
		Quest_eventBPOnQuestFailed_Parms Parms;
		Parms.Quest=Quest;
		Parms.QuestFailedMessage=QuestFailedMessage;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestFailed),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestNewState = FName(TEXT("BPOnQuestNewState"));
	void UQuest::BPOnQuestNewState(UQuest* Quest, const UQuestState* NewState)
	{
		Quest_eventBPOnQuestNewState_Parms Parms;
		Parms.Quest=Quest;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestNewState),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestStarted = FName(TEXT("BPOnQuestStarted"));
	void UQuest::BPOnQuestStarted(const UQuest* Quest)
	{
		Quest_eventBPOnQuestStarted_Parms Parms;
		Parms.Quest=Quest;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestStarted),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestSucceeded = FName(TEXT("BPOnQuestSucceeded"));
	void UQuest::BPOnQuestSucceeded(const UQuest* Quest, FText const& QuestSucceededMessage)
	{
		Quest_eventBPOnQuestSucceeded_Parms Parms;
		Parms.Quest=Quest;
		Parms.QuestSucceededMessage=QuestSucceededMessage;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestSucceeded),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestTaskCompleted = FName(TEXT("BPOnQuestTaskCompleted"));
	void UQuest::BPOnQuestTaskCompleted(const UQuest* Quest, const UNarrativeTask* Task, const UQuestBranch* Step)
	{
		Quest_eventBPOnQuestTaskCompleted_Parms Parms;
		Parms.Quest=Quest;
		Parms.Task=Task;
		Parms.Step=Step;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestTaskCompleted),&Parms);
	}
	static FName NAME_UQuest_BPOnQuestTaskProgressChanged = FName(TEXT("BPOnQuestTaskProgressChanged"));
	void UQuest::BPOnQuestTaskProgressChanged(const UQuest* Quest, const UNarrativeTask* Task, const UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress)
	{
		Quest_eventBPOnQuestTaskProgressChanged_Parms Parms;
		Parms.Quest=Quest;
		Parms.Task=Task;
		Parms.Step=Step;
		Parms.CurrentProgress=CurrentProgress;
		Parms.RequiredProgress=RequiredProgress;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_BPOnQuestTaskProgressChanged),&Parms);
	}
	static FName NAME_UQuest_SpawnQuestActor = FName(TEXT("SpawnQuestActor"));
	AActor* UQuest::SpawnQuestActor(TSubclassOf<AActor>  ActorClass, FTransform const& ActorTransform)
	{
		Quest_eventSpawnQuestActor_Parms Parms;
		Parms.ActorClass=ActorClass;
		Parms.ActorTransform=ActorTransform;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_SpawnQuestActor),&Parms);
		return Parms.ReturnValue;
	}
	void UQuest::StaticRegisterNativesUQuest()
	{
		UClass* Class = UQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterState", &UQuest::execEnterState },
			{ "FailQuest", &UQuest::execFailQuest },
			{ "GetBranch", &UQuest::execGetBranch },
			{ "GetBranches", &UQuest::execGetBranches },
			{ "GetGroupMembers", &UQuest::execGetGroupMembers },
			{ "GetNodes", &UQuest::execGetNodes },
			{ "GetOwningComp", &UQuest::execGetOwningComp },
			{ "GetOwningController", &UQuest::execGetOwningController },
			{ "GetOwningPawn", &UQuest::execGetOwningPawn },
			{ "GetQuestCompletion", &UQuest::execGetQuestCompletion },
			{ "GetQuestDescription", &UQuest::execGetQuestDescription },
			{ "GetQuestName", &UQuest::execGetQuestName },
			{ "GetQuestStartState", &UQuest::execGetQuestStartState },
			{ "GetState", &UQuest::execGetState },
			{ "GetStates", &UQuest::execGetStates },
			{ "OnQuestBranchCompleted", &UQuest::execOnQuestBranchCompleted },
			{ "OnQuestTaskCompleted", &UQuest::execOnQuestTaskCompleted },
			{ "OnQuestTaskProgressChanged", &UQuest::execOnQuestTaskProgressChanged },
			{ "SetQuestDescription", &UQuest::execSetQuestDescription },
			{ "SetQuestName", &UQuest::execSetQuestName },
			{ "SpawnQuestActor", &UQuest::execSpawnQuestActor },
			{ "SucceedQuest", &UQuest::execSucceedQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestBranchCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Branch Taken" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestBranchCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers), sizeof(Quest_eventBPOnQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestBranchCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailedMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Failed" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestFailed", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers), sizeof(Quest_eventBPOnQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest New State" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestNewState", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers), sizeof(Quest_eventBPOnQuestNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestNewState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Started" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestStarted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers), sizeof(Quest_eventBPOnQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceededMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Succeeded" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestSucceeded", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers), sizeof(Quest_eventBPOnQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestSucceeded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Task Completed" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers), sizeof(Quest_eventBPOnQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestTaskCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step_MetaData), Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, CurrentProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, RequiredProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Objective Progress Made" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestTaskProgressChanged", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers), sizeof(Quest_eventBPOnQuestTaskProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventBPOnQuestTaskProgressChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_EnterState_Statics
	{
		struct Quest_eventEnterState_Parms
		{
			UQuestState* NewState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_EnterState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventEnterState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_EnterState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_EnterState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "//Explicitly tell the quest to go to the given state\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Explicitly tell the quest to go to the given state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_EnterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "EnterState", nullptr, nullptr, Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_EnterState_Statics::Quest_eventEnterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_EnterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_EnterState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_EnterState_Statics::Quest_eventEnterState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_EnterState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_EnterState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_FailQuest_Statics
	{
		struct Quest_eventFailQuest_Parms
		{
			FText QuestFailedMessage;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_FailQuest_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventFailQuest_Parms, QuestFailedMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_FailQuest_Statics::NewProp_QuestFailedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_FailQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "FailQuest", nullptr, nullptr, Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_FailQuest_Statics::Quest_eventFailQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_FailQuest_Statics::Quest_eventFailQuest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_FailQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_FailQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetBranch_Statics
	{
		struct Quest_eventGetBranch_Parms
		{
			FName ID;
			UQuestBranch* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetBranch_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetBranch_Parms, ReturnValue), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetBranch", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetBranch_Statics::Quest_eventGetBranch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetBranch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetBranch_Statics::Quest_eventGetBranch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetBranches_Statics
	{
		struct Quest_eventGetBranches_Parms
		{
			TArray<UQuestBranch*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetBranches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetBranches_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetBranches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetBranches", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetBranches_Statics::Quest_eventGetBranches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetBranches_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetBranches_Statics::Quest_eventGetBranches_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetBranches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetBranches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetGroupMembers_Statics
	{
		struct Quest_eventGetGroupMembers_Parms
		{
			TArray<APlayerController*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetGroupMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Return all players doing this quest if shared, or the owningcontroller if solo quest*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Return all players doing this quest if shared, or the owningcontroller if solo quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetGroupMembers", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Quest_eventGetGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Quest_eventGetGroupMembers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetGroupMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetNodes_Statics
	{
		struct Quest_eventGetNodes_Parms
		{
			TArray<UQuestNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetNodes", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetNodes_Statics::Quest_eventGetNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetNodes_Statics::Quest_eventGetNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetOwningComp_Statics
	{
		struct Quest_eventGetOwningComp_Parms
		{
			UNarrativeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetOwningComp_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningComp", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Quest_eventGetOwningComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Quest_eventGetOwningComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetOwningComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetOwningController_Statics
	{
		struct Quest_eventGetOwningController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetOwningController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetOwningController_Statics::Quest_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetOwningController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetOwningController_Statics::Quest_eventGetOwningController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetOwningController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetOwningPawn_Statics
	{
		struct Quest_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Quest_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Quest_eventGetOwningPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics
	{
		struct Quest_eventGetQuestCompletion_Parms
		{
			EQuestCompletion ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestCompletion_Parms, ReturnValue), Z_Construct_UEnum_Narrative_EQuestCompletion, METADATA_PARAMS(0, nullptr) }; // 2777485570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "//Grab the completion of the quest \n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Grab the completion of the quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestCompletion", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Quest_eventGetQuestCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Quest_eventGetQuestCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetQuestCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestDescription_Statics
	{
		struct Quest_eventGetQuestDescription_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestDescription", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Quest_eventGetQuestDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Quest_eventGetQuestDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetQuestDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestName_Statics
	{
		struct Quest_eventGetQuestName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_GetQuestName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestName", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Quest_eventGetQuestName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Quest_eventGetQuestName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetQuestName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetQuestStartState_Statics
	{
		struct Quest_eventGetQuestStartState_Parms
		{
			UQuestState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestStartState_Parms, ReturnValue), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestStartState", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Quest_eventGetQuestStartState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Quest_eventGetQuestStartState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetQuestStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetState_Statics
	{
		struct Quest_eventGetState_Parms
		{
			FName ID;
			UQuestState* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetState_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetState_Parms, ReturnValue), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetState_Statics::Quest_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetState_Statics::Quest_eventGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_GetStates_Statics
	{
		struct Quest_eventGetStates_Parms
		{
			TArray<UQuestState*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_GetStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetStates", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetStates_Statics::Quest_eventGetStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetStates_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_GetStates_Statics::Quest_eventGetStates_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_GetStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics
	{
		struct Quest_eventOnQuestBranchCompleted_Parms
		{
			const UQuestBranch* Branch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch_MetaData), Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestBranchCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Quest_eventOnQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Quest_eventOnQuestBranchCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_OnQuestBranchCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics
	{
		struct Quest_eventOnQuestTaskCompleted_Parms
		{
			const UNarrativeTask* Task;
			const UQuestBranch* Branch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch_MetaData), Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Quest_eventOnQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Quest_eventOnQuestTaskCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_OnQuestTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics
	{
		struct Quest_eventOnQuestTaskProgressChanged_Parms
		{
			const UNarrativeTask* Task;
			const UQuestBranch* Step;
			int32 CurrentProgress;
			int32 RequiredProgress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step_MetaData), Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, CurrentProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, RequiredProgress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestTaskProgressChanged", nullptr, nullptr, Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Quest_eventOnQuestTaskProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Quest_eventOnQuestTaskProgressChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_SetQuestDescription_Statics
	{
		struct Quest_eventSetQuestDescription_Parms
		{
			FText NewDescription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription = { "NewDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSetQuestDescription_Parms, NewDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription_MetaData), Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SetQuestDescription", nullptr, nullptr, Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Quest_eventSetQuestDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Quest_eventSetQuestDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_SetQuestDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_SetQuestName_Statics
	{
		struct Quest_eventSetQuestName_Parms
		{
			FText NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSetQuestName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName_MetaData), Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SetQuestName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SetQuestName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SetQuestName", nullptr, nullptr, Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SetQuestName_Statics::Quest_eventSetQuestName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SetQuestName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_SetQuestName_Statics::Quest_eventSetQuestName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_SetQuestName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SetQuestName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSpawnQuestActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSpawnQuestActor_Parms, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform_MetaData), Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSpawnQuestActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Spawn a quest actor! This will ensure the actors lifetime is managed automatically by the quest for you - when the quest ends, \n\x09* all of the spawned quest actors will be cleaned up from the level. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "* Spawn a quest actor! This will ensure the actors lifetime is managed automatically by the quest for you - when the quest ends,\n* all of the spawned quest actors will be cleaned up from the level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SpawnQuestActor", nullptr, nullptr, Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers), sizeof(Quest_eventSpawnQuestActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Quest_eventSpawnQuestActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_SpawnQuestActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_SucceedQuest_Statics
	{
		struct Quest_eventSucceedQuest_Parms
		{
			FText QuestSucceededMessage;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_SucceedQuest_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSucceedQuest_Parms, QuestSucceededMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SucceedQuest_Statics::NewProp_QuestSucceededMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Manually set the quest as succeeded. You'll need to provide some text for the UI as theres no node  the quest, you're manually succeeding it.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Manually set the quest as succeeded. You'll need to provide some text for the UI as theres no node  the quest, you're manually succeeding it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SucceedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SucceedQuest", nullptr, nullptr, Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Quest_eventSucceedQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Quest_eventSucceedQuest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuest_SucceedQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SucceedQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuest);
	UClass* Z_Construct_UClass_UQuest_NoRegister()
	{
		return UQuest::StaticClass();
	}
	struct Z_Construct_UClass_UQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableStates_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InheritableStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InheritableStates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestCompletion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestStartState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestStartState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReachedStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachedStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReachedStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestBranchCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestBranchCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestNewState_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestNewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskProgressChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestTaskProgressChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestTaskCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceeded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestSucceeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestForgotten_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestForgotten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRestarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestRestarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted, "BPOnQuestBranchCompleted" }, // 481739476
		{ &Z_Construct_UFunction_UQuest_BPOnQuestFailed, "BPOnQuestFailed" }, // 830328363
		{ &Z_Construct_UFunction_UQuest_BPOnQuestNewState, "BPOnQuestNewState" }, // 3837013668
		{ &Z_Construct_UFunction_UQuest_BPOnQuestStarted, "BPOnQuestStarted" }, // 3124361178
		{ &Z_Construct_UFunction_UQuest_BPOnQuestSucceeded, "BPOnQuestSucceeded" }, // 3010469416
		{ &Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted, "BPOnQuestTaskCompleted" }, // 1072546484
		{ &Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged, "BPOnQuestTaskProgressChanged" }, // 183369120
		{ &Z_Construct_UFunction_UQuest_EnterState, "EnterState" }, // 612671216
		{ &Z_Construct_UFunction_UQuest_FailQuest, "FailQuest" }, // 1840446952
		{ &Z_Construct_UFunction_UQuest_GetBranch, "GetBranch" }, // 3460549716
		{ &Z_Construct_UFunction_UQuest_GetBranches, "GetBranches" }, // 2257338651
		{ &Z_Construct_UFunction_UQuest_GetGroupMembers, "GetGroupMembers" }, // 1330894946
		{ &Z_Construct_UFunction_UQuest_GetNodes, "GetNodes" }, // 1289191093
		{ &Z_Construct_UFunction_UQuest_GetOwningComp, "GetOwningComp" }, // 3109766439
		{ &Z_Construct_UFunction_UQuest_GetOwningController, "GetOwningController" }, // 2092018512
		{ &Z_Construct_UFunction_UQuest_GetOwningPawn, "GetOwningPawn" }, // 3549694074
		{ &Z_Construct_UFunction_UQuest_GetQuestCompletion, "GetQuestCompletion" }, // 3405837457
		{ &Z_Construct_UFunction_UQuest_GetQuestDescription, "GetQuestDescription" }, // 3338310475
		{ &Z_Construct_UFunction_UQuest_GetQuestName, "GetQuestName" }, // 845558078
		{ &Z_Construct_UFunction_UQuest_GetQuestStartState, "GetQuestStartState" }, // 341775585
		{ &Z_Construct_UFunction_UQuest_GetState, "GetState" }, // 254512962
		{ &Z_Construct_UFunction_UQuest_GetStates, "GetStates" }, // 1228908057
		{ &Z_Construct_UFunction_UQuest_OnQuestBranchCompleted, "OnQuestBranchCompleted" }, // 2275773889
		{ &Z_Construct_UFunction_UQuest_OnQuestTaskCompleted, "OnQuestTaskCompleted" }, // 1018060904
		{ &Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged, "OnQuestTaskProgressChanged" }, // 1743488531
		{ &Z_Construct_UFunction_UQuest_SetQuestDescription, "SetQuestDescription" }, // 1657989367
		{ &Z_Construct_UFunction_UQuest_SetQuestName, "SetQuestName" }, // 3766966994
		{ &Z_Construct_UFunction_UQuest_SpawnQuestActor, "SpawnQuestActor" }, // 2908958743
		{ &Z_Construct_UFunction_UQuest_SucceedQuest, "SucceedQuest" }, // 1713865698
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The current state the player is at in this quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "The current state the player is at in this quest" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, CurrentState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states, \n\x09""for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n\x09""could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states,\n       for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n       could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner = { "InheritableStates", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states, \n\x09""for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n\x09""could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states,\n       for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n       could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates = { "InheritableStates", nullptr, (EPropertyFlags)0x002008800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, InheritableStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_MetaData[] = {
		{ "Comment", "/**Current quest progress*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Current quest progress" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion = { "QuestCompletion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestCompletion), Z_Construct_UEnum_Narrative_EQuestCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_MetaData) }; // 2777485570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The beginning state of this quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "The beginning state of this quest" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState = { "QuestStartState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestStartState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_States_MetaData[] = {
		{ "Comment", "//Holds all of the states in the quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Holds all of the states in the quest" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, States), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_States_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_States_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_Branches_MetaData[] = {
		{ "Comment", "//Holds all of the branches in the quest\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Holds all of the branches in the quest" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_Branches_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_Branches_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_Inner = { "QuestActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_MetaData[] = {
		{ "Comment", "//Holds all the spawned quest actors\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Holds all the spawned quest actors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors = { "QuestActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_Inner = { "ReachedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**All the states we've reached so far. Useful for a quest journal, where we need to show the player what they have done so far*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "All the states we've reached so far. Useful for a quest journal, where we need to show the player what they have done so far" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates = { "ReachedStates", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, ReachedStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp_MetaData[] = {
		{ "Category", "Quests" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OwningComp), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_OwningController_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_OwningController_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_OwningController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective has been completed.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest objective has been completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted = { "QuestBranchCompleted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestBranchCompleted), Z_Construct_UDelegateFunction_Narrative_OnQuestBranchCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted_MetaData) }; // 1020185813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective is updated and we've received a new objective*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest objective is updated and we've received a new objective" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState = { "QuestNewState", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestNewState), Z_Construct_UDelegateFunction_Narrative_OnQuestNewState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState_MetaData) }; // 308258444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a branch has made progress. ie 6 out of 10 coins found*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest task in a branch has made progress. ie 6 out of 10 coins found" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged = { "QuestTaskProgressChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestTaskProgressChanged), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskProgressChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged_MetaData) }; // 1727782443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task on a branch is completed ie 10 out of 10 coins found*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest task on a branch is completed ie 10 out of 10 coins found" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted = { "QuestTaskCompleted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestTaskCompleted), Z_Construct_UDelegateFunction_Narrative_OnQuestTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted_MetaData) }; // 2456509379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is completed.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest is completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded = { "QuestSucceeded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestSucceeded), Z_Construct_UDelegateFunction_Narrative_OnQuestSucceeded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded_MetaData) }; // 2365104296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is failed.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest is failed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed = { "QuestFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestFailed), Z_Construct_UDelegateFunction_Narrative_OnQuestFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed_MetaData) }; // 3919280106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is started.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest is started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted = { "QuestStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestStarted), Z_Construct_UDelegateFunction_Narrative_OnQuestStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted_MetaData) }; // 1068058913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is forgotten.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest is forgotten." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten = { "QuestForgotten", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestForgotten), Z_Construct_UDelegateFunction_Narrative_OnQuestForgotten__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten_MetaData) }; // 2940675377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is restarted.*/" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Called when a quest is restarted." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted = { "QuestRestarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestRestarted), Z_Construct_UDelegateFunction_Narrative_OnQuestRestarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted_MetaData), Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted_MetaData) }; // 3223953902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_Branches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Statics::ClassParams = {
		&UQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuest()
	{
		if (!Z_Registration_Info_UClass_UQuest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuest.OuterSingleton, Z_Construct_UClass_UQuest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuest.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuest>()
	{
		return UQuest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
	UQuest::~UQuest() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::EnumInfo[] = {
		{ EQuestCompletion_StaticEnum, TEXT("EQuestCompletion"), &Z_Registration_Info_UEnum_EQuestCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2777485570U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuest, UQuest::StaticClass, TEXT("UQuest"), &Z_Registration_Info_UClass_UQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuest), 867017138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_661180469(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_Quest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
