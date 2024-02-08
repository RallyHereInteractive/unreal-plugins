// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Match.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "RH_ImGuiUtilities.h"

FRHDTW_Match::FRHDTW_Match()
{
	DefaultPos = FVector2D(610, 20);
}

FRHDTW_Match::~FRHDTW_Match()
{
}

void FRHDTW_Match::Do()
{
	auto* GI = GetGameInstance();
	if (GI == nullptr)
	{
		ImGui::Text("%s", "Could not find owning game instance.");
		return;
	}

	auto* pGISS = GI->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISS == nullptr)
	{
		ImGui::Text("%s", "URH_GameInstanceSubsystem not available.");
		return;
	}

	auto* pRH_MatchSubsystem = pGISS->GetMatchSubsystem();
	if (pRH_MatchSubsystem == nullptr)
	{
		ImGui::Text("%s", "pRH_MatchSubsystem not available.");
		return;
	}

	if (ImGui::BeginTabBar("Config"))
	{
		if (ImGui::BeginTabItem("Player"))
		{
			DoViewPlayerMatches();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Search"))
		{
			DoSearchMatches();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Create"))
		{
			DoCreateMatch();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Match::DoCreateMatch()
{

}

void FRHDTW_Match::DoSearchMatches()
{

}

void FRHDTW_Match::DoViewPlayerMatches()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	}

	ImGui::Text("Actions towards [%d] selected players:", NumSelectedPlayers);
	bool bRequestHistory = false;
	bool bForceRequestHistory = false;
	if (ImGui::Button("Request History"))
	{
		bRequestHistory = true;
	}
	ImGui::SameLine();
	if (ImGui::Button("Request History (force)"))
	{
		bForceRequestHistory = true;
	}

	if (bRequestHistory || bForceRequestHistory)
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, bForceRequestHistory](URH_PlayerInfo* TargetedPlayer)
			{
				if (TargetedPlayer != nullptr && TargetedPlayer->GetMatches() != nullptr)
				{
					TargetedPlayer->GetMatches()->RequestUpdate(bForceRequestHistory);
				}
			}));
	}

	// loop through each player and display their matches
	ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, bForceRequestHistory](URH_PlayerInfo* TargetedPlayer)
		{
			ImGui::Separator();

			const FString PlayerHeader = FString::Printf(TEXT("Player [%s]"), TargetedPlayer != nullptr ? *TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens) : TEXT("null"));
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*PlayerHeader), RH_DefaultTreeFlagsDefaultOpen))
			{
				ImGuiDisplayCopyableValue(TEXT("PlayerId"), TargetedPlayer != nullptr ? *TargetedPlayer->GetRHPlayerUuid().ToString() : TEXT("null"));

				if (TargetedPlayer != nullptr && TargetedPlayer->GetMatches() != nullptr)
				{
					for (const auto& MatchPair : TargetedPlayer->GetMatches()->Matches)
					{
						const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *MatchPair.Key);
						if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
						{
							const auto& PlayerMatch = MatchPair.Value;
							const auto* Match = PlayerMatch.GetMatchOrNull();

							ImGuiDisplayCopyableValue(TEXT("MatchId"), MatchPair.Key);

							if (Match != nullptr)
							{
								// if game instance subsystem exists, allow searching full match
								const auto pGameInstance = GetGameInstance();
								if (pGameInstance != nullptr)
								{
									const auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
									if (pGISubsystem != nullptr)
									{
										// TODO - allow inline search in global match catch and display inline here?
									}
								}
							}

							ImGuiDisplayModelData(PlayerMatch);

							ImGui::TreePop();
						}
					}
				}
				
				ImGui::TreePop();
			}
		}));
}