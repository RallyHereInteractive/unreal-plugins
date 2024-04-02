// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerReports.h"
#include "RH_PlayerInfoSubsystem.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"

FRHDTW_PlayerReports::FRHDTW_PlayerReports()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	GetReportsPageSize = 0;

	CreateReportActionResult.Empty();
}

FRHDTW_PlayerReports::~FRHDTW_PlayerReports()
{
}

void FRHDTW_PlayerReports::Do()
{
	if (ImGui::BeginTabBar("Reports", ImGuiTabBarFlags_FittingPolicyScroll))
	{
		if (ImGui::BeginTabItem("Create Report", nullptr, ImGuiTabItemFlags_None))
		{
			DoCreateReport();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("View Received Reports", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewReportsReceived();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("View Sent Reports", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewReportsSent();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_PlayerReports::DoCreateReport()
{
	const auto pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}

	const auto TargetedPlayers = pOwner->GetAllTargetedPlayerInfos();
	const int32 NumTargetedPlayers = TargetedPlayers.Num();
	if (NumTargetedPlayers == 0)
	{
		ImGui::Text("Please target a player with a Player UUID in Player Repository.");
		return;
	}

	ImGui::Text("Actions towards [%d] targeted players:", NumTargetedPlayers);

	FString SelectedReasonName = ImGuiGetStringFromTextInputBuffer(CreateReportData.Reason);
	if (ImGui::BeginCombo("Reason", CreateReportData.Reason.GetData()))
	{
		TArray<FString> ReasonNames;

		for (int32 i = 0; i <= (int32)ERHAPI_ReportReason::Other; ++i)
		{
			ReasonNames.Add(EnumToString((ERHAPI_ReportReason)i));
		}

		for (auto& ReasonName : ReasonNames)
		{
			bool bIsSelected = SelectedReasonName == ReasonName;

			FTCHARToUTF8 UTF8ReasonName(*ReasonName);
			if (ImGui::Selectable(UTF8ReasonName.Get(), bIsSelected))
			{
				CreateReportData.Reason.Reset();
				CreateReportData.Reason.AddZeroed(CreateReportData.Reason.Max());
				FMemory::Memcpy(CreateReportData.Reason.GetData(), UTF8ReasonName.Get(), CreateReportData.Reason.Num());

				bIsSelected = true;
			}
			if (bIsSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}
	
	ImGui::InputText("Description", CreateReportData.Description.GetData(), CreateReportData.Description.Num());
	ImGui::InputText("Session Id", CreateReportData.SessionId.GetData(), CreateReportData.SessionId.Num());
	ImGui::InputText("Instance Id", CreateReportData.InstanceId.GetData(), CreateReportData.InstanceId.Num());
	ImGui::InputText("Match Id", CreateReportData.MatchId.GetData(), CreateReportData.MatchId.Num());

	CreateReportData.CustomData.DisplayCustomDataStager(true);
	
	if (ImGui::Button(TCHAR_TO_UTF8(*FString::Printf(TEXT("Report [%d] Targeted Players"), NumTargetedPlayers))))
	{
		FRHAPI_PlayerReportCreate Report;

		ERHAPI_ReportReason Reason = ERHAPI_ReportReason::Other;
		if (EnumFromString(ImGuiGetStringFromTextInputBuffer(CreateReportData.Reason), Reason))
		{
			Report.SetReason(Reason);
		}
		else
		{
			Report.SetReason(ERHAPI_ReportReason::Other);
		}

		Report.SetDescription(ImGuiGetStringFromTextInputBuffer(CreateReportData.Description));
		Report.SetSessionId(ImGuiGetStringFromTextInputBuffer(CreateReportData.SessionId));
		Report.SetInstanceId(ImGuiGetStringFromTextInputBuffer(CreateReportData.InstanceId));
		Report.SetMatchId(ImGuiGetStringFromTextInputBuffer(CreateReportData.MatchId));

		TMap<FString, FString> CustomData;
		CreateReportData.CustomData.GetCustomDataMap(CustomData);
		Report.SetCustomData(CustomData);

		CreateReportActionResult.Empty();

		for (auto& PlayerInfo : TargetedPlayers)
		{
			if (PlayerInfo->GetReports() != nullptr)
			{
				PlayerInfo->GetReports()->CreateReport(Report, FRH_PlayerInfoCreatePlayerReportDelegate::CreateSP(this, &FRHDTW_PlayerReports::HandleCreatedReport));
			}
		}
	}

	if (ImGui::Button("Clear"))
	{
		CreateReportData.Clear();
		CreateReportActionResult.Empty();
	}

	ImGui::Separator();
	ImGui::Text("Result");
	ImGui::Text("%s", TCHAR_TO_UTF8(*CreateReportActionResult));
}


void FRHDTW_PlayerReports::DoViewReportsReceived()
{
	URH_PlayerInfo* ActivePlayerInfo = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo();
	}
	if (ActivePlayerInfo == nullptr)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	if (ActivePlayerInfo->GetReports() == nullptr)
	{
		ImGui::Text("Selected player has no Reports object");
		return;
	}
	ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

	if (ImGui::Button("Fetch Reports"))
	{
		ActivePlayerInfo->GetReports()->GetReportsReceivedAsync(FString(), GetReportsPageSize, FRH_PlayerInfoGetPlayerReportsDelegate::CreateSP(this, &FRHDTW_PlayerReports::HandleGetReportsReceived));
	}
	if (GetReportsReceivedNextCursor.Len() > 0)
	{
		ImGui::SameLine();
		if (ImGui::Button("Fetch Next Page"))
		{
			ActivePlayerInfo->GetReports()->GetReportsReceivedAsync(GetReportsReceivedNextCursor, GetReportsPageSize, FRH_PlayerInfoGetPlayerReportsDelegate::CreateSP(this, &FRHDTW_PlayerReports::HandleGetReportsReceived));
		}
	}

	ImGui::InputInt("Page Size", &GetReportsPageSize);

	ImGui::Separator();
	for (const auto& Report : ActivePlayerInfo->GetReports()->GetReportsReceived())
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*Report.GetReportId()), RH_DefaultTreeFlags))
		{
			ImGuiDisplayModelData(Report);
			ImGui::TreePop();
		}
	}

	ImGui::Separator();
	ImGui::Text("Result");
	ImGui::Text("%s", TCHAR_TO_UTF8(*GetReportsReceivedActionResult));
	ImGuiDisplayCopyableValue(TEXT("Next Cursor"), GetReportsReceivedNextCursor);
}

void FRHDTW_PlayerReports::DoViewReportsSent()
{
	URH_PlayerInfo* ActivePlayerInfo = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo();
	}
	if (ActivePlayerInfo == nullptr)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	if (ActivePlayerInfo->GetReports() == nullptr)
	{
		ImGui::Text("Selected player has no Reports object");
		return;
	}
	ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

	if (ImGui::Button("Fetch Reports"))
	{
		ActivePlayerInfo->GetReports()->GetReportsSentAsync(FString(), GetReportsPageSize, FRH_PlayerInfoGetPlayerReportsDelegate::CreateSP(this, &FRHDTW_PlayerReports::HandleGetReportsSent));
	}
	if (GetReportsSentNextCursor.Len() > 0)
	{
		ImGui::SameLine();
		if (ImGui::Button("Fetch Next Page"))
		{
			ActivePlayerInfo->GetReports()->GetReportsSentAsync(GetReportsSentNextCursor, GetReportsPageSize, FRH_PlayerInfoGetPlayerReportsDelegate::CreateSP(this, &FRHDTW_PlayerReports::HandleGetReportsSent));
		}
	}

	ImGui::InputInt("Page Size", &GetReportsPageSize);

	ImGui::Separator();
	for (const auto& Report : ActivePlayerInfo->GetReports()->GetReportsSent())
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*Report.GetReportId()), RH_DefaultTreeFlags))
		{
			ImGuiDisplayModelData(Report);
			ImGui::TreePop();
		}
	}

	ImGui::Separator();
	ImGui::Text("Result");
	ImGui::Text("%s", TCHAR_TO_UTF8(*GetReportsSentActionResult));
	ImGuiDisplayCopyableValue(TEXT("Next Cursor"), GetReportsSentNextCursor);
}


void FRHDTW_PlayerReports::HandleCreatedReport(bool bSuccess, const FRHAPI_PlayerReport& OutReport, const FRH_ErrorInfo& ErrorInfo)
{
	if (bSuccess)
	{
		CreateReportActionResult += TEXT("Create report succeeded.") LINE_TERMINATOR;
	}
	else
	{
		CreateReportActionResult += TEXT("Create report failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_PlayerReports::HandleGetReportsReceived(bool bSuccess, const TArray<FRHAPI_PlayerReport>& OutReports, const FString& NextCursor, const FRH_ErrorInfo& ErrorInfo)
{
	if (bSuccess)
	{
		GetReportsReceivedActionResult += TEXT("Get reports received succeeded.") LINE_TERMINATOR;
		GetReportsReceivedNextCursor = NextCursor;
	}
	else
	{
		GetReportsReceivedActionResult += TEXT("Get reports received failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_PlayerReports::HandleGetReportsSent(bool bSuccess, const TArray<FRHAPI_PlayerReport>& OutReports, const FString& NextCursor, const FRH_ErrorInfo& ErrorInfo)
{
	if (bSuccess)
	{
		GetReportsSentActionResult += TEXT("Get reports sent succeeded.") LINE_TERMINATOR;
		GetReportsSentNextCursor = NextCursor;
	}
	else
	{
		GetReportsSentActionResult += TEXT("Get reports sent failed.") LINE_TERMINATOR;
	}
}
