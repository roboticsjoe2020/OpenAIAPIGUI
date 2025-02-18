#include "ChatWidget.h"
#include "Components/MultiLineEditableText.h"
#include "Components/EditableText.h"
#include "Components/EditableTextBox.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"




void UChatWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Bind the SendButton's OnClicked event to the HandleSendButtonClicked function
    if (SendButton)
    {
        SendButton->OnClicked.AddDynamic(this, &UChatWidget::HandleSendButtonClicked);
    }
}

void UChatWidget::HandleSendButtonClicked()
{
    // Ensure the InputTextBox and delegate are valid before processing
    if (InputTextBox && OnSendMessage.IsBound())
    {
        // Retrieve the user's message from the TextBox
        FString UserMessage = InputTextBox->GetText().ToString();

        // Notify listeners via the OnSendMessage delegate
        OnSendMessage.Execute(UserMessage);

        // Add the user's message to the chat display
        AddMessageToChat(TEXT("Player"), UserMessage);

        // Clear the TextBox input field
        InputTextBox->SetText(FText::GetEmpty());
    }
}

void UChatWidget::AddMessageToChat(const FString& Sender, const FString& Message)
{
    if (ChatScrollBox)
    {
        // Create a Multi-Line Editable Text Box to support text wrapping
        UMultiLineEditableTextBox* MessageTextBox = NewObject<UMultiLineEditableTextBox>(ChatScrollBox);
        if (MessageTextBox)
        {
            // Format the message as "Sender: Message"
            FString FormattedMessage = FString::Printf(TEXT("%s: %s"), *Sender, *Message);
            MessageTextBox->SetText(FText::FromString(FormattedMessage));

            // Disable editing so users can't modify chat history
            MessageTextBox->SetIsReadOnly(true);

            // Optional: Ensure proper styling for better UI (background, border, etc.)
            MessageTextBox->WidgetStyle.BackgroundImageNormal.TintColor = FSlateColor(FLinearColor(0, 0, 0, 0)); // Transparent background

            // Use a Horizontal Box for proper alignment and wrapping
            UHorizontalBox* MessageContainer = NewObject<UHorizontalBox>(ChatScrollBox);
            if (MessageContainer)
            {
                UHorizontalBoxSlot* MessageSlot = MessageContainer->AddChildToHorizontalBox(MessageTextBox);
                if (MessageSlot)
                {
                    MessageSlot->SetPadding(FMargin(5.0f));
                    MessageSlot->SetSize(FSlateChildSize(ESlateSizeRule::Fill)); // Ensures wrapping inside container
                }

                // Add the container (with the message) to the ScrollBox
                ChatScrollBox->AddChild(MessageContainer);
            }
            else
            {
                // Fallback: Add directly to scrollbox if container fails
                ChatScrollBox->AddChild(MessageTextBox);
            }

            // Scroll to the bottom to show the latest message
            ChatScrollBox->ScrollToEnd();
        }
    }
}



void UChatWidget::UpdateInputText(const FString& NewText)
{
    // Update the content of the InputTextBox
    if (InputTextBox)
    {
        InputTextBox->SetText(FText::FromString(NewText));
    }
}
