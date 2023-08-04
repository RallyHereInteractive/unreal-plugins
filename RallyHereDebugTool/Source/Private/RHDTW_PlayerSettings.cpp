#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_PlayerSettings.h"
#include "imgui.h"

FRHDTW_PlayerSettings::FRHDTW_PlayerSettings()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	SettingVersionNum = 0;
	SettingsIdInput.SetNumZeroed(64);
	ModifySettingsIdInput.SetNumZeroed(64);
	ModifySettingsKeyInput.SetNumZeroed(64);
	ModifySettingsJsonInput.SetNumZeroed(4096);
}

FRHDTW_PlayerSettings::~FRHDTW_PlayerSettings()
{
}

void FRHDTW_PlayerSettings::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		return;
	}

	if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
	{
		ImGui::Text("Selected Player Id: %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));
		ImGui::Separator();

		if (ImGui::BeginTabBar("Settings", ImGuiTabBarFlags_FittingPolicyScroll))
		{
			if (ImGui::BeginTabItem("View Settings", nullptr, ImGuiTabItemFlags_None))
			{
				DoViewSettings(ActivePlayerInfo);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Modify Settings", nullptr, ImGuiTabItemFlags_None))
			{
				DoModifySettings(ActivePlayerInfo);
				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
	}
	else
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
	}
}

void FRHDTW_PlayerSettings::DoViewSettings(URH_PlayerInfo* ActivePlayerInfo)
{
	if (ActivePlayerInfo == nullptr)
	{
		return;
	}

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

void FRHDTW_PlayerSettings::DoModifySettings(URH_PlayerInfo* ActivePlayerInfo)
{
	if (ActivePlayerInfo == nullptr)
	{
		return;
	}

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
		FRH_PlayerSettingsDataWrapper DataWrapper;
		TSharedPtr<FJsonValueObject> JsonValueObject = MakeShared<FJsonValueObject>(JsonObject);
		FRHAPI_SettingData SettingData;

		SettingData.SetValue(FRHAPI_JsonValue::CreateFromUnrealValue(JsonValueObject));
		SettingData.SetV(SettingVersionNum);

		DataWrapper.Content.Add(UTF8_TO_TCHAR(ModifySettingsKeyInput.GetData()), SettingData);
		if (URallyHereDebugTool* pOwner = GetOwner())
		{
			ActivePlayerInfo->SetPlayerSettings(UTF8_TO_TCHAR(ModifySettingsIdInput.GetData()), DataWrapper);
		}
	}
}