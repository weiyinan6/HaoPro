// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Public/QuestNodeUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestNodeUserWidget() {}
// Cross Module References
	NARRATIVE_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestNodeUserWidget();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestNodeUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References
	struct QuestNodeUserWidget_eventOnNodeInitialized_Parms
	{
		UQuestNode* InNode;
		UQuest* InQuest;
	};
	static FName NAME_UQuestNodeUserWidget_OnNodeInitialized = FName(TEXT("OnNodeInitialized"));
	void UQuestNodeUserWidget::OnNodeInitialized(UQuestNode* InNode, UQuest* InQuest)
	{
		QuestNodeUserWidget_eventOnNodeInitialized_Parms Parms;
		Parms.InNode=InNode;
		Parms.InQuest=InQuest;
		ProcessEvent(FindFunctionChecked(NAME_UQuestNodeUserWidget_OnNodeInitialized),&Parms);
	}
	void UQuestNodeUserWidget::StaticRegisterNativesUQuestNodeUserWidget()
	{
	}
	struct Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestNodeUserWidget_eventOnNodeInitialized_Parms, InNode), Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InQuest = { "InQuest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestNodeUserWidget_eventOnNodeInitialized_Parms, InQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Node" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNodeUserWidget, nullptr, "OnNodeInitialized", nullptr, nullptr, Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers), sizeof(QuestNodeUserWidget_eventOnNodeInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(QuestNodeUserWidget_eventOnNodeInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestNodeUserWidget);
	UClass* Z_Construct_UClass_UQuestNodeUserWidget_NoRegister()
	{
		return UQuestNodeUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestNodeUserWidget_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
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
	UObject* (*const Z_Construct_UClass_UQuestNodeUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestNodeUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized, "OnNodeInitialized" }, // 1270998023
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNodeUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Parent class for a custom UMG widget that narrative will add to Quest nodes if you want to override narratives default UI\n */" },
		{ "IncludePath", "QuestNodeUserWidget.h" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
		{ "ToolTip", "Parent class for a custom UMG widget that narrative will add to Quest nodes if you want to override narratives default UI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Quest Node" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, Node), Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Quest Node" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest_MetaData), Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox = { "LeftPinBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, LeftPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox_MetaData), Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox = { "RightPinBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, RightPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox_MetaData), Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestNodeUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestNodeUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::ClassParams = {
		&UQuestNodeUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestNodeUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestNodeUserWidget()
	{
		if (!Z_Registration_Info_UClass_UQuestNodeUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestNodeUserWidget.OuterSingleton, Z_Construct_UClass_UQuestNodeUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestNodeUserWidget.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestNodeUserWidget>()
	{
		return UQuestNodeUserWidget::StaticClass();
	}
	UQuestNodeUserWidget::UQuestNodeUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestNodeUserWidget);
	UQuestNodeUserWidget::~UQuestNodeUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestNodeUserWidget, UQuestNodeUserWidget::StaticClass, TEXT("UQuestNodeUserWidget"), &Z_Registration_Info_UClass_UQuestNodeUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestNodeUserWidget), 803198583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_1809106777(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
