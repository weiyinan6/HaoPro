// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativePartyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePartyComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativePartyComponent();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativePartyComponent_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyDialogueControlPolicy;
	static UEnum* EPartyDialogueControlPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EPartyDialogueControlPolicy"));
		}
		return Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EPartyDialogueControlPolicy>()
	{
		return EPartyDialogueControlPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::Enumerators[] = {
		{ "EPartyDialogueControlPolicy::PartyLeaderControlled", (int64)EPartyDialogueControlPolicy::PartyLeaderControlled },
		{ "EPartyDialogueControlPolicy::AllPlayers", (int64)EPartyDialogueControlPolicy::AllPlayers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::Enum_MetaDataParams[] = {
		{ "AllPlayers.Comment", "/**Anyone in the party can select dialogue options. Everyones camera will cut to whoever selected the line*/" },
		{ "AllPlayers.DisplayName", "All Party Members Controlled" },
		{ "AllPlayers.Name", "EPartyDialogueControlPolicy::AllPlayers" },
		{ "AllPlayers.ToolTip", "Anyone in the party can select dialogue options. Everyones camera will cut to whoever selected the line" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**Defines how a party goes about selecting replies*/" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "PartyLeaderControlled.Comment", "/**Only the party leader can select dialogue options, the rest of the players will be essentially spectating the conversation*/" },
		{ "PartyLeaderControlled.DisplayName", "Party Leader Controlled" },
		{ "PartyLeaderControlled.Name", "EPartyDialogueControlPolicy::PartyLeaderControlled" },
		{ "PartyLeaderControlled.ToolTip", "Only the party leader can select dialogue options, the rest of the players will be essentially spectating the conversation" },
		{ "ToolTip", "Defines how a party goes about selecting replies" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EPartyDialogueControlPolicy",
		"EPartyDialogueControlPolicy",
		Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy()
	{
		if (!Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.InnerSingleton, Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(UNarrativePartyComponent::execIsPartyLeader)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartyLeader(Z_Param_Member);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativePartyComponent::execGetPartyLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNarrativeComponent**)Z_Param__Result=P_THIS->GetPartyLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativePartyComponent::execGetPartyMemberStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APlayerState*>*)Z_Param__Result=P_THIS->GetPartyMemberStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativePartyComponent::execGetPartyMembers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UNarrativeComponent*>*)Z_Param__Result=P_THIS->GetPartyMembers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativePartyComponent::execRemovePartyMember)
	{
		P_GET_OBJECT(UNarrativeComponent,Z_Param_Member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePartyMember(Z_Param_Member);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativePartyComponent::execAddPartyMember)
	{
		P_GET_OBJECT(UNarrativeComponent,Z_Param_Member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPartyMember(Z_Param_Member);
		P_NATIVE_END;
	}
	void UNarrativePartyComponent::StaticRegisterNativesUNarrativePartyComponent()
	{
		UClass* Class = UNarrativePartyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPartyMember", &UNarrativePartyComponent::execAddPartyMember },
			{ "GetPartyLeader", &UNarrativePartyComponent::execGetPartyLeader },
			{ "GetPartyMembers", &UNarrativePartyComponent::execGetPartyMembers },
			{ "GetPartyMemberStates", &UNarrativePartyComponent::execGetPartyMemberStates },
			{ "IsPartyLeader", &UNarrativePartyComponent::execIsPartyLeader },
			{ "RemovePartyMember", &UNarrativePartyComponent::execRemovePartyMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics
	{
		struct NarrativePartyComponent_eventAddPartyMember_Parms
		{
			UNarrativeComponent* Member;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventAddPartyMember_Parms, Member), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member_MetaData), Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member_MetaData) };
	void Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativePartyComponent_eventAddPartyMember_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePartyComponent_eventAddPartyMember_Parms), &Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//[server] Add a member to the party.  Return true if successful.\n" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "[server] Add a member to the party.  Return true if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "AddPartyMember", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NarrativePartyComponent_eventAddPartyMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NarrativePartyComponent_eventAddPartyMember_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics
	{
		struct NarrativePartyComponent_eventGetPartyLeader_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventGetPartyLeader_Parms, ReturnValue), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//Return the party leader (only works on server) \n" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "Return the party leader (only works on server)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "GetPartyLeader", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NarrativePartyComponent_eventGetPartyLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NarrativePartyComponent_eventGetPartyLeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics
	{
		struct NarrativePartyComponent_eventGetPartyMembers_Parms
		{
			TArray<UNarrativeComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventGetPartyMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//Return the members in the party \n" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "Return the members in the party" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "GetPartyMembers", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NarrativePartyComponent_eventGetPartyMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NarrativePartyComponent_eventGetPartyMembers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics
	{
		struct NarrativePartyComponent_eventGetPartyMemberStates_Parms
		{
			TArray<APlayerState*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventGetPartyMemberStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//Return the members PlayerStates in the party \n" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "Return the members PlayerStates in the party" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "GetPartyMemberStates", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NarrativePartyComponent_eventGetPartyMemberStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NarrativePartyComponent_eventGetPartyMemberStates_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics
	{
		struct NarrativePartyComponent_eventIsPartyLeader_Parms
		{
			APlayerState* Member;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventIsPartyLeader_Parms, Member), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativePartyComponent_eventIsPartyLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePartyComponent_eventIsPartyLeader_Parms), &Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_Member,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**Return whether or not we're the leader of our party. Return true if we're not in a party as we're essentially the leader in that case*/" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "Return whether or not we're the leader of our party. Return true if we're not in a party as we're essentially the leader in that case" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "IsPartyLeader", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NarrativePartyComponent_eventIsPartyLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NarrativePartyComponent_eventIsPartyLeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics
	{
		struct NarrativePartyComponent_eventRemovePartyMember_Parms
		{
			UNarrativeComponent* Member;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventRemovePartyMember_Parms, Member), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member_MetaData), Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member_MetaData) };
	void Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativePartyComponent_eventRemovePartyMember_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePartyComponent_eventRemovePartyMember_Parms), &Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//[server] Remove a member from the party. Return true if successful, false if player wasn't in party etc\n" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "[server] Remove a member from the party. Return true if successful, false if player wasn't in party etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "RemovePartyMember", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NarrativePartyComponent_eventRemovePartyMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NarrativePartyComponent_eventRemovePartyMember_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativePartyComponent);
	UClass* Z_Construct_UClass_UNarrativePartyComponent_NoRegister()
	{
		return UNarrativePartyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativePartyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PartyDialogueControlPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyDialogueControlPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyDialogueControlPolicy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyMembers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyMemberStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyMemberStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PartyMemberStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativePartyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativePartyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember, "AddPartyMember" }, // 4052967846
		{ &Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader, "GetPartyLeader" }, // 4287740307
		{ &Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers, "GetPartyMembers" }, // 4075214127
		{ &Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates, "GetPartyMemberStates" }, // 661296491
		{ &Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader, "IsPartyLeader" }, // 3701001241
		{ &Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember, "RemovePartyMember" }, // 3734112209
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativePartyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * A Narrative component intended to be shared by multiple clients. This allows for some very cool functionality, teammates\n * can play quests and dialogues together with each other. Use AddPartyMember and RemovePartyMember to setup your party. \n * \n * QUESTS: Quests began on the party component will be shown on all party members UI, and any player in the party can complete quest tasks.\n * \n * DIALOGUE: Dialogues began on the party component will begin for all players, and all players will see the dialogue in sync - if a player selects\n * a dialogue option all party members will see that player say the line - this behaviour can be modified in the components settings. \n * \n * You should put this component on an actor that replicates to all of your team members. The Game State is a great place for this,\n * however if your game requires multiple different parties you'll want to make a ASquad etc that derives AInfo to hold all your team members\n * and manage them, and put a party component there instead of the game state. \n */" },
		{ "DisplayName", "Narrative Party Component" },
		{ "IncludePath", "NarrativePartyComponent.h" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "A Narrative component intended to be shared by multiple clients. This allows for some very cool functionality, teammates\ncan play quests and dialogues together with each other. Use AddPartyMember and RemovePartyMember to setup your party.\n\nQUESTS: Quests began on the party component will be shown on all party members UI, and any player in the party can complete quest tasks.\n\nDIALOGUE: Dialogues began on the party component will begin for all players, and all players will see the dialogue in sync - if a player selects\na dialogue option all party members will see that player say the line - this behaviour can be modified in the components settings.\n\nYou should put this component on an actor that replicates to all of your team members. The Game State is a great place for this,\nhowever if your game requires multiple different parties you'll want to make a ASquad etc that derives AInfo to hold all your team members\nand manage them, and put a party component there instead of the game state." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**Defines how a party goes about selecting replies - currently just enforced by the UI, isn't actually authed by server */" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "Defines how a party goes about selecting replies - currently just enforced by the UI, isn't actually authed by server" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy = { "PartyDialogueControlPolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePartyComponent, PartyDialogueControlPolicy), Z_Construct_UEnum_Narrative_EPartyDialogueControlPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_MetaData), Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_MetaData) }; // 988459876
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/** All of the players in the party */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "All of the players in the party" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePartyComponent, PartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_MetaData), Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_Inner = { "PartyMemberStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/** Narrative Components exist on peoples player controllers, and so there isn't a nice way for people in the party to access\n\x09""each others pawns/playerstates via PartyMembers array, and so this array exists to solve that. We store PStates because pawns can change\n\x09possession but PState->GetPawn() will always give us the current valid pawn */" },
		{ "ModuleRelativePath", "Public/NarrativePartyComponent.h" },
		{ "ToolTip", "Narrative Components exist on peoples player controllers, and so there isn't a nice way for people in the party to access\n      each others pawns/playerstates via PartyMembers array, and so this array exists to solve that. We store PStates because pawns can change\n      possession but PState->GetPawn() will always give us the current valid pawn" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates = { "PartyMemberStates", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePartyComponent, PartyMemberStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_MetaData), Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativePartyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativePartyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativePartyComponent_Statics::ClassParams = {
		&UNarrativePartyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativePartyComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativePartyComponent()
	{
		if (!Z_Registration_Info_UClass_UNarrativePartyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativePartyComponent.OuterSingleton, Z_Construct_UClass_UNarrativePartyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativePartyComponent.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativePartyComponent>()
	{
		return UNarrativePartyComponent::StaticClass();
	}

	void UNarrativePartyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PartyMemberStates(TEXT("PartyMemberStates"));

		const bool bIsValid = true
			&& Name_PartyMemberStates == ClassReps[(int32)ENetFields_Private::PartyMemberStates].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativePartyComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativePartyComponent);
	UNarrativePartyComponent::~UNarrativePartyComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics::EnumInfo[] = {
		{ EPartyDialogueControlPolicy_StaticEnum, TEXT("EPartyDialogueControlPolicy"), &Z_Registration_Info_UEnum_EPartyDialogueControlPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 988459876U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativePartyComponent, UNarrativePartyComponent::StaticClass, TEXT("UNarrativePartyComponent"), &Z_Registration_Info_UClass_UNarrativePartyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativePartyComponent), 963142373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_2354583213(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_NarrativePartyComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
