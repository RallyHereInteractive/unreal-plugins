// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RHDTW_Notifications.h"
#include "RallyHereDebugToolModule.h"
#include "RallyHereIntegrationModule.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"

#include "RH_ImGuiUtilities.h"

FRHDTW_Notifications::FRHDTW_Notifications()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
}


void ImGuiDisplayPlayerInfoNotifications(URH_PlayerInfo* SelectedPlayerInfo)
{
	if (SelectedPlayerInfo != nullptr)
	{
		FString Note = FString::Printf(TEXT("For first selected local player %s."), *GetShortUuid(SelectedPlayerInfo->GetRHPlayerUuid()));
		ImGui::Text("%s", TCHAR_TO_UTF8(*Note));
	}

	const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

	if (SelectedPlayerInfo == nullptr || SelectedPlayerInfo->GetPlayerNotifications() == nullptr)
	{
		return;
	}

	if (ImGui::BeginTable("NotificationsTable", 7, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("API");
		ImGui::TableSetupColumn("Message");
		ImGui::TableSetupColumn("ID");
		ImGui::TableSetupColumn("Created");
		ImGui::TableSetupColumn("URL");
		ImGui::TableSetupColumn("ETag");
		ImGui::TableSetupColumn("Custom Data");
		ImGui::TableHeadersRow();

		// Content
		for (const auto& Notification : SelectedPlayerInfo->GetPlayerNotifications()->GetStreamingHistory())
		{
			ImGui::PushID(TCHAR_TO_UTF8(*Notification.GetNotificationId()));

			const FString URL = Notification.GetRhUrl(TEXT(""));
			FString APIName;
			TArray<FString> APIParams;
			RH_BreakApartURL(URL, BaseURL, APIName, APIParams);

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("API"), APIName, ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Message"), Notification.GetMessage(), ECopyMode::Value, true);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Notification ID"), Notification.GetNotificationId(), ECopyMode::Value, true);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Created"), Notification.GetCreated(), ECopyMode::Value, true);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("URL"), URL, ECopyMode::Value, true);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("ETag"), Notification.GetEtagOrNull(), ECopyMode::Value, true);
			ImGui::TableNextColumn();
			ImGuiDisplayCustomData(Notification.GetCustomData());

			ImGui::PopID();
		}

		ImGui::EndTable();
	}
}

void FRHDTW_Notifications::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		return;
	}

	int NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	if (NumSelectedPlayers == 0)
	{
		ImGui::Text("Please select a player in Player Repository.");
		return;
	}
	else
	{
		ImGui::Text("For [%d] selected Players.", NumSelectedPlayers);
	}

	bool someoneNotStreaming = false;
	for (auto* PlayerInfo : pOwner->GetAllSelectedPlayerInfos())
	{
		if (PlayerInfo != nullptr && PlayerInfo->GetPlayerNotifications() != nullptr)
		{
			if (!PlayerInfo->GetPlayerNotifications()->IsStreaming())
			{
				someoneNotStreaming = true;
				break;
			}
		}
	}

	if (someoneNotStreaming)
	{
		if (ImGui::Button("Start Streaming"))
		{
			ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([](URH_PlayerInfo* PlayerInfo)
				{
					if (PlayerInfo && PlayerInfo->GetPlayerNotifications() != nullptr)
					{
						PlayerInfo->GetPlayerNotifications()->StartStreamingLatestNotifications();
					}
				}));
		}
	}
	else
	{
		if (ImGui::Button("Stop Streaming"))
		{
			ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([](URH_PlayerInfo* PlayerInfo)
				{
					if (PlayerInfo && PlayerInfo->GetPlayerNotifications() != nullptr)
					{
						PlayerInfo->GetPlayerNotifications()->StopStreamingLatestNotifications();
					}
				}));
		}
	}

	int32 NumNotifications = 150;
	ImGui::SetNextItemWidth(100);
	if (ImGui::InputInt("History Size Per Player", &NumNotifications))
	{
		NumNotifications = FMath::Clamp(NumNotifications, 0, 1000);
	}
	ImGui::SameLine();
	if (ImGui::Button("Apply"))
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([NumNotifications](URH_PlayerInfo* PlayerInfo)
		{
			if (PlayerInfo && PlayerInfo->GetPlayerNotifications() != nullptr)
			{
				PlayerInfo->GetPlayerNotifications()->SetStreamingHistorySize(NumNotifications);
			}
		}));
	}

	const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

	ImGui::Separator();
	ImGui::SetNextItemWidth(100);	// API names are short, so reserve space on the line for the parameters
	if (ImGui::InputText("API Name", &APIName))
	{
		URL = BaseURL + TEXT("/") + APIName + TEXT("/") + APIParams;
	}
	ImGui::SameLine();
	if (ImGui::InputText("API Params", &APIParams))
	{
		URL = BaseURL + TEXT("/") + APIName + TEXT("/") + APIParams;
	}
	if (ImGui::InputText("URL", &URL))
	{
		FString NewAPIName;
		TArray<FString> NewAPIParams;
		if (RH_BreakApartURL(URL, BaseURL, NewAPIName, NewAPIParams))
		{
			APIName = NewAPIName;
			APIParams = FString::Join(NewAPIParams, TEXT("/"));
		}

	}
	
	ImGui::InputText("Message", &Message);

	if (ImGui::Button("Create"))
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
		{
			if (PlayerInfo && PlayerInfo->GetPlayerNotifications() != nullptr)
			{
				PlayerInfo->GetPlayerNotifications()->CreateNotification(PlayerInfo->GetRHPlayerUuid(), Message, URL);
			}
		}));

		for (auto* LocalPlayer : pOwner->GetAllSelectedLocalPlayers())
		{
			URH_LocalPlayerSubsystem* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();

		}
	}

	ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
		{
			ImGui::Separator();

			ImGui::Text("Player: %s", TCHAR_TO_UTF8(*GetShortUuid(PlayerInfo->GetRHPlayerUuid())));
			ImGuiDisplayPlayerInfoNotifications(PlayerInfo);
		}));
}