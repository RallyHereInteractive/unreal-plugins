// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_About : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_About();
	virtual ~FRHDTW_About();

	void Do() override;

protected:
	TSharedRef<class FRH_DiagnosticReportGenerator> DiagnosticReportGenerator;
 	void RefreshDiagnosticMetadata();

	FString DiagnosticExportMessage;
};
