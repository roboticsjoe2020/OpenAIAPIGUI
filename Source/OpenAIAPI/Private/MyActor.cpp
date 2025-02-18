#include "MyActor.h"
#include "ChatWidget.h"
#include "ChatGPTPlugin.h"
#include "ChatGPTPluginSettings.h"
#include "Blueprint/UserWidget.h"
#include "Components/MultiLineEditableText.h"
#include "Components/EditableText.h"
#include "Components/EditableTextBox.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Log, TEXT("Actor BeginPlay called."));

    // Access plugin settings
    const UChatGPTPluginSettings* Settings = GetDefault<UChatGPTPluginSettings>();

    if (Settings)
    {
        FString APIKey = Settings->APIKey;
        FString Endpoint = Settings->EndpointURL;

        if (APIKey.IsEmpty())
        {
            UE_LOG(LogTemp, Error, TEXT("ChatGPT API Key is not set in the settings."));
            return;
        }

        if (Endpoint.IsEmpty())
        {
            UE_LOG(LogTemp, Error, TEXT("ChatGPT Endpoint URL is not set in the settings."));
            return;
        }

        // Log valid settings
        UE_LOG(LogTemp, Log, TEXT("ChatGPT API Key and Endpoint are valid."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load ChatGPT settings."));
        return; // Exit if settings are invalid
    }

    // Create the ChatWidget instance if the class is set
    if (ChatWidgetClass)
    {
        // Check ChatWidgetClass
        UE_LOG(LogTemp, Log, TEXT("ChatWidgetClass is valid: %s"), *ChatWidgetClass->GetName());
        // Create the ChatWidget instance
        ChatWidgetInstance = CreateWidget<UChatWidget>(GetWorld(), ChatWidgetClass);
        if (ChatWidgetInstance)
        {
            // Add the widget to the viewport
            ChatWidgetInstance->AddToViewport(100);// High Z-order
            ChatWidgetInstance->SetVisibility(ESlateVisibility::Visible);
            UE_LOG(LogTemp, Log, TEXT("ChatWidget added to viewport and made visible."));
            //Check if the ChatWidgetInstance->AddToViewport(); is being called properly and is not failing silently:
            UE_LOG(LogTemp, Log, TEXT("ChatWidget added to viewport."));

            // Bind the OnSendMessage delegate to the SendMessageToChatGPT function
            ChatWidgetInstance->OnSendMessage.BindUObject(this, &AMyActor::SendMessageToChatGPT);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create ChatWidget instance."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ChatWidgetClass is not set."));
    }
   
   

}

void AMyActor::SendMessageToChatGPT(const FString& UserMessage)
{
    // Check if the message is empty
    if (UserMessage.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("UserMessage is empty. Nothing to send."));
        return;
    }

    // Use the ChatGPT plugin to send the message
    FChatGPTPluginModule& ChatGPTModule = FModuleManager::GetModuleChecked<FChatGPTPluginModule>("ChatGPTPlugin");
    ChatGPTModule.SendMessage(UserMessage, [this](const FString& Reply)
        {
            // Handle the response from ChatGPT
            ProcessChatGPTResponse(Reply);
        });
}

void AMyActor::ProcessChatGPTResponse(const FString& Reply)
{
    // Ensure the widget instance is valid
    if (ChatWidgetInstance)
    {
        // Add the ChatGPT response to the chat UI
        ChatWidgetInstance->AddMessageToChat(TEXT("ChatGPT"), Reply);
    }
}

void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}