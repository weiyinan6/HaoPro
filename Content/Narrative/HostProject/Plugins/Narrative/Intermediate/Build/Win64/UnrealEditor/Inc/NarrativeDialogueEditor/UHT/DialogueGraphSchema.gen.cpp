// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphSchema.h"
#include "Narrative/Public/Dialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphSchema();
	NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphSchema_NoRegister();
	NARRATIVEDIALOGUEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment();
	NARRATIVEDIALOGUEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FDialogueSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDialogueSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode;
class UScriptStruct* FDialogueSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_NarrativeDialogueEditor(), TEXT("DialogueSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UScriptStruct* StaticStruct<FDialogueSchemaAction_NewNode>()
{
	return FDialogueSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData), Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo_MetaData[] = {
		{ "Comment", "/**For NPC replies we also pass speaker info along*/" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
		{ "ToolTip", "For NPC replies we also pass speaker info along" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo = { "SpeakerInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueSchemaAction_NewNode, SpeakerInfo), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo_MetaData), Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo_MetaData) }; // 1043363632
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DialogueSchemaAction_NewNode",
		Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers),
		sizeof(FDialogueSchemaAction_NewNode),
		alignof(FDialogueSchemaAction_NewNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDialogueSchemaAction_AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDialogueSchemaAction_AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment;
class UScriptStruct* FDialogueSchemaAction_AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment, (UObject*)Z_Construct_UPackage__Script_NarrativeDialogueEditor(), TEXT("DialogueSchemaAction_AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UScriptStruct* StaticStruct<FDialogueSchemaAction_AddComment>()
{
	return FDialogueSchemaAction_AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueSchemaAction_AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DialogueSchemaAction_AddComment",
		nullptr,
		0,
		sizeof(FDialogueSchemaAction_AddComment),
		alignof(FDialogueSchemaAction_AddComment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.InnerSingleton, Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.InnerSingleton;
	}
	void UDialogueGraphSchema::StaticRegisterNativesUDialogueGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphSchema);
	UClass* Z_Construct_UClass_UDialogueGraphSchema_NoRegister()
	{
		return UDialogueGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphSchema.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphSchema_Statics::ClassParams = {
		&UDialogueGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDialogueGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UDialogueGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphSchema.OuterSingleton, Z_Construct_UClass_UDialogueGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueGraphSchema.OuterSingleton;
	}
	template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphSchema>()
	{
		return UDialogueGraphSchema::StaticClass();
	}
	UDialogueGraphSchema::UDialogueGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphSchema);
	UDialogueGraphSchema::~UDialogueGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FDialogueSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewStructOps, TEXT("DialogueSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueSchemaAction_NewNode), 3709440371U) },
		{ FDialogueSchemaAction_AddComment::StaticStruct, Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::NewStructOps, TEXT("DialogueSchemaAction_AddComment"), &Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueSchemaAction_AddComment), 330338662U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphSchema, UDialogueGraphSchema::StaticClass, TEXT("UDialogueGraphSchema"), &Z_Registration_Info_UClass_UDialogueGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphSchema), 1112012194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_2841922729(TEXT("/Script/NarrativeDialogueEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
