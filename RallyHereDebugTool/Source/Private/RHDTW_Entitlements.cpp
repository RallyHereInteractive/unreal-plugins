// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RHDTW_Entitlements.h"
#include "RH_LocalPlayerSubsystem.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"

#include "RH_LocalPlayerLoginSubsystem.h"

#define IMGUI_PURGE_TIME_TEXTENTRY_PREALLOCATION_SIZE 256
#define IMGUI_PURGE_TIME_INPUT_WIDTH 180.f

FRHDTW_Entitlements::FRHDTW_Entitlements()
	: Super()
{}

void FRHDTW_Entitlements::Do()
{
	const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		return;
	}
	
	URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		ImGui::Text("RH_LocalPlayerSubsystem not available.");
		return;
	}

	URH_LocalPlayerLoginSubsystem* pRH_LoginSubsystem = pRH_LocalPlayerSubsystem->GetLoginSubsystem();
	if (pRH_LoginSubsystem == nullptr)
	{
		ImGui::Text("RH_LocalPlayerLoginSubsystem not available.");
		return;
	}
	
	IOnlineSubsystem* LoginOSS = pRH_LoginSubsystem->GetLoginOSS();
	if (LoginOSS == nullptr)
	{
		ImGui::Text("Login OSS: not available.");
		return;
	}
	
	URH_EntitlementSubsystem* pRH_EntitlementSubsystem = GetEntitlementSubsystem();

	if (pRH_EntitlementSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_EntitlementSubsystem not available.");
		return;
	}

	if (ImGui::Button("Start Process Platform Entitlement Task"))
	{
		pRH_EntitlementSubsystem->SubmitEntitlements();
	}

	ImGui::SameLine();
	
	if (ImGui::Button("Clear Saved Entitlement Results"))
	{
		pRH_EntitlementSubsystem->GetEntitlementResults()->Empty();
	}

	ImGui::Separator();

	for (const auto& pair : *GetEntitlementSubsystem()->GetEntitlementResults())
	{
		FRHAPI_PlatformEntitlementProcessResult result = pair.Value;

		FString label;
		if (result.GetRequestId().IsEmpty())
		{
			label += FString::Printf(TEXT("Processing"));
		} else
		{
			label += FString::Printf(TEXT("%s - Request ID - %s"), *result.GetStatus(), *result.GetRequestId());
		}
		label += "###request-id";
		// label += TCHAR_TO_UTF8(*result.GetRequestId());
		
		// ImGui::PushID(TCHAR_TO_UTF8(*result.GetRequestId()));
		if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*label)))
		{
			ImGui::Text("Status : %s", TCHAR_TO_UTF8(*result.Status_Optional));
			ImGuiDisplayCopyableValue(TEXT("Request ID"), result.RequestId);
			ImGui::Text("Platform ID : %s", TCHAR_TO_UTF8(*EnumToString(result.PlatformId)));
			ImGuiDisplayCopyableValue(TEXT("Platform User ID"), result.PlatformUserId);
			ImGui::Text("Client Type : %s", TCHAR_TO_UTF8(*EnumToString(result.ClientType)));
			ImGui::Text("Platform Region : %s", TCHAR_TO_UTF8(*EnumToString(result.PlatformRegion)));
			ImGuiDisplayCopyableValue(TEXT("Transaction ID"), result.TransactionId);

			ImGui::Separator();

			ImGui::Columns(5);
			ImGui::Text("%s", "Authority");
			ImGui::NextColumn();
			ImGui::Text("%s", "SKU");
			ImGui::NextColumn();
			ImGui::Text("%s", "Unique ID");
			ImGui::NextColumn();
			ImGui::Text("%s", "Status");
			ImGui::NextColumn();
			ImGui::Text("%s", "Error Code");
			ImGui::NextColumn();
			ImGui::Separator();
			
			for (FRHAPI_PlatformEntitlement entitlement : result.GetServerEntitlements())
			{
				FString authority = "server";
				ImGui::Text("%s", TCHAR_TO_UTF8(*authority));
				ImGui::NextColumn(); 
				ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformSku));
				ImGui::NextColumn(); 
				ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformEntitlementId));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetStatus())));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetErrorCode())));
				ImGui::NextColumn();
			}
			for (FRHAPI_PlatformEntitlement entitlement : result.GetClientEntitlements())
			{
				FString authority = "client";
				ImGui::Text("%s", TCHAR_TO_UTF8(*authority));
				ImGui::NextColumn(); 
				ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformSku));
				ImGui::NextColumn(); 
				ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformEntitlementId));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetStatus())));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetErrorCode())));
				ImGui::NextColumn();
			}
			
			ImGui::Columns(1);
		}
		ImGui::PopID();
	}
}

URH_EntitlementSubsystem* FRHDTW_Entitlements::GetEntitlementSubsystem()
{
	const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		return nullptr;
	}

	const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		return nullptr;
	}

	return pRH_LocalPlayerSubsystem->GetEntitlementSubsystem();
}
