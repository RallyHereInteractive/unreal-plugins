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
		ImGui::EndTabBar();
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

	if (ImGui::TreeNodeEx("Leaderboard Page", RH_DefaultTreeFlags))
	{
		FRHAPI_LeaderboardPage LatestPage{};
		bool success = LeaderboardSS->GetCachedLeaderboardPage(SelectedLeaderboardId, LatestPage);
		if (success)
		{
			for (auto&& entry : LatestPage.Entries)
			{
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("Leaderboard Position %d"), entry.GetPosition())), RH_DefaultTreeFlags))
				{
					ImGuiDisplayModelData<FRHAPI_LeaderboardEntry>(entry);
					ImGui::TreePop();
				}
			}
		}
		ImGui::TreePop();
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

	if (ImGui::TreeNodeEx("Leaderboard Configs", RH_DefaultTreeFlags))
	{

		TMap<FString, FRHAPI_LeaderboardConfig> Configs{};
		bool success = LeaderboardSS->GetCachedLeaderboardConfigs(Configs);
		if (success)
		{
			for (auto&& itr : Configs)
			{
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*itr.Value.GetLeaderboardId()), RH_DefaultTreeFlags)) 
				{
					ImGuiDisplayModelData<FRHAPI_LeaderboardConfig>(itr.Value);
					ImGui::TreePop();
				}
			}
		}
		ImGui::TreePop();
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
	if (ImGui::TreeNodeEx("Leaderboard Position", RH_DefaultTreeFlags))
	{
		FRHAPI_LeaderboardEntry Entry{};
		bool success = LeaderboardSS->GetCachedLeaderboardPosition(Entry);
		if (success)
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*SelectedLeaderboardId), RH_DefaultTreeFlags))
			{
				ImGuiDisplayModelData<FRHAPI_LeaderboardEntry>(Entry);
				ImGui::TreePop();
			}
		}
		ImGui::TreePop();
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

	if (ImGui::TreeNodeEx("Leaderboard MetaData", RH_DefaultTreeFlags))
	{
		FRHAPI_LeaderboardMetaData MetaData{};
		bool success = LeaderboardSS->GetCachedLeaderboardMetaData(SelectedLeaderboardId, MetaData);
		if (success) 
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*SelectedLeaderboardId), RH_DefaultTreeFlags))
			{
				ImGuiDisplayModelData<FRHAPI_LeaderboardMetaData>(MetaData);
				ImGui::TreePop();
			}
		}
		ImGui::TreePop();
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
