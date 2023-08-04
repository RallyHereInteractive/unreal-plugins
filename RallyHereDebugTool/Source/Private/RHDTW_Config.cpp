#include "RallyHereDebugToolModule.h"
#include "RHDTW_Config.h"

#include "imgui.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_ConfigSubsystem.h"

#include "RH_ImGuiUtilities.h"

#include "Engine/LocalPlayer.h"

FRHDTW_Config::FRHDTW_Config()
{
	AppSettingsActionResult.Empty();
	DefaultPos = FVector2D(610, 20);
}

FRHDTW_Config::~FRHDTW_Config()
{
}

void FRHDTW_Config::Do()
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
	
	URH_ConfigSubsystem* pRH_ConfigSubsystem = pGISS->GetConfigSubsystem();
	if (pRH_ConfigSubsystem == nullptr)
	{
		ImGui::Text("%s", "URH_ConfigSubsystem not available.");
		return;
	}

	if (!ImGui::BeginTabBar("Config"))
	{
		return;
	}

	if (ImGui::BeginTabItem("App Settings"))
	{
		ImGui::BeginChild("App Settings");
		DoRhConfigTab(pRH_ConfigSubsystem);
		ImGui::EndChild();
		ImGui::EndTabItem();
	}

	ImGui::EndTabBar();
}

void FRHDTW_Config::DoRhConfigTab(URH_ConfigSubsystem* pRH_ConfigSubsystem)
{
	if (ImGui::Button("Refresh"))
	{
		AppSettingsActionResult.Empty();
		auto Delegate = FRH_GenericSuccessDelegate::CreateSP(SharedThis(this), &FRHDTW_Config::HandleFetchAppSettings);
		pRH_ConfigSubsystem->FetchAppSettings(Delegate);
	}

	if (ImGui::Button("Apply Hotfix"))
	{
		pRH_ConfigSubsystem->TriggerHotfixProcessing();
	}
	ImGui::SameLine();
	ImGui::Text("Hotfix test value: %s", pRH_ConfigSubsystem->GetHotfixTestValue() ? "true" : "false");

	ImGui::Text("%s", TCHAR_TO_UTF8(*AppSettingsActionResult));
	
	ImGui::Separator();
	
	if (ImGui::BeginTable("HotfixMapTable", 2, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Key");
		ImGui::TableSetupColumn("Value");
		ImGui::TableHeadersRow();

		for (const auto& AppSetting : pRH_ConfigSubsystem->GetAppSettings())
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(AppSetting.Key, TEXT(""), ECopyMode::Key);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT(""), AppSetting.Value, ECopyMode::Value);
		}

		ImGui::EndTable();
	}
}

void FRHDTW_Config::HandleFetchAppSettings(bool bSuccess)
{
	if (bSuccess)
	{
		AppSettingsActionResult = FString::Printf(TEXT("Refresh App Settings succeeded."));
	}
	else
	{
		AppSettingsActionResult = FString::Printf(TEXT("Refresh App Settings failed"));
	}
}
