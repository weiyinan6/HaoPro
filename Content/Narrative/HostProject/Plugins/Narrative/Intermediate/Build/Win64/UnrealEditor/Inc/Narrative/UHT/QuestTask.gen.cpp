// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/QuestTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	DEFINE_FUNCTION(UNarrativeTask::execIsComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execGetTaskNodeDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTaskNodeDescription_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execGetTaskProgressText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTaskProgressText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execGetTaskDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTaskDescription_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execGetOwningBranch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBranch**)Z_Param__Result=P_THIS->GetOwningBranch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execCompleteTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execAddProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProgressToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddProgress(Z_Param_ProgressToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execSetProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeTask::execTickTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickTask_Implementation();
		P_NATIVE_END;
	}
	struct NarrativeTask_eventGetTaskDescription_Parms
	{
		FText ReturnValue;
	};
	struct NarrativeTask_eventGetTaskNodeDescription_Parms
	{
		FText ReturnValue;
	};
	struct NarrativeTask_eventGetTaskProgressText_Parms
	{
		FText ReturnValue;
	};
	static FName NAME_UNarrativeTask_GetTaskDescription = FName(TEXT("GetTaskDescription"));
	FText UNarrativeTask::GetTaskDescription() const
	{
		NarrativeTask_eventGetTaskDescription_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_GetTaskDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNarrativeTask_GetTaskNodeDescription = FName(TEXT("GetTaskNodeDescription"));
	FText UNarrativeTask::GetTaskNodeDescription() const
	{
		NarrativeTask_eventGetTaskNodeDescription_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_GetTaskNodeDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNarrativeTask_GetTaskProgressText = FName(TEXT("GetTaskProgressText"));
	FText UNarrativeTask::GetTaskProgressText() const
	{
		NarrativeTask_eventGetTaskProgressText_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_GetTaskProgressText),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNarrativeTask_K2_BeginTask = FName(TEXT("K2_BeginTask"));
	void UNarrativeTask::K2_BeginTask()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_K2_BeginTask),NULL);
	}
	static FName NAME_UNarrativeTask_K2_EndTask = FName(TEXT("K2_EndTask"));
	void UNarrativeTask::K2_EndTask()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_K2_EndTask),NULL);
	}
	static FName NAME_UNarrativeTask_K2_OnTaskCompleted = FName(TEXT("K2_OnTaskCompleted"));
	void UNarrativeTask::K2_OnTaskCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_K2_OnTaskCompleted),NULL);
	}
	static FName NAME_UNarrativeTask_TickTask = FName(TEXT("TickTask"));
	void UNarrativeTask::TickTask()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeTask_TickTask),NULL);
	}
	void UNarrativeTask::StaticRegisterNativesUNarrativeTask()
	{
		UClass* Class = UNarrativeTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddProgress", &UNarrativeTask::execAddProgress },
			{ "CompleteTask", &UNarrativeTask::execCompleteTask },
			{ "GetOwningBranch", &UNarrativeTask::execGetOwningBranch },
			{ "GetTaskDescription", &UNarrativeTask::execGetTaskDescription },
			{ "GetTaskNodeDescription", &UNarrativeTask::execGetTaskNodeDescription },
			{ "GetTaskProgressText", &UNarrativeTask::execGetTaskProgressText },
			{ "IsComplete", &UNarrativeTask::execIsComplete },
			{ "SetProgress", &UNarrativeTask::execSetProgress },
			{ "TickTask", &UNarrativeTask::execTickTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics
	{
		struct NarrativeTask_eventAddProgress_Parms
		{
			int32 ProgressToAdd;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProgressToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd = { "ProgressToAdd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventAddProgress_Parms, ProgressToAdd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd_MetaData), Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//Allows you to add some progress to the quantity - negative values can also be used to subtract progress! \n" },
		{ "CPP_Default_ProgressToAdd", "1" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Allows you to add some progress to the quantity - negative values can also be used to subtract progress!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "AddProgress", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NarrativeTask_eventAddProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NarrativeTask_eventAddProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_AddProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//[server only] completes the task, by setting the current progress to required amount\n" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "[server only] completes the task, by setting the current progress to required amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "CompleteTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeTask_CompleteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics
	{
		struct NarrativeTask_eventGetOwningBranch_Parms
		{
			UQuestBranch* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetOwningBranch_Parms, ReturnValue), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetOwningBranch", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NarrativeTask_eventGetOwningBranch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NarrativeTask_eventGetOwningBranch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_GetOwningBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetTaskDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**Highly recommended to implement this function! It lets you autogenerate task descriptions that the editor UI and narrative UI will use,\n\x09meaning you don't have to write a description for every task in your game.\"*/" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Highly recommended to implement this function! It lets you autogenerate task descriptions that the editor UI and narrative UI will use,\n       meaning you don't have to write a description for every task in your game.\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetTaskDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers), sizeof(NarrativeTask_eventGetTaskDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeTask_eventGetTaskDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_GetTaskDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetTaskNodeDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Optional special version of GetTaskDescription that is used for displaying info the editor nodes. \n\x09If you don't implement this function the nodes will just use GetTaskDescription instead. */" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Optional special version of GetTaskDescription that is used for displaying info the editor nodes.\n      If you don't implement this function the nodes will just use GetTaskDescription instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetTaskNodeDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers), sizeof(NarrativeTask_eventGetTaskNodeDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeTask_eventGetTaskNodeDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetTaskProgressText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**By default quest tasks display the task, followed by progress text ie: Find 10 Logs (6/10)\n\x09If you want to change the (6/10) to display something else, you can override this function. */" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "By default quest tasks display the task, followed by progress text ie: Find 10 Logs (6/10)\n       If you want to change the (6/10) to display something else, you can override this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetTaskProgressText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers), sizeof(NarrativeTask_eventGetTaskProgressText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeTask_eventGetTaskProgressText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics
	{
		struct NarrativeTask_eventIsComplete_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeTask_eventIsComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeTask_eventIsComplete_Parms), &Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//Checks whether this task is currently complete or not\n" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Checks whether this task is currently complete or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "IsComplete", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NarrativeTask_eventIsComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NarrativeTask_eventIsComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_IsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//Called when the task is began - use this to check your task right away, bind any delegates, do anything you need \n" },
		{ "DisplayName", "Begin Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Called when the task is began - use this to check your task right away, bind any delegates, do anything you need" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "K2_BeginTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeTask_K2_BeginTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Called when the task get deactivated (when all of the tasks on its branch are completed and the player has moved on in the quest)\n\x09\n\x09If you're looking for a function that is called when the task is completed use OnTaskCompleted*/" },
		{ "DisplayName", "End Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Called when the task get deactivated (when all of the tasks on its branch are completed and the player has moved on in the quest)\n\n       If you're looking for a function that is called when the task is completed use OnTaskCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "K2_EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeTask_K2_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Called when the task is completed. Keep in mind this function can be called multiple times as narrative supports uncompleting tasks \n\x09""as well as completing*/" },
		{ "DisplayName", "On Task Completed" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Called when the task is completed. Keep in mind this function can be called multiple times as narrative supports uncompleting tasks\n       as well as completing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "K2_OnTaskCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics
	{
		struct NarrativeTask_eventSetProgress_Parms
		{
			int32 NewProgress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventSetProgress_Parms, NewProgress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress_MetaData), Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//[server only] Set the progress of this task, which may complete it when task reaches required progress. \n" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "[server only] Set the progress of this task, which may complete it when task reaches required progress." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "SetProgress", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NarrativeTask_eventSetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NarrativeTask_eventSetProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeTask_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeTask_TickTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "/**A function that repeatedly gets called in order to track progress. Generally try making tasks event based if you can, however\n\x09sometimes tasks need to tick. Note that this function doesn't get called on the client, only the server, as tasks are server auth \n\x09so client doesn't really have any need to check the progress of a task */" },
		{ "DisplayName", "Tick Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "A function that repeatedly gets called in order to track progress. Generally try making tasks event based if you can, however\n       sometimes tasks need to tick. Note that this function doesn't get called on the client, only the server, as tasks are server auth\n       so client doesn't really have any need to check the progress of a task" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "TickTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNarrativeTask_TickTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTask);
	UClass* Z_Construct_UClass_UNarrativeTask_NoRegister()
	{
		return UNarrativeTask::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredQuantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionOverride_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DescriptionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningQuest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeTask_AddProgress, "AddProgress" }, // 2918182937
		{ &Z_Construct_UFunction_UNarrativeTask_CompleteTask, "CompleteTask" }, // 2047772335
		{ &Z_Construct_UFunction_UNarrativeTask_GetOwningBranch, "GetOwningBranch" }, // 3339687209
		{ &Z_Construct_UFunction_UNarrativeTask_GetTaskDescription, "GetTaskDescription" }, // 2957113185
		{ &Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription, "GetTaskNodeDescription" }, // 179462857
		{ &Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText, "GetTaskProgressText" }, // 3094752332
		{ &Z_Construct_UFunction_UNarrativeTask_IsComplete, "IsComplete" }, // 2600906737
		{ &Z_Construct_UFunction_UNarrativeTask_K2_BeginTask, "K2_BeginTask" }, // 1835268864
		{ &Z_Construct_UFunction_UNarrativeTask_K2_EndTask, "K2_EndTask" }, // 3816077085
		{ &Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted, "K2_OnTaskCompleted" }, // 1833979653
		{ &Z_Construct_UFunction_UNarrativeTask_SetProgress, "SetProgress" }, // 2214965435
		{ &Z_Construct_UFunction_UNarrativeTask_TickTask, "TickTask" }, // 2928708353
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tasks are blueprints that manage a task for the player to complete. This is mostly used by the quest editor. \n * This is different from Data Tasks which are just data assets: a TaskName and Argument, ie \"FindItem:Sword\", \n * \n * A good example is the GoToLocation task that comes with narrative, which checks if the player has reached a goal location. This type\n * of task wouldn't be possible with a data task, which doesn't have any logic or variables.\n */" },
		{ "IncludePath", "QuestTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Tasks are blueprints that manage a task for the player to complete. This is mostly used by the quest editor.\nThis is different from Data Tasks which are just data assets: a TaskName and Argument, ie \"FindItem:Sword\",\n\nA good example is the GoToLocation task that comes with narrative, which checks if the player has reached a goal location. This type\nof task wouldn't be possible with a data task, which doesn't have any logic or variables." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "1" },
		{ "Comment", "/**The amount of times the task needs to be completed before the quest updates */" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "The amount of times the task needs to be completed before the quest updates" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity = { "RequiredQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, RequiredQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** \n\x09In Narrative 3, tasks now autogenerate their descriptions to save designers needing to input it! For example the GoToLocation task\n\x09that comes with Narrative takes the location name as input and then returns \"Go to {LocationName}.\"\n\n\x09However if you want to override the description you can do so entering one here. \n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "In Narrative 3, tasks now autogenerate their descriptions to save designers needing to input it! For example the GoToLocation task\nthat comes with Narrative takes the location name as input and then returns \"Go to {LocationName}.\"\n\nHowever if you want to override the description you can do so entering one here." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride = { "DescriptionOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, DescriptionOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** Whether or not this task is optional */" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Whether or not this task is optional" },
	};
#endif
	void Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((UNarrativeTask*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeTask), &Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** Check this box to hide this task in the narrative UI! */" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Check this box to hide this task in the narrative UI!" },
	};
#endif
	void Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UNarrativeTask*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeTask), &Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** Defines how often the task should tick. Set to 0 if you want to disable ticking. \n\x09\n\x09To optimize performance you should try avoid having tasks that tick at all, for example if your Task was is \"ObtainItem\", \n\x09you'd bind to an OnInventoryModified delegate in BeginTask and check the progress there! That way, you're only checking \n\x09the task when the players inventory updates, instead of just blindly checking over and over again. */" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "Defines how often the task should tick. Set to 0 if you want to disable ticking.\n\n      To optimize performance you should try avoid having tasks that tick at all, for example if your Task was is \"ObtainItem\",\n      you'd bind to an OnInventoryModified delegate in BeginTask and check the progress there! That way, you're only checking\n      the task when the players inventory updates, instead of just blindly checking over and over again." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "//The current progress this task has made\n" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
		{ "ToolTip", "The current progress this task has made" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp_MetaData[] = {
		{ "Category", "Task" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningComp), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/QuestTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest = { "OwningQuest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest_MetaData), Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTask_Statics::ClassParams = {
		&UNarrativeTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeTask()
	{
		if (!Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton, Z_Construct_UClass_UNarrativeTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeTask>()
	{
		return UNarrativeTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTask);
	UNarrativeTask::~UNarrativeTask() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTask, UNarrativeTask::StaticClass, TEXT("UNarrativeTask"), &Z_Registration_Info_UClass_UNarrativeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTask), 3782896360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_3341629351(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_QuestTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
