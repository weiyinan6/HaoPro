// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCondition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeCondition();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EPartyConditionPolicy();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyConditionPolicy;
	static UEnum* EPartyConditionPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyConditionPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyConditionPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EPartyConditionPolicy, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EPartyConditionPolicy"));
		}
		return Z_Registration_Info_UEnum_EPartyConditionPolicy.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EPartyConditionPolicy>()
	{
		return EPartyConditionPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::Enumerators[] = {
		{ "EPartyConditionPolicy::AnyPlayerPasses", (int64)EPartyConditionPolicy::AnyPlayerPasses },
		{ "EPartyConditionPolicy::PartyPasses", (int64)EPartyConditionPolicy::PartyPasses },
		{ "EPartyConditionPolicy::AllPlayersPass", (int64)EPartyConditionPolicy::AllPlayersPass },
		{ "EPartyConditionPolicy::PartyLeaderPasses", (int64)EPartyConditionPolicy::PartyLeaderPasses },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::Enum_MetaDataParams[] = {
		{ "AllPlayersPass.Comment", "/**The condition is run on all of your party members - everyone needs to pass for the condition to pass. */" },
		{ "AllPlayersPass.DisplayName", "All Party Members Pass" },
		{ "AllPlayersPass.Name", "EPartyConditionPolicy::AllPlayersPass" },
		{ "AllPlayersPass.ToolTip", "The condition is run on all of your party members - everyone needs to pass for the condition to pass." },
		{ "AnyPlayerPasses.Comment", "/**The condition is run on all of your party members - if anyone in the party passes the condition, it passes. */" },
		{ "AnyPlayerPasses.DisplayName", "Any Party Member Passes" },
		{ "AnyPlayerPasses.Name", "EPartyConditionPolicy::AnyPlayerPasses" },
		{ "AnyPlayerPasses.ToolTip", "The condition is run on all of your party members - if anyone in the party passes the condition, it passes." },
		{ "Comment", "//How do we handle running this condition on a party dialogue?\n" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "PartyLeaderPasses.Comment", "/**The condition is run on the party leader - if they pass the condition, the condition passes. */" },
		{ "PartyLeaderPasses.DisplayName", "Party Leader Passes" },
		{ "PartyLeaderPasses.Name", "EPartyConditionPolicy::PartyLeaderPasses" },
		{ "PartyLeaderPasses.ToolTip", "The condition is run on the party leader - if they pass the condition, the condition passes." },
		{ "PartyPasses.Comment", "/**The condition is run on your party itself - your parties narrative component. If it passes, the condition passes. */" },
		{ "PartyPasses.DisplayName", "Party Passes" },
		{ "PartyPasses.Name", "EPartyConditionPolicy::PartyPasses" },
		{ "PartyPasses.ToolTip", "The condition is run on your party itself - your parties narrative component. If it passes, the condition passes." },
		{ "ToolTip", "How do we handle running this condition on a party dialogue?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EPartyConditionPolicy",
		"EPartyConditionPolicy",
		Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_EPartyConditionPolicy()
	{
		if (!Z_Registration_Info_UEnum_EPartyConditionPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyConditionPolicy.InnerSingleton, Z_Construct_UEnum_Narrative_EPartyConditionPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyConditionPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(UNarrativeCondition::execGetGraphDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeCondition::execCheckCondition)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_OBJECT(UNarrativeComponent,Z_Param_NarrativeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
		P_NATIVE_END;
	}
	struct NarrativeCondition_eventCheckCondition_Parms
	{
		APawn* Pawn;
		APlayerController* Controller;
		UNarrativeComponent* NarrativeComponent;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		NarrativeCondition_eventCheckCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct NarrativeCondition_eventGetGraphDisplayText_Parms
	{
		FString ReturnValue;
	};
	static FName NAME_UNarrativeCondition_CheckCondition = FName(TEXT("CheckCondition"));
	bool UNarrativeCondition::CheckCondition(APawn* Pawn, APlayerController* Controller, UNarrativeComponent* NarrativeComponent)
	{
		NarrativeCondition_eventCheckCondition_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Controller=Controller;
		Parms.NarrativeComponent=NarrativeComponent;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeCondition_CheckCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UNarrativeCondition_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
	FString UNarrativeCondition::GetGraphDisplayText()
	{
		NarrativeCondition_eventGetGraphDisplayText_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeCondition_GetGraphDisplayText),&Parms);
		return Parms.ReturnValue;
	}
	void UNarrativeCondition::StaticRegisterNativesUNarrativeCondition()
	{
		UClass* Class = UNarrativeCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCondition", &UNarrativeCondition::execCheckCondition },
			{ "GetGraphDisplayText", &UNarrativeCondition::execGetGraphDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, NarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent_MetaData), Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent_MetaData) };
	void Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeCondition_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCondition_eventCheckCondition_Parms), &Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/** Check whether this condition is true or false\n\x09\n\x09@param Pawn The pawn of the player we're running the condition on - will be null if running the condition against a party\n\x09@param Controller The controller of the player we're running the condition on - will be null if running the condition against a party\n\x09@param NarrativeComponent The narrative component we're running the condition on \n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Check whether this condition is true or false\n\n      @param Pawn The pawn of the player we're running the condition on - will be null if running the condition against a party\n      @param Controller The controller of the player we're running the condition on - will be null if running the condition against a party\n      @param NarrativeComponent The narrative component we're running the condition on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCondition, nullptr, "CheckCondition", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers), sizeof(NarrativeCondition_eventCheckCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeCondition_eventCheckCondition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeCondition_CheckCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/**Define the text that will show up on a node if this condition is added to it */" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Define the text that will show up on a node if this condition is added to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCondition, nullptr, "GetGraphDisplayText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers), sizeof(NarrativeCondition_eventGetGraphDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeCondition_eventGetGraphDisplayText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCondition);
	UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister()
	{
		return UNarrativeCondition::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNot_MetaData[];
#endif
		static void NewProp_bNot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNot;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartyConditionPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyConditionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyConditionPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCondition_CheckCondition, "CheckCondition" }, // 857972616
		{ &Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText, "GetGraphDisplayText" }, // 4086624901
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Narrative Conditions allow you to make conditions that dialogues and quests can then use to conditionally include/exclude nodes.\n * \n * For example, you could make a condition \"HasItem\" that checks if the player has a certain amount of an item. Then, you could use that\n * condition on a dialogue node so that the player can only say \"I'll buy it!\" if they actually have 500 coins in their inventory. \n * \n * Currently quests do not support NarrativeConditions, only NarrativeEvents. Dialogues support both. \n */" },
		{ "IncludePath", "NarrativeCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Narrative Conditions allow you to make conditions that dialogues and quests can then use to conditionally include/exclude nodes.\n\nFor example, you could make a condition \"HasItem\" that checks if the player has a certain amount of an item. Then, you could use that\ncondition on a dialogue node so that the player can only say \"I'll buy it!\" if they actually have 500 coins in their inventory.\n\nCurrently quests do not support NarrativeConditions, only NarrativeEvents. Dialogues support both." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_MetaData[] = {
		{ "Category", "Conditions" },
		{ "Comment", "//Set this to true to flip the result of this condition\n" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Set this to true to flip the result of this condition" },
	};
#endif
	void Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_SetBit(void* Obj)
	{
		((UNarrativeCondition*)Obj)->bNot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot = { "bNot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeCondition), &Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_MetaData), Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**\n\x09""Defines how the condition should be ran against a party that is doing this dialogue. Ignored by non-party dialogues. \n\n\x09Imagine if you want to check if your party has completed a quest. By default narrative will check if anyone in the party had completed \n\x09the quest on their own narrative component, but if you wanted to check if the party itself had completed the quest before you'd check this box.*/" },
		{ "ModuleRelativePath", "Public/NarrativeCondition.h" },
		{ "ToolTip", "Defines how the condition should be ran against a party that is doing this dialogue. Ignored by non-party dialogues.\n\nImagine if you want to check if your party has completed a quest. By default narrative will check if anyone in the party had completed\nthe quest on their own narrative component, but if you wanted to check if the party itself had completed the quest before you'd check this box." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy = { "PartyConditionPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCondition, PartyConditionPolicy), Z_Construct_UEnum_Narrative_EPartyConditionPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_MetaData), Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_MetaData) }; // 275871190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCondition_Statics::ClassParams = {
		&UNarrativeCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeCondition()
	{
		if (!Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton, Z_Construct_UClass_UNarrativeCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeCondition>()
	{
		return UNarrativeCondition::StaticClass();
	}
	UNarrativeCondition::UNarrativeCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCondition);
	UNarrativeCondition::~UNarrativeCondition() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::EnumInfo[] = {
		{ EPartyConditionPolicy_StaticEnum, TEXT("EPartyConditionPolicy"), &Z_Registration_Info_UEnum_EPartyConditionPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 275871190U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCondition, UNarrativeCondition::StaticClass, TEXT("UNarrativeCondition"), &Z_Registration_Info_UClass_UNarrativeCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCondition), 1604529926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_2393191075(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativeCondition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
