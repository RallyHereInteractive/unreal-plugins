// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Leaderboards.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LeaderboardSubsystem.h"
#include "PlayerListType.h"

FRHDTW_Leaderboards::FRHDTW_Leaderboards()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
}

FRHDTW_Leaderboards::~FRHDTW_Leaderboards()
{
}

void FRHDTW_Leaderboards::Do()
{
	if (ImGui::BeginTabBar("Leaderboards", ImGuiTabBarFlags_FittingPolicyScroll))
	{
		if (ImGui::BeginTabItem("View Config", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewConfig();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("View Leaderboard", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewLeaderboardPage();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("View Leaderboard Position", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewLeaderboardPosition();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("View Meta Data", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewMetaData();
			ImGui::EndTabItem();
		}
	}
}
void FRHDTW_Leaderboards::DoViewLeaderboardPage()
{
	ImGui::InputText("Leaderboard ID", &SelectedLeaderboardId);
	ImGui::InputText("Cursor", &SelectedCursor);
	ImGui::InputInt("Page Size", &PageSize);

	auto LeaderboardSS = GetSubsystemWithTextForFailures();
	if (!LeaderboardSS)
	{
		return;
	}

	if (ImGui::Button("Request Page"))
	{

		LeaderboardSS->GetLeaderboardPageAsync(SelectedLeaderboardId, SelectedCursor, PageSize);
	}

	if (ImGui::BeginTable("Leaderboard Page", 3, RH_TableFlagsPropSizing))
	{
		auto&& LatestPage = LeaderboardSS->GetCachedLeaderboardPage(SelectedLeaderboardId);
		if (LatestPage == nullptr)
		{
			return;
		}

		ImGui::TableSetupColumn("Leaderboard Position");
		ImGui::TableSetupColumn("Player UUID");
		ImGui::TableSetupColumn("Stat Value");
		ImGui::TableHeadersRow();

		for (auto&& entry : LatestPage->Entries)
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Position", entry.GetPosition(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("PlayerUUID", entry.GetPlayerUuid(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Stat", entry.GetStatValueOrNull(), ECopyMode::Value);
		}
		ImGui::EndTable();
	}
}

void FRHDTW_Leaderboards::DoViewConfig()
{
	auto LeaderboardSS = GetSubsystemWithTextForFailures();
	if (!LeaderboardSS)
	{
		return;
	}

	if (ImGui::Button("Refresh Config"))
	{
		LeaderboardSS->GetAllConfigAsync();
	}

	if (ImGui::BeginTable("LeaderboardConfigs", 11, RH_TableFlagsPropSizing))
	{

		ImGui::TableSetupColumn("Leaderboard ID");
		ImGui::TableSetupColumn("Player List Type");
		ImGui::TableSetupColumn("Max Size");
		ImGui::TableSetupColumn("Sort Order");
		ImGui::TableSetupColumn("Source");
		ImGui::TableSetupColumn("Source ID");
		ImGui::TableSetupColumn("Remove Restricted");
		ImGui::TableSetupColumn("Required Recent Login Days");
		ImGui::TableSetupColumn("Update Frequency");
		ImGui::TableSetupColumn("Expose Stats");
		ImGui::TableSetupColumn("Expose Players");
		ImGui::TableHeadersRow();

		for (auto&& itr : LeaderboardSS->GetCachedLeaderboardConfigs())
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Leaderboard ID", itr.Value.GetLeaderboardId(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Player List Type", EnumToString(itr.Value.GetPlayerList()), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Max Size", itr.Value.GetMaxSize(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Sort Order", EnumToString(itr.Value.GetSortOrder()), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Source", EnumToString(itr.Value.GetSource()), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Source ID", itr.Value.GetSourceId(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Remove Restricted", itr.Value.GetRemoveRestrictedOrNull(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Required Recent Login Days", itr.Value.GetRequiredRecentLoginDaysOrNull(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Update Frequency", itr.Value.GetUpdateFrequencySeconds(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Expose Stats", itr.Value.GetExposeStatOrNull(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Expose Players", itr.Value.GetExposePlayersOrNull(), ECopyMode::Value);
		}
		ImGui::EndTable();
	}
}

void FRHDTW_Leaderboards::DoViewLeaderboardPosition()
{
	ImGui::InputText("Leaderboard ID", &SelectedLeaderboardId);
	ImGui::InputInt("Leaderboard Position", &SelectedLeaderboardPosition);

	auto LeaderboardSS = GetSubsystemWithTextForFailures();
	if (!LeaderboardSS)
	{
		return;
	}

	if (ImGui::Button("Request Leaderboard Position"))
	{
		LeaderboardSS->GetLeaderboardPositionAsync(SelectedLeaderboardId, SelectedLeaderboardPosition);
	}
	if (ImGui::BeginTable("LeaderboardConfigs", 3, RH_TableFlagsPropSizing))
	{
		ImGui::TableSetupColumn("Leaderboard Position");
		ImGui::TableSetupColumn("Player UUID");
		ImGui::TableSetupColumn("Stat Value");
		ImGui::TableHeadersRow();


		auto& Entry = LeaderboardSS->GetCachedLeaderboardPosition();
		ImGui::TableNextRow();
		ImGui::TableNextColumn();
		ImGuiDisplayCopyableValue("Position", Entry.GetPosition(), ECopyMode::Value);
		ImGui::TableNextColumn();
		ImGuiDisplayCopyableValue("PlayerUUID", Entry.GetPlayerUuid(), ECopyMode::Value);
		ImGui::TableNextColumn();
		ImGuiDisplayCopyableValue("Stat", Entry.GetStatValueOrNull(), ECopyMode::Value);
		ImGui::EndTable();
	}

}

void FRHDTW_Leaderboards::DoViewMetaData()
{
	ImGui::InputText("Leaderboard ID", &SelectedLeaderboardId);

	auto LeaderboardSS = GetSubsystemWithTextForFailures();
	if (!LeaderboardSS)
	{
		return;
	}

	if (ImGui::Button("Request MetaData"))
	{

		LeaderboardSS->GetLeaderboardMetaDataAsync(SelectedLeaderboardId);
	}

	if (ImGui::BeginTable("Leaderboard MetaData", 2, RH_TableFlagsPropSizing))
	{
		ImGui::TableSetupColumn("Last Updated");
		ImGui::TableSetupColumn("Entry Count");
		ImGui::TableHeadersRow();
		auto&& MetaData = LeaderboardSS->GetCachedLeaderboardMetaData(SelectedLeaderboardId);
		if (MetaData != nullptr) 
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Last Updated", MetaData->GetLastUpdatedDatetime(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue("Entry Count", MetaData->GetEntryCount(), ECopyMode::Value);
		}
		ImGui::EndTable();
	}
}

URH_LeaderboardSubsystem* FRHDTW_Leaderboards::GetSubsystemWithTextForFailures() const
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return nullptr;
	}

	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("No Game Instance Found");
		return nullptr;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISubsystem == nullptr)
	{
		ImGui::Text("No Game Instance Subsystem Found");
		return nullptr;
	}
	
	auto pGILeaderboardSubsystem = pGISubsystem->GetLeaderboardSubsystem();
	if (pGILeaderboardSubsystem  == nullptr)
	{
		ImGui::Text("No Leaderboard Subsystem Found");
		return nullptr;
	}
	return pGILeaderboardSubsystem;
}
