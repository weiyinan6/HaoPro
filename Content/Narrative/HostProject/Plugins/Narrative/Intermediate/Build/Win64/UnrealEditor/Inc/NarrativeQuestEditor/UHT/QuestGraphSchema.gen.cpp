// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_NoRegister();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphSchema();
	NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphSchema_NoRegister();
	NARRATIVEQUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment();
	NARRATIVEQUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FQuestSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FQuestSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode;
class UScriptStruct* FQuestSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_NarrativeQuestEditor(), TEXT("QuestSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UScriptStruct* StaticStruct<FQuestSchemaAction_NewNode>()
{
	return FQuestSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/QuestGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Private/QuestGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UQuestGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData), Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"QuestSchemaAction_NewNode",
		Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::PropPointers),
		sizeof(FQuestSchemaAction_NewNode),
		alignof(FQuestSchemaAction_NewNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuestSchemaAction_AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FQuestSchemaAction_AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment;
class UScriptStruct* FQuestSchemaAction_AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment, (UObject*)Z_Construct_UPackage__Script_NarrativeQuestEditor(), TEXT("QuestSchemaAction_AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UScriptStruct* StaticStruct<FQuestSchemaAction_AddComment>()
{
	return FQuestSchemaAction_AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/QuestGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestSchemaAction_AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"QuestSchemaAction_AddComment",
		nullptr,
		0,
		sizeof(FQuestSchemaAction_AddComment),
		alignof(FQuestSchemaAction_AddComment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment.InnerSingleton, Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment.InnerSingleton;
	}
	void UQuestGraphSchema::StaticRegisterNativesUQuestGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphSchema);
	UClass* Z_Construct_UClass_UQuestGraphSchema_NoRegister()
	{
		return UQuestGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphSchema.h" },
		{ "ModuleRelativePath", "Private/QuestGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphSchema_Statics::ClassParams = {
		&UQuestGraphSchema::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UQuestGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphSchema.OuterSingleton, Z_Construct_UClass_UQuestGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGraphSchema.OuterSingleton;
	}
	template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphSchema>()
	{
		return UQuestGraphSchema::StaticClass();
	}
	UQuestGraphSchema::UQuestGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphSchema);
	UQuestGraphSchema::~UQuestGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FQuestSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FQuestSchemaAction_NewNode_Statics::NewStructOps, TEXT("QuestSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_QuestSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestSchemaAction_NewNode), 1623949321U) },
		{ FQuestSchemaAction_AddComment::StaticStruct, Z_Construct_UScriptStruct_FQuestSchemaAction_AddComment_Statics::NewStructOps, TEXT("QuestSchemaAction_AddComment"), &Z_Registration_Info_UScriptStruct_QuestSchemaAction_AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestSchemaAction_AddComment), 4245197438U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphSchema, UQuestGraphSchema::StaticClass, TEXT("UQuestGraphSchema"), &Z_Registration_Info_UClass_UQuestGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphSchema), 3713941377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_4113692586(TEXT("/Script/NarrativeQuestEditor"),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_projects_HaoPro_Content_Narrative_HostProject_Plugins_Narrative_Source_NarrativeQuestEditor_Private_QuestGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
