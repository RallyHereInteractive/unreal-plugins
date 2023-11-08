// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

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
	SKURequestInput.SetNumZeroed(256);
}

void FRHDTW_Entitlements::Do()
{
	static ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("Entitlements", tab_bar_flags))
	{
		if (ImGui::BeginTabItem("Entitlements", nullptr, ImGuiTabItemFlags_None))
		{
			DoEntitlementsTab();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Store Offers", nullptr, ImGuiTabItemFlags_None))
		{
			DoStoreOffersTab();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Entitlements::DoEntitlementsTab()
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

	int32 RequestIndex = 0;
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
		label += FString::Printf(TEXT("##request%d"), RequestIndex++);

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
	}
}

void FRHDTW_Entitlements::DoStoreOffersTab()
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

	ImGui::InputText("SKU Request", SKURequestInput.GetData(), SKURequestInput.Num());
	if (ImGui::Button("Query Store"))
	{
		const FString InputAsString = UTF8_TO_TCHAR(SKURequestInput.GetData());
		// #RHTODO: Parse comma separated offers ids
		TArray<FString> OfferIds;
		OfferIds.Push(InputAsString);
		pRH_EntitlementSubsystem->QueryStoreOffersById(OfferIds);
	}

	ImGui::Separator();

	TArray<FOnlineStoreOfferRef> StoreOffers;

	pRH_EntitlementSubsystem->GetCachedStoreOffers(StoreOffers);

	if (ImGui::BeginTable("StoreOffersTable", 10, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Link");
		ImGui::TableSetupColumn("Currency Code");
		ImGui::TableSetupColumn("Name");
		ImGui::TableSetupColumn("Long Desc");
		ImGui::TableSetupColumn("Desc");
		ImGui::TableSetupColumn("Display Price");
		ImGui::TableSetupColumn("Numeric Price");
		ImGui::TableSetupColumn("Display Regular Price");
		ImGui::TableSetupColumn("Numeric Regular Price");
		ImGui::TableSetupColumn("SKU");
		ImGui::TableHeadersRow();

		// Content
		for (auto const& StoreOffer : StoreOffers)
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			if (ImGui::Button(TCHAR_TO_UTF8(*FString::Printf(TEXT("GOTO##%s"), *StoreOffer.Get().OfferId))))
			{
				if (const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
				{
					if (IOnlineSubsystem* OSS = pRH_LocalPlayerSubsystem->GetOSS())
					{
						const auto PlayerId = pLocalPlayer->GetPreferredUniqueNetId();
						const IOnlinePurchasePtr Purchase = OSS->GetPurchaseInterface();

						if (Purchase.IsValid() && PlayerId.IsValid())
						{
							FOnPurchaseCheckoutComplete Delegate;
							FPurchaseCheckoutRequest Request;
							Request.AddPurchaseOffer(TEXT(""), StoreOffer.Get().OfferId, 1);
							Purchase->Checkout(*PlayerId, Request, Delegate);
						}
					}
				}
			}
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().CurrencyCode));
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().Title.ToString()));
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().LongDescription.ToString()));
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().Description.ToString()));
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().GetDisplayPrice().ToString()));
			ImGui::TableNextColumn();
			ImGui::Text("%lld", StoreOffer.Get().NumericPrice);
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().GetDisplayRegularPrice().ToString()));
			ImGui::TableNextColumn();
			ImGui::Text("%lld", StoreOffer.Get().RegularPrice);
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*StoreOffer.Get().OfferId));
		}

		ImGui::EndTable();
	}
}