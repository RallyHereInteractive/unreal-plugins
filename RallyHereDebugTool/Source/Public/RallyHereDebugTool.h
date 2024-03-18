// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "Engine/EngineBaseTypes.h"
#include "Engine/LocalPlayer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "imgui.h"
#include "RallyHereDebugTool.generated.h"

class URH_PlayerInfo;
class URallyHereDebugTool;
struct FRH_DebugToolWindow;

UCLASS(config=Engine, NotBlueprintable)
class RALLYHEREDEBUGTOOL_API URallyHereDebugTool : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	URallyHereDebugTool();

	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize() override;

	void OnPostActorTick(UWorld* /*World*/, ELevelTick/**Tick Type*/, float/**Delta Seconds*/);

	void RegisterWindow(const TSharedRef<FRH_DebugToolWindow>& InWindow);
	void UnregisterWindow(const TSharedRef<FRH_DebugToolWindow>& InWindow);

	// Local Players selection
	TArray<ULocalPlayer*> GetAllLocalPlayers() const;
	TArray<ULocalPlayer*> GetAllSelectedLocalPlayers() const;
	ULocalPlayer* GetFirstSelectedLocalPlayer() const;
	void DeselectInvalidLocalPlayers();
	void DeselectInvalidPlayerInfos();
	void CheckForFirstEverSelectValidLocalPlayer();
	void SelectLocalPlayer(ULocalPlayer* InLocalPlayer);
	void DeselectLocalPlayer(ULocalPlayer* InLocalPlayer);
	void SelectAllLocalPlayers();
	void DeselectAllLocalPlayers();
	ULocalPlayer* AddNewLocalPlayer();

	bool IsUsingLocalPlayerSandboxing() const { return bIsUsingLocalPlayerSandboxing; }
	void SetSandboxPlayer(ULocalPlayer* InLocalPlayer) { SelectedLocalPlayerSandbox = InLocalPlayer; }
	ULocalPlayer* GetSandboxPlayer() const { return SelectedLocalPlayerSandbox.Get(); }

	// Player Info selection
	TArray<URH_PlayerInfo*> GetAllPlayerInfos() const;
	TArray<URH_PlayerInfo*> GetAllSelectedPlayerInfos() const;
	URH_PlayerInfo* GetFirstSelectedPlayerInfo() const;
	void SelectPlayerInfo(URH_PlayerInfo* InPlayerInfo);
	void DeselectPlayerInfo(URH_PlayerInfo* InPlayerInfo);
	void SelectAllPlayerInfos();
	void DeselectAllPlayerInfos();

	// Player Info targeting
	TArray<URH_PlayerInfo*> GetAllTargetedPlayerInfos() const;
	void TargetPlayerInfo(URH_PlayerInfo* InPlayerInfo);
	void UntargetPlayerInfo(URH_PlayerInfo* InPlayerInfo);
	void TargetAllPlayerInfos();
	void UntargetAllPlayerInfos();

	bool IsUIActive() const;
	void ToggleUI();
	void CloseUI();
	virtual void DoImGui();

	/** The current selected local player we are inspecting */
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ULocalPlayer>> SelectedLocalPlayers;
	/** Used by RHDTW_Players in order to auto select the first available local player. */
	UPROPERTY(Transient)
	bool bHasSelectedLocalPlayerOnce;

	/** The LocalPlayer we are using for sandboxed views */
	UPROPERTY(Transient)
	TWeakObjectPtr<ULocalPlayer> SelectedLocalPlayerSandbox;
	/** Whether we are using the local player sandboxing */
	UPROPERTY(Transient)
	bool bIsUsingLocalPlayerSandboxing;

	/** Current selected PlayerInfos in RHDTW_Players */
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<URH_PlayerInfo>> SelectedPlayerInfos;

	/** Current selected PlayerInfos for targeting */
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<URH_PlayerInfo>> TargetedPlayerInfos;

	bool bActive;
	FSimpleMulticastDelegate OnActiveStateChanged;
	ImGuiKey ToggleUIKeyBindAsImGuiKey;

	TArray<TWeakPtr<FRH_DebugToolWindow>> AppWindows;

	TSharedPtr<struct FRHDTW_Players> PlayersWindow;
	TSharedPtr<struct FRHDTW_Login> LoginWindow;
	TSharedPtr<struct FRHDTW_OutputLog> OutputLogWindow;
	TSharedPtr<struct FRHDTW_Friends> FriendsWindow;
	TSharedPtr<struct FRHDTW_Config> ConfigWindow;
	TSharedPtr<struct FRHDTW_Session> SessionWindow;
	TSharedPtr<struct FRHDTW_Presence> PresenceWindow;
	TSharedPtr<struct FRHDTW_WebRequests> WebRequestsWindow;
	TSharedPtr<struct FRHDTW_PlayerPlatforms> PlayerPlatformsWindow;
	TSharedPtr<struct FRHDTW_PlayerInventory> PlayerInventoryWindow;
	TSharedPtr<struct FRHDTW_PlayerRanks> PlayerRanksWindow;
	TSharedPtr<struct FRHDTW_PlayerSettings> PlayerSettingsWindow;
	TSharedPtr<struct FRHDTW_PlayerReports> PlayerReportsWindow;
	TSharedPtr<struct FRHDTW_Purge> PurgeWindow;
	TSharedPtr<struct FRHDTW_Catalog> CatalogWindow;
	TSharedPtr<struct FRHDTW_Entitlements> EntitlementsWindow;
	TSharedPtr<struct FRHDTW_CustomEndpoint> CustomEndpointWindow;
	TSharedPtr<struct FRHDTW_Notifications> NotificationsWindow;
	TSharedPtr<struct FRHDTW_Analytics> AnalyticsWindow;
	TSharedPtr<struct FRHDTW_About> AboutWindow;
	TSharedPtr<struct FRHDTW_Match> MatchesWindow;

	TMap<FString, bool> SavedWindowVisibilities;

private:
#pragma region HELPER TEMPLATE FUNCTIONS
	template<typename T> void Template_SelectPlayer(T* Player, TArray<TWeakObjectPtr<T>>& SelectedList, TArray<T*> AllList)
	{
		SelectedList.AddUnique(Player);

		// Sort the SelectedList to match the ordering of AllList
		SelectedList.Sort([AllList](TWeakObjectPtr<T> p1, TWeakObjectPtr<T> p2)
			{
				return AllList.Find(p1.Get()) < AllList.Find(p2.Get());
			});
	}

	template<typename T> void Template_DeselectPlayer(T* Player, TArray<TWeakObjectPtr<T>>& SelectedList)
	{
		SelectedList.Remove(Player);
	};

	template<typename T> void Template_SelectAllPlayers(TArray<TWeakObjectPtr<T>>& SelectedList, TArray<T*> AllList)
	{
		for (auto itr = AllList.CreateIterator(); itr; ++itr)
		{
			if (*itr != nullptr)
			{
				Template_SelectPlayer<T>(*itr, SelectedList, AllList);
			}
		}
	}
#pragma endregion
};