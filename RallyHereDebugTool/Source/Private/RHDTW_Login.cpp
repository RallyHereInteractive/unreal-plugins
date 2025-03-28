// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RHDTW_Login.h"
#include "RallyHereDebugTool.h"
#include "RH_ImGuiUtilities.h"

#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"

#include "RH_LocalPlayerLoginSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"


#include "imgui.h"

namespace
{
	void ImGuiDisplayLoginResult(const FRHAPI_LoginResult& LoginResult)
	{
		ImGui::Text("Logged in to RallyHere");

		if (ImGui::TreeNodeEx("Player", RH_DefaultTreeFlagsLeaf))
		{
			ImGuiDisplayCopyableValue(TEXT("Player ID"), LoginResult.GetActivePlayerIdOrNull());
			if (const auto ActivePlayerUuid = LoginResult.GetActivePlayerUuidOrNull())
			{
				ImGuiDisplayCopyableValue(TEXT("Player UUID"), *ActivePlayerUuid);
			}
			ImGuiDisplayCopyableValue(TEXT("Portal ID"), LoginResult.GetPortalIdOrNull());
			ImGuiDisplayCopyableValue(TEXT("Portal User ID"), LoginResult.GetPortalUserIdOrNull());
			ImGuiDisplayCopyableValue(TEXT("Display Name"), LoginResult.GetDisplayNameOrNull());
			ImGuiDisplayCopyableValue(TEXT("Person ID"), LoginResult.GetPersonIdOrNull());
			ImGuiDisplayCopyableValue(TEXT("Role ID"), LoginResult.GetRoleId());
			ImGuiDisplayCopyableValue(TEXT("Publisher UUID"), LoginResult.PublisherUuid);
			ImGuiDisplayCopyableValue(TEXT("Tenant UUID"), LoginResult.TenantUuid);
			ImGuiDisplayCopyableValue(TEXT("Config Elector UUID"), LoginResult.ConfigElectorUuid);
			ImGuiDisplayCopyableValue(TEXT("Client UUID"), LoginResult.ClientUuid);
			ImGuiDisplayCopyableValue(TEXT("Client ID"), LoginResult.ClientId);

			auto* Permissions = LoginResult.GetPermissionsOrNull();
			if (Permissions != nullptr && ImGui::TreeNodeEx("Permissions", RH_DefaultTreeFlags))
			{
				auto SortedPermissions = *Permissions;
				SortedPermissions.Sort();

				const FString PermissionsString = FString::Join(SortedPermissions, TEXT("\n"));

#if PLATFORM_ALLOWS_COPY
				ImGuiDisplayCopyButton(TEXT("Copy All"), PermissionsString, false, true);
#endif

				ImGui::Text("%s", TCHAR_TO_UTF8(*PermissionsString));

				ImGui::TreePop();
			}

			ImGui::TreePop();
		}
	}

	void ImGuiDisplayOSSLoginStatus(ULocalPlayer* pLocalPlayer, URH_LocalPlayerLoginSubsystem* pRH_LoginSubsystem)
	{
		IOnlineSubsystem* LoginOSS = pRH_LoginSubsystem->GetLoginOSS();
		if (LoginOSS == nullptr)
		{
			ImGui::Text("Login OSS: not available.");
			return;
		}

		FString LoginOSSText = FString::Printf(TEXT("Login OSS Name: %s"), *LoginOSS->GetSubsystemName().ToString());
		ImGui::Text("%s", TCHAR_TO_UTF8(*LoginOSSText));

		IOnlineIdentityPtr Identity = LoginOSS ? LoginOSS->GetIdentityInterface() : nullptr;
		if (!Identity.IsValid())
		{
			ImGui::Text("Login OSS has no Identity Interface not available.");
			return;
		}

		auto UniqueId = pRH_LoginSubsystem->GetLocalPlayerSubsystem()->GetOSSUniqueId();
		if (!UniqueId.IsValid() || Identity->GetLoginStatus(*UniqueId) != ELoginStatus::LoggedIn)
		{
			ImGui::Text("Login OSS: Not logged in.");
			return;
		}

		IOnlineSubsystem* NicknameOSS = pRH_LoginSubsystem->GetNicknameOSS();

		if (NicknameOSS != nullptr)
		{
			FString NicknameOSSText = FString::Printf(TEXT("Nickname OSS Name: %s"), *NicknameOSS->GetSubsystemName().ToString());
			ImGui::Text("%s", TCHAR_TO_UTF8(*NicknameOSSText));

			IOnlineIdentityPtr NicknameIdentity = NicknameOSS ? NicknameOSS->GetIdentityInterface() : nullptr;

			if (NicknameIdentity.IsValid())
			{
				FString OSSPlayerNicknameText = FString::Printf(TEXT("Nickname OSS: Logged in with Player Nickname: %s"), *NicknameIdentity->GetPlayerNickname(*UniqueId.GetUniqueNetId()));
				ImGui::Text("%s", TCHAR_TO_UTF8(*OSSPlayerNicknameText));
			}
			else
			{
				ImGui::Text("Nickname OSS has no Identity Interface available.");
			}
		}
		else
		{
			ImGui::Text("Nickname OSS: not available.");
		}
	}
}

FRHDTW_Login::FRHDTW_Login()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	bAcceptEULA = false;
	bAcceptTOS = false;
	bAcceptPP = false;
	OSSLoginTypeBuffer.SetNumZeroed(100);
	OSSIDBuffer.SetNumZeroed(100);
	OSSTokenBuffer.SetNumZeroed(100);
	RefreshTokenBuffer.SetNumZeroed(100);

	ML_bAcceptEULA = false;
	ML_bAcceptTOS = false;
	ML_bAcceptPP = false;
	ML_OSSLoginTypeBuffer.SetNumZeroed(100);
	ML_OSSIDBuffer.SetNumZeroed(100);
	ML_OSSTokenBuffer.SetNumZeroed(100);
	ML_RefreshTokenBuffer.SetNumZeroed(100);
	ML_RangeFrom = 0;
	ML_RangeTo = 0;

	ML_Result.Empty();
	LPAddRemoveNotice.Empty();
}

FRHDTW_Login::~FRHDTW_Login()
{
}

void FRHDTW_Login::Do()
{
    static ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("Login", tab_bar_flags))
	{
		ImGui::SetNextItemWidth(50);

		if (IsRunningDedicatedServer())
		{
			if (ImGui::BeginTabItem("Login", nullptr, ImGuiTabItemFlags_None))
			{
				DoServerLoginTab();
				ImGui::EndTabItem();
			}
			
			if (ImGui::BeginTabItem("Environment", nullptr, ImGuiTabItemFlags_None))
			{
				DoEnvironmentTab();
				ImGui::EndTabItem();
			}
		}
		else
		{
			if (ImGui::BeginTabItem("Login", nullptr, ImGuiTabItemFlags_None))
			{
				DoLoginTab();
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Multi Login", nullptr, ImGuiTabItemFlags_None))
			{
				DoMassLoginTab();
				ImGui::EndTabItem();
			}
			else
			{
				ML_Result = FString();
			}

			if (ImGui::BeginTabItem("Environment", nullptr, ImGuiTabItemFlags_None))
			{
				DoEnvironmentTab();
				ImGui::EndTabItem();
			}
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Login::DoLoginTab()
{
	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("Please select a local player (has Controller Id) in Player Repository.");
		return;
	}

	URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (pRH_LocalPlayerSubsystem == nullptr)
	{
		ImGui::Text("RH_LocalPlayerSubsystem not available.");
		return;
	}

	URH_LocalPlayerLoginSubsystem* pRH_LoginSubsystem = pRH_LocalPlayerSubsystem->GetLoginSubsystem();
	if (pRH_LoginSubsystem == nullptr)
	{
		ImGui::Text("RH_LocalPlayerLoginSubsystem not available.");
		return;
	}

	FString LoginOSSText = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pLocalPlayer->GetControllerId());
	ImGui::Text("%s", TCHAR_TO_UTF8(*LoginOSSText));
	ImGui::Separator();

	ImGuiDisplayOSSLoginStatus(pLocalPlayer, pRH_LoginSubsystem);
	ImGui::Separator();

	auto LoginResult = pRH_LocalPlayerSubsystem->GetAuthContext()->GetLoginResult();
	const bool bIsLoggedIn = pRH_LocalPlayerSubsystem->GetAuthContext()->IsLoggedIn();
	if (bIsLoggedIn)
	{
		if (LoginResult.IsSet())
		{
			ImGuiDisplayLoginResult(LoginResult.GetValue());
		}
		else
		{
			ImGui::Text("Logged in to RallyHere, but no login result found");
		}
	}
	else
	{
		ImGui::Text("Logged out");
	}
	ImGui::Separator();

	ImGui::Checkbox("Accept EULA", &bAcceptEULA);
	ImGui::Checkbox("Accept TOS", &bAcceptTOS);
	ImGui::Checkbox("Accept PP", &bAcceptPP);

	if (ImGui::Button("Autologin"))
	{
		pRH_LoginSubsystem->SubmitAutoLogin(bAcceptEULA, bAcceptTOS, bAcceptPP);
	}

	// allow someone to hit enter to login
	bool bTriggerLogin = false;

	bTriggerLogin = ImGui::InputText("OSS ID/Username", OSSIDBuffer.GetData(), OSSIDBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank | ImGuiInputTextFlags_EnterReturnsTrue) || bTriggerLogin;
	bTriggerLogin = ImGui::InputText("OSS Token/Password", OSSTokenBuffer.GetData(), OSSTokenBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank | ImGuiInputTextFlags_Password | ImGuiInputTextFlags_EnterReturnsTrue) || bTriggerLogin;
	bTriggerLogin = ImGui::InputText("OSS Login Type", OSSLoginTypeBuffer.GetData(), OSSLoginTypeBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank | ImGuiInputTextFlags_EnterReturnsTrue) || bTriggerLogin;
	bTriggerLogin = ImGui::InputText("Refresh Token", RefreshTokenBuffer.GetData(), RefreshTokenBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank | ImGuiInputTextFlags_EnterReturnsTrue) || bTriggerLogin;

	if (pLocalPlayer->GetControllerId() >= 0)
	{
		if (ImGui::Button("Login") || bTriggerLogin)
		{
			FOnlineAccountCredentials Cred;
			Cred.Type = UTF8_TO_TCHAR(OSSLoginTypeBuffer.GetData());
			Cred.Id = UTF8_TO_TCHAR(OSSIDBuffer.GetData());
			Cred.Token = UTF8_TO_TCHAR(OSSTokenBuffer.GetData());
			pRH_LoginSubsystem->SubmitLogin(Cred, UTF8_TO_TCHAR(RefreshTokenBuffer.GetData()), bAcceptEULA, bAcceptTOS, bAcceptPP);
		}
		if (ImGui::Button("Logout"))
		{
			pRH_LoginSubsystem->Logout();
		}
	}
	else
	{
		if (ImGui::Button("Cannot Login (Bad Controller Id)"))
		{
		}
	}
}

void FRHDTW_Login::DoMassLoginTab()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	ImGui::Text("Create multiple local players and log them in.");
	ImGui::InputText("OSS ID/Username (prefix)", ML_OSSIDBuffer.GetData(), ML_OSSIDBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank);
	ImGui::InputText("OSS Token/Password", ML_OSSTokenBuffer.GetData(), ML_OSSTokenBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank | ImGuiInputTextFlags_Password);
	ImGui::InputText("OSS Login Type", ML_OSSLoginTypeBuffer.GetData(), ML_OSSLoginTypeBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank);
	ImGui::InputText("Refresh Token", ML_RefreshTokenBuffer.GetData(), ML_RefreshTokenBuffer.Num(), ImGuiInputTextFlags_CharsNoBlank);

	ImGui::Text("OSS ID/Username index suffix range (inclusive):");
	ImGui::SetNextItemWidth(150.f);
	if (ImGui::InputInt("From", &ML_RangeFrom, 1, 0))
	{
		ML_RangeFrom = FMath::Max(ML_RangeFrom, 0);
		ML_RangeTo = FMath::Max(ML_RangeTo, ML_RangeFrom);
	}
	ImGui::SetNextItemWidth(150.f);
	if (ImGui::InputInt("To", &ML_RangeTo, 1, 0))
	{
		ML_RangeTo = FMath::Max(ML_RangeTo, ML_RangeFrom);
	}

	ImGui::Checkbox("Accept EULA", &ML_bAcceptEULA);
	ImGui::Checkbox("Accept TOS", &ML_bAcceptTOS);
	ImGui::Checkbox("Accept PP", &ML_bAcceptPP);

	ImGui::Text("%s", TCHAR_TO_UTF8(*ML_Result));

	if (ImGui::Button("Create and Login"))
	{
		for (int i = ML_RangeFrom; i <= ML_RangeTo; i++)
		{
			if (ULocalPlayer* pLocalPlayer = pOwner->AddNewLocalPlayer())
			{
				if (URH_LocalPlayerSubsystem* pRH_LocalPlayerSubsystem = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
				{
					if (URH_LocalPlayerLoginSubsystem* pRH_LoginSubsystem = pRH_LocalPlayerSubsystem->GetLoginSubsystem())
					{
						FOnlineAccountCredentials Cred;
						Cred.Type = UTF8_TO_TCHAR(ML_OSSLoginTypeBuffer.GetData());
						FString id = UTF8_TO_TCHAR(ML_OSSIDBuffer.GetData());
						id.Append(FString::FromInt(i));
						Cred.Id = id;
						Cred.Token = UTF8_TO_TCHAR(ML_OSSTokenBuffer.GetData());
						pRH_LoginSubsystem->SubmitLogin(Cred, UTF8_TO_TCHAR(ML_RefreshTokenBuffer.GetData()), ML_bAcceptEULA, ML_bAcceptTOS, ML_bAcceptPP);
					}
				}
			}
		}

		ML_Result = FString(TEXT("PLAYERS CREATED"));
	}

	ImGui::Separator();

	ImGui::Text("%s", TCHAR_TO_UTF8(*LPAddRemoveNotice));

	if (ImGui::Button("Add Local Player"))
	{
		if (ULocalPlayer* lp = pOwner->AddNewLocalPlayer())
		{
			LPAddRemoveNotice = TEXT("Added new Local Player.");
		}
		else
		{
			LPAddRemoveNotice = TEXT("Failed to add new Local Player.");
		}
	}
	ImGui::SameLine();
	if (ImGui::Button("Remove Selected Local Players"))
	{
		int counter = 0;
		ForEachSelectedLocalPlayer(FRHDT_LPAction::CreateLambda([&counter](ULocalPlayer* pLocalPlayer) mutable
			{
				UGameplayStatics::RemovePlayer(pLocalPlayer->GetPlayerController(pLocalPlayer->GetWorld()), true);
				counter++;
			}));

		LPAddRemoveNotice = TEXT("Removed ") + FString::FromInt(counter) + TEXT(" selected Local Players.");
	}

	ImGui::Separator();

	auto pWorld = GetWorld();
	const bool bSplitscreenDisabled = UGameplayStatics::IsSplitscreenForceDisabled(pWorld);
	if (bSplitscreenDisabled)
	{
		if (ImGui::Button("Enable Splitscreen"))
		{
			UGameplayStatics::SetForceDisableSplitscreen(pWorld, false);
		}
	}
	else
	{
		if (ImGui::Button("Disable Splitscreen"))
		{
			UGameplayStatics::SetForceDisableSplitscreen(pWorld, true);
		}
	}
}


void FRHDTW_Login::DoServerLoginTab()
{
	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("No Game Instance found.");
		return;
	}

	auto pRH_GameInstanceSubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pRH_GameInstanceSubsystem == nullptr)
	{
		ImGui::Text("RH_GameInstanceSubsystem not available.");
		return;
	}

	auto* pRH_GameInstanceBootstrapper = pRH_GameInstanceSubsystem->GetServerBootstrapper();
	if (pRH_GameInstanceBootstrapper == nullptr)
	{
		ImGui::Text("RH_GameInstanceBootstrapper not available.");
		return;
	}

	if (!pRH_GameInstanceBootstrapper->GetAuthContext().IsValid())
	{
		ImGui::Text("AuthContext not available.");
		return;
	}

	auto LoginResult = pRH_GameInstanceBootstrapper->GetAuthContext()->GetLoginResult();
	const bool bIsLoggedIn = pRH_GameInstanceBootstrapper->GetAuthContext()->IsLoggedIn();
	if (bIsLoggedIn)
	{
		if (LoginResult.IsSet())
		{
			ImGuiDisplayLoginResult(LoginResult.GetValue());
		}
		else
		{
			ImGui::Text("Logged in to RallyHere, but no login result found");
		}
	}
	else
	{
		ImGui::Text("Logged out");
	}
	ImGui::Separator();

	if (ImGui::Button("Refresh Login"))
	{
		pRH_GameInstanceBootstrapper->GetAuthContext()->Refresh();
	}
}

void FRHDTW_Login::DoEnvironmentTab()
{
	auto& RHIntegration = FRallyHereIntegrationModule::Get();

	// need a player controller to run the set console commands.  Note that console commands are defined in RH_Integration.cpp
	auto LP = GetFirstSelectedLocalPlayer();
	auto PC = LP ? LP->GetPlayerController(nullptr) : nullptr;

	if (PC == nullptr)
	{
		ImGui::Text("Please select a local player with a player controller.");
		return;
	}

	auto RHSettings = GetDefault<URH_IntegrationSettings>();

	// get and display current state at top
	FRH_EnvironmentConfiguration CurrentConfiguration;
	
	CurrentConfiguration.EnvironmentId = RHIntegration.GetEnvironmentId();
	CurrentConfiguration.BaseUrl = RHIntegration.GetBaseURL();
	CurrentConfiguration.ClientId = RHIntegration.GetClientId();
	CurrentConfiguration.ClientSecret = RHIntegration.GetClientSecret();

	// display current values
	ImGui::Text("Current Environment Configuration:");
	ImGuiDisplayCopyableValue(TEXT("Preset"), CurrentConfiguration.EnvironmentId);
	ImGuiDisplayCopyableValue(TEXT("Base URL"), CurrentConfiguration.BaseUrl);
	ImGuiDisplayCopyableValue(TEXT("Client ID"), CurrentConfiguration.ClientId);
	ImGuiDisplayCopyableValue(TEXT("Client Secret"), CurrentConfiguration.ClientSecret, ECopyMode::Key);

	ImGui::Separator();

	ImGui::Text("Modify Environment Configuration:");
	
	// preset handling
	{
		ImGui::PushID("Preset");
		
		const FString DefaultEnvironmentId = TEXT("<Default>");
		// Build a list of environment presets to use
		TArray<FString> PresetOptions;
		{
			PresetOptions.Add(DefaultEnvironmentId);	// special value for base configuration
			for (const auto& Preset : RHSettings->EnvironmentConfigurations)
			{
				PresetOptions.Add(Preset.EnvironmentId);
			}
		}
	
		ImGuiDisplayCombo(TEXT("Preset"), TempEnvironmentConfiguration.EnvironmentId, PresetOptions, nullptr);
		ImGui::SameLine();
		if (ImGui::Button("Set"))
		{
			if (TempEnvironmentConfiguration.EnvironmentId == DefaultEnvironmentId)
			{
				TempEnvironmentConfiguration.EnvironmentId.Empty();				
			}
			
			// use the console command, as it contains the "user desired change" logic
			PC->ConsoleCommand(TEXT("rh.setenvid \"") + TempEnvironmentConfiguration.EnvironmentId + TEXT("\""), true);
		}
		ImGui::SameLine();
		if (ImGui::Button("Force Resolve"))
		{
			PC->ConsoleCommand(TEXT("rh.resolveenvid"), true);
		}

		ImGui::PopID();
	}

	// url handling
	{
		ImGui::PushID("BaseUrl");
		
		ImGui::InputText("Base URL", &TempEnvironmentConfiguration.BaseUrl);;
		ImGui::SameLine();
		if (ImGui::Button("Set"))
		{			
			// use the console command, as it contains the "user desired change" logic
			PC->ConsoleCommand(TEXT("rh.setbaseurl \"") + TempEnvironmentConfiguration.BaseUrl + TEXT("\""), true);
		}
		ImGui::SameLine();
		if (ImGui::Button("Force Resolve"))
		{
			PC->ConsoleCommand(TEXT("rh.resolvebaseurl"), true);
		}

		ImGui::PopID();
	}

	// client id handling
	{
		ImGui::PushID("Client Id");
		
		ImGui::InputText("Client ID", &TempEnvironmentConfiguration.ClientId);
		ImGui::SameLine();
		if (ImGui::Button("Set"))
		{
			// use the console command, as it contains the "user desired change" logic
			PC->ConsoleCommand(TEXT("rh.setclientid \"") + TempEnvironmentConfiguration.ClientId + TEXT("\""), true);
		}
		ImGui::SameLine();
		if (ImGui::Button("Force Resolve"))
		{
			PC->ConsoleCommand(TEXT("rh.resolveclientid"), true);
		}

		ImGui::PopID();
	}

	// client secret handling
	{
		ImGui::PushID("Client Secret");
		
		ImGui::InputText("Client Secret", &TempEnvironmentConfiguration.ClientSecret);
		ImGui::SameLine();
		if (ImGui::Button("Set"))
		{
			// use the console command, as it contains the "user desired change" logic
			PC->ConsoleCommand(TEXT("rh.setclientsecret \"") + TempEnvironmentConfiguration.ClientSecret + TEXT("\""), false);	 // note - do not emit to log!
		}
		ImGui::SameLine();
		if (ImGui::Button("Force Resolve"))
		{
			PC->ConsoleCommand(TEXT("rh.resolveclientsecret"), true);
		}

		ImGui::PopID();
	}
}
