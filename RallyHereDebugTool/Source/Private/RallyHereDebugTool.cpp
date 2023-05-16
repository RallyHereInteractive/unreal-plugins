// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugToolSettings.h"
#include "RallyHereDebugTool.h"
#include "imgui.h"
#include "Misc/CString.h"
#include "Containers/StringConv.h"

#include "RH_Integration.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerLoginSubsystem.h"

#include "Engine/LocalPlayer.h"
#include "OnlineSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "Interfaces/OnlineIdentityInterface.h"

#include "RH_DebugToolWindow.h"
#include "RHDTW_LocalPlayers.h"
#include "RHDTW_Login.h"
#include "RHDTW_OutputLog.h"
#include "RHDTW_Friends.h"
#include "RHDTW_Config.h"
#include "RHDTW_Entitlements.h"
#include "RHDTW_Local.h"
#include "RHDTW_Session.h"
#include "RHDTW_Players.h"
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

	LocalPlayersWindow = nullptr;
	LoginWindow = nullptr;
	OutputLogWindow = nullptr;

	bActive = false;
}

void URallyHereDebugTool::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	CheckForFirstEverSelectValidLocalPlayer();

	LocalPlayersWindow = MakeShared<FRHDTW_LocalPlayers>();
	LocalPlayersWindow->Init(this, TEXT("Local Players"), true);

	LoginWindow = MakeShared<FRHDTW_Login>();
	LoginWindow->Init(this, TEXT("Login"), true);

	OutputLogWindow = MakeShared<FRHDTW_OutputLog>();
	OutputLogWindow->Init(this, TEXT("Output Log"), true);

	FriendsWindow = MakeShared<FRHDTW_Friends>();
	FriendsWindow->Init(this, TEXT("Friends"), false);

	ConfigWindow = MakeShared<FRHDTW_Config>();
	ConfigWindow->Init(this, TEXT("Config"), false);

	SessionWindow = MakeShared<FRHDTW_Session>();
	SessionWindow->Init(this, TEXT("Session"), false);

	PresenceWindow = MakeShared<FRHDTW_Presence>();
	PresenceWindow->Init(this, TEXT("Local Presence"), false);

	WebRequestsWindow = MakeShared<FRHDTW_WebRequests>();
	WebRequestsWindow->Init(this, TEXT("Web Requests"), false);

	PurgeWindow = MakeShared<FRHDTW_Purge>();
	PurgeWindow->Init(this, TEXT("Purge"), false);

	PlayersWindow = MakeShared<FRHDTW_Players>();
	PlayersWindow->Init(this, TEXT("Players"), false);

	CatalogWindow = MakeShared<FRHDTW_Catalog>();
	CatalogWindow->Init(this, TEXT("Catalog"), false);

	EntitlementsWindow = MakeShared<FRHDTW_Entitlements>();
	EntitlementsWindow->Init(this, TEXT("Entitlements"), false);

	NotificationsWindow = MakeShared<FRHDTW_Notifications>();
	NotificationsWindow->Init(this, TEXT("Notifications"), false);

	const URallyHereDebugToolSettings* pDebugToolSettings = URallyHereDebugToolSettings::Get();
	if (pDebugToolSettings->bEnableLocalOptions)
	{
		LocalWindow = MakeShared<FRHDTW_Local>();
		LocalWindow->Init(this, TEXT("Local"), false);
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
	SelectedLocalPlayers.AddUnique(InLocalPlayer);
	bHasSelectedLocalPlayerOnce = bHasSelectedLocalPlayerOnce || InLocalPlayer != nullptr;
}

void URallyHereDebugTool::DeselectLocalPlayer(ULocalPlayer* InLocalPlayer)
{
	SelectedLocalPlayers.Remove(InLocalPlayer);
}

void URallyHereDebugTool::SelectAllLocalPlayers()
{
	TArray<ULocalPlayer*> LocalPlayers = GetAllLocalPlayers();
	for (auto localPlayerItr = LocalPlayers.CreateIterator(); localPlayerItr; ++localPlayerItr)
	{
		if (*localPlayerItr != nullptr)
		{
			SelectLocalPlayer(*localPlayerItr);
		}
	}
}

void URallyHereDebugTool::DeselectAllLocalPlayers()
{
	SelectedLocalPlayers.Empty();
}

bool URallyHereDebugTool::IsUIActive() const
{
	return bActive;
}

void URallyHereDebugTool::ToggleUI()
{
	bActive = !bActive;
	IRallyHereDebugToolModule::Get().UpdateImGuiInputState();

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
			for (TArray<TWeakPtr<FRH_DebugToolWindow>>::TIterator It = AppWindows.CreateIterator(); It; ++It)
			{
				if (TSharedPtr<FRH_DebugToolWindow> window = It->Pin())
				{
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
			auto& Integration = FRallyHereIntegrationModule::Get();
			ImGui::Text("%s - %s", TCHAR_TO_UTF8(*Integration.GetSandboxId()), TCHAR_TO_UTF8(*Integration.GetBaseURL()));
		}

		ImGui::SameLine(ImGui::GetWindowWidth() - 350);
		ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		ImGui::EndMainMenuBar();
	}

	for (const TWeakPtr<FRH_DebugToolWindow>& weakWindow : AppWindows)
	{
		if (TSharedPtr<FRH_DebugToolWindow> window = weakWindow.Pin())
		{
			window->RenderWindow();
		}
	}
}
