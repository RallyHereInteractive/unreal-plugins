// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugToolSettings.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"
#include "ImGuiModule.h"
#include "Misc/CString.h"
#include "Containers/StringConv.h"

#include "RH_Integration.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerLoginSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "Engine/LocalPlayer.h"
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
#include "RHDTW_PlayerSessions.h"
#include "RHDTW_PlayerSettings.h"
#include "RHDTW_Presence.h"
#include "RHDTW_WebRequests.h"
#include "RHDTW_Purge.h"
#include "RHDTW_Catalog.h"
#include "RHDTW_Notifications.h"

#include "Runtime/Launch/Resources/Version.h"

URallyHereDebugTool::URallyHereDebugTool()
	: Super()
{
	bHasSelectedLocalPlayerOnce = false;

	PlayersWindow = nullptr;
	LoginWindow = nullptr;
	OutputLogWindow = nullptr;

	bActive = false;

	SeparatorIndex = INDEX_NONE;
}

void URallyHereDebugTool::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	CheckForFirstEverSelectValidLocalPlayer();

	PlayersWindow = MakeShared<FRHDTW_Players>();
	PlayersWindow->Init(this, TEXT("Player Repository"), true);

	LoginWindow = MakeShared<FRHDTW_Login>();
	LoginWindow->Init(this, TEXT("Login"), true);

	OutputLogWindow = MakeShared<FRHDTW_OutputLog>();
	OutputLogWindow->Init(this, TEXT("Output Log"), true);

	SeparatorIndex = 3;

	CatalogWindow = MakeShared<FRHDTW_Catalog>();
	CatalogWindow->Init(this, TEXT("Catalog"), true);

	ConfigWindow = MakeShared<FRHDTW_Config>();
	ConfigWindow->Init(this, TEXT("Config"), true);

	EntitlementsWindow = MakeShared<FRHDTW_Entitlements>();
	EntitlementsWindow->Init(this, TEXT("Entitlements"), true);

	FriendsWindow = MakeShared<FRHDTW_Friends>();
	FriendsWindow->Init(this, TEXT("Friends"), true);

	PlayerInventoryWindow = MakeShared<FRHDTW_PlayerInventory>();
	PlayerInventoryWindow->Init(this, TEXT("Inventory"), true);

	PresenceWindow = MakeShared<FRHDTW_Presence>();
	PresenceWindow->Init(this, TEXT("Presence"), true);

	NotificationsWindow = MakeShared<FRHDTW_Notifications>();
	NotificationsWindow->Init(this, TEXT("Notifications"), true);

	PlayerPlatformsWindow = MakeShared<FRHDTW_PlayerPlatforms>();
	PlayerPlatformsWindow->Init(this, TEXT("Platforms"), true);

	PurgeWindow = MakeShared<FRHDTW_Purge>();
	PurgeWindow->Init(this, TEXT("Purge"), true);

	PlayerSessionsWindow = MakeShared<FRHDTW_PlayerSessions>();
	PlayerSessionsWindow->Init(this, TEXT("Ranks"), true);

	SessionWindow = MakeShared<FRHDTW_Session>();
	SessionWindow->Init(this, TEXT("Session"), true);

	PlayerSettingsWindow = MakeShared<FRHDTW_PlayerSettings>();
	PlayerSettingsWindow->Init(this, TEXT("Settings"), true);

	WebRequestsWindow = MakeShared<FRHDTW_WebRequests>();
	WebRequestsWindow->Init(this, TEXT("Web Requests"), true);

	int32 WindowIndex = 0;
	for (const TWeakPtr<FRH_DebugToolWindow>& weakWindow : AppWindows)
	{
		if (TSharedPtr<FRH_DebugToolWindow> window = weakWindow.Pin())
		{
			if (const auto& findVisibility = SavedWindowVisibilities.Find(window->Name))
			{
				window->bShow = *findVisibility;
			}
			else
			{
				SavedWindowVisibilities.Add(window->Name, true);
			}
		}
	}

	IRallyHereDebugToolModule::Get().GetSpawnToolDelegate().Broadcast(this);

	FWorldDelegates::OnWorldPostActorTick.AddUObject(this, &URallyHereDebugTool::OnPostActorTick);
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

void URallyHereDebugTool::OnPostActorTick(UWorld* World, ELevelTick TickType, float DeltaSeconds)
{
	if (bActive && TickType != ELevelTick::LEVELTICK_ViewportsOnly)
	{
#if RH_FROM_ENGINE_VERSION(5, 0)
		if (IsValidChecked(this) && !this->IsUnreachable())
#else
		if (!this->IsPendingKillOrUnreachable())
#endif
		{
			FScopeCycleCounterUObject Scope(this);
			DoImGui();
		}
	}
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

void URallyHereDebugTool::CheckForFirstEverSelectValidLocalPlayer()
{
	DeselectInvalidLocalPlayers();

	if (!bHasSelectedLocalPlayerOnce)
	{
		TArray<ULocalPlayer*> LocalPlayers = GetAllLocalPlayers();
		for (auto localPlayerItr = LocalPlayers.CreateIterator(); localPlayerItr; ++localPlayerItr)
		{
			if (*localPlayerItr != nullptr)
			{
				SelectLocalPlayer(*localPlayerItr);
				break;
			}
		}
	}
}

void URallyHereDebugTool::SelectLocalPlayer(ULocalPlayer* InLocalPlayer)
{
	Template_SelectPlayer<ULocalPlayer>(InLocalPlayer, SelectedLocalPlayers, GetAllLocalPlayers());

	bHasSelectedLocalPlayerOnce = bHasSelectedLocalPlayerOnce || InLocalPlayer != nullptr;
}

void URallyHereDebugTool::DeselectLocalPlayer(ULocalPlayer* InLocalPlayer)
{
	Template_DeselectPlayer<ULocalPlayer>(InLocalPlayer, SelectedLocalPlayers);
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
	TArray<URH_PlayerInfo*> PlayerInfos;
	if (auto pGameInstance = GetGameInstance())
	{
		if (auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>())
		{
			if (URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem = pGISubsystem->GetPlayerInfoSubsystem())
			{
				for (auto Pair : pRH_PlayerInfoSubsystem->GetPlayerInfos())
				{
					PlayerInfos.AddUnique(Pair.Value);
				}
			}
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
	return bActive;
}

void URallyHereDebugTool::ToggleUI()
{
	bActive = !bActive;
	IRallyHereDebugToolModule::Get().UpdateImGuiInputState();

	static bool bDoOnce = true;

	if (bActive && bDoOnce)
	{
		ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_DockingEnable;
		FImGuiModule::Get().GetProperties().SetLoadSavedLayout(true);
		bDoOnce = false;
	}

	// Since ImGUI adds its root level widget on boot, but other widgets are added later, drawing order can be broken when invalidation is not enabled.
	// as a temp fix, invalidate all widgets here, as even just invaliding the actual ImGUI widget may not be sufficient (though we should try that at some point)
	FSlateApplication::Get().InvalidateAllWidgets(false);
	OnActiveStateChanged.Broadcast();
}

void URallyHereDebugTool::DoImGui()
{
	if (ImGui::BeginMainMenuBar())
	{
		if (ImGui::BeginMenu("View"))
		{
			int counter = 0;
			for (TArray<TWeakPtr<FRH_DebugToolWindow>>::TIterator It = AppWindows.CreateIterator(); It; ++It)
			{
				if (TSharedPtr<FRH_DebugToolWindow> window = It->Pin())
				{
					if (counter++ == SeparatorIndex)
					{
						ImGui::Separator();
					}
					window->RenderCheckbox();
				}
				else
				{
					It.RemoveCurrent();
				}
			}
			ImGui::EndMenu();
		}

		ImGui::SameLine();
		if (ImGui::Button("Close") && IsUIActive())
		{
			ToggleUI();
		}

		if (FRallyHereIntegrationModule::IsAvailable())
		{
			ImGui::SameLine();
			auto& Integration = FRallyHereIntegrationModule::Get();
			ImGui::Text("%s - %s", TCHAR_TO_UTF8(*Integration.GetSandboxId()), TCHAR_TO_UTF8(*Integration.GetBaseURL()));
		}

		ImGui::SameLine(ImGui::GetWindowWidth() - 475);
		if (ImGui::Button("Reset Windows") && IsUIActive())
		{
			for (const TWeakPtr<FRH_DebugToolWindow>& weakWindow : AppWindows)
			{
				if (TSharedPtr<FRH_DebugToolWindow> window = weakWindow.Pin())
				{
					window->bShow = true;
				}
			}

			FImGuiModule::Get().GetProperties().SetLoadDefaultLayout(true);
		}

		ImGui::SameLine(ImGui::GetWindowWidth() - 350);
		ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		ImGui::EndMainMenuBar();
	}

	bool bVisChanged = false;

	for (const TWeakPtr<FRH_DebugToolWindow>& weakWindow : AppWindows)
	{
		if (TSharedPtr<FRH_DebugToolWindow> window = weakWindow.Pin())
		{
			// Cache off the visibility of the windows each frame
			if (const auto& findVisibility = SavedWindowVisibilities.Find(window->Name))
			{
				if (*findVisibility != window->bShow)
				{
					*findVisibility = window->bShow;
					bVisChanged = true;
				}
			}
			window->RenderWindow();
		}
	}

	if (bVisChanged)
	{
		SaveConfig();
	}
}