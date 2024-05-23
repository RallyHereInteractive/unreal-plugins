// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RHDTW_Catalog.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_ImGuiUtilities.h"
#include "RH_CatalogSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_GameInstanceSubsystem.h"

FRHDTW_Catalog::FRHDTW_Catalog()
	: Super(),
	  SelectedInventoryBucketRuleSet{}
{
	DefaultPos = FVector2D(610, 20);
	DefaultSize = FVector2D(800, 400);
	ItemIdInput = 0;
	VendorIdInput.SetNumZeroed(256);
	PromoCodeInput.SetNumZeroed(256);
}

FRHDTW_Catalog::~FRHDTW_Catalog()
{
}

void FRHDTW_Catalog::Do()
{
	const auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("ERROR - No Game Instance Found");
		return;
	}

	const auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISubsystem == nullptr)
	{
		ImGui::Text("URH_GameInstanceSubsystem not available.");
		return;
	}

	URH_CatalogSubsystem* pRH_CatalogSubsystem = pGISubsystem->GetCatalogSubsystem();
	if (pRH_CatalogSubsystem == nullptr)
	{
		ImGui::Text("%s", "pRH_CatalogSubsystem not available.");
		return;
	}

	if (ImGui::Button("Request Price Points"))
	{
		pRH_CatalogSubsystem->GetCatalogPricePointsAll();
	}

	ImGui::SameLine();
	if (ImGui::Button("Request Xp Tables"))
	{
		pRH_CatalogSubsystem->GetCatalogXpAll();
	}

	ImGui::SameLine();
	if (ImGui::Button("Request Portal Use Rulesets"))
	{
		pRH_CatalogSubsystem->GetCatalogInventoryBucketUseRuleSetsAll();
	}

	ImGui::SameLine();
	if (ImGui::Button("Request Time Frames"))
	{
		pRH_CatalogSubsystem->GetCatalogTimeFramesAll();
	}

	static ImGuiTabBarFlags tab_bar_flags =
		ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("CatalogTabs", tab_bar_flags))
	{
		if (ImGui::BeginTabItem("Vendors", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowVendors(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Items", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowItems(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Xp Tables", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowXpTables(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Price Points", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowPricePoints(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Inventory Bucket Use Rule Sets", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowItemInventoryBucketUseRuleSets(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Time Frames", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowTimeFrames(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Claim", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowClaim(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Catalog::DoShowItems(URH_CatalogSubsystem* catalog)
{
	ImGui::InputInt("Item Id", &ItemIdInput);
	ImGui::SameLine();
	if (ImGui::Button("Request"))
	{
		catalog->GetCatalogItem(ItemIdInput);
	}

	// #RHTODO: Once Legacy Item Id is gone no need to sort
	TArray<int32> ItemIds;
	catalog->GetCatalogItems().GetKeys(ItemIds);
	ItemIds.Sort([](const int32& A, const int32& B)
		{
			return A < B;
		});

	if (ImGui::TreeNodeEx("Summary", RH_DefaultTreeFlagsDefaultOpen))
	{
		if (ImGui::BeginTable("CatalogItemDetailsTable", 8, RH_TableFlagsPropSizing))
		{
			// Header
			ImGui::TableSetupColumn("Item Id");
			ImGui::TableSetupColumn("Item Type");
			ImGui::TableSetupColumn("Ref Item Id");
			ImGui::TableSetupColumn("Availability Flags");
			ImGui::TableSetupColumn("Entitled Loot Id");
			ImGui::TableSetupColumn("Level Xp Table Id");
			ImGui::TableSetupColumn("Level Vendor Id");
			ImGui::TableSetupColumn("Inventory Bucket Id");
			ImGui::TableHeadersRow();

			for (const auto& ItemId : ItemIds)
			{
				if (URH_CatalogItem* CatalogItem = catalog->GetCatalogItemByItemId(ItemId))
				{
					ImGui::PushID(ItemId);

					ImGui::TableNextRow();

					ImGui::TableNextColumn();
					ImGui::Text("%d", CatalogItem->GetItemId());
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_ItemType", CatalogItem->GetType())));
					ImGui::TableNextColumn();
					ImGui::Text("%d", CatalogItem->GetRefItemId());
					ImGui::TableNextColumn();
					ImGui::Text("%d", CatalogItem->GetAvailabilityFlags());
					ImGui::TableNextColumn();
					ImGui::Text("%d", CatalogItem->GetEntitledLootId());
					ImGui::TableNextColumn();
					ImGui::Text("%d", CatalogItem->GetLevelXpTableId());
					ImGui::TableNextColumn();
					ImGui::Text("%d", CatalogItem->GetLevelVendorId());
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*CatalogItem->GetItemInventoryBucketUseRulesetId()));

					ImGui::PopID();
				}
			}
			ImGui::EndTable();
		}
		ImGui::TreePop();
	}
	if (ImGui::TreeNodeEx("Full Details", RH_DefaultTreeFlags))
	{
		for (const auto& ItemId : ItemIds)
		{
			if (URH_CatalogItem* CatalogItem = catalog->GetCatalogItemByItemId(ItemId))
			{
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%d"), ItemId)), RH_DefaultTreeFlags))
				{
					ImGuiDisplayModelData<FRHAPI_Item>(CatalogItem->APIItem);
					ImGui::TreePop();
				}
			}
		}

		ImGui::TreePop();
	}
}

void FRHDTW_Catalog::DoShowClaim(URH_CatalogSubsystem* catalog)
{
	ImGui::InputText("Promotion Code", PromoCodeInput.GetData(), PromoCodeInput.Num());
	if (ImGui::Button("Claim Promotion Code"))
	{
		const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
		if (pLocalPlayer == nullptr)
		{
			return;
		}

		const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
		if (pRH_LocalPlayerSubsystem == nullptr)
		{
			return;
		}

		const FString InputAsString = UTF8_TO_TCHAR(PromoCodeInput.GetData());
		pRH_LocalPlayerSubsystem->GetLocalPlayerInfo()->GetPlayerInventory()->RedeemPromoCode(InputAsString);
	}

	ImGui::Separator();

	ImGui::Text("TODO");
	/* RHTODO: - Claim
	if (ImGui::Button("Check Email Rewards"))
	{
		PostGame([](FPComClient& client) {
			client.GetClient()->GetProfile()->RequestCheckEmailRewards();
			});
	}

	ImGui::Separator();

	ImGui::InputScalar("Loot ID", ImGuiDataType_U32, &m_ClaimLootId);
	ImGui::InputInt("Quantity", &m_Quantity);
	ImGui::InputText("External Tran ID", &m_ClaimLootExternalTranId);
	if (ImGui::Button("Claim Loot"))
	{
		PostGame([this](FPComClient& client) {
			client.GetClient()->GetShop()->ClaimLoot(m_ClaimLootId, m_Quantity, TCHAR_TO_WCHAR(*FString{ m_ClaimLootExternalTranId.data() }));
			});
	}

	ImGui::Separator();

	DriznorzImGui::InputEnum("Portal", m_ProcessPortalInvPortal);
	ImGui::InputText("Token", &m_ProcessPortalInvToken);
	DriznorzImGui::InputEnum("Region", m_ProcessPortalInvRegion);
	if (ImGui::Button("Add New"))
	{
		m_ProcessPortalInvEntries.emplace_back(PortalInvItem{ "test" });
	}

	static ImGuiTabBarFlags tab_bar_flags =
		ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("Portal Inventory Items", tab_bar_flags))
	{
		std::vector<size_t> indicesToRemove;
		for (size_t x = 0; x < m_ProcessPortalInvEntries.size(); ++x)
		{
			auto& entry = m_ProcessPortalInvEntries[x];
			ImGui::PushID(&entry);

			bool bOpen = true;
			if (ImGui::BeginTabItem(("Entry " + std::to_string(x)).c_str(), &bOpen, ImGuiTabItemFlags_None))
			{
				ImGui::InputText("SKU", &entry.portalSKU);
				ImGui::InputText("SKU Instance ID", &entry.portalSKUInstanceId);
				ImGui::InputScalar("Quantity", ImGuiDataType_U32, &entry.quantity);
				ImGui::EndTabItem();
			}

			if (!bOpen)
				indicesToRemove.push_back(x);

			ImGui::PopID();
		}

		for (auto i = std::rbegin(indicesToRemove); i < std::rend(indicesToRemove); ++i)
		{
			m_ProcessPortalInvEntries.erase(m_ProcessPortalInvEntries.begin() + *i);
		}
		ImGui::EndTabBar();
	}

	if (ImGui::Button("Process Portal Inventory"))
	{
		PostGame([this](FPComClient& client) {
			std::vector<std::wstring> strings;
		std::vector<CMctsProfile::PortalInventoryItem> items;
		for (const auto& entry : m_ProcessPortalInvEntries)
		{
			CMctsProfile::PortalInventoryItem item{};
			strings.emplace_back(fwc::ConvertTowstring(entry.portalSKU));
			item.portalSKU = strings.back().c_str();
			strings.emplace_back(fwc::ConvertTowstring(entry.portalSKUInstanceId));
			item.portalSKUInstanceId = strings.back().c_str();
			item.quantity = static_cast<DWORD>(entry.quantity);
			items.emplace_back(item);
		}
		client.GetClient()->GetProfile()->ProcessPortalInventory(m_ProcessPortalInvPortal,
			items.data(),
			static_cast<DWORD>(items.size()),
			fwc::ConvertTowstring(m_ProcessPortalInvToken).c_str(),
			m_ProcessPortalInvRegion);
			});
	}
	*/
}

void FRHDTW_Catalog::DoShowVendors(URH_CatalogSubsystem* catalog)
{
	ImGui::InputText("CSV Vendors", VendorIdInput.GetData(), VendorIdInput.Num());
	ImGui::SameLine();
	if (ImGui::Button("Request"))
	{
		TArray<int32> VendorIds;
		const FString InputAsString = UTF8_TO_TCHAR(VendorIdInput.GetData());
		TArray<FString> InputParts;
		InputAsString.ParseIntoArray(InputParts, TEXT(","));

		for (FString InputPart : InputParts)
		{
			VendorIds.Push(FCString::Atoi(*InputPart));
		}

		catalog->GetCatalogVendor(FRHVendorGetRequest(VendorIds));
	}

	if (ImGui::Button("Refresh All Vendors"))
	{
		catalog->GetCatalogVendorsAll();
	}

	int32 VendorItemIndex = 0;

	TArray<int32> VendorKeys;
	catalog->GetVendors().GetKeys(VendorKeys);
	VendorKeys.Sort([](int32 A, int32 B) { return A < B; });

	for (const auto& VendorKey : VendorKeys)
	{
		const auto& Vendor = catalog->GetVendors()[VendorKey];

		ImGui::PushID(VendorKey);
		if (ImGui::TreeNodeEx(std::to_string(VendorKey).c_str(), RH_DefaultTreeFlags))
		{
			ImGui::Text("Type = %s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_VendorType", Vendor.GetType(ERHAPI_VendorType::Recipe))));
			ImGui::Separator();

			if (ImGui::TreeNodeEx("Summary", RH_DefaultTreeFlagsDefaultOpen))
			{
				if (ImGui::BeginTable("VendorDetailsTable", 8, RH_TableFlagsPropSizing))
				{
					// Header
					ImGui::TableSetupColumn("Coupon");
					ImGui::TableSetupColumn("Purchase");
					ImGui::TableSetupColumn("Loot ID");
					ImGui::TableSetupColumn("Active");
					ImGui::TableSetupColumn("Ownership");
					ImGui::TableSetupColumn("Item ID");
					ImGui::TableSetupColumn("SLT ID");
					ImGui::TableSetupColumn("Quantity");
					ImGui::TableHeadersRow();

					// Content
					if (const auto& LootItems = Vendor.GetLootOrNull())
					{
						for (const auto& VendorItemPair : (*LootItems))
						{
							ImGui::PushID(VendorItemPair.Value.GetLootId());
							ImGui::TableNextRow();

							TArray<URH_CatalogItem*> Coupons;
							TArray<FString> CouponsItems = { TEXT("None") };

							ImGui::TableNextColumn();
							if (GetCouponsForItem(catalog, VendorItemPair.Value, Coupons))
							{
								for (const auto& Coupon : Coupons)
								{
									CouponsItems.Push(FString::Printf(TEXT("%d:%d%% Off"), Coupon->GetItemId(), (int32)(Coupon->GetCouponDiscountPercentage() * 100)));
								}
							}

							// Dynamically a new SelectedCouponIndex if we need it
							if (SelectedVendorCouponIndexs.Num() < VendorItemIndex + 1)
							{
								SelectedVendorCouponIndexs.Push(0);
							}

							if (SelectedVendorCouponIndexs[VendorItemIndex] > CouponsItems.Num())
							{
								SelectedVendorCouponIndexs[VendorItemIndex] = 0;
							}

							if (ImGui::BeginCombo(TCHAR_TO_UTF8(*FString::Printf(TEXT("##%d"), VendorItemPair.Value.GetLootId())), TCHAR_TO_UTF8(*CouponsItems[SelectedVendorCouponIndexs[VendorItemIndex]])))
							{
								for (int n = 0; n < CouponsItems.Num(); n++)
								{
									bool is_selected = (SelectedVendorCouponIndexs[VendorItemIndex] == n);
									if (ImGui::Selectable(TCHAR_TO_UTF8(*CouponsItems[n]), is_selected))
									{
										SelectedVendorCouponIndexs[VendorItemIndex] = n;
									}
									if (is_selected)
									{
										ImGui::SetItemDefaultFocus();
									}
								}

								ImGui::EndCombo();
							}

							ImGui::TableNextColumn();
							int32 PriceIndex = 0;
							FRHAPI_PricePoint PricePoint;

							const auto& CurrentPricePointGuid = VendorItemPair.Value.GetCurrentPricePointGuidOrNull();

							if (CurrentPricePointGuid && catalog->GetPricePointById(FGuid(*CurrentPricePointGuid), PricePoint))
							{
								if (const auto& CurrentBreakpoints = PricePoint.GetCurrentBreakpointsOrNull())
								{
									for (const auto& PriceBreakpoint : *CurrentBreakpoints)
									{
										// construct a fallback price using old configuration method in case the new one is not available, so we can use the new method for consistency
										FRHAPI_PriceBreakPointCurrency SingleItemPrice;
										SingleItemPrice.SetPrice(PriceBreakpoint.GetPrice());
										SingleItemPrice.SetPriceItemId(PriceBreakpoint.GetPriceItemId());
										const TArray<FRHAPI_PriceBreakPointCurrency> SingleItemPriceArray = { SingleItemPrice };

										const auto PriceCurrencies = PriceBreakpoint.GetCurrencies(SingleItemPriceArray);

										FString PriceDisplay;
										TArray<FRHAPI_PurchasePriceCurrency> DisplayPrices;

										for (const auto& PriceCurrency : PriceCurrencies)
										{
											int32 DisplayPrice = PriceCurrency.GetPrice();
											int32 SelectedCouponItemId = 0;

											if (SelectedVendorCouponIndexs[VendorItemIndex] > 0)
											{
												if (URH_CatalogItem* CouponItem = Coupons[SelectedVendorCouponIndexs[VendorItemIndex] - 1])
												{
													if (CouponItem->GetCouponDiscountCurrencyItemId() == PriceCurrency.GetPriceItemId())
													{
														SelectedCouponItemId = CouponItem->GetItemId();
														DisplayPrice = URH_CatalogBlueprintLibrary::GetCouponDiscountedPrice(CouponItem, DisplayPrice);
													}
												}
											}

											if (PriceDisplay.Len() > 0)
											{
												PriceDisplay += TEXT("\n");
											}
											PriceDisplay += FString::Printf(TEXT("%d:%d"), PriceBreakpoint.GetPriceItemId(), DisplayPrice);

											FRHAPI_PurchasePriceCurrency DisplayPriceCurrency;
											DisplayPriceCurrency.SetPrice(DisplayPrice);
											DisplayPriceCurrency.SetPriceItemId(PriceCurrency.GetPriceItemId());
											DisplayPrices.Add(DisplayPriceCurrency);
										}

										if (PriceIndex != 0)
										{
											ImGui::SameLine();
										}
										PriceIndex++;

										// #RHTODO: Show presale prices on buttons?

										if (ImGui::Button(TCHAR_TO_UTF8(*PriceDisplay)))
										{
											const ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
											if (pLocalPlayer == nullptr)
											{
												return;
											}

											const URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
											if (pRH_LocalPlayerSubsystem == nullptr)
											{
												return;
											}

											URH_PlayerOrderEntry* NewPlayerOrderEntry = NewObject<URH_PlayerOrderEntry>();

											NewPlayerOrderEntry->FillType = ERHAPI_PlayerOrderEntryType::PurchaseLoot;
											NewPlayerOrderEntry->LootItem = VendorItemPair.Value;
											NewPlayerOrderEntry->Quantity = 1;
											NewPlayerOrderEntry->ExternalTransactionId = "IMGUI Purchase";
											NewPlayerOrderEntry->Prices = DisplayPrices;
											NewPlayerOrderEntry->CouponItemId = SelectedCouponItemId;

											TArray<URH_PlayerOrderEntry*> PlayerOrderEntries;
											PlayerOrderEntries.Push(NewPlayerOrderEntry);
											pRH_LocalPlayerSubsystem->GetLocalPlayerInfo()->GetPlayerInventory()->CreateNewPlayerOrder(ERHAPI_Source::Client, false, PlayerOrderEntries);
										}
									}
								}
							}
							ImGui::TableNextColumn();
							ImGui::Text("%d", VendorItemPair.Value.GetLootId());
							ImGui::TableNextColumn();
							ImGui::Text("%s", VendorItemPair.Value.GetActive(false) ? "X" : "");
							ImGui::TableNextColumn();
							ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventorySelector", VendorItemPair.Value.GetInventorySelectorType(ERHAPI_InventorySelector::Invalid))));
							ImGui::TableNextColumn();
							ImGui::Text("%d", VendorItemPair.Value.GetItemId(0));
							ImGui::TableNextColumn();
							ImGui::Text("%d", VendorItemPair.Value.GetSubVendorId(0));
							ImGui::TableNextColumn();
							ImGui::Text("%d", VendorItemPair.Value.GetQuantity(0));

							ImGui::PopID();

							VendorItemIndex++;
						}
					}

					ImGui::EndTable();
				}
				ImGui::TreePop();
			}
			if (ImGui::TreeNodeEx("Full Details", RH_DefaultTreeFlags))
			{
				if (const auto& LootItems = Vendor.GetLootOrNull())
				{
					for (const auto& VendorItemPair : (*LootItems))
					{
						if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%d"), VendorItemPair.Value.GetLootId())), RH_DefaultTreeFlags))
						{
							ImGuiDisplayModelData<FRHAPI_Loot>(VendorItemPair.Value);
							ImGui::TreePop();
						}
					}
				}

				ImGui::TreePop();
			}
			ImGui::TreePop();
		}
		ImGui::PopID();
	}
}

bool FRHDTW_Catalog::GetCouponsForItem(URH_CatalogSubsystem* catalog, FRHAPI_Loot LootItem, TArray<URH_CatalogItem*>& Coupons)
{
	// This is not the most efficient as it searches all items to see if they can apply.
	Coupons.Empty();
	if (catalog != nullptr && LootItem.GetLootId() > 0)
	{
		for (const auto& Item : catalog->GetCatalogItems())
		{
			URH_CatalogItem* CatalogItem = Item.Value;

			if (CatalogItem && CatalogItem->GetCouponDiscountLoot().Contains(LootItem.GetLootId()))
			{
				Coupons.Add(CatalogItem);
			}
		}
	}

	return Coupons.Num() > 0;
}

void FRHDTW_Catalog::DoShowXpTables(URH_CatalogSubsystem* catalog)
{
	auto xpTables = catalog->GetXpTables();
	if (!xpTables.Num())
	{
		return;
	}

	TArray<int32> XpTableKeys;
	xpTables.GetKeys(XpTableKeys);
	XpTableKeys.Sort([](int32 A, int32 B) { return A < B; });

	for (const auto& xpTableKey : XpTableKeys)
	{
		const auto& xpTable = xpTables[xpTableKey];

		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%d"), xpTableKey)), RH_DefaultTreeFlags))
		{
			if (ImGui::TreeNodeEx("Summary", RH_DefaultTreeFlagsDefaultOpen))
			{
				if (ImGui::BeginTable("XpTableDetailsTable", 2, RH_TableFlagsPropSizing))
				{
					// Header
					ImGui::TableSetupColumn("Level");
					ImGui::TableSetupColumn("Quantity");
					ImGui::TableHeadersRow();

					// Content
					if (const auto& Entries = xpTable.GetXpEntriesOrNull())
					{
						int32 i = 0;
						for (const auto& xpEntry : (*Entries))
						{
							ImGui::TableNextRow();
							ImGui::TableNextColumn();
							ImGui::Text("%d", i++);
							ImGui::TableNextColumn();
							ImGui::Text("%d", xpEntry.Value);
						}
					}

					ImGui::EndTable();
				}
				ImGui::TreePop();
			}
			if (ImGui::TreeNodeEx("Full Details", RH_DefaultTreeFlags))
			{
				ImGuiDisplayModelData<FRHAPI_XpTable>(xpTable);
				ImGui::TreePop();
			}
			ImGui::TreePop();
		}
	}
}

void FRHDTW_Catalog::DoShowItemInventoryBucketUseRuleSets(URH_CatalogSubsystem* catalog)
{
	if (!catalog)
		return;

	auto RuleSets = catalog->GetInventoryBucketUseRuleSets();
	if (!RuleSets.Num())
	{
		return;
	}

	TArray<std::string> InventoryBucketUseRuleSetIdStrings{};
	TArray<const ANSICHAR*> InventoryBucketRuleSetIDs{};
	for (const auto& RuleSetPair : RuleSets)
	{
		InventoryBucketUseRuleSetIdStrings.Emplace(TCHAR_TO_UTF8(*RuleSetPair.Key));
		InventoryBucketRuleSetIDs.Emplace(InventoryBucketUseRuleSetIdStrings.Last().c_str());
	}

	ImGui::Combo("Inventory Bucket Use Rule Set Id", &SelectedInventoryBucketRuleSet, InventoryBucketRuleSetIDs.GetData(), InventoryBucketRuleSetIDs.Num());
	const auto& RuleSet = RuleSets.Find(InventoryBucketRuleSetIDs[SelectedInventoryBucketRuleSet]);

	if (const auto& rules = RuleSet->GetRulesOrNull())
	{
		int32 IdIndex = 0;
		for (const auto& rule : *rules)
		{
			ImGui::PushID(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s##%d"), *rule.Key, IdIndex++)));
			if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*rule.Key)))
			{
				if (ImGui::BeginTable("InventoryBucketUseRuleSetsTable", 2, RH_TableFlagsPropSizing))
				{
					// Header
					ImGui::TableSetupColumn("Sequence");
					ImGui::TableSetupColumn("Use Bucket");
					ImGui::TableHeadersRow();

					// Content
					int32 Index = 0;
					for (const auto& bucket : rule.Value)
					{
						ImGui::TableNextRow();
						ImGui::TableNextColumn();
						ImGui::Text("%d", Index++);
						ImGui::TableNextColumn();
						ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryBucket", bucket)));
					}

					ImGui::EndTable();
				}
			}
			ImGui::PopID();
		}
	}
}

void FRHDTW_Catalog::DoShowTimeFrames(URH_CatalogSubsystem* catalog)
{
	if (!catalog)
		return;

	auto timeFrames = catalog->GetTimeFrames();

	for (const auto& timeFramePair : timeFrames)
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%d"), timeFramePair.Key)), RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGuiDisplayModelData<FRHAPI_TimeFrame>(timeFramePair.Value);
			ImGui::TreePop();
		}
	}
}

void FRHDTW_Catalog::DoShowPricePoints(URH_CatalogSubsystem* catalog)
{
	if (!catalog)
		return;

	auto pricePoints = catalog->GetPricePoints();

	for (const auto& pricePointPair : pricePoints)
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*pricePointPair.Key.ToString(EGuidFormats::DigitsWithHyphens)), RH_DefaultTreeFlags))
		{
			ImGuiDisplayCopyableValue(pricePointPair.Key.ToString(), pricePointPair.Key, ECopyMode::Value, true);
			ImGuiDisplayModelData<FRHAPI_PricePoint>(pricePointPair.Value);
			ImGui::TreePop();
		}
	}
}