// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RHDTW_Entitlements.h"
#include "RH_LocalPlayerSubsystem.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "RallyHereDebugTool.h"

#include "RH_LocalPlayerLoginSubsystem.h"

#define IMGUI_PURGE_TIME_TEXTENTRY_PREALLOCATION_SIZE 256
#define IMGUI_PURGE_TIME_INPUT_WIDTH 180.f

FRHDTW_Entitlements::FRHDTW_Entitlements()
	: Super()
{
	DefaultPos = FVector2D(610, 20);
	ActionResult.Empty();
}

void FRHDTW_Entitlements::Do()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
	}

	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("Please select a local player (has Controller Id) in Player Repository.");
		return;
	}

	ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);

	if (ImGui::Button("Start Process Platform Entitlement Task"))
	{
		ActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (URH_EntitlementSubsystem* pEntitlementSubsystem = pLocalPlayerSubsystem->GetEntitlementSubsystem())
				{
					pEntitlementSubsystem->SubmitEntitlementsForLoggedInOSS(FRH_ProcessEntitlementCompletedDelegate::CreateLambda([this, pLocalPlayerSubsystem](bool bSuccess, FRHAPI_PlatformEntitlementProcessResult Result)
						{
							ActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Processing entitlements with logged in OSS ") + (bSuccess ? TEXT("succeeded") : TEXT("failed.")) + LINE_TERMINATOR;
						}));
				}
			}));
	}

	ImGui::SameLine();
	
	if (ImGui::Button("Clear Saved Entitlement Results"))
	{
		ActionResult.Empty();
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* pLocalPlayerSubsystem)
			{
				if (URH_EntitlementSubsystem* pEntitlementSubsystem = pLocalPlayerSubsystem->GetEntitlementSubsystem())
				{
					pEntitlementSubsystem->GetEntitlementResults()->Empty();
					ActionResult += TEXT("[") + GetShortUuid(pLocalPlayerSubsystem->GetPlayerUuid()) + TEXT("] Cleared saved entitlement results.") LINE_TERMINATOR;
				}
			}));
	}

	if (!ActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Entitlements Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*ActionResult));
		}
	}

	ImGui::Separator();

	const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
	ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

	URH_EntitlementSubsystem* pRH_EntitlementSubsystem = nullptr;
	if (const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
	{
		pRH_EntitlementSubsystem = pRH_LocalPlayerSubsystem->GetEntitlementSubsystem();
	}
	if (pRH_EntitlementSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_EntitlementSubsystem not available.");
		return;
	}

	for (const auto& pair : *pRH_EntitlementSubsystem->GetEntitlementResults())
	{
		FRHAPI_PlatformEntitlementProcessResult result = pair.Value;

		FString label;
		if (result.GetStatus() == "FAILED")
		{
			label += FString::Printf(TEXT("Failed"));	
		}
		else if (result.GetRequestId().IsEmpty())
		{
			label += FString::Printf(TEXT("Processing"));
		}
		else
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

			if (ImGui::BeginTable("EntitlementsTable", 5, RH_TableFlagsPropSizing))
			{
				// Header
				ImGui::TableSetupColumn("Authority");
				ImGui::TableSetupColumn("SKU");
				ImGui::TableSetupColumn("Unique ID");
				ImGui::TableSetupColumn("Status");
				ImGui::TableSetupColumn("Error Code");
				ImGui::TableHeadersRow();

				// Content
				for (FRHAPI_PlatformEntitlement entitlement : result.GetServerEntitlements())
				{
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					FString authority = "server";
					ImGui::Text("%s", TCHAR_TO_UTF8(*authority));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformSku));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformEntitlementId));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetStatus())));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetErrorCode())));
				}
				for (FRHAPI_PlatformEntitlement entitlement : result.GetClientEntitlements())
				{
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					FString authority = "client";
					ImGui::Text("%s", TCHAR_TO_UTF8(*authority));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformSku));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*entitlement.PlatformEntitlementId));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetStatus())));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*EnumToString(entitlement.GetErrorCode())));
				}

				ImGui::EndTable();
			}
		}
		ImGui::PopID();
	}
}
