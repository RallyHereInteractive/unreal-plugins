// Copyright 2016-2023 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
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
}

FRHDTW_Presence::~FRHDTW_Presence()
{
}

void FRHDTW_Presence::Do()
{
	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("%s", "Please select a Local Player in order to log in.");
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

	if (!ImGui::BeginTabBar("Presence"))
	{
		return;
	}
	
	if (ImGui::BeginTabItem("Self"))
	{
		ImGui::BeginChild("Self");
		DoPresenceTab(pRH_LocalPlayerPresenceSubsystem);
		ImGui::EndChild();
		ImGui::EndTabItem();
	}

	if (ImGui::BeginTabItem("Settings"))
	{
		ImGui::BeginChild("Settings");
		DoSettingsTab(pRH_LocalPlayerPresenceSubsystem);
		ImGui::EndChild();
		ImGui::EndTabItem();
	}

	ImGui::EndTabBar();
}

void FRHDTW_Presence::DoPresenceTab(URH_LocalPlayerPresenceSubsystem* pRH_PresenceSubsystem)
{
	ImGui::Text("DisplayName : %s", TCHAR_TO_UTF8(*DisplayName));
	ImGui::Text("Platform : %s", TCHAR_TO_UTF8(*Platform));
	ImGui::Combo("Status", &StatusInput, "Online\0Away\0Invisible\0Offline\0", 4);
	ImGui::InputText("Message", &MessageInput);
	ImGui::Checkbox("Do Not Disturb", &DoNotDisturbInput);
	ImGui::InputText("Custom Property", &CustomPropertyInput);
	ImGui::InputText("Custom Value", &CustomValueInput);
	ImGuiDisplayCustomData(CustomData);
	ImGui::Text("%s", LastUpdateResult.c_str());
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
		auto Delegate = RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleUpdatePresenceSelf);
		pRH_PresenceSubsystem->UpdatePlayerPresenceSelf(req, MoveTemp(Delegate));

		// TODO - do not use a direct call as above, use subsystem calls
	}
	ImGui::SameLine();
	if (ImGui::Button("Fetch Self"))
	{
		auto req = RallyHereAPI::FRequest_GetPlayerPresenceSelf();
		auto Delegate = RallyHereAPI::FDelegate_GetPlayerPresenceSelf::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleGetPlayerPresenceSelf);
		pRH_PresenceSubsystem->GetPlayerPresenceSelf(req, MoveTemp(Delegate));
	}
	ImGui::SameLine();
	if (ImGui::Button("Start Refresh Timer"))
	{
		pRH_PresenceSubsystem->StartRefreshTimer();
	}
	ImGui::SameLine();
	if (ImGui::Button("Stop Refresh Timer"))
	{
		pRH_PresenceSubsystem->StopRefreshTimer();
	}
	ImGui::SameLine();
	if (ImGui::Button("Refresh Status"))
	{
		pRH_PresenceSubsystem->RefreshStatus();
	}

}

void FRHDTW_Presence::DoSettingsTab(URH_LocalPlayerPresenceSubsystem* pRH_PresenceSubsystem)
{
	if (ImGui::Button("Refresh"))
	{
		auto req = RallyHereAPI::FRequest_GetPresenceSettings();
		auto Delegate = RallyHereAPI::FDelegate_GetPresenceSettings::CreateSP(SharedThis(this), &FRHDTW_Presence::HandleGetSettings);
		pRH_PresenceSubsystem->GetSettings(req, MoveTemp(Delegate));
	}
	ImGui::Text("Last update result %s", LastSettingsUpdateResult.c_str());
	ImGui::Text("Self Ping Interval Seconds : %d", SelfPingIntervalSeconds);
	ImGui::Text("Last Seen Age Considered Offline Seconds : %d", LastSeenAgeConsideredOfflineSeconds);
}

void FRHDTW_Presence::HandleUpdatePresenceSelf(const RallyHereAPI::FResponse_UpdatePlayerPresenceSelf& Resp)
{
	LastUpdateResult = TCHAR_TO_UTF8(*Resp.GetResponseString());
	if (Resp.IsSuccessful())
	{
	}
}

void FRHDTW_Presence::HandleGetPlayerPresenceSelf(const RallyHereAPI::FResponse_GetPlayerPresenceSelf& Resp)
{
	LastUpdateResult = TCHAR_TO_UTF8(*Resp.GetResponseString());
	if (Resp.IsSuccessful())
	{
		StatusInput = static_cast<int32>(Resp.Content.GetStatus());
		if (const auto Message = Resp.Content.GetMessageOrNull())
			MessageInput = TCHAR_TO_UTF8(**Message);
		Platform = Resp.Content.Platform;
		DisplayName = Resp.Content.DisplayName;
		Resp.Content.GetDoNotDisturb(DoNotDisturbInput);
		if (const auto NewCustomData = Resp.Content.GetCustomDataOrNull())
			CustomData = *NewCustomData;
	}
}

void FRHDTW_Presence::HandleGetSettings(const RallyHereAPI::FResponse_GetPresenceSettings& Resp)
{
	Resp.Content.GetSelfPingIntervalSeconds(SelfPingIntervalSeconds);
	Resp.Content.GetLastSeenAgeConsideredOfflineSeconds(LastSeenAgeConsideredOfflineSeconds);
	LastSettingsUpdateResult = TCHAR_TO_UTF8(*Resp.GetResponseString());
}