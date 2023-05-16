// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_Login.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"

#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerLoginSubsystem.h"

#include "Engine/LocalPlayer.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"

namespace
{
	void ImGuiDisplayLoginResult(const FRHAPI_LoginResult& LoginResult)
	{
		ImGui::Text("Logged in to RallyHere");
		
		if (ImGui::TreeNodeEx("Player", RH_DefaultTreeFlagsLeaf))
		{
			ImGuiDisplayCopyableValue(TEXT("Player ID"), LoginResult.ActivePlayerId);
			if (const auto ActivePlayerUuid = LoginResult.GetActivePlayerUuidOrNull())
			{
				ImGuiDisplayCopyableValue(TEXT("Player UUID"), *ActivePlayerUuid);
			}
			ImGuiDisplayCopyableValue(TEXT("Portal ID"), LoginResult.PortalId);
			ImGuiDisplayCopyableValue(TEXT("Portal User ID"), LoginResult.PortalUserId);
			ImGuiDisplayCopyableValue(TEXT("Display Name"), LoginResult.DisplayName);
			ImGuiDisplayCopyableValue(TEXT("Person ID"), LoginResult.PersonId);
			ImGuiDisplayCopyableValue(TEXT("Role ID"), LoginResult.GetRoleId());
			ImGuiDisplayCopyableValue(TEXT("Publisher UUID"), LoginResult.PublisherUuid);
			ImGuiDisplayCopyableValue(TEXT("Tenant UUID"), LoginResult.TenantUuid);
			ImGuiDisplayCopyableValue(TEXT("Config Elector UUID"), LoginResult.ConfigElectorUuid);
			ImGuiDisplayCopyableValue(TEXT("Client UUID"), LoginResult.ClientUuid);

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
	bAcceptEULA = false;
	bAcceptTOS = false;
	bAcceptPP = false;
	OSSLoginTypeBuffer.SetNumZeroed(100);
	OSSIDBuffer.SetNumZeroed(100);
	OSSTokenBuffer.SetNumZeroed(100);
	RefreshTokenBuffer.SetNumZeroed(100);
}

FRHDTW_Login::~FRHDTW_Login()
{	
}

void FRHDTW_Login::Do()
{
	ULocalPlayer* pLocalPlayer = GetFirstSelectedLocalPlayer();
	if (pLocalPlayer == nullptr)
	{
		ImGui::Text("Please select a Local Player in order to log in.");
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

	ImGuiDisplayOSSLoginStatus(pLocalPlayer, pRH_LoginSubsystem);
	ImGui::Separator();

	auto LoginResult = pRH_LocalPlayerSubsystem->GetAuthContext()->GetLoginResult();
	const bool bIsLoggedIn = pRH_LocalPlayerSubsystem->GetAuthContext()->IsLoggedIn();
	if (bIsLoggedIn)
	{
		ImGuiDisplayLoginResult(*LoginResult);
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
	}
	else
	{
		if (ImGui::Button("Cannot Login (Bad Controller Id)"))
		{
		}
	}
}
