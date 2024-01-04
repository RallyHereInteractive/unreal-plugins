// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RHDTW_CustomEndpoint.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "CustomAPI.h"

#include "RH_ImGuiUtilities.h"
#include "Dom/JsonValue.h"

FRHDTW_CustomEndpoint::FRHDTW_CustomEndpoint()
{
	EndpointId.Empty();
	EndpointId.AddZeroed(256);

	ImGuiCopyStringToTextInputBuffer(TEXT("application/json"), ContentType);

	Body.Empty();
	Body.AddZeroed(4096);

	Priority = DefaultRallyHereAPIPriority;
}

FRHDTW_CustomEndpoint::~FRHDTW_CustomEndpoint()
{
}

void FRHDTW_CustomEndpoint::Do()
{
	ImGui::Text("Endpoint ID");
	ImGui::SameLine();
	ImGui::InputText("##EndpointId", EndpointId.GetData(), EndpointId.Num());
	ImGui::Text("Content Type");
	ImGui::SameLine();
	ImGui::InputText("##ContentType", ContentType.GetData(), ContentType.Num());
	ImGui::Text("Body");
	ImGui::SameLine();
	ImGui::InputTextMultiline("##Body", Body.GetData(), Body.Num(), ImVec2(0, ImGui::CalcTextSize(Body.GetData()).y + 6), ImGuiInputTextFlags_AllowTabInput);
	ImGui::Text("Priority");
	ImGui::SameLine();
	ImGui::InputInt("##Priority", &Priority);

	// snap JSON value for body
	const FString ValueAsFString = UTF8_TO_TCHAR(Body.GetData());
	auto Reader = TJsonReaderFactory<>::Create(ValueAsFString);
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
	{
		FString OutJsonString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutJsonString);
		FJsonSerializer::Serialize(JsonValue.ToSharedRef(), TEXT(""), Writer);

		ImGuiCopyStringToTextInputBuffer(OutJsonString, Body);
	}


	if (ImGui::Button("Send For Player"))
	{
		LastResults.Empty();

		FRH_CustomEndpointRequestWrapper Request;
		Request.EndpointId = ImGuiGetStringFromTextInputBuffer(EndpointId);
		Request.ContentType = ImGuiGetStringFromTextInputBuffer(ContentType);
		Request.Body = FRHAPI_JsonValue(JsonValue);
		Request.Priority = Priority;
		auto Delegate = FRH_CustomEndpointDelegate::CreateSP(SharedThis(this), &FRHDTW_CustomEndpoint::HandleCustomEndpointResult);

		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this, Request, Delegate](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				pLocalPlayerSubsystem->CustomEndpoint(Request, Delegate);
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Send For Instance"))
	{
		LastResults.Empty();

		FRH_CustomEndpointRequestWrapper Request;
		Request.EndpointId = ImGuiGetStringFromTextInputBuffer(EndpointId);
		Request.ContentType = ImGuiGetStringFromTextInputBuffer(ContentType);
		Request.Body = FRHAPI_JsonValue(JsonValue);
		Request.Priority = Priority;
		auto Delegate = FRH_CustomEndpointDelegate::CreateSP(SharedThis(this), &FRHDTW_CustomEndpoint::HandleCustomEndpointResult);

		auto pGameInstance = GetGameInstance();
		if (pGameInstance != nullptr)
		{
			auto pRH_GameInstanceSubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
			if (pRH_GameInstanceSubsystem != nullptr)
			{
				pRH_GameInstanceSubsystem->CustomEndpoint(Request, Delegate);
			}
		}
	}

	ImGui::Separator();

	ImGui::Text("NOTE - For full results including body, headers, etc, please refer to the WebRequests window.");

	for (auto Result : LastResults)
	{
		ImGui::Text("Result:");
		ImGui::SameLine();
		ImGui::Text("Status Code: %d", Result.HttpResponseCode);
	}
}

void FRHDTW_CustomEndpoint::HandleCustomEndpointResult(const FRH_CustomEndpointResponseWrapper& Response)
{
	LastResults.Add(Response);
}