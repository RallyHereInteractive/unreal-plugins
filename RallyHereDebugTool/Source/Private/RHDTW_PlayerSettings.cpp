#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerSettings.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"

FRHDTW_PlayerSettings::FRHDTW_PlayerSettings()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	SettingVersionNum = 0;
	SettingsIdInput.SetNumZeroed(64);
	ModifySettingsIdInput.SetNumZeroed(64);
	ModifySettingsKeyInput.SetNumZeroed(64);
	ModifySettingsJsonInput.SetNumZeroed(4096);

	SetPlayerSettingsActionResult.Empty();
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
	ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

	ImGui::InputText("Settings Id", SettingsIdInput.GetData(), SettingsIdInput.Num());

	if (ImGui::Button("Get Settings Data"))
	{
		ActivePlayerInfo->GetPlayerSettings(UTF8_TO_TCHAR(SettingsIdInput.GetData()), FTimespan(), true, FRH_PlayerInfoGetPlayerSettingsBlock());
	}
	ImGui::Separator();

	for (const auto& Pair : ActivePlayerInfo->GetAllStoredPlayerSettings())
	{
		if (Pair.Value.Content.Num() > 0)
		{
			ImGui::PushID(TCHAR_TO_UTF8(*Pair.Key));

			for (const auto& contentPair : Pair.Value.Content)
			{
				if (ImGui::CollapsingHeader(TCHAR_TO_UTF8(*(Pair.Key + " - " + contentPair.Key))))
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

	ImGui::InputText("Settings Id", ModifySettingsIdInput.GetData(), ModifySettingsIdInput.Num());
	ImGui::InputText("Key", ModifySettingsKeyInput.GetData(), ModifySettingsKeyInput.Num());
	ImGui::InputInt("Version", &SettingVersionNum);
	ImGui::InputTextMultiline("Json Blob", ModifySettingsJsonInput.GetData(), ModifySettingsJsonInput.Num());

	if (!SetPlayerSettingsActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Modify Settings Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*SetPlayerSettingsActionResult));
		}
	}

	if (ImGui::Button("Modify Settings Data"))
	{
		FString JsonString = UTF8_TO_TCHAR(ModifySettingsJsonInput.GetData());
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
		FJsonSerializer::Deserialize(JsonReader, JsonObject);
		FRH_PlayerSettingsDataWrapper DataWrapper;
		TSharedPtr<FJsonValueObject> JsonValueObject = MakeShared<FJsonValueObject>(JsonObject);
		FRHAPI_SettingData SettingData;

		SettingData.SetValue(FRHAPI_JsonValue::CreateFromUnrealValue(JsonValueObject));
		SettingData.SetV(SettingVersionNum);

		DataWrapper.Content.Add(UTF8_TO_TCHAR(ModifySettingsKeyInput.GetData()), SettingData);

		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, &DataWrapper](URH_PlayerInfo* PlayerInfo)
			{
				SetPlayerSettingsActionResult.Empty();
				if (PlayerInfo)
				{
					auto Delegate = FRH_PlayerInfoSetPlayerSettingsDelegate::CreateSP(SharedThis(this), &FRHDTW_PlayerSettings::HandleSetPlayerSettingsResponse, PlayerInfo->GetRHPlayerUuid());
					PlayerInfo->SetPlayerSettings(UTF8_TO_TCHAR(ModifySettingsIdInput.GetData()), DataWrapper, MoveTemp(Delegate));
				}
			}));
	}
}

void FRHDTW_PlayerSettings::DoSettingsTypes()
{
	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("Requesting Types requires a logged in local player for Auth Context");
		return;
	}

	URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		ImGui::Text("Requesting Types requires a logged in local player for Auth Context");
		return;
	}

	if (!pRH_LocalPlayerSubsystem->GetAuthContext()->IsLoggedIn())
	{
		ImGui::Text("Requesting Types requires a logged in local player for Auth Context");
		return;
	}

	if (ImGui::Button("Get Setting Types"))
	{
		typedef RallyHereAPI::Traits_GetConfigForAllSettingTypes TGetConfigSettings;		

		auto Request = TGetConfigSettings::Request();
		Request.AuthContext = pRH_LocalPlayerSubsystem->GetAuthContext();

		TGetConfigSettings::DoCall(RH_APIs::GetSettingsAPI(), Request, TGetConfigSettings::Delegate::CreateLambda([this](const TGetConfigSettings::Response& Resp)
			{
				CachedSettingsTypes.Empty();
				CachedSettingsTypes.Append(Resp.Content);
			}));
	}
	ImGui::Separator();

	if (CachedSettingsTypes.Num() > 0)
	{
		for (const auto& Pair : CachedSettingsTypes)
		{
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*Pair.Key), RH_DefaultTreeFlagsDefaultOpen))
			{
				for (const auto& VersionPair : Pair.Value.GetVersions())
				{
					if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s##%s"), *VersionPair.Key, *Pair.Key)), RH_DefaultTreeFlagsLeaf | ImGuiTreeNodeFlags_DefaultOpen))
					{
						FString OutJsonString;
						TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutJsonString);
						if (FJsonSerializer::Serialize(VersionPair.Value.GetValueJsonschema().GetObject().ToSharedRef(), Writer))
						{
							ImGui::Text("%s", TCHAR_TO_UTF8(*OutJsonString));
						}

						ImGui::TreePop();
					}
				}
				ImGui::TreePop();
			}
		}
	}
}

void FRHDTW_PlayerSettings::HandleSetPlayerSettingsResponse(bool bSuccess, FRH_PlayerSettingsDataWrapper& Response, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		SetPlayerSettingsActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Modifying settings succeeded.") LINE_TERMINATOR;
	}
	else
	{
		SetPlayerSettingsActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Modifying settings failed.") LINE_TERMINATOR;
	}
}