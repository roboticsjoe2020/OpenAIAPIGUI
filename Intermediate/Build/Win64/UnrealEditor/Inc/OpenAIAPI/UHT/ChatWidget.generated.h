// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChatWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENAIAPI_ChatWidget_generated_h
#error "ChatWidget.generated.h already included, missing '#pragma once' in ChatWidget.h"
#endif
#define OPENAIAPI_ChatWidget_generated_h

#define FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSendButtonClicked); \
	DECLARE_FUNCTION(execAddMessageToChat);


#define FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatWidget(); \
	friend struct Z_Construct_UClass_UChatWidget_Statics; \
public: \
	DECLARE_CLASS(UChatWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UChatWidget)


#define FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatWidget(UChatWidget&&); \
	UChatWidget(const UChatWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatWidget) \
	NO_API virtual ~UChatWidget();


#define FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_15_PROLOG
#define FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UChatWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Panda_OneDrive_Desktop_UIVersion_OpenAIAPI_Source_OpenAIAPI_Public_ChatWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
