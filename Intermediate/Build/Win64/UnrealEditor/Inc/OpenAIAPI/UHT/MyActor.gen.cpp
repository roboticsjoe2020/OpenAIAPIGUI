// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OPENAIAPI_API UClass* Z_Construct_UClass_AMyActor();
OPENAIAPI_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
OPENAIAPI_API UClass* Z_Construct_UClass_UChatWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References

// Begin Class AMyActor Function SendMessageToChatGPT
struct Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics
{
	struct MyActor_eventSendMessageToChatGPT_Parms
	{
		FString UserMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChatGPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sends a message to ChatGPT */" },
#endif
		{ "ModuleRelativePath", "Public/MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends a message to ChatGPT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::NewProp_UserMessage = { "UserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSendMessageToChatGPT_Parms, UserMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMessage_MetaData), NewProp_UserMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::NewProp_UserMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "SendMessageToChatGPT", nullptr, nullptr, Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::MyActor_eventSendMessageToChatGPT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::MyActor_eventSendMessageToChatGPT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_SendMessageToChatGPT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_SendMessageToChatGPT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor::execSendMessageToChatGPT)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMessageToChatGPT(Z_Param_UserMessage);
	P_NATIVE_END;
}
// End Class AMyActor Function SendMessageToChatGPT

// Begin Class AMyActor
void AMyActor::StaticRegisterNativesAMyActor()
{
	UClass* Class = AMyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendMessageToChatGPT", &AMyActor::execSendMessageToChatGPT },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::StaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AMyActor is a test actor class designed to verify the functionality of the ChatGPT plugin.\n */" },
#endif
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AMyActor is a test actor class designed to verify the functionality of the ChatGPT plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatWidgetClass_MetaData[] = {
		{ "Category", "ChatGPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Widget class to use for the Chat UI */" },
#endif
		{ "ModuleRelativePath", "Public/MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget class to use for the Chat UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatWidgetInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Widget instance created at runtime */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget instance created at runtime" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_SendMessageToChatGPT, "SendMessageToChatGPT" }, // 205636461
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_ChatWidgetClass = { "ChatWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, ChatWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatWidgetClass_MetaData), NewProp_ChatWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_ChatWidgetInstance = { "ChatWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, ChatWidgetInstance), Z_Construct_UClass_UChatWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatWidgetInstance_MetaData), NewProp_ChatWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_ChatWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_ChatWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
template<> OPENAIAPI_API UClass* StaticClass<AMyActor>()
{
	return AMyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// End Class AMyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_MyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 1487626660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_MyActor_h_829553225(TEXT("/Script/OpenAIAPI"),
	Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_MyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
