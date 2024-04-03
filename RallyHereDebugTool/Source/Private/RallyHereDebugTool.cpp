// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugToolSettings.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"
#include "ImGuiModule.h"
#include "Misc/CString.h"
#include "Containers/StringConv.h"
#include "ImGuiInputHandler.h"

#include "RH_Integration.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerLoginSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Framework/Application/SlateApplication.h"
#include "Kismet/GameplayStatics.h"
#include "OnlineSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "Interfaces/OnlineIdentityInterface.h"

#include "RH_DebugToolWindow.h"
#include "RHDTW_Login.h"
#include "RHDTW_OutputLog.h"
#include "RHDTW_Friends.h"
#include "RHDTW_Config.h"
#include "RHDTW_Entitlements.h"
#include "RHDTW_Session.h"
#include "RHDTW_Players.h"
#include "RHDTW_PlayerPlatforms.h"
#include "RHDTW_PlayerInventory.h"
#include "RHDTW_PlayerRanks.h"
#include "RHDTW_PlayerSettings.h"
#include "RHDTW_PlayerReports.h"
#include "RHDTW_Presence.h"
#include "RHDTW_WebRequests.h"
#include "RHDTW_Purge.h"
#include "RHDTW_Catalog.h"
#include "RHDTW_CustomEndpoint.h"
#include "RHDTW_Notifications.h"
#include "RHDTW_Analytics.h"
#include "RHDTW_About.h"
#include "RHDTW_Match.h"

#include "Runtime/Launch/Resources/Version.h"

#ifdef WITH_IMGUI_NETIMGUI
#include "NetImgui_Api.h"
#endif

URallyHereDebugTool::URallyHereDebugTool()
	: Super()
{
	bHasSelectedLocalPlayerOnce = false;

	PlayersWindow = nullptr;
	LoginWindow = nullptr;
	OutputLogWindow = nullptr;

	bActive = false;

	ToggleUIKeyBindAsImGuiKey = ImGuiKey_None;
}

void URallyHereDebugTool::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	CheckForFirstEverSelectValidLocalPlayer();

	PlayersWindow = MakeShared<FRHDTW_Players>();
	PlayersWindow->Init(this, TEXT("Player Repository"));

	LoginWindow = MakeShared<FRHDTW_Login>();
	LoginWindow->Init(this, TEXT("Login"));

	OutputLogWindow = MakeShared<FRHDTW_OutputLog>();
	OutputLogWindow->Init(this, TEXT("Output Log"));

	CatalogWindow = MakeShared<FRHDTW_Catalog>();
	CatalogWindow->Init(this, TEXT("Catalog"));

	ConfigWindow = MakeShared<FRHDTW_Config>();
	ConfigWindow->Init(this, TEXT("Config"));

	EntitlementsWindow = MakeShared<FRHDTW_Entitlements>();
	EntitlementsWindow->Init(this, TEXT("Entitlements"));

	FriendsWindow = MakeShared<FRHDTW_Friends>();
	FriendsWindow->Init(this, TEXT("Friends"));

	PlayerInventoryWindow = MakeShared<FRHDTW_PlayerInventory>();
	PlayerInventoryWindow->Init(this, TEXT("Inventory"));

	PresenceWindow = MakeShared<FRHDTW_Presence>();
	PresenceWindow->Init(this, TEXT("Presence"));

	NotificationsWindow = MakeShared<FRHDTW_Notifications>();
	NotificationsWindow->Init(this, TEXT("Notifications"));

	PlayerPlatformsWindow = MakeShared<FRHDTW_PlayerPlatforms>();
	PlayerPlatformsWindow->Init(this, TEXT("Platforms"));

	PurgeWindow = MakeShared<FRHDTW_Purge>();
	PurgeWindow->Init(this, TEXT("Purge"));

	PlayerRanksWindow = MakeShared<FRHDTW_PlayerRanks>();
	PlayerRanksWindow->Init(this, TEXT("Ranks"));

	SessionWindow = MakeShared<FRHDTW_Session>();
	SessionWindow->Init(this, TEXT("Session"));

	PlayerSettingsWindow = MakeShared<FRHDTW_PlayerSettings>();
	PlayerSettingsWindow->Init(this, TEXT("Settings"));

	PlayerReportsWindow = MakeShared<FRHDTW_PlayerReports>();
	PlayerReportsWindow->Init(this, TEXT("Reports"));

	CustomEndpointWindow = MakeShared<FRHDTW_CustomEndpoint>();
	CustomEndpointWindow->Init(this, TEXT("Custom Endpoint"));

	WebRequestsWindow = MakeShared<FRHDTW_WebRequests>();
	WebRequestsWindow->Init(this, TEXT("Web Requests"));

	AnalyticsWindow = MakeShared<FRHDTW_Analytics>();
	AnalyticsWindow->Init(this, TEXT("Analytics"));

	AboutWindow = MakeShared<FRHDTW_About>();
	AboutWindow->Init(this, TEXT("About"));

	MatchesWindow = MakeShared<FRHDTW_Match>();
	MatchesWindow->Init(this, TEXT("Matches"));

	SavedWindowVisibilities.Add(LoginWindow->Name, true);
	SavedWindowVisibilities.Add(OutputLogWindow->Name, true);

	IRallyHereDebugToolModule::Get().GetSpawnToolDelegate().Broadcast(this);

	// for now, toggle ui if dedicated server wants netimgui connections, so it renders the UI
	// once we have ability to not render the local UI, can do something similar for client if needed
	if (IsRunningDedicatedServer())
	{
		const auto Policy = IsRunningDedicatedServer() ? URallyHereDebugToolSettings::Get()->DedicatedServerNetImguiPolicy : URallyHereDebugToolSettings::Get()->NetImguiPolicy;
		if (Policy == ERH_NetImGuiPolicy::ConnectToAppOnStartup || Policy == ERH_NetImGuiPolicy::ConnectFromAppOnStartup)
		{
			// defer the state change to the next frame
			FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this](float)
				{
					ImGuiPostInit();
					return false;
				}), 0);
			
		}
	}
}

/** Implement this for deinitialization of instances of the system */
void URallyHereDebugTool::Deinitialize()
{
	FWorldDelegates::OnWorldPostActorTick.RemoveAll(this);

	// if the UI was still active, attempt to deactivate it to clean up state such as input listeners
	if (bActive)
	{
		ToggleUI();
	}

	IRallyHereDebugToolModule::Get().GetCleanupToolDelegate().Broadcast(this);

	Super::Deinitialize();
}

void URallyHereDebugTool::RegisterWindow(const TSharedRef<FRH_DebugToolWindow>& InWindow)
{
	AppWindows.Add(InWindow);
}

void URallyHereDebugTool::UnregisterWindow(const TSharedRef<FRH_DebugToolWindow>& InWindow)
{
	AppWindows.Remove(InWindow);
}

TArray<ULocalPlayer*> URallyHereDebugTool::GetAllLocalPlayers() const
{
	TArray<ULocalPlayer*> LocalPlayers;
	UWorld* pWorld = GetWorld();
	if (pWorld != nullptr && pWorld->GetGameInstance() != nullptr)
	{
		LocalPlayers = pWorld->GetGameInstance()->GetLocalPlayers();
	}
	return LocalPlayers;
}

TArray<ULocalPlayer*> URallyHereDebugTool::GetAllSelectedLocalPlayers() const
{
	TArray<ULocalPlayer*> LocalPlayers;
	for (auto localPlayerItr = SelectedLocalPlayers.CreateConstIterator(); localPlayerItr; ++localPlayerItr)
	{
		if (localPlayerItr->IsValid())
		{
			LocalPlayers.Add(localPlayerItr->Get());
		}
	}
	return LocalPlayers;
}

ULocalPlayer* URallyHereDebugTool::GetFirstSelectedLocalPlayer() const
{
	if (SelectedLocalPlayers.Num() > 0)
	{
		return SelectedLocalPlayers[0].Get();
	}
	return nullptr;
}

void URallyHereDebugTool::DeselectInvalidLocalPlayers()
{
	TArray<ULocalPlayer*> LocalPlayers = GetAllLocalPlayers();
	for (auto localPlayerItr = SelectedLocalPlayers.CreateIterator(); localPlayerItr; ++localPlayerItr)
	{
		if (!localPlayerItr->IsValid() || LocalPlayers.Find(localPlayerItr->Get()) == INDEX_NONE)
		{
			localPlayerItr.RemoveCurrent();
		}
	}
}

void URallyHereDebugTool::DeselectInvalidPlayerInfos()
{
	TArray<URH_PlayerInfo*> PlayerInfos = GetAllPlayerInfos();
	for (auto localPlayerItr = SelectedPlayerInfos.CreateIterator(); localPlayerItr; ++localPlayerItr)
	{
		if (!localPlayerItr->IsValid() || PlayerInfos.Find(localPlayerItr->Get()) == INDEX_NONE)
		{
			localPlayerItr.RemoveCurrent();
		}
	}
}

void URallyHereDebugTool::CheckForFirstEverSelectValidLocalPlayer()
{
	DeselectInvalidLocalPlayers();
	DeselectInvalidPlayerInfos();

	if (!bHasSelectedLocalPlayerOnce)
	{
		bIsUsingLocalPlayerSandboxing = GetDefault<URH_IntegrationSettings>()->ShouldUseLocalPlayerSandboxing();

		TArray<ULocalPlayer*> LocalPlayers = GetAllLocalPlayers();
		for (auto localPlayerItr = LocalPlayers.CreateIterator(); localPlayerItr; ++localPlayerItr)
		{
			auto LocalPlayer = *localPlayerItr;
			if (LocalPlayer != nullptr)
			{
				// select the local player
				SelectLocalPlayer(LocalPlayer);

				// set that player as our sandbox view, if we are using it
				if (IsUsingLocalPlayerSandboxing())
				{
					SetSandboxPlayer(LocalPlayer);
				}

				// select the player info if we can
				if (URH_LocalPlayerSubsystem* RHSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
				{
					if (RHSS->GetLocalPlayerInfo() != nullptr)
					{
						SelectPlayerInfo(RHSS->GetLocalPlayerInfo());
					}
				}

				break;
			}
		}
	}
}

void URallyHereDebugTool::SelectLocalPlayer(ULocalPlayer* InLocalPlayer)
{
	Template_SelectPlayer<ULocalPlayer>(InLocalPlayer, SelectedLocalPlayers, GetAllLocalPlayers());

	bHasSelectedLocalPlayerOnce = bHasSelectedLocalPlayerOnce || InLocalPlayer != nullptr;

	if (InLocalPlayer != nullptr)
	{
		if (URH_LocalPlayerSubsystem* RHSS = InLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			if (RHSS->GetAuthContext().IsValid())
			{
				TWeakObjectPtr<ULocalPlayer> LocalPlayerWeak = InLocalPlayer;
				RHSS->GetAuthContext()->OnLoginUserChanged().AddWeakLambda(this, [this, LocalPlayerWeak]()
					{
						ULocalPlayer* LocalPlayer = LocalPlayerWeak.Get();
						if (LocalPlayer != nullptr)
						{
							if (URH_LocalPlayerSubsystem* RHSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
							{
								if (SelectedLocalPlayers.Contains(LocalPlayer))
								{
									SelectPlayerInfo(RHSS->GetLocalPlayerInfo());
								}
							}
						}
					});
			}
		}
	}
}

void URallyHereDebugTool::DeselectLocalPlayer(ULocalPlayer* InLocalPlayer)
{
	Template_DeselectPlayer<ULocalPlayer>(InLocalPlayer, SelectedLocalPlayers);

	if (InLocalPlayer != nullptr)
	{
		if (URH_LocalPlayerSubsystem* RHSS = InLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			if (RHSS->GetAuthContext().IsValid())
			{
				RHSS->GetAuthContext()->OnLoginUserChanged().RemoveAll(this);
			}
		}
	}

	DeselectInvalidPlayerInfos();
}

void URallyHereDebugTool::SelectAllLocalPlayers()
{
	Template_SelectAllPlayers<ULocalPlayer>(SelectedLocalPlayers, GetAllLocalPlayers());
}

void URallyHereDebugTool::DeselectAllLocalPlayers()
{
	SelectedLocalPlayers.Empty();
}

ULocalPlayer* URallyHereDebugTool::AddNewLocalPlayer()
{
	TArray<ULocalPlayer*> LocalPlayers = GetAllLocalPlayers();

	int32 ControllerId = INDEX_NONE;
	ULocalPlayer** pLocalPlayer = nullptr;
	do
	{
		ControllerId++;
		pLocalPlayer = LocalPlayers.FindByPredicate([ControllerId](const ULocalPlayer* LocalPlayer)
			{
				return LocalPlayer->GetControllerId() == ControllerId;
			});

	} while (pLocalPlayer != nullptr && &pLocalPlayer != nullptr);

	if (APlayerController* pPlayerController = UGameplayStatics::CreatePlayer(GetWorld(), ControllerId))
	{
		return pPlayerController->GetLocalPlayer();
	}
	return nullptr;
}

TArray<URH_PlayerInfo*> URallyHereDebugTool::GetAllPlayerInfos() const
{
	URH_PlayerInfoSubsystem* pPI = nullptr;

	auto* SandboxPlayer = GetSandboxPlayer();
	if (IsUsingLocalPlayerSandboxing() && SandboxPlayer != nullptr)
	{
		if (URH_LocalPlayerSubsystem* pRHLocalPlayerSubsystem = SandboxPlayer->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			pPI = pRHLocalPlayerSubsystem->GetPlayerInfoSubsystem();
		}
	}
	else
	{
		if (auto pGameInstance = GetGameInstance())
		{
			if (auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>())
			{
				pPI = pGISubsystem->GetPlayerInfoSubsystem();
			}
		}
	}

	TArray<URH_PlayerInfo*> PlayerInfos;

	if (pPI != nullptr)
	{
		for (auto Pair : pPI->GetPlayerInfos())
		{
			PlayerInfos.AddUnique(Pair.Value);
		}
	}

	return PlayerInfos;
}

TArray<URH_PlayerInfo*> URallyHereDebugTool::GetAllSelectedPlayerInfos() const
{
	TArray<URH_PlayerInfo*> PlayerInfos;
	for (auto playerInfoItr = SelectedPlayerInfos.CreateConstIterator(); playerInfoItr; ++playerInfoItr)
	{
		if (playerInfoItr->IsValid())
		{
			PlayerInfos.Add(playerInfoItr->Get());
		}
	}
	return PlayerInfos;
}

URH_PlayerInfo* URallyHereDebugTool::GetFirstSelectedPlayerInfo() const
{
	for (ULocalPlayer* lp : GetAllSelectedLocalPlayers())
	{
		if (URH_LocalPlayerSubsystem* pRHLocalPlayerSubsystem = lp->GetSubsystem<URH_LocalPlayerSubsystem>())
		{
			if (pRHLocalPlayerSubsystem->IsLoggedIn())
			{
				return pRHLocalPlayerSubsystem->GetLocalPlayerInfo();
			}
		}
	}

	if (SelectedPlayerInfos.Num() > 0)
	{
		return SelectedPlayerInfos[0].Get();
	}
	return nullptr;
}

void URallyHereDebugTool::SelectPlayerInfo(URH_PlayerInfo* InPlayerInfo)
{
	Template_SelectPlayer<URH_PlayerInfo>(InPlayerInfo, SelectedPlayerInfos, GetAllPlayerInfos());
}
void URallyHereDebugTool::DeselectPlayerInfo(URH_PlayerInfo* InPlayerInfo)
{
	Template_DeselectPlayer<URH_PlayerInfo>(InPlayerInfo, SelectedPlayerInfos);
}

void URallyHereDebugTool::SelectAllPlayerInfos()
{
	Template_SelectAllPlayers<URH_PlayerInfo>(SelectedPlayerInfos, GetAllPlayerInfos());
}
void URallyHereDebugTool::DeselectAllPlayerInfos()
{
	SelectedPlayerInfos.Empty();
}

TArray<URH_PlayerInfo*> URallyHereDebugTool::GetAllTargetedPlayerInfos() const
{
	TArray<URH_PlayerInfo*> PlayerInfos;
	for (auto playerInfoItr = TargetedPlayerInfos.CreateConstIterator(); playerInfoItr; ++playerInfoItr)
	{
		if (playerInfoItr->IsValid())
		{
			PlayerInfos.Add(playerInfoItr->Get());
		}
	}
	return PlayerInfos;
}

void URallyHereDebugTool::TargetPlayerInfo(URH_PlayerInfo* InPlayerInfo)
{
	Template_SelectPlayer<URH_PlayerInfo>(InPlayerInfo, TargetedPlayerInfos, GetAllPlayerInfos());
}

void URallyHereDebugTool::UntargetPlayerInfo(URH_PlayerInfo* InPlayerInfo)
{
	Template_DeselectPlayer<URH_PlayerInfo>(InPlayerInfo, TargetedPlayerInfos);
}

void URallyHereDebugTool::TargetAllPlayerInfos()
{
	Template_SelectAllPlayers<URH_PlayerInfo>(TargetedPlayerInfos, GetAllPlayerInfos());
}
void URallyHereDebugTool::UntargetAllPlayerInfos()
{
	TargetedPlayerInfos.Empty();
}

bool URallyHereDebugTool::IsUIActive() const
{
#ifdef WITH_IMGUI_NETIMGUI
	return bActive || NetImgui::IsConnected();
#else
	return bActive;
#endif
}

void URallyHereDebugTool::ToggleUI()
{
	bActive = !bActive;
	IRallyHereDebugToolModule::Get().UpdateImGuiInputState();

	// make sure we are initialized
	ImGuiPostInit();

	if (FSlateApplication::IsInitialized())
	{
		auto Viewport = GetWorld()->GetGameViewport();

		if (Viewport != nullptr && FImGuiModule::IsAvailable())
		{
			FImGuiModule::Get().SetViewportWidgetVisibility(Viewport, bActive);
		}

		// Since ImGUI adds its root level widget on boot, but other widgets are added later, drawing order can be broken when invalidation is not enabled.
		// as a temp fix, invalidate all widgets here, as even just invaliding the actual ImGUI widget may not be sufficient (though we should try that at some point)
		FSlateApplication::Get().InvalidateAllWidgets(false);
	}
	OnActiveStateChanged.Broadcast();
}

void URallyHereDebugTool::ImGuiPostInit()
{
	static bool bDoOnce = true;

	if (bDoOnce)
	{
#ifdef WITH_IMGUI_DOCK_SUPPORT
		ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_DockingEnable;
#endif
		FImGuiModule::Get().GetProperties().SetLayoutToLoad(URallyHereDebugToolSettings::Get()->DefaultWindowPositions, true);
		bDoOnce = false;

		FImGuiDelegates::OnWorldDebug(GetWorld()).Add(FSimpleDelegate::CreateUObject(this, &URallyHereDebugTool::DoImGui));

#ifdef WITH_IMGUI_NETIMGUI
		{
			const auto Policy = IsRunningDedicatedServer() ? URallyHereDebugToolSettings::Get()->DedicatedServerNetImguiPolicy : URallyHereDebugToolSettings::Get()->NetImguiPolicy;
			const auto NetImguiAppName = IsRunningDedicatedServer() ? "rhdebugtool-server" : "rhdebugtool";
			if (Policy == ERH_NetImGuiPolicy::ConnectToAppOnStartup)
			{
				// connect to localhost by default
				FString ConnectIp = URallyHereDebugToolSettings::Get()->NetImguiDefaultConnectIP;
				FParse::Value(FCommandLine::Get(), TEXT("rh.dtconnectip"), ConnectIp);
				NetImgui::ConnectToApp(NetImguiAppName, TCHAR_TO_UTF8(*ConnectIp));
			}
			else if (Policy == ERH_NetImGuiPolicy::ConnectFromAppOnStartup)
			{
				NetImgui::ConnectFromApp(NetImguiAppName);
			}
		}
#endif
	}
}

void URallyHereDebugTool::DoImGui()
{
	if (!FImGuiModule::IsAvailable())
	{
		return;
	}
	auto GameViewport = GetWorld()->GetGameViewport();
	bool bVisibleInViewport = GameViewport != nullptr && FImGuiModule::Get().IsViewportWidgetVisible(GameViewport);
#ifdef WITH_IMGUI_NETIMGUI
	bool bVisibleInRemote = NetImgui::IsConnected();
#else
	bool bVisibleInRemote = false;
#endif
	if (!bVisibleInViewport && !bVisibleInRemote)
	{
		// not being viewed, do not render
		return;
	}

#ifndef WITH_IMGUI_DOCK_SUPPORT
	bool bAllowWindowViewSelection = true;
#else
	bool bAllowWindowViewSelection = false;
#endif

	if (ImGui::BeginMainMenuBar())
	{
		if (bAllowWindowViewSelection)
		{
			if (ImGui::BeginMenu("View"))
			{
				int counter = 0;
				for (TArray<TWeakPtr<FRH_DebugToolWindow>>::TIterator It = AppWindows.CreateIterator(); It; ++It)
				{
					if (TSharedPtr<FRH_DebugToolWindow> window = It->Pin())
					{
						bool* bSavedShow = SavedWindowVisibilities.Find(window->Name);
						bool bShow = bSavedShow ? *bSavedShow : false;
						if (ImGui::Checkbox(TCHAR_TO_ANSI(*window->Name), &bShow))
						{
							SavedWindowVisibilities.Add(window->Name, bShow);
						}

					}
					else
					{
						It.RemoveCurrent();
					}
				}
				ImGui::EndMenu();
			}

			ImGui::SameLine();
		}

		ImGuiIO& io = ImGui::GetIO();
		if (ToggleUIKeyBindAsImGuiKey == ImGuiKey_None)
		{
			ToggleUIKeyBindAsImGuiKey = UImGuiInputHandler::GetImGuiKeyFromFKey(URallyHereDebugToolSettings::Get()->ToggleUIKeyBind.Key, io);
		}

		bool bIsToggleKeybindActive = ImGui::IsKeyPressed(ToggleUIKeyBindAsImGuiKey);

		FString ButtonLabel = TEXT("Close (");
		const FRallyHereDebugToolKeyInfo& ToggleKeybind = URallyHereDebugToolSettings::Get()->ToggleUIKeyBind;
		if (ToggleKeybind.Shift == ECheckBoxState::Checked)
		{
			ButtonLabel += TEXT("Shift + ");
			bIsToggleKeybindActive &= io.KeyShift;
		}
		if (ToggleKeybind.Alt == ECheckBoxState::Checked)
		{
			ButtonLabel += TEXT("Alt + ");
			bIsToggleKeybindActive &= io.KeyAlt;
		}
		if (ToggleKeybind.Ctrl == ECheckBoxState::Checked || ToggleKeybind.Cmd == ECheckBoxState::Checked) // ImGui IO has no Cmd key
		{
			ButtonLabel += TEXT("Ctrl + ");
			bIsToggleKeybindActive &= io.KeyCtrl;
		}
		ButtonLabel += ToggleKeybind.Key.ToString() + TEXT(")");

		if (ImGui::Button(TCHAR_TO_UTF8(*ButtonLabel)) || bIsToggleKeybindActive)
		{
			ToggleUI();
		}

		ImGui::SameLine();
		if (ImGui::Button("Reset Windows"))
		{
			FImGuiModule::Get().GetProperties().SetLayoutToLoad(URallyHereDebugToolSettings::Get()->DefaultWindowPositions, false);
		}

#ifdef WITH_IMGUI_NETIMGUI
		const auto Policy = IsRunningDedicatedServer() ? URallyHereDebugToolSettings::Get()->DedicatedServerNetImguiPolicy : URallyHereDebugToolSettings::Get()->NetImguiPolicy;
		const auto NetImguiAppName = IsRunningDedicatedServer() ? "rhdebugtool-server" : "rhdebugtool";
		if (Policy != ERH_NetImGuiPolicy::Disabled)
		{
			ImGui::SameLine();
			if (NetImgui::IsConnected() || NetImgui::IsConnectionPending())
			{
				if (ImGui::Button("Disconnect NetImgui"))
				{
					NetImgui::Disconnect();
				}
			}
			else if (Policy == ERH_NetImGuiPolicy::ConnectToApp || Policy == ERH_NetImGuiPolicy::ConnectToAppOnStartup)
			{
				if (ImGui::Button("Connect NetImgui"))
				{
					// connect to localhost by default
					FString ConnectIp = URallyHereDebugToolSettings::Get()->NetImguiDefaultConnectIP;
					FParse::Value(FCommandLine::Get(), TEXT("rh.dtconnectip"), ConnectIp);
					NetImgui::ConnectToApp(NetImguiAppName, TCHAR_TO_UTF8(*ConnectIp));
				}
			}
			else if (Policy == ERH_NetImGuiPolicy::ConnectFromApp || Policy == ERH_NetImGuiPolicy::ConnectFromAppOnStartup)
			{
				if (ImGui::Button("Allow NetImgui"))
				{
					NetImgui::ConnectFromApp(NetImguiAppName);
				}
			}
		}
#endif

		if (FRallyHereIntegrationModule::IsAvailable())
		{
			ImGui::SameLine();
			auto& Integration = FRallyHereIntegrationModule::Get();
			const FString environmentText = Integration.GetEnvironmentId() + " - " + Integration.GetBaseURL();
			ImGui::SameLine(ImGui::GetWindowWidth() - ImGui::CalcTextSize(TCHAR_TO_UTF8(*environmentText)).x - 20);
			ImGui::Text("%s", TCHAR_TO_UTF8(*environmentText));
		}

		ImGui::EndMainMenuBar();
	}

	for (const TWeakPtr<FRH_DebugToolWindow>& weakWindow : AppWindows)
	{
		if (TSharedPtr<FRH_DebugToolWindow> window = weakWindow.Pin())
		{
			// if visibility flag exists and is true, render the window
			const auto& findVisibility = SavedWindowVisibilities.Find(window->Name);
			if (!bAllowWindowViewSelection || (findVisibility  && *findVisibility))
			{
				window->RenderWindow();
			}
		}
	}
}