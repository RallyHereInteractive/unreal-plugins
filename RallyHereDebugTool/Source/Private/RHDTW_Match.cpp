// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RHDTW_Match.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_MatchSubsystem.h"

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

		if (ImGui::BeginTabItem("View"))
		{
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Create"))
		{
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}
