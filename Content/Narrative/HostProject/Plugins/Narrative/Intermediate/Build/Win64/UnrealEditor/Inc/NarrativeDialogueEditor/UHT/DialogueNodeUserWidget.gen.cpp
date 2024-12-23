// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Public/DialogueNodeUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueNodeUserWidget() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueNodeUserWidget();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueNodeUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References
	struct DialogueNodeUserWidget_eventOnNodeInitialized_Parms
	{
		UDialogueNode* InNode;
		UDialogue* InDialogue;
	};
	static FName NAME_UDialogueNodeUserWidget_OnNodeInitialized = FName(TEXT("OnNodeInitialized"));
	void UDialogueNodeUserWidget::OnNodeInitialized(UDialogueNode* InNode, UDialogue* InDialogue)
	{
		DialogueNodeUserWidget_eventOnNodeInitialized_Parms Parms;
		Parms.InNode=InNode;
		Parms.InDialogue=InDialogue;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueNodeUserWidget_OnNodeInitialized),&Parms);
	}
	void UDialogueNodeUserWidget::StaticRegisterNativesUDialogueNodeUserWidget()
	{
	}
	struct Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNodeUserWidget_eventOnNodeInitialized_Parms, InNode), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InDialogue = { "InDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNodeUserWidget_eventOnNodeInitialized_Parms, InDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InDialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueNodeUserWidget, nullptr, "OnNodeInitialized", nullptr, nullptr, Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers), sizeof(DialogueNodeUserWidget_eventOnNodeInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(DialogueNodeUserWidget_eventOnNodeInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNodeUserWidget);
	UClass* Z_Construct_UClass_UDialogueNodeUserWidget_NoRegister()
	{
		return UDialogueNodeUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueNodeUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftPinBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPinBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightPinBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPinBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueNodeUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueNodeUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized, "OnNodeInitialized" }, // 998108575
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNodeUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Parent class for a custom UMG widget that narrative will add to dialogue nodes if you want to override narratives default UI\n */" },
		{ "IncludePath", "DialogueNodeUserWidget.h" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
		{ "ToolTip", "Parent class for a custom UMG widget that narrative will add to dialogue nodes if you want to override narratives default UI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue_MetaData), Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox = { "LeftPinBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, LeftPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox_MetaData), Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox = { "RightPinBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, RightPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox_MetaData), Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueNodeUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNodeUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::ClassParams = {
		&UDialogueNodeUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueNodeUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueNodeUserWidget()
	{
		if (!Z_Registration_Info_UClass_UDialogueNodeUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNodeUserWidget.OuterSingleton, Z_Construct_UClass_UDialogueNodeUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueNodeUserWidget.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueNodeUserWidget>()
	{
		return UDialogueNodeUserWidget::StaticClass();
	}
	UDialogueNodeUserWidget::UDialogueNodeUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNodeUserWidget);
	UDialogueNodeUserWidget::~UDialogueNodeUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueNodeUserWidget, UDialogueNodeUserWidget::StaticClass, TEXT("UDialogueNodeUserWidget"), &Z_Registration_Info_UClass_UDialogueNodeUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNodeUserWidget), 1354162332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_1875939507(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
