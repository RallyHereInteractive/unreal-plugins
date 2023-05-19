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

	if (ImGui::BeginTabItem("Site Settings"))
	{
		ImGui::BeginChild("Site Settings");
		DoRhSiteTab(pRH_ConfigSubsystem);
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
	
	ImGui::Columns(2);
	ImGui::Text("%s", "Key");
	ImGui::NextColumn();
	ImGui::Text("%s", "Value");
	ImGui::NextColumn();
	ImGui::Separator();

	for (const auto& AppSetting : pRH_ConfigSubsystem->GetAppSettings())
	{
		ImGuiDisplayCopyableValue(AppSetting.Key, AppSetting.Value, ECopyMode::TwoColumn);
	}

	ImGui::Columns(1);
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

void FRHDTW_Config::DoRhSiteTab(URH_ConfigSubsystem* pRH_ConfigSubsystem)
{
	auto* LPSubsystem = GetSelectedRH_LocalPlayerSubsystem();

	if (ImGui::Button("Refresh"))
	{
		SiteSettingsActionResult.Empty();
		auto Delegate = FRH_GenericSuccessDelegate::CreateSP(SharedThis(this), &FRHDTW_Config::HandleFetchSiteSettings);
		pRH_ConfigSubsystem->FetchSiteSettings(Delegate);
	}

	ImGui::SameLine();
	
	if (ImGui::Button("Clear"))
	{
		SiteSettingsActionResult.Empty();
		pRH_ConfigSubsystem->ClearSiteSettings();
		pRH_ConfigSubsystem->SiteSettingsUpdatedDelegate.Broadcast({});
	}

	ImGui::Text("%s", TCHAR_TO_UTF8(*SiteSettingsActionResult));
	
	ImGui::Separator();
	
	ImGui::Columns(4);
	ImGui::Text("%s", "Site ID");
	ImGui::NextColumn();
	ImGui::Text("%s", "Message");
	ImGui::NextColumn();
	ImGui::Text("%s", "Custom Only");
	ImGui::NextColumn();
	ImGui::Text("%s", "Sort Order");
	ImGui::NextColumn();
	ImGui::Separator();

	for (const auto& Site : pRH_ConfigSubsystem->GetSites())
	{
		ImGui::Text("%d", Site.Value.SiteId);
		ImGui::NextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(ToCStr(Site.Value.GetMessageName(TEXT("<UNSET>")))));
		ImGui::NextColumn();
		ImGui::Text("%d", Site.Value.CustomOnly);
		ImGui::NextColumn();
		ImGui::Text("%d", Site.Value.SortOrder);
		ImGui::NextColumn();
	}

	ImGui::Columns(1);
}

void FRHDTW_Config::HandleFetchSiteSettings(bool bSuccess)
{
	if (bSuccess)
	{
		SiteSettingsActionResult = FString::Printf(TEXT("Refresh Site Settings succeeded."));
	}
	else
	{
		SiteSettingsActionResult = FString::Printf(TEXT("Refresh Site Settings failed"));
	}
}