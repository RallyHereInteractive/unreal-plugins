#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerPlatforms.h"
#include "RH_GameInstanceSubsystem.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"

FRHDTW_PlayerPlatforms::FRHDTW_PlayerPlatforms()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
	GetPlatformsActionResult.Empty();
}

FRHDTW_PlayerPlatforms::~FRHDTW_PlayerPlatforms()
{
}

void FRHDTW_PlayerPlatforms::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	int NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	if (NumSelectedPlayers == 0)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	else
	{
		ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);
	}

	if (ImGui::Button("Get All Platforms"))
	{
		GetPlatformsActionResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					PlayerInfo->GetLinkedPlatformInfo(FTimespan(), true, FRH_PlayerInfoGetPlatformsDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerPlatforms::HandleGetLinkedPlatforms, PlayerInfo->GetRHPlayerUuid()));
				}
			}));
	}

	if (!GetPlatformsActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Get Platforms Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*GetPlatformsActionResult));
		}
	}
	ImGui::Separator();

	if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
	{
		ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

		if (ImGui::BeginTable("RHPlatformsTable", 3, RH_TableFlagsPropSizing))
		{
			// Header
			ImGui::TableSetupColumn("Platform User Id");
			ImGui::TableSetupColumn("Platform Type");
			ImGui::TableSetupColumn("Last Known Display Name");
			ImGui::TableHeadersRow();

			// Content
			for (auto ppi : ActivePlayerInfo->GetPlayerPlatforms())
			{
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGuiDisplayCopyableValue("PlatformUserId", ppi->GetPlatformUserId(), ECopyMode::Value);
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", ppi->GetPlatform())));
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*ppi->GetLastKnownDisplayName()));
			}

			ImGui::EndTable();
		}
	}
}

void FRHDTW_PlayerPlatforms::HandleGetLinkedPlatforms(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& LinkedPlatforms, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		GetPlatformsActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Refresh Linked Platforms succeeded.") LINE_TERMINATOR;
	}
	else
	{
		GetPlatformsActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Refresh Linked Platforms failed.") LINE_TERMINATOR;
	}
}