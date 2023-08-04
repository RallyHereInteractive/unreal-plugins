// Copyright 2016-2023 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Presence.h"

#include "imgui.h"
#include "imgui_stdlib.h"

#include "RallyHereIntegrationModule.h"
#include "RH_ImGuiUtilities.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "Engine/LocalPlayer.h"

FRHDTW_Presence::FRHDTW_Presence()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
	GetPresenceResult.Empty();
	LastUpdateResult.Empty();
}

FRHDTW_Presence::~FRHDTW_Presence()
{
}

void FRHDTW_Presence::Do()
{
	if (ImGui::BeginTabBar("Presence"))
	{
		if (ImGui::BeginTabItem("View Presence"))
		{
			ImGui::BeginChild("View Presence");
			DoViewPresenceTab();
			ImGui::EndChild();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Update Self"))
		{
			ImGui::BeginChild("Update Self");
			DoSelfTab();
			ImGui::EndChild();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Presence::DoViewPresenceTab()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	int NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}

	ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);

	if (ImGui::Button("Get Presence"))
	{
		GetPresenceResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetPresence())
					{
						pp->RequestUpdate(false, FRH_OnRequestPlayerPresenceDelegate::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleGetPresence, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPresenceResult += "[" + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + "] No presence found on player info." + LINE_TERMINATOR;
					}
				}
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Get Presence (Force)"))
	{
		GetPresenceResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetPresence())
					{
						pp->RequestUpdate(true, FRH_OnRequestPlayerPresenceDelegate::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleGetPresence, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPresenceResult += "[" + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + "] No presence found on player info." + LINE_TERMINATOR;
					}
				}
			}));
	}

	if (!GetPresenceResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Get Presence Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*GetPresenceResult));
		}
	}
	ImGui::Separator();

	if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
	{
		ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

		if (auto pp = ActivePlayerInfo->GetPresence())
		{
			if (ImGui::BeginTable("RHPresenceTable", 2, RH_TableFlagsPropSizing))
			{
				// Header
				ImGui::TableSetupColumn("Key");
				ImGui::TableSetupColumn("Value");
				ImGui::TableHeadersRow();

				// Content
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("Uuid");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*pp->PlayerUuid.ToString(EGuidFormats::DigitsWithHyphens)));

				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("Platform");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*pp->Platform));

				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("Status");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_OnlineStatus", pp->Status)));

				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("Message");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*pp->Message));

				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("Display Name");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*pp->DisplayName));

				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("Last Updated");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*pp->LastUpdated.ToString()));

				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::Text("ETag");
				ImGui::TableNextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*pp->ETag));

				ImGui::EndTable();
			}

			ImGuiDisplayCustomData(pp->CustomData);
		}
	}
}

void FRHDTW_Presence::DoSelfTab()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
	}
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("Please select a local player (has Controller Id) in Player Repository.");
	}
	ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);

	ImGui::Combo("Status", &StatusInput, "Online\0Away\0Invisible\0Offline\0", 4);
	ImGui::InputText("Message", &MessageInput);
	ImGui::Checkbox("Do Not Disturb", &DoNotDisturbInput);
	ImGui::SetNextItemWidth(200.f);
	ImGui::InputText("Custom Property", &CustomPropertyInput);
	ImGui::SetNextItemWidth(200.f);
	ImGui::InputText("Custom Value", &CustomValueInput);

	if (!LastUpdateResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Presence Update Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*LastUpdateResult));
		}
	}

	if (ImGui::Button("Update Self"))
	{
		auto req = RallyHereAPI::FRequest_UpdatePlayerPresenceSelf();
		req.PlayerPresenceUpdateSelf.SetStatus(static_cast<ERHAPI_OnlineStatus>(StatusInput));
		req.PlayerPresenceUpdateSelf.SetMessage(FString(MessageInput.c_str()));
		req.PlayerPresenceUpdateSelf.SetDoNotDisturb(DoNotDisturbInput);
		if (!CustomPropertyInput.empty() && !CustomValueInput.empty())
		{
			TMap<FString, FString> newCustomData;
			newCustomData.Add(CustomPropertyInput.c_str(), CustomValueInput.c_str());
			req.PlayerPresenceUpdateSelf.SetCustomData(newCustomData);
		}

		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this, &req](URH_LocalPlayerSubsystem* LPSS)
			{
				if (LPSS)
				{
					if (URH_LocalPlayerPresenceSubsystem* LPPSS = LPSS->GetPresenceSubsystem())
					{
						LPPSS->UpdatePlayerPresenceSelf(req, RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleUpdatePresenceSelf, LPSS->GetPlayerUuid()));
					}
				}
			}));

		// TODO - do not use a direct call as above, use subsystem calls
	}
	
	ImGui::Text("");
	ImGui::Separator();
	ImGui::Separator();

	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("Please select a local player (has Controller Id) in Player Repository.");
		return;
	}

	URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		ImGui::Text("%s", "RH_LocalPlayerSubsystem not available.");
		return;
	}

	URH_LocalPlayerPresenceSubsystem* pRH_LocalPlayerPresenceSubsystem = pRH_LocalPlayerSubsystem->GetPresenceSubsystem();
	if (pRH_LocalPlayerPresenceSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_LocalPlayerPresenceSubsystem not available.");
		return;
	}

	FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
	ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

	float refreshTimeRemaining = INDEX_NONE;
	bool timerActive = pRH_LocalPlayerPresenceSubsystem->IsRefreshTimerActive(refreshTimeRemaining);
	ImGui::Text("Is presence polling timer active : %s", timerActive ? "True" : "False");
	if (timerActive)
	{
		ImGui::Text("Seconds until next poll : %.2f", refreshTimeRemaining);
	}
	else
	{
		ImGui::Text("Seconds until next poll : N/A");
	}
	if (ImGui::Button("Start Refresh Timer"))
	{
		pRH_LocalPlayerPresenceSubsystem->StartRefreshTimer();
	}
	ImGui::SameLine();
	if (ImGui::Button("Stop Refresh Timer"))
	{
		pRH_LocalPlayerPresenceSubsystem->StopRefreshTimer();
	}
	ImGui::SameLine();
	if (ImGui::Button("Refresh Status"))
	{
		pRH_LocalPlayerPresenceSubsystem->RefreshStatus();
	}

	ImGui::Separator();
	/** Display settings provided for the client by the presence api
	* This includes expected timeout rates.
	*/
	ImGui::Text("Last update result : %s", LastSettingsUpdateResult.c_str());
	ImGui::Text("Self Ping Interval Seconds : %d", SelfPingIntervalSeconds);
	ImGui::Text("Last Seen Age Considered Offline Seconds : %d", LastSeenAgeConsideredOfflineSeconds);
	if (ImGui::Button("Get Presence Settings"))
	{
		auto req = RallyHereAPI::FRequest_GetPresenceSettings();
		auto Delegate = RallyHereAPI::FDelegate_GetPresenceSettings::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleGetSettings);
		pRH_LocalPlayerPresenceSubsystem->GetSettings(req, MoveTemp(Delegate));
	}
}

void FRHDTW_Presence::HandleGetPresence(bool bSuccess, URH_PlayerPresence* PresenceData, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		GetPresenceResult += "[" + GetShortUuid(PlayerUuid) + "] Get Player Presence succeeded." + LINE_TERMINATOR;
	}
	else
	{
		GetPresenceResult += "[" + GetShortUuid(PlayerUuid) + "] Get Player Presence failed." + LINE_TERMINATOR;
	}
}

void FRHDTW_Presence::HandleUpdatePresenceSelf(const RallyHereAPI::FResponse_UpdatePlayerPresenceSelf& Resp, FGuid PlayerUuid)
{
	if (Resp.IsSuccessful())
	{
		LastUpdateResult += "[" + GetShortUuid(PlayerUuid) + "] Update Self successful." + LINE_TERMINATOR;
	}
	else
	{
		LastUpdateResult += "[" + GetShortUuid(PlayerUuid) + "] Update Self failed." + LINE_TERMINATOR;
	}
}

void FRHDTW_Presence::HandleGetSettings(const RallyHereAPI::FResponse_GetPresenceSettings& Resp)
{
	Resp.Content.GetSelfPingIntervalSeconds(SelfPingIntervalSeconds);
	Resp.Content.GetLastSeenAgeConsideredOfflineSeconds(LastSeenAgeConsideredOfflineSeconds);
	LastSettingsUpdateResult = TCHAR_TO_UTF8(*Resp.GetResponseString());
}