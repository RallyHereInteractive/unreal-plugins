// Copyright Epic Games, Inc. All Rights Reserved.

#include "RallyHereEditorWebRequestWidget.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "Engine/Engine.h"
#include "RallyHereEditor.h"
#include "RH_DevWebRequests.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "CoreGlobals.h"
#include "Editor.h"
#include "UnrealEdMisc.h"

SRallyHereEditorWebRequestWidget::SRallyHereEditorWebRequestWidget()
	: SCompoundWidget()
{
}

SRallyHereEditorWebRequestWidget::~SRallyHereEditorWebRequestWidget()
{
}

void SRallyHereEditorWebRequestWidget::Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow)
{
	WebCallBox = SNew(SVerticalBox);

	UpdateWebCallBox();

	ChildSlot
		[
			WebCallBox.ToSharedRef()
		];

	if (URH_DevWebRequests* WebRequestsTracker = FRallyHereEditorModule::Get().GetWebRequestTracker())
	{
		WebRequestsTracker->OnTrackedRequestsUpdated().AddSP(this, &SRallyHereEditorWebRequestWidget::UpdateWebCallBox);
	}
}

void SRallyHereEditorWebRequestWidget::UpdateWebCallBox()
{
	WebCallDetailsExpanders.Empty();

	WebCallBox.Get()->ClearChildren();

	URH_DevWebRequests* WebRequestsTracker = FRallyHereEditorModule::Get().GetWebRequestTracker();
	const auto& TrackedRequests = WebRequestsTracker->GetTrackedRequests();
	TDoubleLinkedListIterator<TDoubleLinkedList<TSharedPtr<FRH_DevWebRequest>>::TDoubleLinkedListNode, TSharedPtr<FRH_DevWebRequest>> requestsIterator(TrackedRequests.GetTail());

	for (; requestsIterator.GetNode() != nullptr; --requestsIterator)
	{
		auto request = requestsIterator.GetNode()->GetValue().Get();
		if (!request)
		{
			continue;
		}

		FString Label = "";
		if (request->Responses.Num() > 0)
		{
			Label = FString::Printf(TEXT("(%d) "), request->Responses.Last().ResponseCode);
		}
		Label += request->Verb;
		Label += " ";
		Label += request->URL;

		FString RequestText = "";
		FString ResponseText = "";
		TSharedPtr<FJsonValue> JsonValue;

		if (request->Content.Len() > 0)
		{
			if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(request->Content), JsonValue) && FJsonSerializer::Serialize(JsonValue, TEXT(""), TJsonWriterFactory<>::Create(&RequestText)) || RequestText == "")
			{
				RequestText = request->Content;
			}
		}

		if (request->Responses.Num() && request->Responses.Last().Content.Len() > 0)
		{
			if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(request->Responses.Last().Content), JsonValue) && FJsonSerializer::Serialize(JsonValue, TEXT(""), TJsonWriterFactory<>::Create(&ResponseText)) || ResponseText == "")
			{
				ResponseText = request->Responses.Last().Content;
			}
		}

		TSharedPtr<SVerticalBox> HeaderDetails = SNew(SVerticalBox);

		for (const auto& pair : request->Headers)
		{
			HeaderDetails.Get()->AddSlot()
			.Padding(FMargin(2.0f))
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("%s:"), *pair.Key)))
				]
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString(*pair.Value))
				]
			];
		}

		TSharedPtr<SVerticalBox> MetadataDetails = 
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.Padding(FMargin(2.0f))
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString("Identifier:"))
				]
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString(*request->Metadata.Identifier.ToString(EGuidFormats::DigitsWithHyphens)))
				]
			]
			+SVerticalBox::Slot()
			.Padding(FMargin(2.0f))
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString("Simplified Path:"))
				]
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString(*request->Metadata.SimplifiedPath.ToString()))
				]
			]
			+SVerticalBox::Slot()
			.Padding(FMargin(2.0f))
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString("Retry Count:"))
				]
				+SHorizontalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoWidth()
				[
					SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("%d"), request->Metadata.RetryCount)))
				]
			];

		WebCallBox.Get()->AddSlot()
		.Padding(FMargin(2.0f))
		.AutoHeight()
		[
			SNew(SExpandableArea)
			.InitiallyCollapsed(true)
			.Padding(0.0f)
			.AreaTitle(FText::FromString(Label))
			.BodyContent()
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoHeight()
				[
					SNew(SExpandableArea)
					.InitiallyCollapsed(true)
					.Padding(0.0f)
					.AreaTitle(FText::FromString("Request"))
					.BodyContent()
					[
						SNew(SVerticalBox)
						+SVerticalBox::Slot()
						.Padding(FMargin(2.0f))
						.AutoHeight()
						[
							SNew(STextBlock).Text(FText::FromString("Request Content"))
						]
						+SVerticalBox::Slot()
						.Padding(FMargin(2.0f))
						.AutoHeight()
						[
							SNew(STextBlock).Text(FText::FromString(RequestText))
						]
						+SVerticalBox::Slot()
						.Padding(FMargin(2.0f))
						.AutoHeight()
						[
							SNew(STextBlock).Text(FText::FromString("Request Header Data"))
						]
						+SVerticalBox::Slot()
						.Padding(FMargin(2.0f))
						.AutoHeight()
						[
							HeaderDetails.ToSharedRef()
						]
					]
				]
				+SVerticalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoHeight()
				[
					SNew(SExpandableArea)
					.InitiallyCollapsed(true)
					.Padding(0.0f)
					.AreaTitle(FText::FromString("Metadata"))
					.BodyContent()
					[
						MetadataDetails.ToSharedRef()
					]
				]
				+SVerticalBox::Slot()
				.Padding(FMargin(2.0f))
				.AutoHeight()
				[
					SNew(SExpandableArea)
					.InitiallyCollapsed(true)
					.Padding(0.0f)
					.AreaTitle(FText::FromString("Response"))
					.BodyContent()
					[
						SNew(STextBlock).Text(FText::FromString(ResponseText))
					]
				]
			]
		];
	}
}