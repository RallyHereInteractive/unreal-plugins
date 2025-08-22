// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerSettings.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_SettingsSubsystem.h"
#include "Engine/GameInstance.h"

FRHDTW_PlayerSettings::FRHDTW_PlayerSettings()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	SettingVersionNum = 0;
	bModifySettingOnlyIfMatch = false;
}

FRHDTW_PlayerSettings::~FRHDTW_PlayerSettings()
{
}

void FRHDTW_PlayerSettings::Do()
{
	if (ImGui::BeginTabBar("Settings", ImGuiTabBarFlags_FittingPolicyScroll))
	{
		if (ImGui::BeginTabItem("View", nullptr, ImGuiTabItemFlags_None))
		{
			DoViewSettings();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Modify", nullptr, ImGuiTabItemFlags_None))
		{
			DoModifySettings();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Types", nullptr, ImGuiTabItemFlags_None))
		{
			DoSettingsTypes();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_PlayerSettings::DoViewSettings()
{
	URH_PlayerInfo* ActivePlayerInfo = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo();
	}
	if (ActivePlayerInfo == nullptr)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	auto Settings = ActivePlayerInfo->GetSettings();
	if (Settings == nullptr)
	{
		ImGui::Text("Settings not available for selected Player.");
		return;
	}
	ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphensLower)));

	ImGui::InputText("Settings Id", &FetchSettingsIdInput);
	ImGui::InputText("Key", &FetchSettingsKeyInput);

	if (ImGui::Button("Get Setting Data"))
	{
		const auto TrimmedKeyList = FetchSettingsKeyInput.TrimStartAndEnd();
		if (TrimmedKeyList.Len() > 0)
		{
			TArray<FString> KeyList;
			TrimmedKeyList.ParseIntoArray(KeyList, TEXT(","), true);

			// if only one key, fetch that key specifically via a single fetch, else do a multi key fetch
			if (KeyList.Num() == 1)
			{
				Settings->GetPlayerSetting(FetchSettingsIdInput, KeyList.Last(), FTimespan(), true, FRH_PlayerInfoGetPlayerSettingsBlock());
			}
			else
			{
				Settings->GetPlayerSettingsForKeys(FetchSettingsIdInput, KeyList, FTimespan(), true, FRH_PlayerInfoGetPlayerSettingsBlock());
			}
		}
		else
		{
			// an empty key field means to fetch all keys
			Settings->GetPlayerSettingsForKeys(FetchSettingsIdInput, TArray<FString>(), FTimespan(), true, FRH_PlayerInfoGetPlayerSettingsBlock());
		}
		
	}
	ImGui::Separator();

	for (const auto& Pair : Settings->GetAllStoredPlayerSettings())
	{
		if (Pair.Value.Content.Num() > 0)
		{
			ImGui::PushID(TCHAR_TO_UTF8(*Pair.Key));

			for (const auto& contentPair : Pair.Value.Content)
			{
				if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*(Pair.Key + " - " + contentPair.Key))))
				{
					ImGuiDisplayCopyableValue(TEXT("ETag"), contentPair.Value.GetEtagOrNull());
					ImGuiDisplayCopyableValue(TEXT("LastModified"), contentPair.Value.GetLastModifiedOrNull());
					
					const FRHAPI_JsonValue& FRHAPIJsonValue = contentPair.Value.GetValue();
					FString PrettyJson;

					if (FJsonSerializer::Serialize(FRHAPIJsonValue.GetValue(), TEXT(""), TJsonWriterFactory<>::Create(&PrettyJson)))
					{
						ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
						ImGuiDisplayCopyButton(TEXT("Json"), PrettyJson);
					}
				}
			}
			ImGui::PopID();
		}
	}
}

void FRHDTW_PlayerSettings::DoModifySettings()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	}
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);

	ImGui::InputText("Settings Id", &ModifySettingsIdInput);
	ImGui::InputText("Key", &ModifySettingsKeyInput);
	ImGui::InputInt("Schema Version", &SettingVersionNum);
	ImGui::Checkbox("Check If Current", &bModifySettingOnlyIfMatch);
	ImGui::InputTextMultiline("Json Document", &ModifySettingsJsonInput);

	if (!SetPlayerSettingActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Modify Settings Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*SetPlayerSettingActionResult));
		}
	}

	if (ImGui::Button("Modify Setting"))
	{
		FString JsonString = ModifySettingsJsonInput;
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
		FJsonSerializer::Deserialize(JsonReader, JsonObject);
		TSharedPtr<FJsonValueObject> JsonValueObject = MakeShared<FJsonValueObject>(JsonObject);
		
		FRHAPI_SetSinglePlayerSettingRequest SettingData;
		SettingData.SetValue(FRHAPI_JsonValue(JsonValueObject));
		SettingData.SetV(SettingVersionNum);

		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, SettingData](URH_PlayerInfo* PlayerInfo)
			{
				SetPlayerSettingActionResult.Empty();
				if (PlayerInfo && PlayerInfo->GetSettings())
				{
					auto Settings = PlayerInfo->GetSettings();
					FRH_ObjectVersionCheck ObjectVersionCheck;

					// if using string matching, get the current etag and set it in the request
					if (bModifySettingOnlyIfMatch)
					{
						const auto& SettingsMap = Settings->GetAllStoredPlayerSettings();
						const auto SettingKeyData = SettingsMap.Find(ModifySettingsIdInput);
						const auto SettingValueData = SettingKeyData ? SettingKeyData->Content.Find(ModifySettingsKeyInput) : nullptr;
						const auto ExistingEtag = SettingValueData ? SettingValueData->GetEtag(TEXT("")) : TEXT("");

						if (!ExistingEtag.IsEmpty())
						{
							ObjectVersionCheck.IfMatch = ExistingEtag;
						}
						else
						{
							// if no etag, fail the request and add an error.  Do not call API as we we are not in a valid state based on the options to not modify the data if it does not match
							SetPlayerSettingActionResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] Modifying setting failed - No ETag to match against.") LINE_TERMINATOR;
							return;
						}							
					}
					
					auto Delegate = FRH_PlayerInfoSetPlayerSettingDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerSettings::HandleSetPlayerSettingResponse, PlayerInfo->GetRHPlayerUuid());
					Settings->SetPlayerSetting(ModifySettingsIdInput, ModifySettingsKeyInput, SettingData, MoveTemp(Delegate), ObjectVersionCheck);
				}
			}));
	}
	else if (ImGui::Button("Delete Setting"))
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				SetPlayerSettingActionResult.Empty();
				if (PlayerInfo && PlayerInfo->GetSettings())
				{
					auto Delegate = FRH_GenericSuccessWithErrorDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerSettings::HandleDeletePlayerSettingResponse, PlayerInfo->GetRHPlayerUuid());
					PlayerInfo->GetSettings()->DeletePlayerSetting(ModifySettingsIdInput, ModifySettingsKeyInput, MoveTemp(Delegate));
				}
			}));
	}
}

void FRHDTW_PlayerSettings::DoSettingsTypes()
{
	auto* GI = GetGameInstance();
	if (GI == nullptr)
	{
		ImGui::Text("%s", "Could not find owning game instance.");
		return;
	}

	auto* pGISS = GI->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISS == nullptr)
	{
		ImGui::Text("%s", "URH_GameInstanceSubsystem not available.");
		return;
	}

	URH_SettingsSubsystem* pRH_SettingsSubsystem = pGISS->GetSettingsSubsystem();
	if (pRH_SettingsSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_SettingsSubsystem not available.");
		return;
	}

	if (ImGui::Button("Get Setting Types"))
	{
		pRH_SettingsSubsystem->GetSettingTypes();
	}
	ImGui::Separator();

	if (pRH_SettingsSubsystem->GetCachedSettingTypes().Num() > 0)
	{
		for (const auto& Pair : pRH_SettingsSubsystem->GetCachedSettingTypes())
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*Pair.Key), RH_DefaultTreeFlagsDefaultOpen))
			{
				for (const auto& VersionPair : Pair.Value.GetVersions())
				{
					if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s##%s"), *VersionPair.Key, *Pair.Key)), RH_DefaultTreeFlagsLeaf | ImGuiTreeNodeFlags_DefaultOpen))
					{
						ImGuiDisplayJsonObject(VersionPair.Value.GetValueJsonschema(), true);
						ImGui::TreePop();
					}
				}
				ImGui::TreePop();
			}
		}
	}
}

void FRHDTW_PlayerSettings::HandleSetPlayerSettingResponse(bool bSuccess, const FRH_PlayerSettingsDataWrapper& Response, const FRH_ErrorInfo& ErrorInfo, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		SetPlayerSettingActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Modifying setting succeeded.") LINE_TERMINATOR;
	}
	else
	{
		SetPlayerSettingActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Modifying setting failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_PlayerSettings::HandleDeletePlayerSettingResponse(bool bSuccess, const FRH_ErrorInfo& ErrorInfo, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		SetPlayerSettingActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Delete setting succeeded.") LINE_TERMINATOR;
	}
	else
	{
		SetPlayerSettingActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Delete setting failed.") LINE_TERMINATOR;
	}
}

