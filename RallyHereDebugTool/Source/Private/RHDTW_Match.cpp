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
	SearchPageSize = 0;
	SearchInstanceId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchAllocationId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchSessionId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchHostPlayerUuid.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchRegionId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchCursor.SetNumZeroed(1024);	// cursor may have data packed in, so make it large
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
		if (ImGui::BeginTabItem("Local Player"))
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
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("No Game Instance Found");
		return;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	auto pGIMatchSubsystem = pGISubsystem != nullptr ? pGISubsystem->GetMatchSubsystem() : nullptr;

	if (pGIMatchSubsystem == nullptr)
	{
		ImGui::Text("No Match Subsystem Found");
		return;
	}

	ImGui::Text("Search Matches (Blank/0 uses default behavior)");

	static int32 GuidFieldLength = 300;
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("SessionId", SearchSessionId.GetData(), SearchSessionId.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("InstanceId", SearchInstanceId.GetData(), SearchInstanceId.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("AllocationId", SearchAllocationId.GetData(), SearchAllocationId.Num());
	
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("HostPlayerUuid", SearchHostPlayerUuid.GetData(), SearchHostPlayerUuid.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("RegionId", SearchRegionId.GetData(), SearchRegionId.Num());

	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputInt("Page Size", &SearchPageSize, 5, 10);
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("Cursor", SearchCursor.GetData(), SearchCursor.Num());

	if (ImGui::Button("Search"))
	{
		FRH_MatchSearchParams SearchParams;
		SearchParams.PageSize = SearchPageSize;
		SearchParams.InstanceId = FString(ANSI_TO_TCHAR(SearchInstanceId.GetData()));
		SearchParams.AllocationId = FString(ANSI_TO_TCHAR(SearchAllocationId.GetData()));
		SearchParams.SessionId = FString(ANSI_TO_TCHAR(SearchSessionId.GetData()));
		SearchParams.HostPlayerUuid = FString(ANSI_TO_TCHAR(SearchHostPlayerUuid.GetData()));
		SearchParams.RegionId = FString(ANSI_TO_TCHAR(SearchRegionId.GetData()));
		SearchParams.Cursor = FString(ANSI_TO_TCHAR(SearchCursor.GetData()));

		pGIMatchSubsystem->SearchMatches(SearchParams, FRH_OnMatchSearchCompleteDelegate::CreateSP(this, &FRHDTW_Match::OnSearchMatchesComplete));	
	}

	ImGui::Separator();

	ImGui::Text("Results");
	ImGui::SameLine();
	if (ImGui::SmallButton("Clear"))
	{
		SearchResults.Empty();
	}

	for (const auto& SearchResult : SearchResults)
	{
		const FString SearchHeader = FString::Printf(TEXT("Search %s"), *SearchResult.Result.GetDescription());
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*SearchHeader), RH_DefaultTreeFlags))
		{
			ImGuiDisplayCopyableValue(TEXT("Success"), SearchResult.bSuccess);
			if (SearchResult.bSuccess)
			{
				for (const auto& Match : SearchResult.Result.Matches)
				{
					const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *Match.GetMatchId());
					if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
					{
						ImGuiDisplayModelData(Match);
						ImGui::TreePop();
					}
				}

				if (SearchResult.Result.NextPageCursor != 0)
				{
					if (ImGui::Button("Search Next Page"))
					{
						FRH_MatchSearchParams SearchParams = SearchResult.Result.SearchParams;
						SearchParams.Cursor = FString::Printf(TEXT("%d"), SearchResult.Result.NextPageCursor);
						pGIMatchSubsystem->SearchMatches(SearchParams, FRH_OnMatchSearchCompleteDelegate::CreateSP(this, &FRHDTW_Match::OnSearchMatchesComplete));
					}
				}
			}
			else
			{
				ImGuiDisplayCopyableValue(TEXT("Error"), SearchResult.ErrorInfo.ResponseContent);
			}
			
			ImGui::TreePop();
		}
	}

	ImGui::Separator();

	ImGui::Text("Match Cache");
	ImGui::SameLine();
	if (ImGui::SmallButton("Clear"))
	{
		pGIMatchSubsystem->ClearMatchesCache();
	}

	for (const auto& MatchPair : pGIMatchSubsystem->GetAllMatches())
	{
		const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *MatchPair.Key);
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlags))
		{
			const auto& Match = MatchPair.Value;
			ImGuiDisplayModelData(Match);
			ImGui::TreePop();
		}
	}
}

void FRHDTW_Match::OnSearchMatchesComplete(bool bSuccess, const FRH_MatchSearchResult& Result, const FRH_ErrorInfo& ErrorInfo)
{
	FFullSearchResult NewResult;
	NewResult.bSuccess = bSuccess;
	NewResult.Result = Result;
	NewResult.ErrorInfo = ErrorInfo;
	SearchResults.Add(NewResult);
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

			check(TargetedPlayer != nullptr);

			const FString PlayerId = TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens);

			const FString PlayerHeader = FString::Printf(TEXT("Player [%s]"), *PlayerId);
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*PlayerHeader), RH_DefaultTreeFlagsDefaultOpen))
			{
				ImGuiDisplayCopyableValue(TEXT("PlayerId"), PlayerId);

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