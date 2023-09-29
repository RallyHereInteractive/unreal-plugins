// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SCompoundWidget.h"

class SRallyHereEditorWebRequestWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SRallyHereEditorWebRequestWidget)
	{
	}
	SLATE_END_ARGS()

public:
	SRallyHereEditorWebRequestWidget();
	virtual ~SRallyHereEditorWebRequestWidget();

	void Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow);

	virtual bool SupportsKeyboardFocus() const override { return true; }

	void UpdateWebCallBox();

private:
	TArray<TSharedPtr<SExpandableArea>> WebCallDetailsExpanders;
	TSharedPtr<SVerticalBox> WebCallBox;
};