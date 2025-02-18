// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/ChatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatWidget() {}

// Begin Cross Module References
OPENAIAPI_API UClass* Z_Construct_UClass_UChatWidget();
OPENAIAPI_API UClass* Z_Construct_UClass_UChatWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References

// Begin Class UChatWidget Function AddMessageToChat
struct Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics
{
	struct ChatWidget_eventAddMessageToChat_Parms
	{
		FString Sender;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Add a new message to the chat history display.\n     * @param Sender - The name of the sender (e.g., \"Player\" or \"ChatGPT\").\n     * @param Message - The content of the message to display.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a new message to the chat history display.\n@param Sender - The name of the sender (e.g., \"Player\" or \"ChatGPT\").\n@param Message - The content of the message to display." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatWidget_eventAddMessageToChat_Parms, Sender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatWidget_eventAddMessageToChat_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatWidget, nullptr, "AddMessageToChat", nullptr, nullptr, Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::ChatWidget_eventAddMessageToChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::ChatWidget_eventAddMessageToChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChatWidget_AddMessageToChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatWidget_AddMessageToChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChatWidget::execAddMessageToChat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Sender);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMessageToChat(Z_Param_Sender,Z_Param_Message);
	P_NATIVE_END;
}
// End Class UChatWidget Function AddMessageToChat

// Begin Class UChatWidget Function HandleSendButtonClicked
struct Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Handle the send button's click event.\n     * Sends the player's message and clears the input box.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle the send button's click event.\nSends the player's message and clears the input box." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatWidget, nullptr, "HandleSendButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChatWidget::execHandleSendButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSendButtonClicked();
	P_NATIVE_END;
}
// End Class UChatWidget Function HandleSendButtonClicked

// Begin Class UChatWidget
void UChatWidget::StaticRegisterNativesUChatWidget()
{
	UClass* Class = UChatWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMessageToChat", &UChatWidget::execAddMessageToChat },
		{ "HandleSendButtonClicked", &UChatWidget::execHandleSendButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatWidget);
UClass* Z_Construct_UClass_UChatWidget_NoRegister()
{
	return UChatWidget::StaticClass();
}
struct Z_Construct_UClass_UChatWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UChatWidget - A custom widget for real-time chat interactions.\n */" },
#endif
		{ "IncludePath", "ChatWidget.h" },
		{ "ModuleRelativePath", "Public/ChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UChatWidget - A custom widget for real-time chat interactions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTextBox_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The input field for the player's messages. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The input field for the player's messages." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatScrollBox_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The scrollable area displaying chat history. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scrollable area displaying chat history." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The button for sending messages. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The button for sending messages." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputTextBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SendButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChatWidget_AddMessageToChat, "AddMessageToChat" }, // 2463461761
		{ &Z_Construct_UFunction_UChatWidget_HandleSendButtonClicked, "HandleSendButtonClicked" }, // 1478289835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatWidget_Statics::NewProp_InputTextBox = { "InputTextBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatWidget, InputTextBox), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTextBox_MetaData), NewProp_InputTextBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatWidget_Statics::NewProp_ChatScrollBox = { "ChatScrollBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatWidget, ChatScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatScrollBox_MetaData), NewProp_ChatScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatWidget_Statics::NewProp_SendButton = { "SendButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatWidget, SendButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendButton_MetaData), NewProp_SendButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatWidget_Statics::NewProp_InputTextBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatWidget_Statics::NewProp_ChatScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatWidget_Statics::NewProp_SendButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChatWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatWidget_Statics::ClassParams = {
	&UChatWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChatWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChatWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatWidget()
{
	if (!Z_Registration_Info_UClass_UChatWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatWidget.OuterSingleton, Z_Construct_UClass_UChatWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatWidget.OuterSingleton;
}
template<> OPENAIAPI_API UClass* StaticClass<UChatWidget>()
{
	return UChatWidget::StaticClass();
}
UChatWidget::UChatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatWidget);
UChatWidget::~UChatWidget() {}
// End Class UChatWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatWidget, UChatWidget::StaticClass, TEXT("UChatWidget"), &Z_Registration_Info_UClass_UChatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatWidget), 1196334928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_322041466(TEXT("/Script/OpenAIAPI"),
	Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
