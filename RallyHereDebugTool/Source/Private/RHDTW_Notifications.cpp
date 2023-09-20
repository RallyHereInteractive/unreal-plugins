// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RHDTW_Notifications.h"
#include "RallyHereDebugToolModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"

#include "RH_ImGuiUtilities.h"

FRHDTW_Notifications::FRHDTW_Notifications()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
	URL.SetNumZeroed(256);
	APIName.SetNumZeroed(256);
	APIParams.SetNumZeroed(256);
	Message.SetNumZeroed(256);
}


void ImGuiDisplayLocalPlayerNotifications(ULocalPlayer* SelectedLocalPlayer, URH_LocalPlayerSubsystem* LPSS)
{
	if (SelectedLocalPlayer != nullptr)
	{
		FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), SelectedLocalPlayer->GetControllerId());
		ImGui::Text("%s", TCHAR_TO_UTF8(*Note));
	}

	const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

	if (LPSS == nullptr || LPSS->GetPlayerNotifications() == nullptr)
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
		for (const auto& Notification : LPSS->GetPlayerNotifications()->GetStreamingHistory())
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

	int NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
	if (NumSelectedPlayers == 0)
	{
		ImGui::Text("Please select a local player (has Controller Id) in Player Repository.");
		return;
	}
	else
	{
		ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);
	}

	bool someoneNotStreaming = false;
	for (auto* LocalPlayer : pOwner->GetAllSelectedLocalPlayers())
	{
		URH_LocalPlayerSubsystem* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
		if (LPSS && LPSS->GetPlayerNotifications() != nullptr)
		{
			if (!LPSS->GetPlayerNotifications()->IsStreaming())
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
			ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([](URH_LocalPlayerSubsystem* LPSS)
				{
					if (LPSS && LPSS->GetPlayerNotifications() != nullptr)
					{
						LPSS->GetPlayerNotifications()->StartStreamingLatestNotifications();
					}
				}));
		}
	}
	else
	{
		if (ImGui::Button("Stop Streaming"))
		{
			ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([](URH_LocalPlayerSubsystem* LPSS)
				{
					if (LPSS && LPSS->GetPlayerNotifications() != nullptr)
					{
						LPSS->GetPlayerNotifications()->StopStreamingLatestNotifications();
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
		for (auto* LocalPlayer : pOwner->GetAllSelectedLocalPlayers())
		{
			URH_LocalPlayerSubsystem* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (LPSS && LPSS->GetPlayerNotifications() != nullptr)
			{
				LPSS->GetPlayerNotifications()->SetStreamingHistorySize(NumNotifications);
			}
		}
	}

	const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

	ImGui::Separator();
	ImGui::SetNextItemWidth(100);	// API names are short, so reserve space on the line for the parameters
	if (ImGui::InputText("API Name", APIName.GetData(), APIName.Num()))
	{
		FString NewURL = BaseURL + TEXT("/") + UTF8_TO_TCHAR(APIName.GetData()) + UTF8_TO_TCHAR(APIParams.GetData());
		FTCHARToUTF8 UTF8NewURL(*NewURL);

		FMemory::Memcpy(URL.GetData(), UTF8NewURL.Get(), URL.Num());
	}
	ImGui::SameLine();
	if (ImGui::InputText("API Params", APIParams.GetData(), APIParams.Num()))
	{
		FString NewURL = BaseURL + TEXT("/") + UTF8_TO_TCHAR(APIName.GetData()) + TEXT("/") + UTF8_TO_TCHAR(APIParams.GetData());
		FTCHARToUTF8 UTF8NewURL(*NewURL);

		FMemory::Memcpy(URL.GetData(), UTF8NewURL.Get(), URL.Num());
	}
	if (ImGui::InputText("URL", URL.GetData(), URL.Num()))
	{
		FString NewURL = UTF8_TO_TCHAR(URL.GetData());
		FString NewAPIName;
		TArray<FString> NewAPIParams;
		if (RH_BreakApartURL(NewURL, BaseURL, NewAPIName, NewAPIParams))
		{
			FTCHARToUTF8 UTF8APIName(*NewAPIName);
			FTCHARToUTF8 UTF8APIParams(*FString::Join(NewAPIParams, TEXT("/")));
			FMemory::Memcpy(APIName.GetData(), UTF8APIName.Get(), APIName.Num());
			FMemory::Memcpy(APIParams.GetData(), UTF8APIParams.Get(), APIParams.Num());
		}

	}
	ImGui::InputText("Message", Message.GetData(), Message.Num());
	if (ImGui::Button("Create"))
	{
		for (auto* LocalPlayer : pOwner->GetAllSelectedLocalPlayers())
		{
			URH_LocalPlayerSubsystem* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (LPSS && LPSS->GetPlayerNotifications() != nullptr)
			{
				LPSS->GetPlayerNotifications()->CreateNotification(LPSS->GetPlayerUuid(), UTF8_TO_TCHAR(Message.GetData()), UTF8_TO_TCHAR(URL.GetData()));
			}
		}
	}

	ImGui::Separator();

	ImGuiDisplayLocalPlayerNotifications(GetFirstSelectedLocalPlayer(), GetSelectedRH_LocalPlayerSubsystem());
}