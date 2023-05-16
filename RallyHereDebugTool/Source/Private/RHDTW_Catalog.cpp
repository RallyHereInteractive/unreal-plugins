#include "RallyHereDebugToolModule.h"
#include "RHDTW_Catalog.h"

#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "RH_CatalogSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"

FRHDTW_Catalog::FRHDTW_Catalog()
	: Super(),
	  SelectedInventoryBucketRuleSet{}
{
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

	static ImGuiTabBarFlags tab_bar_flags =
		ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("CatalogTabs", tab_bar_flags))
	{
		if (ImGui::BeginTabItem("Vendors", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowVendors(pRH_CatalogSubsystem);
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
		if (ImGui::BeginTabItem("Claim", nullptr, ImGuiTabItemFlags_None))
		{
			DoShowClaim(pRH_CatalogSubsystem);
			ImGui::EndTabItem();
		}
		
		ImGui::EndTabBar();
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
		pRH_LocalPlayerSubsystem->GetLocalPlayerInfo()->GetInventorySubsystem()->RedeemPromoCode(InputAsString);
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

	/* RHTODO - Do we want to support a refresh all vendors option
	if (ImGui::Button("Refresh"))
	{
		PostGame([](FPComClient& client) {
			client.GetClient()->GetShop()->RefreshVendors();
			});
	}
	*/

	for (const auto& VendorPair : catalog->GetVendors())
	{
		if (URH_CatalogVendor* Vendor = VendorPair.Value)
		{
			ImGui::PushID(Vendor);
			if (ImGui::CollapsingHeader(std::to_string(Vendor->GetVendorId()).c_str()))
			{
				ImGui::Text("Type = %s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_VendorType", Vendor->GetVendorType())));
				/* RHTODO -  Vendor Version?
				ImGui::Text("Version = %" PRIu64 " (config=%d) (schedule=%d)",
					vendor->GetVersion(),
					static_cast<DWORD>(vendor->GetVersion() >> 32),
					static_cast<DWORD>(vendor->GetVersion()));
				*/
				ImGui::Separator();

				ImGui::Columns(7);
				ImGui::Text("Purchase");
				ImGui::NextColumn();
				ImGui::Text("Loot ID");
				ImGui::NextColumn();
				ImGui::Text("Active");
				ImGui::NextColumn();
				ImGui::Text("Ownership");
				ImGui::NextColumn();
				ImGui::Text("Item ID");
				ImGui::NextColumn();
				ImGui::Text("SLT ID");
				ImGui::NextColumn();
				ImGui::Text("Quantity");
				ImGui::NextColumn();
				ImGui::Separator();

				for (const auto& VendorItemPair : Vendor->GetVendorItems())
				{
					if (URH_CatalogVendorItem* VendorItem = VendorItemPair.Value)
					{
						ImGui::PushID(VendorItem);
						int32 PriceIndex = 0;

						if (URH_CatalogPricePoint* PricePoint = catalog->GetPricePointById(VendorItem->GetCurrentPricePointGuid()))
						{
							for (const auto& PriceBreakpoint : PricePoint->GetCurrentPriceBreakpoints())
							{
								if (PriceIndex != 0)
								{
									ImGui::SameLine();
								}
								PriceIndex++;
								auto buttonName = FString::Printf(TEXT("%d:%d"), PriceBreakpoint->GetPriceItemId(), PriceBreakpoint->GetPrice());
								
								// #RHTODO: Show presale prices on buttons?

								if (ImGui::Button(TCHAR_TO_UTF8(*buttonName)))
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

									NewPlayerOrderEntry->VendorItem = VendorItem;
									NewPlayerOrderEntry->Quantity = 1;
									NewPlayerOrderEntry->ExternalTransactionId = "IMGUI Purchase";
									NewPlayerOrderEntry->PriceItemId = PriceBreakpoint->GetPriceItemId();
									NewPlayerOrderEntry->Price = PriceBreakpoint->GetPrice();
									NewPlayerOrderEntry->CouponItemId = 0;

									TArray<URH_PlayerOrderEntry*> PlayerOrderEntries;
									PlayerOrderEntries.Push(NewPlayerOrderEntry);
									pRH_LocalPlayerSubsystem->GetLocalPlayerInfo()->GetInventorySubsystem()->CreatePlayerOrder(pRH_LocalPlayerSubsystem->GetLocalPlayerInfo()->GetAuthContext(), ERHAPI_PlayerOrderEntryType::PurchaseLoot, ERHAPI_Source::Client, PlayerOrderEntries);
								}
							}
						}

						ImGui::NextColumn();

						ImGui::Text("%d", VendorItem->GetLootId());
						ImGui::NextColumn();
						ImGui::Text("%s", VendorItem->IsActive() ? "X" : "");
						ImGui::NextColumn();
						ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventorySelector", VendorItem->GetInventorySelectorType())));
						ImGui::NextColumn();
						ImGui::Text("%d", VendorItem->GetItem() != nullptr ? VendorItem->GetItem()->GetItemId() : 0);
						ImGui::NextColumn();
						ImGui::Text("%d", VendorItem->GetSubVendor() != nullptr ? VendorItem->GetSubVendor()->GetVendorId() : 0);
						ImGui::NextColumn();
						ImGui::Text("%d", VendorItem->GetQuantity());
						ImGui::NextColumn();

						ImGui::PopID();
					}
				}

				ImGui::Columns(1);
			}
			ImGui::PopID();
		}
	}
}

void FRHDTW_Catalog::DoShowXpTables(URH_CatalogSubsystem* catalog)
{
	auto xpTables = catalog->GetXpTables();
	if (!xpTables.Num())
	{
		return;
	}

	for (const auto& xpTablePair : xpTables)
	{
		if (URH_CatalogXpTable* xpTable = xpTablePair.Value)
		{
			ImGui::PushID(xpTable);
			if (ImGui::CollapsingHeader(std::to_string(xpTable->GetXpTableId()).c_str()))
			{
				ImGui::Columns(2);
				ImGui::Text("Level");
				ImGui::NextColumn();
				ImGui::Text("Quantity");
				ImGui::NextColumn();
				ImGui::Separator();

				int32 i = 0;
				for (const int32 xpEntry : xpTable->GetXpEntries())
				{
					ImGui::Text("%d", i++);
					ImGui::NextColumn();
					ImGui::Text("%d", xpEntry);
					ImGui::NextColumn();
				}

				ImGui::Columns(1);
			}
			ImGui::PopID();
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
	for (const auto& BucketRule : *RuleSet)
	{
		if (URH_InventoryBucketUseRuleSet* ruleset = BucketRule.Value)
		{
			ImGui::PushID(ruleset);
			if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", ruleset->Bucket))))
			{
				ImGui::Columns(2);
				ImGui::Text("Sequence");
				ImGui::NextColumn();
				ImGui::Text("Use Bucket");
				ImGui::NextColumn();
				ImGui::Separator();

				for (int32 ruleIdx = 0; ruleIdx < ruleset->BucketUseOrder.Num(); ++ruleIdx)
				{
					ImGui::Text("%d", ruleIdx);
					ImGui::NextColumn(); 
					ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", ruleset->BucketUseOrder[ruleIdx])));
					ImGui::NextColumn();
				}

				ImGui::Columns(1);
			}
			ImGui::PopID();
		}
	}
}

void FRHDTW_Catalog::DoShowPricePoints(URH_CatalogSubsystem* catalog)
{
	if (!catalog)
		return;

	auto pricePoints = catalog->GetPricePoints();
	if (!pricePoints.Num())
		return;

	for (const auto& pricePointPair : pricePoints)
	{
		if (URH_CatalogPricePoint* pricePoint = pricePointPair.Value)
		{
			ImGui::PushID(pricePoint);			
			if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*pricePoint->GetName())))
			{
				DoShowPricePoint(pricePoint);
			}
			ImGui::PopID();
		}
	}
}

void FRHDTW_Catalog::DoShowPricePoint(const URH_CatalogPricePoint* pricePoint)
{
	if (!pricePoint)
		return;

	ImGui::Text("Name = %s", TCHAR_TO_UTF8(*pricePoint->GetName()));
	ImGui::Text("ID = %s", TCHAR_TO_UTF8(*pricePoint->GetPricePointId().ToString()));
	ImGui::Text("Strict = %s", pricePoint->IsStrict() ? "True" : "False");
	ImGui::Text("Cap = %s", pricePoint->IsCap() ? "True" : "False");

	ImGui::Separator();
	ImGui::Text("Breakpoints");
	DoShowPriceBreakpointList(pricePoint->GetCurrentPriceBreakpoints());

	if (pricePoint->IsOnSale())
	{
		ImGui::Separator();
		ImGui::Text("Pre Sale Breakpoints");
		DoShowPriceBreakpointList(pricePoint->GetPreSalePriceBreakpoints());
	}
}

void FRHDTW_Catalog::DoShowPriceBreakpointList(const TArray<URH_CatalogPriceBreakpoint*>& bpl)
{
	ImGui::Columns(3);
	ImGui::Text("Price Item ID");
	ImGui::NextColumn();
	ImGui::Text("Quantity");
	ImGui::NextColumn();
	ImGui::Text("Price");
	ImGui::NextColumn();
	ImGui::Separator();

	for (const auto& bp : bpl)
	{
		ImGui::Text("%d", bp->GetPriceItemId());
		ImGui::NextColumn();
		ImGui::Text("%d", bp->GetQuantity());
		ImGui::NextColumn();
		ImGui::Text("%d", bp->GetPrice());
		ImGui::NextColumn();
	}

	ImGui::Columns(1);
}