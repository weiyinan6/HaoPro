// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/QuestSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSM() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeNodeBase();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EStateNodeType();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateNodeType;
	static UEnum* EStateNodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateNodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EStateNodeType, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EStateNodeType"));
		}
		return Z_Registration_Info_UEnum_EStateNodeType.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EStateNodeType>()
	{
		return EStateNodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EStateNodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EStateNodeType_Statics::Enumerators[] = {
		{ "EStateNodeType::Regular", (int64)EStateNodeType::Regular },
		{ "EStateNodeType::Success", (int64)EStateNodeType::Success },
		{ "EStateNodeType::Failure", (int64)EStateNodeType::Failure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EStateNodeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Used for checking the result of our state machine.\n*/" },
		{ "Failure.Comment", "// Fail, the quest will be failed when this state is reached \n" },
		{ "Failure.Name", "EStateNodeType::Failure" },
		{ "Failure.ToolTip", "Fail, the quest will be failed when this state is reached" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "Regular.Comment", "//This is a regular state and upon being reached the quest will be considered still in progress\n" },
		{ "Regular.Name", "EStateNodeType::Regular" },
		{ "Regular.ToolTip", "This is a regular state and upon being reached the quest will be considered still in progress" },
		{ "Success.Comment", "// Success, the quest will be completed when this state is reached\n" },
		{ "Success.Name", "EStateNodeType::Success" },
		{ "Success.ToolTip", "Success, the quest will be completed when this state is reached" },
		{ "ToolTip", "Used for checking the result of our state machine." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EStateNodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EStateNodeType",
		"EStateNodeType",
		Z_Construct_UEnum_Narrative_EStateNodeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EStateNodeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EStateNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EStateNodeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_EStateNodeType()
	{
		if (!Z_Registration_Info_UEnum_EStateNodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateNodeType.InnerSingleton, Z_Construct_UEnum_Narrative_EStateNodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateNodeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTask;
class UScriptStruct* FQuestTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTask, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("QuestTask"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FQuestTask>()
{
	return FQuestTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Argument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetroactive_MetaData[];
#endif
		static void NewProp_bRetroactive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetroactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A quest is a series of state machines, branches are taken by completing all the FNarrativeTasks in that branch.\n" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "A quest is a series of state machines, branches are taken by completing all the FNarrativeTasks in that branch." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The event the player needs to do to complete this task*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The event the player needs to do to complete this task" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The reference to be passed into the action*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The reference to be passed into the action" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, Argument), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "1" },
		{ "Comment", "/**The amount of times we need to complete this action to move on to the next part of the quest*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The amount of times we need to complete this action to move on to the next part of the quest" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Should this task be hidden from the player (Great for quests with hidden options)*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Should this task be hidden from the player (Great for quests with hidden options)" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** SINGLE PLAYER ONLY: Should this task be optional?*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "SINGLE PLAYER ONLY: Should this task be optional?" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** SINGLE PLAYER ONLY: Should it count if the player has already done this task in the past?*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "SINGLE PLAYER ONLY: Should it count if the player has already done this task in the past?" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->bRetroactive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive = { "bRetroactive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Description for this task. For example \"Kill 10 Goblins\", \"Obtain an Iron Sword\", \"Find the briefcase\", etc... */" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Description for this task. For example \"Kill 10 Goblins\", \"Obtain an Iron Sword\", \"Find the briefcase\", etc..." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription = { "TaskDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, TaskDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress_MetaData), Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"QuestTask",
		Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers),
		sizeof(FQuestTask),
		alignof(FQuestTask),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTask()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton, Z_Construct_UScriptStruct_FQuestTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton;
	}
	void UQuestNode::StaticRegisterNativesUQuestNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestNode);
	UClass* Z_Construct_UClass_UQuestNode_NoRegister()
	{
		return UQuestNode::StaticClass();
	}
	struct Z_Construct_UClass_UQuestNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnteredFuncName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnEnteredFuncName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningQuest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**Base class for states and branches in the quests state machine*/" },
		{ "IncludePath", "QuestSM.h" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Base class for states and branches in the quests state machine" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Description for this quest node. For example \"Kill 10 Goblins\", \"Find the Gemstone\", or \"I've found the Gemstone, I need to return to King Edward\" */" },
		{ "DisplayAfter", "ID" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Description for this quest node. For example \"Kill 10 Goblins\", \"Find the Gemstone\", or \"I've found the Gemstone, I need to return to King Edward\"" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNode, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UQuestNode_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName_MetaData[] = {
		{ "AdvancedDisplay", "TRUE" },
		{ "Category", "Details" },
		{ "Comment", "//Name of custom event to call when this state/branch is reached/taken\n" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Name of custom event to call when this state/branch is reached/taken" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName = { "OnEnteredFuncName", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNode, OnEnteredFuncName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName_MetaData), Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest_MetaData[] = {
		{ "Comment", "//The quest object that owns this node. \n" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The quest object that owns this node." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest = { "OwningQuest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNode, OwningQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest_MetaData), Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestNode_Statics::ClassParams = {
		&UQuestNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestNode()
	{
		if (!Z_Registration_Info_UClass_UQuestNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestNode.OuterSingleton, Z_Construct_UClass_UQuestNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestNode.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestNode>()
	{
		return UQuestNode::StaticClass();
	}
	UQuestNode::UQuestNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestNode);
	UQuestNode::~UQuestNode() {}
	struct Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnStateReachedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnStateReachedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStateReachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStateReachedEvent)
{
	OnStateReachedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	void UQuestState::StaticRegisterNativesUQuestState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestState);
	UClass* Z_Construct_UClass_UQuestState_NoRegister()
	{
		return UQuestState::StaticClass();
	}
	struct Z_Construct_UClass_UQuestState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Branches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateNodeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateNodeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateNodeType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSM.h" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_MetaData[] = {
		{ "Category", "Quest State" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestState, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_MetaData), Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_MetaData[] = {
		{ "Category", "Quest State" },
		{ "Comment", "/**Determines how the state is interpreted by the quest that has reached it .*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Determines how the state is interpreted by the quest that has reached it ." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType = { "StateNodeType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestState, StateNodeType), Z_Construct_UEnum_Narrative_EStateNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_MetaData), Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_MetaData) }; // 3919027976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestState_Statics::ClassParams = {
		&UQuestState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestState()
	{
		if (!Z_Registration_Info_UClass_UQuestState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestState.OuterSingleton, Z_Construct_UClass_UQuestState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestState.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestState>()
	{
		return UQuestState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestState);
	UQuestState::~UQuestState() {}
	void UQuestBranch::StaticRegisterNativesUQuestBranch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBranch);
	UClass* Z_Construct_UClass_UQuestBranch_NoRegister()
	{
		return UQuestBranch::StaticClass();
	}
	struct Z_Construct_UClass_UQuestBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTasks_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSM.h" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**\n\x09*The tasks that need to be completed to take this branch to its destination \n\x09* \n\x09* Plenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder \n\x09* for some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need. \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The tasks that need to be completed to take this branch to its destination\n\nPlenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder\nfor some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner = { "QuestTasks", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner_MetaData), Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**\n\x09*The tasks that need to be completed to take this branch to its destination \n\x09* \n\x09* Plenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder \n\x09* for some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need. \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "The tasks that need to be completed to take this branch to its destination\n\nPlenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder\nfor some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks = { "QuestTasks", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBranch, QuestTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_MetaData), Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Should this branch be hidden from the player on the narrative demo UI (Great for quests with hidden options that we want to be part\n\x09of the quest logic, but we don't want the UI to show)*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "Should this branch be hidden from the player on the narrative demo UI (Great for quests with hidden options that we want to be part\n       of the quest logic, but we don't want the UI to show)" },
	};
#endif
	void Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UQuestBranch*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestBranch), &Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_MetaData), Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**State where we will go if this branch is taken. Branch will be ignored if this is null*/" },
		{ "ModuleRelativePath", "Public/QuestSM.h" },
		{ "ToolTip", "State where we will go if this branch is taken. Branch will be ignored if this is null" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState = { "DestinationState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBranch, DestinationState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState_MetaData), Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBranch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBranch_Statics::ClassParams = {
		&UQuestBranch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestBranch()
	{
		if (!Z_Registration_Info_UClass_UQuestBranch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBranch.OuterSingleton, Z_Construct_UClass_UQuestBranch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestBranch.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UQuestBranch>()
	{
		return UQuestBranch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBranch);
	UQuestBranch::~UQuestBranch() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::EnumInfo[] = {
		{ EStateNodeType_StaticEnum, TEXT("EStateNodeType"), &Z_Registration_Info_UEnum_EStateNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3919027976U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ScriptStructInfo[] = {
		{ FQuestTask::StaticStruct, Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps, TEXT("QuestTask"), &Z_Registration_Info_UScriptStruct_QuestTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTask), 1686956644U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestNode, UQuestNode::StaticClass, TEXT("UQuestNode"), &Z_Registration_Info_UClass_UQuestNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestNode), 3508092892U) },
		{ Z_Construct_UClass_UQuestState, UQuestState::StaticClass, TEXT("UQuestState"), &Z_Registration_Info_UClass_UQuestState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestState), 4262196698U) },
		{ Z_Construct_UClass_UQuestBranch, UQuestBranch::StaticClass, TEXT("UQuestBranch"), &Z_Registration_Info_UClass_UQuestBranch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBranch), 2519257486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_1578277536(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
