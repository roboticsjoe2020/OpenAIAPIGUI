#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChatWidget.generated.h"

/**
 * Delegate used to notify when a message is sent from the UI.
 */
DECLARE_DELEGATE_OneParam(FOnSendMessage, const FString&);

/**
 * UChatWidget - A custom widget for real-time chat interactions.
 */
UCLASS()
class OPENAIAPI_API UChatWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    /** Delegate instance for sending a message */
    FOnSendMessage OnSendMessage;

    /**
     * Add a new message to the chat history display.
     * @param Sender - The name of the sender (e.g., "Player" or "ChatGPT").
     * @param Message - The content of the message to display.
     */
    UFUNCTION(BlueprintCallable, Category = "Chat")
    void AddMessageToChat(const FString& Sender, const FString& Message);
    void UpdateInputText(const FString& NewText);

protected:
    /**
     * Called after the widget is constructed.
     * Used to bind UI elements and initialize logic.
     */
    virtual void NativeConstruct() override;

private:
    /** The input field for the player's messages. */
    UPROPERTY(meta = (BindWidget))
    class UMultiLineEditableTextBox* InputTextBox;

    /** The scrollable area displaying chat history. */
    UPROPERTY(meta = (BindWidget))
    class UScrollBox* ChatScrollBox;

    /** The button for sending messages. */
    UPROPERTY(meta = (BindWidget))
    class UButton* SendButton;

    /**
     * Handle the send button's click event.
     * Sends the player's message and clears the input box.
     */
    UFUNCTION()
    void HandleSendButtonClicked();
};
