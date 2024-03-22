// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"

#include "RH_ImGuiUtilities.h"
#include "ReportsAPI.h"

struct FRHDTW_PlayerReports : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerReports();
	virtual ~FRHDTW_PlayerReports();

	virtual void Do() override;

	void DoViewReportsSent();
	void DoViewReportsReceived();
	void DoCreateReport();


private:
	int32 GetReportsPageSize;

	void HandleCreatedReport(bool bSuccess, const FRHAPI_PlayerReport& OutReport, const FRH_ErrorInfo& ErrorInfo);
	FString CreateReportActionResult;

	void HandleGetReportsReceived(bool bSuccess, const TArray<FRHAPI_PlayerReport>& OutReports, const FString& NextCursor, const FRH_ErrorInfo& ErrorInfo);
	FString GetReportsReceivedActionResult;
	FString GetReportsReceivedNextCursor;

	void HandleGetReportsSent(bool bSuccess, const TArray<FRHAPI_PlayerReport>& OutReports, const FString& NextCursor, const FRH_ErrorInfo& ErrorInfo);
	FString GetReportsSentActionResult;
	FString GetReportsSentNextCursor;

	struct FCreateReportData
	{
		TArray<ANSICHAR> Reason;
		TArray<ANSICHAR> Description;
		TArray<ANSICHAR> SessionId;
		TArray<ANSICHAR> InstanceId;
		TArray<ANSICHAR> MatchId;
		FImGuiCustomDataStager CustomData;

		const int32 FieldLength = 1024;

		FCreateReportData()
		{
			// preallocate some string data
			Reason.SetNumZeroed(FieldLength);
			Description.SetNumZeroed(FieldLength);
			SessionId.SetNumZeroed(FieldLength);
			InstanceId.SetNumZeroed(FieldLength);
			MatchId.SetNumZeroed(FieldLength);
		}

		void Clear()
		{
			Reason.Reset(); Reason.SetNumZeroed(FieldLength);
			Description.Reset(); Description.SetNumZeroed(FieldLength);
			SessionId.Reset(); SessionId.SetNumZeroed(FieldLength);
			InstanceId.Reset(); InstanceId.SetNumZeroed(FieldLength);
			MatchId.Reset(); MatchId.SetNumZeroed(FieldLength);

			CustomData.Clear();
		}
	};

	FCreateReportData CreateReportData;
};
