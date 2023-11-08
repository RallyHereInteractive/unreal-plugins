// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RallyHereEditor.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/SBoxPanel.h"

DECLARE_DELEGATE(FRH_OnCustomDataUpdated);

class SRallyHereEditorCustomDataWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SRallyHereEditorCustomDataWidget)
	{
	}
	SLATE_END_ARGS()

public:
	SRallyHereEditorCustomDataWidget();
	virtual ~SRallyHereEditorCustomDataWidget();

	void Construct(const FArguments& InArgs);

	virtual bool SupportsKeyboardFocus() const override { return true; }

	void SetCustomData(const TMap<FString, FString>& InData) { CustomData = InData; UpdateCustomDataDisplay(); }
	const TMap<FString, FString>& GetCustomData() const { return CustomData; }

	FRH_OnCustomDataUpdated OnCustomDataUpdated;

protected:
	void UpdateCustomDataDisplay();

	TMap<FString, FString> CustomData;
	TSharedPtr<SEditableTextBox> AddCustomDataKey;
	TSharedPtr<SEditableTextBox> AddCustomDataValue;
	TSharedPtr<SHorizontalBox> AddCustomDataBox;
	TSharedPtr<SVerticalBox> CustomDataBox;
};