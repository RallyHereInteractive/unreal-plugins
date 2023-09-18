#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerInventory.h"
#include "imgui.h"

#define CUSTOM_DATA_TEXT_LENGTH 1024

FRHDTW_PlayerInventory::FRHDTW_PlayerInventory()
	: Super(),
	WatchEnabled(false),
	InputItemId{},
	SelectedInventoryType{},
	SelectedPlatform{},
	InputSelectedOperation{},
	InputModifyInventoryItemId{},
	SelectedSourceType{},
	InputCount{},
	SelectedCreateInventoryTypes{},
	SelectedInventoryBucket{}
{
	DefaultPos = FVector2D(610, 20);

	PlatformStrings.Emplace("None");
	for (auto i = 1; i < Platforms.Num(); i++)
	{
		PlatformStrings.Emplace(TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", Platforms[i])));
	}

	// Intentionally done in 2 separate for loops as it cause the first 4 elements to be corrupted otherwise
	for (const auto& PlatformName : PlatformStrings)
	{
		PlatformChars.Emplace(PlatformName.c_str());
	}

	InventoryTypeStrings = {
		"All",
		TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", ERHAPI_InventoryType::Persistent)),
		TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", ERHAPI_InventoryType::Transient)),
		TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", ERHAPI_InventoryType::AlwaysOwned)),
	};
	for (const auto& InventoryType : InventoryTypeStrings)
	{
		InventoryTypeChars.Emplace(InventoryType.c_str());
	}

	for (auto CreateInventoryName : CreateInventoryTypes)
	{
		CreateInventoryTypeStrings.Emplace(TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", CreateInventoryName)));
	}
	for (const auto& CreateInventoryType : CreateInventoryTypeStrings)
	{
		CreateInventoryTypeChars.Emplace(CreateInventoryType.c_str());
	}

	for (auto Source : SourceTypes)
	{
		SourceStrings.Emplace(TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Source", Source)));
	}
	for (const auto& SourceType : SourceStrings)
	{
		SourceChars.Emplace(SourceType.c_str());
	}

	for (auto InventoryBucket : InventoryBuckets)
	{
		InventoryBucketStrings.Emplace(TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryBucket", InventoryBucket)));
	}

	for (const auto& InventoryBucket : InventoryBucketStrings)
	{
		InventoryBucketChars.Emplace(InventoryBucket.c_str());
	}

	InventoryIdInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	ClientRefIdInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	InputExpires.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	ModifyInventoryIdInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);

	CustomDataStager.SetName(TEXT("Inventory Change"));
}

FRHDTW_PlayerInventory::~FRHDTW_PlayerInventory()
{
}

void FRHDTW_PlayerInventory::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		return;
	}

	if (pOwner->GetAllSelectedPlayerInfos().Num() <= 0)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}

	if (ImGui::BeginTabBar("Inventory", ImGuiTabBarFlags_FittingPolicyScroll))
	{
		if (ImGui::BeginTabItem("Inventory Session", nullptr, ImGuiTabItemFlags_None))
		{
			DoInventorySession();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Player Inventory", nullptr, ImGuiTabItemFlags_None))
		{
			DoInventory();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Modify Player Inventory", nullptr, ImGuiTabItemFlags_None))
		{
			DoModifyInventory();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Player Orders", nullptr, ImGuiTabItemFlags_None))
		{
			DoOrderWatchTab();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_PlayerInventory::DoInventorySession()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	}

	ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);

	ImGui::Combo("Platform", &SelectedPlatform, PlatformChars.GetData(), PlatformChars.Num());
	if (ImGui::Button("Create New Inventory Session"))
	{
		InventorySessionResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (URH_PlayerInventory* pURH_PlayerInventory = PlayerInfo->GetPlayerInventory())
					{
						auto Delegate = FRH_OnInventorySessionUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerInventory::HandleInventorySessionUpdated, PlayerInfo->GetRHPlayerUuid());
						if (SelectedPlatform == 0)
						{
							pURH_PlayerInventory->CreateInventorySession({}, MoveTemp(Delegate));
						}
						else
						{
							pURH_PlayerInventory->CreateInventorySession(Platforms[SelectedPlatform], MoveTemp(Delegate));
						}
					}
					else
					{
						InventorySessionResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] RH_PlayerInventory unavailable.") LINE_TERMINATOR;
					}
				}
				
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Refresh Inventory Session"))
	{
		InventorySessionResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (URH_PlayerInventory* pURH_PlayerInventory = PlayerInfo->GetPlayerInventory())
					{
						auto Delegate = FRH_OnInventorySessionUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerInventory::HandleInventorySessionUpdated, PlayerInfo->GetRHPlayerUuid());
						if (SelectedPlatform == 0)
						{
							pURH_PlayerInventory->CreateInventorySession({}, MoveTemp(Delegate));
						}
						else
						{
							pURH_PlayerInventory->GetInventorySession(MoveTemp(Delegate));
						}
					}
					else
					{
						InventorySessionResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] RH_PlayerInventory unavailable.") LINE_TERMINATOR;
					}
				}

			}));
	}

	if (!InventorySessionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Inventory Session Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*InventorySessionResult));
		}
	}

	ImGui::Separator();

	URH_PlayerInventory* pURH_PlayerInventory = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
		{
			ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
			pURH_PlayerInventory = ActivePlayerInfo->GetPlayerInventory();
		}
	}
	if (pURH_PlayerInventory == nullptr)
	{
		ImGui::Text("%s", "URH_PlayerInventory not available for first selected player.");
		return;
	}

	const FRH_InventorySession InventorySession = pURH_PlayerInventory->GetCachedInventorySession();

	ImGuiDisplayCopyableValue(TEXT("Session ID"), InventorySession.SessionId);
	ImGuiDisplayCopyableValue(TEXT("Order ID"), InventorySession.OrderId);
	ImGui::Text("Platform : %s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", InventorySession.SessionPlatform)));

	TArray<FString> DurableLootIdsAsStrings;
	for (const auto LootId : InventorySession.AppliedDurableLoot)
	{
		DurableLootIdsAsStrings.Emplace(FString::FromInt(LootId));
	}

	const auto AppliedDurableLootIds = FString::Join(DurableLootIdsAsStrings, TEXT(", "));
	ImGuiDisplayCopyableValue(TEXT("Applied Durable Loot"), AppliedDurableLootIds);
}

void FRHDTW_PlayerInventory::HandleInventorySessionUpdated(bool bSuccess, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		InventorySessionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Inventory session update succeeded.") LINE_TERMINATOR;
	}
	else
	{
		InventorySessionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Inventory session update failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_PlayerInventory::DoInventory()
{
	URH_PlayerInventory* pURH_PlayerInventory = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
		{
			ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
			pURH_PlayerInventory = ActivePlayerInfo->GetPlayerInventory();
		}
	}
	if (pURH_PlayerInventory == nullptr)
	{
		ImGui::Text("%s", "URH_PlayerInventory not available for first selected player.");
		return;
	}

	ImGui::InputScalar("Item Id", ImGuiDataType_S32, &InputItemId);
	ImGui::Combo("Inventory Type", &SelectedInventoryType, InventoryTypeChars.GetData(), InventoryTypeChars.Num());
	ImGui::InputText("Inventory Id", InventoryIdInput.GetData(), InventoryIdInput.Num());

	if (ImGui::Button("Refresh Inventory"))
	{
		RefreshInventory(pURH_PlayerInventory);
	}

	ImGui::SameLine();
	if (ImGui::Button("Clear Cached Inventory"))
	{
		pURH_PlayerInventory->ClearCachedInventory();
	}

	if (ImGui::BeginTable("InventoryTable", 8, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Id");
		ImGui::TableSetupColumn("Type");
		ImGui::TableSetupColumn("Item");
		ImGui::TableSetupColumn("Count");
		ImGui::TableSetupColumn("Bucket");
		ImGui::TableSetupColumn("Expires");
		ImGui::TableSetupColumn("Custom Data");
		ImGui::TableSetupColumn("Acquired");
		ImGui::TableHeadersRow();

		// Content
		FString InputAsString = UTF8_TO_TCHAR(InventoryIdInput.GetData());
		FGuid InventoryId;
		FGuid::Parse(InputAsString, InventoryId);

		TArray<FRH_ItemInventory> Inventory;
		if (InventoryId.IsValid())
		{
			FRH_ItemInventory Inv;
			if (pURH_PlayerInventory->GetCachedInventoryForInventoryId(InventoryId, Inv))
			{
				Inventory.Emplace(Inv);
			}
		}
		else
		{
			TArray<int32> ItemIds;
			if (InputItemId > 0)
			{
				ItemIds.Emplace(InputItemId);
			}

			TArray<ERHAPI_InventoryType> Types;
			if (SelectedInventoryType > 0)
			{
				Types.Emplace(InventoryTypes[SelectedInventoryType]);
			}

			Inventory = pURH_PlayerInventory->GetCachedInventoryForItemsAndTypes(ItemIds, Types);
		}

		for (const auto& Inv : Inventory)
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(Inv.InventoryId.ToString(), Inv.InventoryId, ECopyMode::Value, true);
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", Inv.InventoryType)));
			ImGui::TableNextColumn();
			ImGui::Text("%d", Inv.ItemId);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Inv.Count);
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryBucket", Inv.Bucket)));
			ImGui::TableNextColumn();
			if (Inv.Expires.IsSet())
			{
				if (Inv.Expires.GetValue() < FDateTime::UtcNow())
				{
					ImGui::Text("%s", "Expired");
				}
				else
				{
					ImGui::Text("%s", TCHAR_TO_UTF8(*Inv.Expires.GetValue().ToIso8601()));
				}
			}
			else
			{
				ImGui::Text("");
			}
			ImGui::TableNextColumn();
			FString CustomData;
			for (auto& CustomDataEntry : Inv.CustomData)
			{
				CustomData += CustomDataEntry.Key;
				CustomData += "=";
				CustomData += CustomDataEntry.Value;
				CustomData += ";";
			}
			ImGui::Text("%s", TCHAR_TO_UTF8(*CustomData));
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*Inv.Acquired.ToIso8601()));
		}

		ImGui::EndTable();
	}
}

void FRHDTW_PlayerInventory::RefreshInventory(URH_PlayerInventory* pURH_PlayerInventory)
{
	TArray<int32> ItemIds;
	if (InputItemId > 0)
	{
		ItemIds.Emplace(InputItemId);
	}

	auto Delegate = FRH_OnInventoryUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerInventory::HandleGetInventory);
	pURH_PlayerInventory->GetInventory(ItemIds, MoveTemp(Delegate));
}

void FRHDTW_PlayerInventory::HandleGetInventory(bool success)
{
}

void FRHDTW_PlayerInventory::DoModifyInventory()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	}

	ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);

	ImGui::Combo("Source", &SelectedSourceType, SourceChars.GetData(), SourceChars.Num());
	ImGui::InputText("Client Order Reference Id (UUID)", ClientRefIdInput.GetData(), ClientRefIdInput.Num());
	const char* ModifyInventoryOperations[] = { "Create Inventory", "Update Inventory" };
	ImGui::Combo("Operation"
		, &InputSelectedOperation
		, ModifyInventoryOperations
		, IM_ARRAYSIZE(ModifyInventoryOperations));
	if (InputSelectedOperation == 1)
	{
		ImGui::InputText("Inventory Id", ModifyInventoryIdInput.GetData(), ModifyInventoryIdInput.Num());
	}
	else
	{
		ImGui::Combo("Type", &SelectedCreateInventoryTypes, CreateInventoryTypeChars.GetData(), CreateInventoryTypeChars.Num());
	}

	ImGui::InputScalar("Item Id", ImGuiDataType_S32, &InputModifyInventoryItemId);
	ImGui::Combo("Bucket", &SelectedInventoryBucket, InventoryBucketChars.GetData(), InventoryBucketChars.Num());
	ImGui::InputInt("Count", &InputCount);
	ImGui::InputText("Expires (ISO8601)", InputExpires.GetData(), InputExpires.Num());
	CustomDataStager.DisplayCustomDataStager();

	ImGui::Separator();

	if (!ModifyInventoryResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Modify Inventory Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*ModifyInventoryResult));
		}
	}

	if (ImGui::Button("Submit Inventory Change"))
	{
		ModifyInventoryResult.Empty();
		FString ClientOrderRefIdString = UTF8_TO_TCHAR(ClientRefIdInput.GetData());
		FGuid ClientOrderRefIdFGuid;
		TOptional<FGuid> ClientOrderRefId;
		if (FGuid::Parse(ClientOrderRefIdString, ClientOrderRefIdFGuid))
		{
			ClientOrderRefId = ClientOrderRefIdFGuid;
		}
		if (InputSelectedOperation == 1)
		{
			FString InvIdAsString = UTF8_TO_TCHAR(ModifyInventoryIdInput.GetData());
			FGuid InventoryId;
			FGuid::Parse(InvIdAsString, InventoryId);

			if (!FGuid::Parse(InvIdAsString, InventoryId))
			{
				ModifyInventoryResult = "Inventory Id must be a valid UUID";
				return;
			}

			FRH_UpdateInventory inv{};
			inv.InventoryId = InventoryId;
			inv.Count = InputCount;
			FString ExpiresString = UTF8_TO_TCHAR(InputExpires.GetData());
			if (!ExpiresString.IsEmpty())
			{
				FDateTime Expires;
				if (FDateTime::ParseIso8601(*ExpiresString, Expires))
				{
					inv.Expires = Expires;
					inv.InventoryShouldExpire = true;
				}
				else
				{
					ModifyInventoryResult = "Expires is not a valid ISO 8601 Datetime";
					return;
				}
			}
			inv.Bucket = InventoryBuckets[SelectedInventoryBucket];
			TMap<FString, FString> CustomDataMap;
			CustomDataStager.GetCustomDataMap(CustomDataMap);
			inv.CustomData = CustomDataMap;
			inv.ItemId = InputModifyInventoryItemId;

			ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, ClientOrderRefId, inv](URH_PlayerInfo* PlayerInfo)
				{
					if (PlayerInfo)
					{
						if (URH_PlayerInventory* pURH_PlayerInventory = PlayerInfo->GetPlayerInventory())
						{
							pURH_PlayerInventory->UpdateInventory(ClientOrderRefId, { inv }, SourceTypes[SelectedSourceType], FRH_OnInventoryUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerInventory::HandleInventoryUpdated, PlayerInfo->GetRHPlayerUuid()));
						}
						else
						{
							ModifyInventoryResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] URH_PlayerInventory not available.") LINE_TERMINATOR;
						}
					}
				}));
			
		}
		else
		{
			if (InputModifyInventoryItemId == 0)
			{
				ModifyInventoryResult = "Item Id must not be 0";
				return;
			}

			if (InputCount == 0)
			{
				ModifyInventoryResult = "Count must not be 0";
				return;
			}

			FRH_CreateInventory inv{};
			inv.Count = InputCount;
			inv.InventoryType = CreateInventoryTypes[SelectedCreateInventoryTypes];
			FString ExpiresString = UTF8_TO_TCHAR(InputExpires.GetData());
			if (!ExpiresString.IsEmpty())
			{
				FDateTime Expires;
				if (FDateTime::ParseIso8601(*ExpiresString, Expires))
				{
					inv.Expires = Expires;
					inv.InventoryShouldExpire = true;
				}
				else
				{
					ModifyInventoryResult = "Expires is not a valid ISO 8601 Datetime";
					return;
				}
			}
			inv.Bucket = InventoryBuckets[SelectedInventoryBucket];
			TMap<FString, FString> CustomDataMap;
			CustomDataStager.GetCustomDataMap(CustomDataMap);
			inv.CustomData = CustomDataMap;
			inv.ItemId = InputModifyInventoryItemId;

			ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, ClientOrderRefId, inv](URH_PlayerInfo* PlayerInfo)
				{
					if (PlayerInfo)
					{
						if (URH_PlayerInventory* pURH_PlayerInventory = PlayerInfo->GetPlayerInventory())
						{
							pURH_PlayerInventory->CreateInventory(ClientOrderRefId, { inv }, SourceTypes[SelectedSourceType], FRH_OnInventoryUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerInventory::HandleInventoryUpdated, PlayerInfo->GetRHPlayerUuid()));
						}
						else
						{
							ModifyInventoryResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] URH_PlayerInventory not available.") LINE_TERMINATOR;
						}
					}
				}));
		}
	}
}

void FRHDTW_PlayerInventory::HandleInventoryUpdated(bool success, FGuid PlayerUuid)
{
	if (success)
	{
		ModifyInventoryResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Operation Successfully Sent.") LINE_TERMINATOR;
	}
	else
	{
		ModifyInventoryResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Operation Failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_PlayerInventory::DoOrderWatchTab()
{
	URH_PlayerInventory* pURH_PlayerInventory = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
		{
			ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
			pURH_PlayerInventory = ActivePlayerInfo->GetPlayerInventory();
		}
	}
	if (pURH_PlayerInventory == nullptr)
	{
		ImGui::Text("%s", "URH_PlayerInventory not available for first selected player.");
		return;
	}

	if (pURH_PlayerInventory != nullptr)
	{
		if (!WatchEnabled)
		{
			if (ImGui::Button("Add Watch"))
			{
				pURH_PlayerInventory->SetOrderWatch(OrderDetailsBlock);
				WatchEnabled = true;
			}
		}
		else
		{
			if (ImGui::Button("Clear Watch"))
			{
				pURH_PlayerInventory->ClearOrderWatch(OrderDetailsBlock);
				WatchEnabled = false;
			}
		}

		for (const auto& Order : pURH_PlayerInventory->GetOrderResults())
		{
			ImGui::PushID(TCHAR_TO_UTF8(*Order.GetOrderId()));
			if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*Order.GetOrderId())))
			{
				ImGui::Indent(10.0f);
				if (ImGui::BeginTable("OrdersTable", 4, RH_TableFlagsPropSizing))
				{
					// Header
					ImGui::TableSetupColumn("Inventory Portal");
					ImGui::TableSetupColumn("Portal User Id");
					ImGui::TableSetupColumn("Instance Id");
					ImGui::TableSetupColumn("Match Id");
					ImGui::TableHeadersRow();

					// Content
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryPortal", Order.GetPortalId())));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*Order.GetPortalUserId()));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*Order.GetInstanceId()));
					ImGui::TableNextColumn();
					ImGui::Text("%s", TCHAR_TO_UTF8(*Order.GetMatchId()));

					ImGui::EndTable();
				}

				if (ImGui::CollapsingHeader("Entries"))
				{
					ImGui::Indent(10.0f);

					for (const auto& Entry : Order.GetEntries())
					{
						if (ImGui::BeginTable("OrderEntryTable", 10, RH_TableFlagsPropSizing))
						{
							// Header
							ImGui::TableSetupColumn("Result");
							ImGui::TableSetupColumn("Order Entry Type");
							ImGui::TableSetupColumn("Bucket");
							ImGui::TableSetupColumn("Loot Id");
							ImGui::TableSetupColumn("Inventory Id");
							ImGui::TableSetupColumn("Item Id");
							ImGui::TableSetupColumn("Quantity");
							ImGui::TableSetupColumn("Price Item Id");
							ImGui::TableSetupColumn("Price");
							ImGui::TableSetupColumn("Coupon Item Id");
							ImGui::TableHeadersRow();

							// Content
							ImGui::TableNextRow();
							ImGui::TableNextColumn();
							ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_PlayerOrderEntryResult", Entry.GetResult())));
							ImGui::TableNextColumn();
							ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_PlayerOrderEntryType", Entry.GetType())));
							ImGui::TableNextColumn();
							if (const ERHAPI_InventoryBucket* InventoryBucket = Entry.GetUseInventoryBucketOrNull())
							{
								ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryBucket", *InventoryBucket)));
							}
							else
							{
								ImGui::Text("");
							}
							ImGui::TableNextColumn();
							ImGui::Text("%d", Entry.GetLootId());
							ImGui::TableNextColumn();
							if (const FGuid* InventoryId = Entry.GetInventoryIdOrNull())
							{
								ImGui::Text("%s", TCHAR_TO_UTF8(*InventoryId->ToString(EGuidFormats::DigitsWithHyphens)));
							}
							else
							{
								ImGui::Text("");
							}
							ImGui::TableNextColumn();
							if (const int32* ItemId = Entry.GetItemIdOrNull())
							{
								ImGui::Text("%d", *ItemId);
							}
							else
							{
								ImGui::Text("");
							}
							ImGui::TableNextColumn();
							ImGui::Text("%d", Entry.GetQuantity());
							ImGui::TableNextColumn();
							if (const FRHAPI_PurchasePrice* PurchasePrice = Entry.GetPurchasePriceOrNull())
							{
								ImGui::Text("%d", (*PurchasePrice).GetPriceItemId());
								ImGui::TableNextColumn();
								ImGui::Text("%d", (*PurchasePrice).GetPrice());
								ImGui::TableNextColumn();
								ImGui::Text("%d", (*PurchasePrice).GetPriceCouponItemId());
							}
							else
							{
								ImGui::Text("");
								ImGui::TableNextColumn();
								ImGui::Text("");
								ImGui::TableNextColumn();
								ImGui::Text("");
							}

							ImGui::EndTable();
						}

						if (const TArray<FRHAPI_PlayerOrderDetail>* Details = Entry.GetDetailsOrNull())
						{
							if ((*Details).Num() > 0)
							{
								ImGui::Text("Details");
								ImGui::NextColumn();

								ImGui::Indent(10.0f);
								for (const auto& Detail : *Details)
								{
									FString HeaderText = *RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_PlayerOrderDetailType", Detail.GetType());

									if (const int32* LootId = Detail.GetLootIdOrNull())
									{
										HeaderText.Append(FString::Printf(TEXT(" Loot Id: %d"), *LootId));
									}

									if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*HeaderText)))
									{
										if (const auto* InvChange = Detail.GetInvChangeOrNull())
										{
											const int32* BeforeItemId = InvChange->GetBeforeItemIdOrNull();
											const auto* BeforeDetails = InvChange->GetBeforeOrNull();
											const int32* AfterItemId = InvChange->GetAfterItemIdOrNull();
											const auto* AfterDetails = InvChange->GetAfterOrNull();

											ImGui::Indent(10.0f);
											if (BeforeItemId != nullptr || BeforeDetails != nullptr)
											{
												if (ImGui::CollapsingHeader("Before"))
												{
													ImGui::Indent(10.0f);
													if (ImGui::BeginTable("AfterItemTable", 2, RH_TableFlagsPropSizing))
													{
														// Header
														ImGui::TableSetupColumn("Key");
														ImGui::TableSetupColumn("Value");
														ImGui::TableHeadersRow();

														// Content
														if (BeforeItemId != nullptr)
														{
															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("ItemId");
															ImGui::TableNextColumn();
															ImGui::Text("%d", *BeforeItemId);
														}

														if (BeforeDetails != nullptr)
														{
															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("InventoryId");
															ImGui::TableNextColumn();
															ImGuiDisplayCopyableValue("Inventory Id", (*BeforeDetails).GetInventoryId(), ECopyMode::Value);

															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("Type");
															ImGui::TableNextColumn();
															ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", (*BeforeDetails).GetType())));

															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("Count");
															ImGui::TableNextColumn();
															ImGui::Text("%d", (*BeforeDetails).GetCount());

															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("Acquired");
															ImGui::TableNextColumn();
															ImGui::Text("%s", TCHAR_TO_UTF8(*(*BeforeDetails).GetAcquired().ToString()));
														}

														ImGui::EndTable();
													}

													if (BeforeDetails != nullptr)
													{
														if (const auto* CustomData = (*BeforeDetails).GetCustomDataOrNull())
														{
															ImGuiDisplayCustomData(*CustomData, "Before");
														}
													}
													ImGui::Unindent(10.0f);
												}
											}

											if (AfterItemId != nullptr || AfterDetails != nullptr)
											{
												if (ImGui::CollapsingHeader("After"))
												{
													ImGui::Indent(10.0f);
													if (ImGui::BeginTable("AfterItemTable", 2, RH_TableFlagsPropSizing))
													{
														// Header
														ImGui::TableSetupColumn("Key");
														ImGui::TableSetupColumn("Value");
														ImGui::TableHeadersRow();

														// Content
														if (AfterItemId != nullptr)
														{
															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("ItemId");
															ImGui::TableNextColumn();
															ImGui::Text("%d", *AfterItemId);
														}

														if (AfterDetails != nullptr)
														{
															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("InventoryId");
															ImGui::TableNextColumn();
															ImGuiDisplayCopyableValue("Inventory Id", (*AfterDetails).GetInventoryId(), ECopyMode::Value);

															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("Type");
															ImGui::TableNextColumn();
															ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", (*AfterDetails).GetType())));

															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("Count");
															ImGui::TableNextColumn();
															ImGui::Text("%d", (*AfterDetails).GetCount());

															ImGui::TableNextRow();
															ImGui::TableNextColumn();
															ImGui::Text("Acquired");
															ImGui::TableNextColumn();
															ImGui::Text("%s", TCHAR_TO_UTF8(*(*AfterDetails).GetAcquired().ToString()));
														}

														ImGui::EndTable();
													}

													if (AfterDetails != nullptr)
													{
														if (const auto* CustomData = (*AfterDetails).GetCustomDataOrNull())
														{
															ImGuiDisplayCustomData(*CustomData, "After");
														}
													}
													ImGui::Unindent(10.0f);
												}
											}
											ImGui::Unindent(10.0f);
										}
									}
								}
								ImGui::Unindent(10.0f);
							}
						}
						ImGui::Separator();
					}
					ImGui::Unindent(10.0f);
				}
				ImGui::Unindent(10.0f);
			}
			ImGui::PopID();
		}
	}
	else
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
	}
}