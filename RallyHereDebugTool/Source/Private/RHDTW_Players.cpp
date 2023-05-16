// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_Players.h"

#include "imgui.h"

#include "RH_ImGuiUtilities.h"
#include "RallyHereIntegrationModule.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "Engine/LocalPlayer.h"

#define CUSTOM_DATA_TEXT_LENGTH 1024

FRHDTW_Players::FRHDTW_Players()
	: Super(),
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
	SettingVersionNum = 0;
	ActivePlayerInfo = nullptr;
	WatchEnabled = false;
	GetPlatformsActionResult.Empty();
	GetInventoryResult.Empty();
	GetPresenceResult.Empty();
	PlayerUuidInput.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SettingsIdInput.SetNumZeroed(64);
	ModifySettingsIdInput.SetNumZeroed(64);
	ModifySettingsKeyInput.SetNumZeroed(64);
	ModifySettingsJsonInput.SetNumZeroed(4096);

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
	InputCustomDataKey.SetNumZeroed(CUSTOM_DATA_TEXT_LENGTH);
	InputCustomDataValue.SetNumZeroed(CUSTOM_DATA_TEXT_LENGTH);
}

FRHDTW_Players::~FRHDTW_Players()
{
}

void FRHDTW_Players::DoRHPlayerInfoTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	ImGui::SetNextItemWidth(150.f);
	ImGui::InputText("Player Uuid", PlayerUuidInput.GetData(), PlayerUuidInput.Num());

	ImGui::SameLine();
	if (ImGui::Button("Get Player"))
	{
		FString InputAsString = UTF8_TO_TCHAR(PlayerUuidInput.GetData());
		FGuid PlayerInfoId;
		FGuid::Parse(InputAsString, PlayerInfoId);

		pRH_PlayerInfoSubsystem->GetOrCreatePlayerInfo(PlayerInfoId);
	}


	ImGui::Separator();
	ImGui::Columns(4);
	ImGui::Text("Select");
	ImGui::NextColumn();
	ImGui::Text("Player UUID");
	ImGui::NextColumn();
	ImGui::Text("Platforms");
	ImGui::NextColumn();
	ImGui::Text("Presence");
	ImGui::NextColumn();
	
	for (auto Pair : pRH_PlayerInfoSubsystem->GetPlayerInfos())
	{
		auto* pi = Pair.Value;
		ImGui::PushID(TCHAR_TO_UTF8(*(pi->GetRHPlayerUuid().ToString())));
	
		if (ActivePlayerInfo == pi)
		{
			ImGui::Text("Selected");
			ImGui::NextColumn();
		}
		else
		{
			if (ImGui::Button("Select"))
			{
				ActivePlayerInfo = pi;
			}
			ImGui::NextColumn();
		}

		ImGuiDisplayCopyableValue("PlayerUUID", pi->GetRHPlayerUuid(), ECopyMode::Value);
		ImGui::NextColumn();
		if (pi->GetPlayerPlatforms().Num())
		{
			ImGui::Text("%d", pi->GetPlayerPlatforms().Num());
		}
		else
		{
			ImGui::Text("Not Requested");
		}
		ImGui::NextColumn();

		URH_PlayerPresence* pp = pi->GetPresence();

		if (pp != nullptr)
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_OnlineStatus", pp->Status)));
			ImGui::NextColumn();
		}
		else
		{
			ImGui::Text("Not found");
			ImGui::NextColumn();
		}
		
		ImGui::PopID();
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoRHPlatformsTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	if (ActivePlayerInfo != nullptr)
	{
		DisplaySelectedPlayerInfo();
		
		if (ImGui::Button("Get Platforms"))
		{
			if (URH_PlayerInfo* pi = pRH_PlayerInfoSubsystem->GetPlayerInfo(ActivePlayerInfo->GetRHPlayerUuid()))
			{
				GetPlatformsActionResult.Empty();
				pi->GetLinkedPlatformInfo(FTimespan(), true, FRH_PlayerInfoGetPlatformsDelegate::CreateSP(SharedThis(this), &FRHDTW_Players::HandleGetLinkedPlatforms));
			}
		}

		ImGui::Text("%s", TCHAR_TO_UTF8(*GetPlatformsActionResult));
		ImGui::Separator();

		ImGui::Columns(3);
		ImGui::Text("Platform User Id");
		ImGui::NextColumn();
		ImGui::Text("Platform Type");
		ImGui::NextColumn();
		ImGui::Text("Last Known Gamer Tag");
		ImGui::NextColumn();

		if (URH_PlayerInfo* pi = pRH_PlayerInfoSubsystem->GetPlayerInfo(ActivePlayerInfo->GetRHPlayerUuid()))
		{
			for (auto ppi : pi->GetPlayerPlatforms())
			{
				ImGuiDisplayCopyableValue("PlatformUserId", ppi->GetPlatformUserId(), ECopyMode::Value);
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_PlatformTypes", ppi->GetPlatformType())));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*ppi->GetLastKnownGamerTag()));
				ImGui::NextColumn();
			}
		}
	}
	else
	{
		ImGui::Text("Set a selected player info to view details on this tab");
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DisplaySelectedPlayerInfo()
{
	ImGui::Text("Selected Player Id: %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
	ImGui::Separator();
}

void FRHDTW_Players::DoRhPresenceTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	if (ActivePlayerInfo != nullptr)
	{
		DisplaySelectedPlayerInfo();

		auto pp = ActivePlayerInfo->GetPresence();
		
		if (pp != nullptr)
		{
			if (ImGui::Button("Get Presence"))
			{
				GetPresenceResult.Empty();
				pp->RequestUpdate(
					/*
					FRH_OnRequestPlayerPresenceDelegate::CreateSP(AsShared(), [this](bool bSuccess, URH_PlayerPresence*)
					{
					if (!bSuccess)
					{
						GetPresenceResult = TEXT("Failed to try to get public presence by uuid");
					}
					})
					*/
				);
			}

			ImGui::Text("%s", TCHAR_TO_UTF8(*GetPresenceResult));
			ImGui::Separator();

			ImGui::Columns(2);
			ImGui::Separator();
			ImGui::Text("Key");
			ImGui::NextColumn();
			ImGui::Text("Value");
			ImGui::NextColumn();
			ImGui::Separator();

			ImGuiDisplayCopyableValue(TEXT("Uuid"), pp->PlayerUuid, ECopyMode::TwoColumn);
			
			ImGui::Text("Status");
			ImGui::NextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_OnlineStatus", pp->Status)));
			ImGui::NextColumn();
			
			ImGuiDisplayCopyableValue(TEXT("Message"), pp->Message, ECopyMode::TwoColumn);
			
			ImGuiDisplayCopyableValue(TEXT("Display Name"), pp->DisplayName, ECopyMode::TwoColumn);

			ImGui::Text("LastUpdated");
			ImGui::NextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*pp->LastUpdated.ToString()));
			ImGui::NextColumn();

			ImGuiDisplayCopyableValue(TEXT("ETag"), pp->ETag, ECopyMode::TwoColumn);

			ImGui::Columns(1);
			ImGuiDisplayCustomData(pp->CustomData);
			ImGui::Columns(1);
		}
	}
	else
	{
		ImGui::Text("Set a selected player info to view details on this tab");
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoRhInventoryTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	if (ActivePlayerInfo != nullptr)
	{
		DisplaySelectedPlayerInfo();

		URH_InventorySubsystem* pRH_InventorySubsystem = ActivePlayerInfo->GetInventorySubsystem();
		if (pRH_InventorySubsystem == nullptr)
		{
			ImGui::Text("%s", "URH_InventorySubsystem not available.");
			return;
		}

		if (ImGui::BeginTabBar("Inventory", ImGuiTabBarFlags_FittingPolicyScroll))
		{
			if (ImGui::BeginTabItem("Inventory Session", nullptr, ImGuiTabItemFlags_None))
			{
				DoInventorySession(pRH_InventorySubsystem);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Player Inventory", nullptr, ImGuiTabItemFlags_None))
			{
				DoInventory(pRH_InventorySubsystem);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Modify Player Inventory", nullptr, ImGuiTabItemFlags_None))
			{
				DoModifyInventory(pRH_InventorySubsystem);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Player Orders", nullptr, ImGuiTabItemFlags_None))
			{
				DoOrderWatchTab(pRH_InventorySubsystem);
				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
	}
	else
	{
		ImGui::Text("Set a selected player info to view details on this tab");
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoInventorySession(URH_InventorySubsystem* pURH_InventorySubsystem)
{
	ImGui::Combo("Platform", &SelectedPlatform, PlatformChars.GetData(), PlatformChars.Num());

	if (ImGui::Button("Create New Inventory Session"))
	{
		CreateNewInventorySession(pURH_InventorySubsystem);
	}

	ImGui::SameLine();
	if (ImGui::Button("Refresh Inventory Session"))
	{
		RefreshInventorySession(pURH_InventorySubsystem);
	}

	ImGui::Separator();

	const auto InventorySession = pURH_InventorySubsystem->GetCachedInventorySession();

	ImGuiDisplayCopyableValue(TEXT("Session ID"), InventorySession.SessionId);
	ImGuiDisplayCopyableValue(TEXT("Order ID"), InventorySession.OrderId);
	ImGuiDisplayCopyableValue(TEXT("Platform"), TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_Platform", InventorySession.SessionPlatform)));

	TArray<FString> DurableLootIdsAsStrings;
	for (const auto LootId : InventorySession.AppliedDurableLoot)
	{
		DurableLootIdsAsStrings.Emplace(FString::FromInt(LootId));
	}

	const auto AppliedDurableLootIds = FString::Join(DurableLootIdsAsStrings, TEXT(", "));
	ImGuiDisplayCopyableValue(TEXT("Applied Durable Loot"), AppliedDurableLootIds);
}

void FRHDTW_Players::CreateNewInventorySession(URH_InventorySubsystem* pURH_InventorySubsystem)
{
	auto Delegate = FRH_OnInventorySessionUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_Players::HandleInventorySessionUpdated);
	if (SelectedPlatform == 0)
	{
		pURH_InventorySubsystem->CreateInventorySession({}, MoveTemp(Delegate));
	}
	else
	{
		pURH_InventorySubsystem->CreateInventorySession(Platforms[SelectedPlatform], MoveTemp(Delegate));
	}
}

void FRHDTW_Players::RefreshInventorySession(URH_InventorySubsystem* pURH_InventorySubsystem)
{
	auto Delegate = FRH_OnInventorySessionUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_Players::HandleInventorySessionUpdated);
	pURH_InventorySubsystem->GetInventorySession(MoveTemp(Delegate));
}

void FRHDTW_Players::HandleInventorySessionUpdated(bool bSuccess)
{
}

void FRHDTW_Players::DoInventory(URH_InventorySubsystem* pURH_InventorySubsystem)
{
	ImGui::InputScalar("Item Id", ImGuiDataType_S32, &InputItemId);
	ImGui::Combo("Inventory Type", &SelectedInventoryType, InventoryTypeChars.GetData(), InventoryTypeChars.Num());
	ImGui::InputText("Inventory Id", InventoryIdInput.GetData(), InventoryIdInput.Num());

	if (ImGui::Button("Refresh Inventory"))
	{
		RefreshInventory(pURH_InventorySubsystem);
	}

	ImGui::SameLine();
	if (ImGui::Button("Clear Cached Inventory"))
	{
		pURH_InventorySubsystem->ClearCachedInventory();
	}

	ImGui::Columns(8);
	ImGui::Separator();
	ImGui::Text("%s", "Id");
	ImGui::NextColumn();
	ImGui::Text("%s", "Type");
	ImGui::NextColumn();
	ImGui::Text("%s", "Item");
	ImGui::NextColumn();
	ImGui::Text("%s", "Count");
	ImGui::NextColumn();
	ImGui::Text("%s", "Platform");
	ImGui::NextColumn();
	ImGui::Text("%s", "Expires");
	ImGui::NextColumn();
	ImGui::Text("%s", "Custom Data");
	ImGui::NextColumn();
	ImGui::Text("%s", "Acquired");
	ImGui::NextColumn();
	ImGui::Separator();

	FString InputAsString = UTF8_TO_TCHAR(InventoryIdInput.GetData());
	FGuid InventoryId;
	FGuid::Parse(InputAsString, InventoryId);

	TArray<FRH_ItemInventory> Inventory;
	if (InventoryId.IsValid())
	{
		FRH_ItemInventory Inv;
		if (pURH_InventorySubsystem->GetCachedInventoryForInventoryId(InventoryId, Inv))
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

		Inventory = pURH_InventorySubsystem->GetCachedInventoryForItemsAndTypes(ItemIds, Types);
	}

	for (const auto& Inv : Inventory)
	{
		ImGuiDisplayCopyableValue(TEXT(""), *Inv.InventoryId.ToString(EGuidFormats::DigitsWithHyphens), ECopyMode::Value);
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryType", Inv.InventoryType)));
		ImGui::NextColumn();
		ImGui::Text("%d", Inv.ItemId);
		ImGui::NextColumn();
		ImGui::Text("%d", Inv.Count);
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_InventoryBucket", Inv.Bucket)));
		ImGui::NextColumn();
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
		ImGui::NextColumn();
		FString CustomData;
		for (auto& CustomDataEntry : Inv.CustomData)
		{
			CustomData += CustomDataEntry.Key;
			CustomData += "=";
			CustomData += CustomDataEntry.Value;
			CustomData += ";";
			break;
		}
		ImGui::Text("%s", TCHAR_TO_UTF8(*CustomData));
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*Inv.Acquired.ToIso8601()));
		ImGui::NextColumn();
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::RefreshInventory(URH_InventorySubsystem* pURH_InventorySubsystem)
{
	TArray<int32> ItemIds;
	if (InputItemId > 0)
	{
		ItemIds.Emplace(InputItemId);
	}

	auto Delegate = FRH_OnInventoryUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_Players::HandleGetInventory);
	pURH_InventorySubsystem->GetInventory(ItemIds, MoveTemp(Delegate));
}

void FRHDTW_Players::HandleGetInventory(bool success)
{
}


void FRHDTW_Players::DoModifyInventory(URH_InventorySubsystem* pURH_InventorySubsystem)
{
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
	ImGui::InputText("Custom Data Key", InputCustomDataKey.GetData(), InputCustomDataKey.Num());
	ImGui::InputText("Custom Data Value", InputCustomDataValue.GetData(), InputCustomDataValue.Num());
	ImGui::TextUnformatted("Staged Custom Data:");
	for (const auto& entry : StagedCustomData)
	{
		ImGuiDisplayCopyableValue(TCHAR_TO_UTF8(*entry.Key), TCHAR_TO_UTF8(*entry.Value), ECopyMode::KeyValue);
	}
	if (ImGui::Button("Add Custom Data"))
	{
		StagedCustomData.Emplace(UTF8_TO_TCHAR(InputCustomDataKey.GetData()), UTF8_TO_TCHAR(InputCustomDataValue.GetData()));
	}
	ImGui::SameLine();
	if (ImGui::Button("Remove Custom Data"))
	{
		StagedCustomData.Remove(UTF8_TO_TCHAR(InputCustomDataKey.GetData()));
	}

	ImGui::Separator();
	ImGui::Text("%s", TCHAR_TO_UTF8(*ModifyInventoryResult));
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
			}
			inv.Bucket = InventoryBuckets[SelectedInventoryBucket];
			inv.CustomData = StagedCustomData;
			StagedCustomData = {};
			inv.ItemId = InputModifyInventoryItemId;

			auto Delegate = FRH_OnInventoryUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_Players::HandleInventoryUpdated);
			pURH_InventorySubsystem->UpdateInventory(ClientOrderRefId, { inv }, SourceTypes[SelectedSourceType], Delegate);
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
			}
			inv.Bucket = InventoryBuckets[SelectedInventoryBucket];
			inv.CustomData = StagedCustomData;
			StagedCustomData = {};
			inv.ItemId = InputModifyInventoryItemId;

			auto Delegate = FRH_OnInventoryUpdateDelegate::CreateSP(SharedThis(this), &FRHDTW_Players::HandleInventoryUpdated);
			pURH_InventorySubsystem->CreateInventory(ClientOrderRefId, { inv }, SourceTypes[SelectedSourceType], Delegate);
		}
	}
}

void FRHDTW_Players::HandleInventoryUpdated(bool success)
{
	if (success)
	{
		ModifyInventoryResult = "Operation Successfully sent";
	}
	else
	{
		ModifyInventoryResult = "Operation Failed";
	}
}

void FRHDTW_Players::DoRhSessionTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	if (ActivePlayerInfo != nullptr)
	{
		DisplaySelectedPlayerInfo();
		ImGui::Text("Coming Soon");
	}
	else
	{
		ImGui::Text("Set a selected player info to view details on this tab");
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoRhSettingsTab(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	if (ActivePlayerInfo != nullptr)
	{
		DisplaySelectedPlayerInfo();

		if (ImGui::BeginTabBar("Settings", ImGuiTabBarFlags_FittingPolicyScroll))
		{
			if (ImGui::BeginTabItem("View Settings", nullptr, ImGuiTabItemFlags_None))
			{
				DoViewSettings(pRH_PlayerInfoSubsystem);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Modify Settings", nullptr, ImGuiTabItemFlags_None))
			{
				DoModifySettings(pRH_PlayerInfoSubsystem);
				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
	}
	else
	{
		ImGui::Text("Set a selected player info to view details on this tab");
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoViewSettings(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	ImGui::InputText("Settings Id", SettingsIdInput.GetData(), SettingsIdInput.Num());

	if (ImGui::Button("Get Settings Data"))
	{
		ActivePlayerInfo->GetPlayerSettings(UTF8_TO_TCHAR(SettingsIdInput.GetData()), FTimespan(), true, FRH_PlayerInfoGetPlayerSettingsBlock());
	}
	ImGui::Separator();

	for (const auto& Pair : ActivePlayerInfo->GetAllStoredPlayerSettings())
	{
		if (URH_PlayerSettingsDataWrapper* DataWrapper = Pair.Value)
		{
			ImGui::PushID(DataWrapper);

			for (const auto& contentPair : DataWrapper->Content)
			{
				auto HeaderTitle = TCHAR_TO_UTF8(*(Pair.Key + " - " + contentPair.Key));

				if (ImGui::CollapsingHeader(HeaderTitle))
				{
					if (const FRHAPI_JsonValue* FRHAPIJsonValue = contentPair.Value.GetValueOrNull())
					{
						FString PrettyJson;

						if (FJsonSerializer::Serialize(FRHAPIJsonValue->GetValue(), TEXT(""), TJsonWriterFactory<>::Create(&PrettyJson)))
						{
							ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
						}
					}
				}
			}
			ImGui::PopID();
		}
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoModifySettings(URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem)
{
	ImGui::InputText("Settings Id", ModifySettingsIdInput.GetData(), ModifySettingsIdInput.Num());
	ImGui::InputText("Key", ModifySettingsKeyInput.GetData(), ModifySettingsKeyInput.Num());
	ImGui::InputInt("Version", &SettingVersionNum);
	ImGui::InputTextMultiline("Json Blob", ModifySettingsJsonInput.GetData(), ModifySettingsJsonInput.Num());

	if (ImGui::Button("Modify Settings Data"))
	{
		FString JsonString = UTF8_TO_TCHAR(ModifySettingsJsonInput.GetData());
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
		FJsonSerializer::Deserialize(JsonReader, JsonObject);
		URH_PlayerSettingsDataWrapper* DataWrapper = NewObject<URH_PlayerSettingsDataWrapper>();
		TSharedPtr<FJsonValueObject> JsonValueObject = MakeShared<FJsonValueObject>(JsonObject);
		FRHAPI_SettingData SettingData;

		SettingData.SetValue(FRHAPI_JsonValue::CreateFromUnrealValue(JsonValueObject));
		SettingData.SetV(SettingVersionNum);

		DataWrapper->Content.Add(UTF8_TO_TCHAR(ModifySettingsKeyInput.GetData()), SettingData);
		ActivePlayerInfo->SetPlayerSettings(UTF8_TO_TCHAR(ModifySettingsIdInput.GetData()), DataWrapper);
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::DoOrderWatchTab(URH_InventorySubsystem* pURH_InventorySubsystem)
{
	if (pURH_InventorySubsystem != nullptr)
	{
		if (!WatchEnabled)
		{
			if (ImGui::Button("Add Watch"))
			{
				pURH_InventorySubsystem->SetOrderWatch(OrderDetailsBlock);
				WatchEnabled = true;
			}
		}
		else
		{
			if (ImGui::Button("Clear Watch"))
			{
				pURH_InventorySubsystem->ClearOrderWatch(OrderDetailsBlock);
				WatchEnabled = false;
			}
		}

		for (const auto* Order : pURH_InventorySubsystem->GetOrderResults())
		{
			if (Order == nullptr)
			{
				continue;
			}

			ImGui::PushID(Order);
			if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*Order->GetOrderId())))
			{
				ImGui::Columns(4);
				ImGui::Text("Platform Type");
				ImGui::NextColumn();
				ImGui::Text("Portal User Id");
				ImGui::NextColumn();
				ImGui::Text("Instance Id");
				ImGui::NextColumn();
				ImGui::Text("Match Id");
				ImGui::NextColumn();

				ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_PlatformTypes", Order->GetPlatformType())));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*Order->GetPortalUserId()));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*Order->GetInstanceId()));
				ImGui::NextColumn();
				ImGui::Text("%s", TCHAR_TO_UTF8(*Order->GetMatchId()));

				ImGui::Separator();
				ImGui::Columns(1);
				if (ImGui::CollapsingHeader("Entries"))
				{
					ImGui::Columns(9);
					ImGui::Text("Result");
					ImGui::NextColumn();
					ImGui::Text("Order Entry Type");
					ImGui::NextColumn();
					ImGui::Text("Loot Id");
					ImGui::NextColumn();
					ImGui::Text("Item Id");
					ImGui::NextColumn();
					ImGui::Text("Inventory Id");
					ImGui::NextColumn();
					ImGui::Text("Quantity");
					ImGui::NextColumn();
					ImGui::Text("Price Item Id");
					ImGui::NextColumn();
					ImGui::Text("Price");
					ImGui::NextColumn();
					ImGui::Text("Coupon Item Id");
					ImGui::NextColumn();
					for (const auto& Entry : Order->GetOrderEntries())
					{
						ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_PlayerOrderEntryResult", Entry->GetResult())));
						ImGui::NextColumn();
						ImGui::Text("%s", TCHAR_TO_UTF8(*RH_GETENUMSTRING("/Script/RallyHereAPI", "ERHAPI_PlayerOrderEntryType", Entry->GetOrderEntryType())));
						ImGui::NextColumn();
						ImGui::Text("%d", Entry->GetLootId());
						ImGui::NextColumn();
						ImGui::Text("%d", Entry->GetItemId());
						ImGui::NextColumn();
						ImGuiDisplayCopyableValue("Inventory Id", Entry->GetInventoryId(), ECopyMode::Value);
						ImGui::NextColumn();
						ImGui::Text("%d", Entry->GetQuantity());
						ImGui::NextColumn();
						ImGui::Text("%d", Entry->GetPriceItemId());
						ImGui::NextColumn();
						ImGui::Text("%d", Entry->GetPrice());
						ImGui::NextColumn();
						ImGui::Text("%d", Entry->GetCouponItemId());
					}
					ImGui::Columns(1);
				}
			}
			ImGui::PopID();
		}
	}
	else
	{
		ImGui::Text("Set a selected player info to view details on this tab");
	}

	ImGui::Columns(1);
}

void FRHDTW_Players::Do()
{
	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("ERROR - No Game Instance Found");
		return;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISubsystem == nullptr)
	{
		ImGui::Text("URH_GameInstanceSubsystem not available.");
		return;
	}
	
	URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem = pGISubsystem->GetPlayerInfoSubsystem();
	if (pRH_PlayerInfoSubsystem == nullptr)
	{
		ImGui::Text("URH_PlayerInfoSubsystem not available.");
		return;
	}

	if (ImGui::BeginTabBar("Players", ImGuiTabBarFlags_FittingPolicyScroll))
	{
		if (ImGui::BeginTabItem("RH Players", nullptr, ImGuiTabItemFlags_None))
		{
			DoRHPlayerInfoTab(pRH_PlayerInfoSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Platforms", nullptr, ImGuiTabItemFlags_None))
		{
			DoRHPlatformsTab(pRH_PlayerInfoSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Presence", nullptr, ImGuiTabItemFlags_None))
		{
			DoRhPresenceTab(pRH_PlayerInfoSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Inventory", nullptr, ImGuiTabItemFlags_None))
		{
			DoRhInventoryTab(pRH_PlayerInfoSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Sessions", nullptr, ImGuiTabItemFlags_None))
		{
			DoRhSessionTab(pRH_PlayerInfoSubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Settings", nullptr, ImGuiTabItemFlags_None))
		{
			DoRhSettingsTab(pRH_PlayerInfoSubsystem);
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Players::HandleGetLinkedPlatforms(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& LinkedPlatforms)
{
	if (bSuccess)
	{
		GetPlatformsActionResult = FString::Printf(TEXT("Refresh Linked Platforms succeeded."));
	}
	else
	{
		GetPlatformsActionResult = FString::Printf(TEXT("Refresh Linked Platforms failed."));
	}
}

void FRHDTW_Players::HandleGetPresence(const RallyHereAPI::FResponse_GetPlayerPresencePublicByUuid& Resp)
{
	if (Resp.IsSuccessful())
	{
		GetPresenceResult = FString::Printf(TEXT("Get Player Presence succeeded."));
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
	{
		GetPresenceResult = FString::Printf(TEXT("Get Player Presence unchanged from last request."));
	}
	else
	{
		GetPresenceResult = FString::Printf(TEXT("Get Player Presence failed with status code % d.Response: % s "), Resp.GetHttpResponseCode(), *Resp.GetResponseString());
	}
}