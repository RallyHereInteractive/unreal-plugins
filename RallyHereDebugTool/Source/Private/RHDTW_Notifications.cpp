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
	URL.SetNumZeroed(256);
	APIName.SetNumZeroed(256);
	APIParams.SetNumZeroed(256);
	Message.SetNumZeroed(256);
}


void ImGuiDisplayLocalPlayerNotifications(URH_LocalPlayerSubsystem* LPSS)
{
	const FString BaseURL = FRallyHereIntegrationModule::Get().GetBaseURL();

	if (LPSS->GetNotificationSubsystem() == nullptr)
	{
		return;
	}

	ImGui::Columns(6);
	ImGui::Text("API");
	ImGui::NextColumn();
	ImGui::Text("Message");
	ImGui::NextColumn();
	ImGui::Text("ID");
	ImGui::NextColumn();
	ImGui::Text("Created");
	ImGui::NextColumn();
	ImGui::Text("URL");
	ImGui::NextColumn();
	ImGui::Text("Custom Data");
	ImGui::NextColumn();

	for (const auto& Notification : LPSS->GetNotificationSubsystem()->GetStreamingHistory())
	{
		ImGui::PushID(TCHAR_TO_UTF8(*Notification.GetNotificationId()));
		const FString URL = Notification.GetRhUrl(TEXT(""));
		FString APIName;
		TArray<FString> APIParams;
		RH_BreakApartURL(URL, BaseURL, APIName, APIParams);

		ImGui::Separator();
		ImGuiDisplayCopyableValue(TEXT("API"), APIName, ECopyMode::Value);
		ImGui::NextColumn();
		ImGuiDisplayCopyableValue(TEXT("Message"), Notification.GetMessage(), ECopyMode::Value);
		ImGui::NextColumn();
		ImGuiDisplayCopyableValue(TEXT("ID"), Notification.GetNotificationId(), ECopyMode::Value);
		ImGui::NextColumn();
		ImGuiDisplayCopyableValue(TEXT("Created"), Notification.GetCreated().ToString(), ECopyMode::Value);
		ImGui::NextColumn();
		ImGuiDisplayCopyableValue(TEXT("URL"), URL, ECopyMode::Value);
		ImGui::NextColumn();
		ImGuiDisplayCustomData(Notification.GetCustomData());
		ImGui::NextColumn();

		ImGui::PopID();
	}

	ImGui::Columns(1);
}

void FRHDTW_Notifications::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		return;
	}

	if (ImGui::Button("Start Streaming"))
	{
		for (auto* LocalPlayer : pOwner->GetAllSelectedLocalPlayers())
		{
			URH_LocalPlayerSubsystem* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (LPSS && LPSS->GetNotificationSubsystem() != nullptr)
			{
				LPSS->GetNotificationSubsystem()->StartStreamingLatestNotifications();
			}
		}
	}
	ImGui::SameLine();
	if (ImGui::Button("Stop Streaming"))
	{
		for (auto* LocalPlayer : pOwner->GetAllSelectedLocalPlayers())
		{
			URH_LocalPlayerSubsystem* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (LPSS && LPSS->GetNotificationSubsystem() != nullptr)
			{
				LPSS->GetNotificationSubsystem()->StopStreamingLatestNotifications();
			}
		}
	}

	int32 NumNotifications = 150;
	ImGui::SetNextItemWidth(50);
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
			if (LPSS && LPSS->GetNotificationSubsystem() != nullptr)
			{
				LPSS->GetNotificationSubsystem()->SetStreamingHistorySize(NumNotifications);
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
			if (LPSS && LPSS->GetNotificationSubsystem() != nullptr)
			{
				LPSS->GetNotificationSubsystem()->CreateNotification(LPSS->GetPlayerUuid(), UTF8_TO_TCHAR(Message.GetData()), UTF8_TO_TCHAR(URL.GetData()));
			}
		}
	}

	ImGui::Separator();

	ImGuiDisplayLocalPlayerNotifications(GetSelectedRH_LocalPlayerSubsystem());
}