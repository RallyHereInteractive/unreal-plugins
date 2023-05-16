// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RHDTW_Entitlements.h"
#include "RallyHereDebugToolModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "imgui.h"

#include "RH_ImGuiUtilities.h"
#include "Interfaces/OnlinePurchaseInterface.h"

#define IMGUI_PURGE_TIME_TEXTENTRY_PREALLOCATION_SIZE 256
#define IMGUI_PURGE_TIME_INPUT_WIDTH 180.f

FRHDTW_Entitlements::FRHDTW_Entitlements()
	: Super()
{
	if (GetEntitlementSubsystem() != nullptr)
	{
		Entitlements = GetEntitlementSubsystem()->GetEntitlements();
	}
}

void FRHDTW_Entitlements::UpdateEntitlements(const TArray<FPurchaseReceipt>& UpdatedEntitlements)
{
	Entitlements = UpdatedEntitlements;
}

void FRHDTW_Entitlements::UpdateEntitlementStatus(const EntitlementStatusMapStruct UpdatedEntitlementStatusMap)
{
	EntitlementStatusMap = UpdatedEntitlementStatusMap.EntitlementStatusMap;
}

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

	if (ImGui::Button("Query Entitlements from the Platform"))
	{
		pRH_EntitlementSubsystem->CachedEntitlementsUpdatedDelegate.AddRaw(this, &FRHDTW_Entitlements::UpdateEntitlements);
		pRH_EntitlementSubsystem->EntitlementStatusMapUpdatedDelegate.AddRaw(this, &FRHDTW_Entitlements::UpdateEntitlementStatus);
		pRH_EntitlementSubsystem->QueryEntitlements();
	}
	ImGui::SameLine();
	if (ImGui::Button("Send Receipts to the Core"))
	{
		pRH_EntitlementSubsystem->SubmitEntitlementsToInventory(LoginOSS);
	}
	ImGui::Separator();
	if (ImGui::Button("Refresh"))
	{
		Entitlements = pRH_EntitlementSubsystem->GetEntitlements();
	}

	ImGui::Columns(3);
	ImGui::Text("%s", "SKU");
	ImGui::NextColumn();
	ImGui::Text("%s", "Unique ID");
	ImGui::NextColumn();
	ImGui::Text("%s", "Status");
	ImGui::NextColumn();
	ImGui::Separator();

	for (FPurchaseReceipt receipt : Entitlements)
	{
		for (FPurchaseReceipt::FReceiptOfferEntry offerEntry : receipt.ReceiptOffers)
		{
			for (FPurchaseReceipt::FLineItemInfo lineItem : offerEntry.LineItems)
			{
				ImGui::PushID(TCHAR_TO_UTF8(*lineItem.UniqueId));

				ImGui::Text("%s", TCHAR_TO_UTF8(*lineItem.ItemName));
				ImGui::NextColumn();

				ImGui::Text("%s", TCHAR_TO_UTF8(*lineItem.UniqueId));
				ImGui::NextColumn();

				EntitlementStatus status = EntitlementStatusMap.FindRef(lineItem.UniqueId);
				ImGui::Text("%s", TCHAR_TO_UTF8(*UEnum::GetDisplayValueAsText(status).ToString()));
				ImGui::NextColumn();

				ImGui::PopID();
			}
		}
	}

	ImGui::Columns(1);
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
