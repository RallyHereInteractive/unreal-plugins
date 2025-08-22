// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereEditorCustomDataWidget.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "RallyHereEditor.h"

#define LOCTEXT_NAMESPACE "RallyHereEditorCustomDataWidget"

SRallyHereEditorCustomDataWidget::SRallyHereEditorCustomDataWidget()
	: SCompoundWidget()
{
}

SRallyHereEditorCustomDataWidget::~SRallyHereEditorCustomDataWidget()
{
}

void SRallyHereEditorCustomDataWidget::Construct(const FArguments& InArgs)
{
	CustomDataBox = SNew(SVerticalBox);

	AddCustomDataKey = SNew(SEditableTextBox).Text(LOCTEXT("CustomDataKey", "Key"));
	AddCustomDataValue = SNew(SEditableTextBox).Text(LOCTEXT("CustomDataKey", "Value"));

	AddCustomDataBox = SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(0.3)
			[
				AddCustomDataKey.ToSharedRef()
			]
			+SHorizontalBox::Slot()
			.FillWidth(0.5)
			[
				AddCustomDataValue.ToSharedRef()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SButton)
				.Text(LOCTEXT("CustomDataAdd", "Add"))
				.OnClicked_Lambda([this]()
					{
						CustomData.Add(AddCustomDataKey.Get()->GetText().ToString(), AddCustomDataValue.Get()->GetText().ToString());
						AddCustomDataKey.Get()->SetText(LOCTEXT("CustomDataKey", "Key"));
						AddCustomDataValue.Get()->SetText(LOCTEXT("CustomDataValue", "Value"));
						OnCustomDataUpdated.ExecuteIfBound();
						UpdateCustomDataDisplay();
						return FReply::Handled();
					})
			];

	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock).Text(LOCTEXT("CustomDataEditor", "Custom Data"))
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			CustomDataBox.ToSharedRef()
		]
	];
}

void SRallyHereEditorCustomDataWidget::UpdateCustomDataDisplay()
{
	CustomDataBox.Get()->ClearChildren();

	for (const TPair<FString, FString>& Pair : CustomData)
	{
		CustomDataBox.Get()->AddSlot().AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.FillWidth(0.3)
				[
					SNew(SEditableTextBox)
					.Text(FText::FromString(Pair.Key))
					.OnTextChanged_Lambda([this, Pair](const FText& InNewText)
					{
						CustomData.Add(InNewText.ToString(), Pair.Value);
						CustomData.Remove(Pair.Key);
						OnCustomDataUpdated.ExecuteIfBound();
					})
				]
				+SHorizontalBox::Slot()
				.FillWidth(0.5)
				[
					SNew(SEditableTextBox)
					.Text(FText::FromString(Pair.Value))
					.OnTextChanged_Lambda([this, Pair](const FText& InNewText)
					{
						CustomData.Emplace(Pair.Key, InNewText.ToString());
						OnCustomDataUpdated.ExecuteIfBound();
					})
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("CustomDataDelete", "Delete"))
					.OnClicked_Lambda([this, Pair]()
						{
							CustomData.Remove(Pair.Key);
							OnCustomDataUpdated.ExecuteIfBound();
							UpdateCustomDataDisplay();
							return FReply::Handled();
						})
				]
			];
	}

	CustomDataBox.Get()->AddSlot().AutoHeight()
		[
			AddCustomDataBox.ToSharedRef()
		];
}

#undef LOCTEXT_NAMESPACE