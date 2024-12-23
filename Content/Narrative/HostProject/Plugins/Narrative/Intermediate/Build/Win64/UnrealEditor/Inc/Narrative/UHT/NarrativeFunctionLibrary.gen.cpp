// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeFunctionLibrary();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execMakeDisplayString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNarrativeFunctionLibrary::MakeDisplayString(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetTaskByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeDataTask**)Z_Param__Result=UNarrativeFunctionLibrary::GetTaskByName(Z_Param_WorldContextObject,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execCompleteLooseNarrativeDataTask)
	{
		P_GET_OBJECT(UNarrativeComponent,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNarrativeFunctionLibrary::CompleteLooseNarrativeDataTask(Z_Param_Target,Z_Param_Argument,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execCompleteNarrativeDataTask)
	{
		P_GET_OBJECT(UNarrativeComponent,Z_Param_Target);
		P_GET_OBJECT(UNarrativeDataTask,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNarrativeFunctionLibrary::CompleteNarrativeDataTask(Z_Param_Target,Z_Param_Task,Z_Param_Argument,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetNarrativeComponentFromTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=UNarrativeFunctionLibrary::GetNarrativeComponentFromTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeFunctionLibrary::execGetNarrativeComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=UNarrativeFunctionLibrary::GetNarrativeComponent(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UNarrativeFunctionLibrary::StaticRegisterNativesUNarrativeFunctionLibrary()
	{
		UClass* Class = UNarrativeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteLooseNarrativeDataTask", &UNarrativeFunctionLibrary::execCompleteLooseNarrativeDataTask },
			{ "CompleteNarrativeDataTask", &UNarrativeFunctionLibrary::execCompleteNarrativeDataTask },
			{ "GetNarrativeComponent", &UNarrativeFunctionLibrary::execGetNarrativeComponent },
			{ "GetNarrativeComponentFromTarget", &UNarrativeFunctionLibrary::execGetNarrativeComponentFromTarget },
			{ "GetTaskByName", &UNarrativeFunctionLibrary::execGetTaskByName },
			{ "MakeDisplayString", &UNarrativeFunctionLibrary::execMakeDisplayString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics
	{
		struct NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms
		{
			UNarrativeComponent* Target;
			FString Argument;
			int32 Quantity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Argument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms, Target), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms, Argument), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Argument_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Argument_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Quantity_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Quantity_MetaData) };
	void Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms), &Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09Use this when you want to log a data task, but don't need a data task asset. For example if you tracked player finding items you'd create a \"FindItem\" data task asset,\n\x09""but sometimes you just want to track something super random and creating a whole task asset is overkill and just storing the argument is good enough */" },
		{ "CPP_Default_Quantity", "1" },
		{ "DisplayName", "Complete Loose Narrative Data Task" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Use this when you want to log a data task, but don't need a data task asset. For example if you tracked player finding items you'd create a \"FindItem\" data task asset,\nbut sometimes you just want to track something super random and creating a whole task asset is overkill and just storing the argument is good enough" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "CompleteLooseNarrativeDataTask", nullptr, nullptr, Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::NarrativeFunctionLibrary_eventCompleteLooseNarrativeDataTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics
	{
		struct NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms
		{
			UNarrativeComponent* Target;
			const UNarrativeDataTask* Task;
			FString Argument;
			int32 Quantity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
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
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms, Target), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Task_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms, Argument), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Argument_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Argument_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Quantity_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Quantity_MetaData) };
	void Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms), &Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Calls CompleteNarrativeTask on the narrative component\n\x09*\n\x09* @return Whether the task updated a quest \n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "DisplayName", "Complete Narrative Data Task" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Calls CompleteNarrativeTask on the narrative component\n\n@return Whether the task updated a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "CompleteNarrativeDataTask", nullptr, nullptr, Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::NarrativeFunctionLibrary_eventCompleteNarrativeDataTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics
	{
		struct NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms
		{
			const UObject* WorldContextObject;
			UNarrativeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Grab the narrative component from the local pawn or player controller, whichever it exists on. \n\x09* \n\x09* @return The narrative component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Grab the narrative component from the local pawn or player controller, whichever it exists on.\n\n@return The narrative component." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetNarrativeComponent", nullptr, nullptr, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::NarrativeFunctionLibrary_eventGetNarrativeComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics
	{
		struct NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms
		{
			AActor* Target;
			UNarrativeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/**\n\x09* Find the narrative component from the supplied target object. \n\x09*\n\x09* @return The narrative component.\n\x09*/" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Find the narrative component from the supplied target object.\n\n@return The narrative component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetNarrativeComponentFromTarget", nullptr, nullptr, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::NarrativeFunctionLibrary_eventGetNarrativeComponentFromTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics
	{
		struct NarrativeFunctionLibrary_eventGetTaskByName_Parms
		{
			const UObject* WorldContextObject;
			FString EventName;
			UNarrativeDataTask* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetTaskByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetTaskByName_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventGetTaskByName_Parms, ReturnValue), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Grab a narrative task by its name. Try use asset references instead of this if possible, since an task being renamed will break your code\n" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Grab a narrative task by its name. Try use asset references instead of this if possible, since an task being renamed will break your code" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "GetTaskByName", nullptr, nullptr, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NarrativeFunctionLibrary_eventGetTaskByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::NarrativeFunctionLibrary_eventGetTaskByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics
	{
		struct NarrativeFunctionLibrary_eventMakeDisplayString_Parms
		{
			FString String;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventMakeDisplayString_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_String_MetaData), Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_String_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeFunctionLibrary_eventMakeDisplayString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Just used by narrative UI, BP exposed FName::NameToDisplayString\n" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "Just used by narrative UI, BP exposed FName::NameToDisplayString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeFunctionLibrary, nullptr, "MakeDisplayString", nullptr, nullptr, Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NarrativeFunctionLibrary_eventMakeDisplayString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::NarrativeFunctionLibrary_eventMakeDisplayString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeFunctionLibrary);
	UClass* Z_Construct_UClass_UNarrativeFunctionLibrary_NoRegister()
	{
		return UNarrativeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteLooseNarrativeDataTask, "CompleteLooseNarrativeDataTask" }, // 2811787721
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_CompleteNarrativeDataTask, "CompleteNarrativeDataTask" }, // 3606088267
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponent, "GetNarrativeComponent" }, // 891366994
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetNarrativeComponentFromTarget, "GetNarrativeComponentFromTarget" }, // 1551017224
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_GetTaskByName, "GetTaskByName" }, // 3678522727
		{ &Z_Construct_UFunction_UNarrativeFunctionLibrary_MakeDisplayString, "MakeDisplayString" }, // 1123486343
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * General functions used by narrative \n */" },
		{ "IncludePath", "NarrativeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NarrativeFunctionLibrary.h" },
		{ "ToolTip", "General functions used by narrative" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::ClassParams = {
		&UNarrativeFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNarrativeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNarrativeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNarrativeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeFunctionLibrary.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeFunctionLibrary>()
	{
		return UNarrativeFunctionLibrary::StaticClass();
	}
	UNarrativeFunctionLibrary::UNarrativeFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeFunctionLibrary);
	UNarrativeFunctionLibrary::~UNarrativeFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeFunctionLibrary, UNarrativeFunctionLibrary::StaticClass, TEXT("UNarrativeFunctionLibrary"), &Z_Registration_Info_UClass_UNarrativeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeFunctionLibrary), 3863615354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_1797598735(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
