// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerRanks.h"
#include "RH_PlayerInfoSubsystem.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"

FRHDTW_PlayerRanks::FRHDTW_PlayerRanks()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	ModifyRankIdInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	ModifyRankMuInput = 0.f;
	ModifyRankSigmaInput = 0.f;

	UpdateRankingActionResult.Empty();
}

FRHDTW_PlayerRanks::~FRHDTW_PlayerRanks()
{
}

void FRHDTW_PlayerRanks::Do()
{
	if (ImGui::BeginTabBar("Rankings", ImGuiTabBarFlags_FittingPolicyScroll))
	{
		if (ImGui::BeginTabItem("View Rankings", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewRankings();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Modify Rankings", nullptr, ImGuiTabItemFlags_None))
		{
			DoModifyRankings();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_PlayerRanks::DoViewRankings()
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
	ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphensLower)));

	if (ImGui::Button("Get Rankings Data"))
	{
		ActivePlayerInfo->GetPlayerRankings(FTimespan(), true);
	}
	ImGui::Separator();

	if (ImGui::BeginTable("RankingsTable", 4, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("RankId");
		ImGui::TableSetupColumn("Mu (TSv1 Rating)");
		ImGui::TableSetupColumn("Sigma (TSv1 Variance)");
		ImGui::TableSetupColumn("Custom Data");
		ImGui::TableHeadersRow();

		// Content
		for (const auto& Pair : ActivePlayerInfo->GetAllStoredPlayerRankings())
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			auto& Ranking = Pair.Value;
			ImGui::Text("%s", TCHAR_TO_UTF8(*Pair.Key));
			ImGui::TableNextColumn();
			ImGui::Text("%f", Ranking.Rank.GetMu());
			ImGui::TableNextColumn();
			ImGui::Text("%f", Ranking.Rank.GetSigma());
			ImGui::TableNextColumn();
			ImGuiDisplayCustomData(Ranking.Rank.GetCustomDataOrNull());
		}

		ImGui::EndTable();
	}
}

void FRHDTW_PlayerRanks::DoModifyRankings()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	}
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);

	ImGui::InputText("RankId", ModifyRankIdInput.GetData(), ModifyRankIdInput.Num());
	ImGui::InputFloat("Sigma", &ModifyRankMuInput);
	ImGui::InputFloat("Mu", &ModifyRankSigmaInput);

	if (!UpdateRankingActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Update Ranking Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*UpdateRankingActionResult));
		}
	}

	if (ImGui::Button("Update"))
	{
		UpdateRankingActionResult.Empty();

		FRHAPI_PlayerRankUpdateRequest UpdateRequest;
		UpdateRequest.Rank.SetMu(ModifyRankMuInput);
		UpdateRequest.Rank.SetSigma(ModifyRankSigmaInput);

		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, UpdateRequest](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					auto Delegate = FRH_PlayerInfoGetPlayerRankingsDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerRanks::HandleUpdateRankingResponse, PlayerInfo->GetRHPlayerUuid());
					PlayerInfo->UpdatePlayerRanking(ImGuiGetStringFromTextInputBuffer(ModifyRankIdInput), UpdateRequest, MoveTemp(Delegate));
				}
			}));
	}
}

void FRHDTW_PlayerRanks::HandleUpdateRankingResponse(bool bSuccess, const TArray<FRHAPI_PlayerRankResponseV2>& PlayerRankingInfo, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		UpdateRankingActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Update player ranking succeeded.") LINE_TERMINATOR;
	}
	else
	{
		UpdateRankingActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Update player ranking failed.") LINE_TERMINATOR;
	}
}