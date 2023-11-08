// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SCompoundWidget.h"
#include "IWebBrowserWindow.h"

class SRallyHereEditorLoginWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SRallyHereEditorLoginWidget)
	{
	}
	SLATE_END_ARGS()

public:
	SRallyHereEditorLoginWidget();
	virtual ~SRallyHereEditorLoginWidget();

	void Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow);

	virtual bool SupportsKeyboardFocus() const override { return true; }
	bool HandleBrowserBeforeBrowse(const FString& Url, const FWebNavigationRequest& Request);

private:
	FGuid LoginStateGuid;
};
