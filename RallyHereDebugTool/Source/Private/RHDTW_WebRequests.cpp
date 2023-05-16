// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_WebRequests.h"
#include "RH_Integration.h"
#include "RallyHereIntegrationModule.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "Engine/LocalPlayer.h"
#include "RallyHereDebugToolSettings.h"
#include <string>

FRHDTW_WebRequests::FRHDTW_WebRequests()
	: Super()
{
	bShowMenuBar = true;
}

void FRHDTW_WebRequests::Do()
{
	DoViewRequests(FRallyHereIntegrationModule::Get().GetWebRequestTracker());
}

void FRHDTW_WebRequests::DoViewRequests(URH_WebRequests* WebRequestsTracker)
{
	if (!WebRequestsTracker)
		return;

	if (ImGui::BeginMenuBar())
	{
		TArray<FString> APINames = WebRequestsTracker->GetAPINames();

		if (ImGui::BeginMenu("Track"))
		{
			bool bValue = WebRequestsTracker->GetTrackAllWebRequests();
			if (ImGui::Checkbox("All", &bValue))
			{
				WebRequestsTracker->SetTrackAllWebRequests(bValue);
			}
			ImGui::Separator();
			for (const FString& APIName : APINames)
			{
				bool bIsSelected = WebRequestsTracker->GetTrackWebRequests(APIName);
				if (ImGui::Checkbox(TCHAR_TO_UTF8(*APIName), &bIsSelected))
				{
					WebRequestsTracker->SetTrackWebRequests(APIName, bIsSelected);
				}
			}
			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("Log"))
		{
			bool bValue = WebRequestsTracker->GetLogAllWebRequests();
			if (ImGui::Checkbox("All", &bValue))
			{
				WebRequestsTracker->SetLogAllWebRequests(bValue);
			}
			ImGui::Separator();
			for (const FString& APIName : APINames)
			{
				bool bIsSelected = WebRequestsTracker->GetLogWebRequests(APIName);
				if (ImGui::Checkbox(TCHAR_TO_UTF8(*APIName), &bIsSelected))
				{
					WebRequestsTracker->SetLogWebRequests(APIName, bIsSelected);
				}
			}
			ImGui::EndMenu();
		}

		if (ImGui::Button("Clear Tracked Requests"))
		{
			WebRequestsTracker->ClearTrackedRequests();
		}

		ImGui::EndMenuBar();
	}


	ImGuiWindowFlags window_flags = ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_AlwaysVerticalScrollbar;
	ImGui::BeginChild("Requests", ImVec2(0, 0), false, window_flags);

	const auto& TrackedRequests = WebRequestsTracker->GetTrackedRequests();
	for (int32 x = TrackedRequests.Num() - 1; x >= 0; --x)
	{
		auto request = TrackedRequests[x].Get();
		if (!request)
			continue;

		std::string label;
		if (request->Responses.Num() > 0)
		{
			label = "(" + std::to_string(request->Responses.Last().ResponseCode) + ") ";
		}
		label += TCHAR_TO_UTF8(*request->Verb);
		label += " ";
		label += TCHAR_TO_UTF8(*request->URL);
		label += "##request-header-";
		label += TCHAR_TO_UTF8(*request->Metadata.Identifier.ToString());
		if (ImGui::CollapsingHeader(label.data()))
		{
			std::string tabBarLabel = std::string{ "ReqOrResp##request-tab-bar-" } + TCHAR_TO_UTF8(*request->Metadata.Identifier.ToString());
			static ImGuiTabBarFlags tab_bar_flags =
				ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
			if (ImGui::BeginTabBar(tabBarLabel.c_str(), tab_bar_flags))
			{
				if (ImGui::BeginTabItem("Request", nullptr, ImGuiTabItemFlags_None))
				{
					DoViewRequest(request);
					ImGui::EndTabItem();
				}

				for (int32 y = 0; y < request->Responses.Num(); ++y)
				{
					std::string responseLabel = "Response";
					if (y > 0)
					{
						responseLabel += " (retry " + std::to_string(y) + ")";
					}
					if (ImGui::BeginTabItem(responseLabel.c_str(), nullptr, ImGuiTabItemFlags_None))
					{
						DoViewResponse(&request->Responses[y]);
						ImGui::EndTabItem();
					}
				}

				ImGui::EndTabBar();
			}
		}
	}

	ImGui::EndChild();
}

void FRHDTW_WebRequests::DoViewRequest(const FRH_WebRequest* WebRequest)
{
	if (!WebRequest)
		return;

	ImGui::Text("Verb : %s", TCHAR_TO_UTF8(*WebRequest->Verb));
	ImGuiDisplayCopyableValue(TEXT("URL"), WebRequest->URL);

	ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + ImGui::GetWindowContentRegionMax().x);

	FString PrettyJson;
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(WebRequest->Content), JsonValue) && FJsonSerializer::Serialize(JsonValue, TEXT(""), TJsonWriterFactory<>::Create(&PrettyJson)))
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
	}
	else
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*WebRequest->Content));
	}

	ImGui::PopTextWrapPos();
	ImGuiDisplayCopyableValue(TEXT("Copy Content"), WebRequest->Content, ECopyMode::ButtonKey);
	ImGui::SameLine();
	ImGuiDisplayCopyableValue(TEXT("Copy Json"), PrettyJson, ECopyMode::ButtonKey);

	ImGui::Columns(2);
	ImGui::Separator();
	ImGui::Text("Header");
	ImGui::NextColumn();
	ImGui::Text("Value");
	ImGui::NextColumn();
	ImGui::Separator();

	for (const auto& pair : WebRequest->Headers)
	{
		ImGuiDisplayCopyableValue(pair.Key, pair.Value, ECopyMode::Key);
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*pair.Value));
		ImGui::NextColumn();
	}

	ImGui::Columns(1);
}

void FRHDTW_WebRequests::DoViewResponse(const FRH_WebResponse* WebResponse)
{
	if (!WebResponse)
		return;

	ImGui::Text("Success : %d", WebResponse->ResponseSuccess);
	ImGui::Text("Code : %d", WebResponse->ResponseCode);

	ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + ImGui::GetWindowContentRegionMax().x);

	FString PrettyJson;
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(WebResponse->Content), JsonValue) && FJsonSerializer::Serialize(JsonValue, TEXT(""), TJsonWriterFactory<>::Create(&PrettyJson)))
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
	}
	else
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*WebResponse->Content));
	}

	ImGui::PopTextWrapPos();
	ImGuiDisplayCopyableValue(TEXT("Copy Content"), WebResponse->Content, ECopyMode::ButtonKey);
	ImGui::SameLine();
	ImGuiDisplayCopyableValue(TEXT("Copy Json"), PrettyJson, ECopyMode::ButtonKey);

	ImGui::Columns(2);
	ImGui::Separator();
	ImGui::Text("Header");
	ImGui::NextColumn();
	ImGui::Text("Value");
	ImGui::NextColumn();
	ImGui::Separator();

	for (const auto& pair : WebResponse->Headers)
	{
		ImGuiDisplayCopyableValue(pair.Key, pair.Value, ECopyMode::Key);
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*pair.Value));
		ImGui::NextColumn();
	}

	ImGui::Columns(1);
}
