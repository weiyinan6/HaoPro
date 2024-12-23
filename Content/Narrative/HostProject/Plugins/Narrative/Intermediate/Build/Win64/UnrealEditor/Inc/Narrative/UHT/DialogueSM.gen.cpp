// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/DialogueSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeNodeBase();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_ELineDuration();
	NARRATIVE_API UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerSelector();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Narrative, nullptr, "OnDialogueNodeFinishedPlaying__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDialogueNodeFinishedPlaying_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueNodeFinishedPlaying)
{
	OnDialogueNodeFinishedPlaying.ProcessMulticastDelegate<UObject>(NULL);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpeakerSelector;
class UScriptStruct* FSpeakerSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpeakerSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpeakerSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeakerSelector, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("SpeakerSelector"));
	}
	return Z_Registration_Info_UScriptStruct_SpeakerSelector.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FSpeakerSelector>()
{
	return FSpeakerSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpeakerSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Convinience struct with a details customization that allows the speaker ID to be selected from a combobox\nrather than inputted as an FName */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Convinience struct with a details customization that allows the speaker ID to be selected from a combobox\nrather than inputted as an FName" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpeakerSelector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "Category", "Speakers" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeakerSelector, SpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewProp_SpeakerID_MetaData), Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewProp_SpeakerID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeakerSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewProp_SpeakerID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeakerSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"SpeakerSelector",
		Z_Construct_UScriptStruct_FSpeakerSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerSelector_Statics::PropPointers),
		sizeof(FSpeakerSelector),
		alignof(FSpeakerSelector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpeakerSelector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerSelector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpeakerSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_SpeakerSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpeakerSelector.InnerSingleton, Z_Construct_UScriptStruct_FSpeakerSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpeakerSelector.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELineDuration;
	static UEnum* ELineDuration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELineDuration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELineDuration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_ELineDuration, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("ELineDuration"));
		}
		return Z_Registration_Info_UEnum_ELineDuration.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<ELineDuration>()
	{
		return ELineDuration_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_ELineDuration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_ELineDuration_Statics::Enumerators[] = {
		{ "ELineDuration::LD_Default", (int64)ELineDuration::LD_Default },
		{ "ELineDuration::LD_WhenAudioEnds", (int64)ELineDuration::LD_WhenAudioEnds },
		{ "ELineDuration::LD_WhenSequenceEnds", (int64)ELineDuration::LD_WhenSequenceEnds },
		{ "ELineDuration::LD_AfterReadingTime", (int64)ELineDuration::LD_AfterReadingTime },
		{ "ELineDuration::LD_AfterDuration", (int64)ELineDuration::LD_AfterDuration },
		{ "ELineDuration::LD_Never", (int64)ELineDuration::LD_Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_ELineDuration_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines when the line is finished and we should play the next one \n" },
		{ "LD_AfterDuration.Comment", "//The line finishes when the duration is up\n" },
		{ "LD_AfterDuration.DisplayName", "After X Seconds" },
		{ "LD_AfterDuration.Name", "ELineDuration::LD_AfterDuration" },
		{ "LD_AfterDuration.ToolTip", "The line finishes when the duration is up" },
		{ "LD_AfterReadingTime.Comment", "//The line finishes when the player has finished reading the line, given the letters per second reading rate set in Project Settings. \n" },
		{ "LD_AfterReadingTime.DisplayName", "After Reading Time" },
		{ "LD_AfterReadingTime.Name", "ELineDuration::LD_AfterReadingTime" },
		{ "LD_AfterReadingTime.ToolTip", "The line finishes when the player has finished reading the line, given the letters per second reading rate set in Project Settings." },
		{ "LD_Default.Comment", "/*The default option is generally the best and won't often need changed. Default will use When Audio Ends if \n\x09""audio is set, then when sequence ends if that is set and no text is set, then after default reading time if text is set. Empty lines are instantly finished.  */" },
		{ "LD_Default.DisplayName", "Default" },
		{ "LD_Default.Name", "ELineDuration::LD_Default" },
		{ "LD_Default.ToolTip", "The default option is generally the best and won't often need changed. Default will use When Audio Ends if\n       audio is set, then when sequence ends if that is set and no text is set, then after default reading time if text is set. Empty lines are instantly finished." },
		{ "LD_Never.Comment", "//The line never ends, and the only way to end the line is by skipping it with the enter key \n" },
		{ "LD_Never.DisplayName", "Never" },
		{ "LD_Never.Name", "ELineDuration::LD_Never" },
		{ "LD_Never.ToolTip", "The line never ends, and the only way to end the line is by skipping it with the enter key" },
		{ "LD_WhenAudioEnds.Comment", "//The line finishes when the sound ends\n" },
		{ "LD_WhenAudioEnds.DisplayName", "When Audio Ends" },
		{ "LD_WhenAudioEnds.Name", "ELineDuration::LD_WhenAudioEnds" },
		{ "LD_WhenAudioEnds.ToolTip", "The line finishes when the sound ends" },
		{ "LD_WhenSequenceEnds.Comment", "//The line finishes when the sequence ends\n" },
		{ "LD_WhenSequenceEnds.DisplayName", "When Sequence Ends" },
		{ "LD_WhenSequenceEnds.Name", "ELineDuration::LD_WhenSequenceEnds" },
		{ "LD_WhenSequenceEnds.ToolTip", "The line finishes when the sequence ends" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Defines when the line is finished and we should play the next one" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_ELineDuration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"ELineDuration",
		"ELineDuration",
		Z_Construct_UEnum_Narrative_ELineDuration_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_ELineDuration_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_ELineDuration_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_ELineDuration_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_ELineDuration()
	{
		if (!Z_Registration_Info_UEnum_ELineDuration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELineDuration.InnerSingleton, Z_Construct_UEnum_Narrative_ELineDuration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELineDuration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueLine;
class UScriptStruct* FDialogueLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLine, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("DialogueLine"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FDialogueLine>()
{
	return FDialogueLine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Duration_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationSecondsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSecondsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FacialAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FacialAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Shot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09The text for this dialogue node. Narrative will automatically display this on the NarrativeDefaultUI if you're using that, otherwise you can simply grab this\n\x09yourself if you're making your own dialogue UI - it is readable from Blueprints.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The text for this dialogue node. Narrative will automatically display this on the NarrativeDefaultUI if you're using that, otherwise you can simply grab this\nyourself if you're making your own dialogue UI - it is readable from Blueprints." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09The duration the line should play for \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The duration the line should play for" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Duration), Z_Construct_UEnum_Narrative_ELineDuration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration_MetaData) }; // 914394039
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DurationSecondsOverride_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09The overridden seconds the line should play for \n\x09*/" },
		{ "EditCondition", "Duration == ELineDuration::LD_AfterDuration" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The overridden seconds the line should play for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DurationSecondsOverride = { "DurationSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, DurationSecondsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DurationSecondsOverride_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DurationSecondsOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09* If a dialogue sound is selected, narrative will automatically play the sound for you in 3D space, at the location of the speaker.  \n\x09* If narrative can't find a speaker actor (for example if you were getting a phone call where there isn't an physical speaker) it will be played in 2D. \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If a dialogue sound is selected, narrative will automatically play the sound for you in 3D space, at the location of the speaker.\nIf narrative can't find a speaker actor (for example if you were getting a phone call where there isn't an physical speaker) it will be played in 2D." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound = { "DialogueSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09Narrative will play this montage on the first skeletalmeshcomponent found on your speaker with the tag \"Body\" added to it.\n\x09*/" },
		{ "DisplayName", "Body Animation" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Narrative will play this montage on the first skeletalmeshcomponent found on your speaker with the tag \"Body\" added to it." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage = { "DialogueMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, DialogueMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FacialAnimation_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09Narrative will play this montage on the first skeletalmeshcomponent found on your speaker with the tag \"Face\" added to it. \n\x09*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Narrative will play this montage on the first skeletalmeshcomponent found on your speaker with the tag \"Face\" added to it." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FacialAnimation = { "FacialAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, FacialAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FacialAnimation_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FacialAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot_MetaData[] = {
		{ "Category", "Dialogue Line" },
		{ "Comment", "/**\n\x09* Shot to play for this line. Overrides speaker shot if one is set \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Shot to play for this line. Overrides speaker shot if one is set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot = { "Shot", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Shot), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot_MetaData), Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DurationSecondsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_DialogueMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_FacialAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Shot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		&NewStructOps,
		"DialogueLine",
		Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers),
		sizeof(FDialogueLine),
		alignof(FDialogueLine),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton, Z_Construct_UScriptStruct_FDialogueLine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton;
	}
	void UDialogueNode::StaticRegisterNativesUDialogueNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNode);
	UClass* Z_Construct_UClass_UDialogueNode_NoRegister()
	{
		return UDialogueNode::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlternativeLines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternativeLines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlternativeLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayedLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayedLine;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplies;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerReplies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayNodeFuncName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnPlayNodeFuncName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectedAtSpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DirectedAtSpeakerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkippable_MetaData[];
#endif
		static void NewProp_bIsSkippable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkippable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompactView_MetaData[];
#endif
		static void NewProp_bCompactView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactView;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Base class for states and branches in the Dialogues state machine*/" },
		{ "IncludePath", "DialogueSM.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Base class for states and branches in the Dialogues state machine" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_Line_MetaData[] = {
		{ "Category", "Details - Dialogue Node" },
		{ "Comment", "//The dialogue line associated with this node\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The dialogue line associated with this node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, Line), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_Line_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_Line_MetaData) }; // 1051335597
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_Inner = { "AlternativeLines", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Dialogue Line" },
		{ "Comment", "/** If alternative lines are added in here, narrative will randomly select either the main line or one of the alternatives.\n\x09 \n\x09 This can make dialogues more random and believable. \n\x09 */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If alternative lines are added in here, narrative will randomly select either the main line or one of the alternatives.\n\n       This can make dialogues more random and believable." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines = { "AlternativeLines", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, AlternativeLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_MetaData) }; // 1051335597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, OnDialogueFinished), Z_Construct_UDelegateFunction_Narrative_OnDialogueNodeFinishedPlaying__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished_MetaData) }; // 3996772163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "//The last line the dialogue node played.\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The last line the dialogue node played." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine = { "PlayedLine", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, PlayedLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine_MetaData) }; // 1051335597
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_Inner = { "NPCReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies = { "NPCReplies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, NPCReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue = { "OwningDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, OwningDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, OwningComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnPlayNodeFuncName_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Details - Dialogue Node" },
		{ "Comment", "//Name of custom event to call when this is reached \n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Name of custom event to call when this is reached" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnPlayNodeFuncName = { "OnPlayNodeFuncName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, OnPlayNodeFuncName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnPlayNodeFuncName_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnPlayNodeFuncName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_DirectedAtSpeakerID_MetaData[] = {
		{ "Category", "Details - Dialogue Node" },
		{ "Comment", "/**The ID of the speaker we are saying this line to. Can be left empty. */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The ID of the speaker we are saying this line to. Can be left empty." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_DirectedAtSpeakerID = { "DirectedAtSpeakerID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode, DirectedAtSpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_DirectedAtSpeakerID_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_DirectedAtSpeakerID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable_MetaData[] = {
		{ "Category", "Details - Dialogue Node" },
		{ "Comment", "/**Should pressing the enter key allow this line to be skipped?*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Should pressing the enter key allow this line to be skipped?" },
	};
#endif
	void Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable_SetBit(void* Obj)
	{
		((UDialogueNode*)Obj)->bIsSkippable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable = { "bIsSkippable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueNode), &Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView_MetaData[] = {
		{ "Category", "Details - Dialogue Editor" },
		{ "Comment", "/**If true, the dialogue editor will style this node in a compact form*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If true, the dialogue editor will style this node in a compact form" },
	};
#endif
	void Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView_SetBit(void* Obj)
	{
		((UDialogueNode*)Obj)->bCompactView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView = { "bCompactView", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueNode), &Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView_MetaData), Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_AlternativeLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnDialogueFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayedLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_NPCReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_PlayerReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OwningComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_OnPlayNodeFuncName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_DirectedAtSpeakerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_bIsSkippable,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Statics::NewProp_bCompactView,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNode_Statics::ClassParams = {
		&UDialogueNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueNode()
	{
		if (!Z_Registration_Info_UClass_UDialogueNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNode.OuterSingleton, Z_Construct_UClass_UDialogueNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNode.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueNode>()
	{
		return UDialogueNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNode);
	UDialogueNode::~UDialogueNode() {}
	void UDialogueNode_NPC::StaticRegisterNativesUDialogueNode_NPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNode_NPC);
	UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister()
	{
		return UDialogueNode_NPC::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNode_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectingReplyShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectingReplyShot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNode_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_NPC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueSM.h" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "Category", "Details - NPC Dialogue Node" },
		{ "Comment", "/**The ID of the speaker for this node */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The ID of the speaker for this node" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode_NPC, SpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID_MetaData), Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SelectingReplyShot_MetaData[] = {
		{ "Category", "Details - NPC Dialogue Node" },
		{ "Comment", "//Sequence to play when player is selecting their reply after this shot has played \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Sequence to play when player is selecting their reply after this shot has played" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SelectingReplyShot = { "SelectingReplyShot", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode_NPC, SelectingReplyShot), Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SelectingReplyShot_MetaData), Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SelectingReplyShot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SpeakerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_NPC_Statics::NewProp_SelectingReplyShot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNode_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNode_NPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNode_NPC_Statics::ClassParams = {
		&UDialogueNode_NPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueNode_NPC_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_NPC_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueNode_NPC()
	{
		if (!Z_Registration_Info_UClass_UDialogueNode_NPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNode_NPC.OuterSingleton, Z_Construct_UClass_UDialogueNode_NPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNode_NPC.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueNode_NPC>()
	{
		return UDialogueNode_NPC::StaticClass();
	}
	UDialogueNode_NPC::UDialogueNode_NPC() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNode_NPC);
	UDialogueNode_NPC::~UDialogueNode_NPC() {}
	DEFINE_FUNCTION(UDialogueNode_Player::execGetHintText)
	{
		P_GET_OBJECT(UDialogue,Z_Param_InDialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHintText(Z_Param_InDialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueNode_Player::execGetOptionText)
	{
		P_GET_OBJECT(UDialogue,Z_Param_InDialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOptionText(Z_Param_InDialogue);
		P_NATIVE_END;
	}
	void UDialogueNode_Player::StaticRegisterNativesUDialogueNode_Player()
	{
		UClass* Class = UDialogueNode_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHintText", &UDialogueNode_Player::execGetHintText },
			{ "GetOptionText", &UDialogueNode_Player::execGetOptionText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics
	{
		struct DialogueNode_Player_eventGetHintText_Parms
		{
			UDialogue* InDialogue;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogue;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::NewProp_InDialogue = { "InDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNode_Player_eventGetHintText_Parms, InDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNode_Player_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::NewProp_InDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Details" },
		{ "Comment", "//Get any hint text that should be added to a reply ( ie (Lie, Start Quest, etc))\n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Get any hint text that should be added to a reply ( ie (Lie, Start Quest, etc))" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueNode_Player, nullptr, "GetHintText", nullptr, nullptr, Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::DialogueNode_Player_eventGetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::DialogueNode_Player_eventGetHintText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueNode_Player_GetHintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueNode_Player_GetHintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics
	{
		struct DialogueNode_Player_eventGetOptionText_Parms
		{
			UDialogue* InDialogue;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogue;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_InDialogue = { "InDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNode_Player_eventGetOptionText_Parms, InDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNode_Player_eventGetOptionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_InDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Details" },
		{ "Comment", "//Runs a wildcard replace on a player reply \n" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Runs a wildcard replace on a player reply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueNode_Player, nullptr, "GetOptionText", nullptr, nullptr, Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::DialogueNode_Player_eventGetOptionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::DialogueNode_Player_eventGetOptionText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueNode_Player_GetOptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueNode_Player_GetOptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNode_Player);
	UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister()
	{
		return UDialogueNode_Player::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNode_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_OptionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSelect_MetaData[];
#endif
		static void NewProp_bAutoSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNode_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueNode_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueNode_Player_GetHintText, "GetHintText" }, // 2226148336
		{ &Z_Construct_UFunction_UDialogueNode_Player_GetOptionText, "GetOptionText" }, // 2599242758
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Player_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueSM.h" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText_MetaData[] = {
		{ "Category", "Details - Player Dialogue Node" },
		{ "Comment", "/**The shortened text to display for dialogue option when it shows up in the list of available responses. If left empty narrative will just use the main text. */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "The shortened text to display for dialogue option when it shows up in the list of available responses. If left empty narrative will just use the main text." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText = { "OptionText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode_Player, OptionText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText_MetaData), Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_HintText_MetaData[] = {
		{ "Category", "Details - Player Dialogue Node" },
		{ "Comment", "/**Optional hint text after the option text, ie (Lie, Persauade, Begin Quest) If left empty narrative will see if events have hint text. */" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "Optional hint text after the option text, ie (Lie, Persauade, Begin Quest) If left empty narrative will see if events have hint text." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNode_Player, HintText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_HintText_MetaData), Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_HintText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect_MetaData[] = {
		{ "Category", "Details - Player Dialogue Node" },
		{ "Comment", "/**If true, this dialogue option will be automatically selected instead of the player having to select it from the UI*/" },
		{ "ModuleRelativePath", "Public/DialogueSM.h" },
		{ "ToolTip", "If true, this dialogue option will be automatically selected instead of the player having to select it from the UI" },
	};
#endif
	void Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect_SetBit(void* Obj)
	{
		((UDialogueNode_Player*)Obj)->bAutoSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect = { "bAutoSelect", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueNode_Player), &Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect_MetaData), Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_OptionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_HintText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNode_Player_Statics::NewProp_bAutoSelect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNode_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNode_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNode_Player_Statics::ClassParams = {
		&UDialogueNode_Player::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueNode_Player_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNode_Player_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueNode_Player()
	{
		if (!Z_Registration_Info_UClass_UDialogueNode_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNode_Player.OuterSingleton, Z_Construct_UClass_UDialogueNode_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNode_Player.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDialogueNode_Player>()
	{
		return UDialogueNode_Player::StaticClass();
	}
	UDialogueNode_Player::UDialogueNode_Player() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNode_Player);
	UDialogueNode_Player::~UDialogueNode_Player() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::EnumInfo[] = {
		{ ELineDuration_StaticEnum, TEXT("ELineDuration"), &Z_Registration_Info_UEnum_ELineDuration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 914394039U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ScriptStructInfo[] = {
		{ FSpeakerSelector::StaticStruct, Z_Construct_UScriptStruct_FSpeakerSelector_Statics::NewStructOps, TEXT("SpeakerSelector"), &Z_Registration_Info_UScriptStruct_SpeakerSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpeakerSelector), 3590339346U) },
		{ FDialogueLine::StaticStruct, Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps, TEXT("DialogueLine"), &Z_Registration_Info_UScriptStruct_DialogueLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueLine), 1051335597U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueNode, UDialogueNode::StaticClass, TEXT("UDialogueNode"), &Z_Registration_Info_UClass_UDialogueNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNode), 1740980546U) },
		{ Z_Construct_UClass_UDialogueNode_NPC, UDialogueNode_NPC::StaticClass, TEXT("UDialogueNode_NPC"), &Z_Registration_Info_UClass_UDialogueNode_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNode_NPC), 3201172484U) },
		{ Z_Construct_UClass_UDialogueNode_Player, UDialogueNode_Player::StaticClass, TEXT("UDialogueNode_Player"), &Z_Registration_Info_UClass_UDialogueNode_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNode_Player), 3557049436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_4128608903(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_Narrative_Public_DialogueSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
