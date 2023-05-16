// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "Subsystems/GameInstanceSubsystem.h"
#include "RallyHereDebugTool.generated.h"

class ULocalPlayer;
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

	TArray<ULocalPlayer*> GetAllLocalPlayers() const;
	TArray<ULocalPlayer*> GetAllSelectedLocalPlayers() const;
	ULocalPlayer* GetFirstSelectedLocalPlayer() const;
	void DeselectInvalidLocalPlayers();
	void CheckForFirstEverSelectValidLocalPlayer();
	void SelectLocalPlayer(ULocalPlayer* InLocalPlayer);
	void DeselectLocalPlayer(ULocalPlayer* InLocalPlayer);
	void SelectAllLocalPlayers();
	void DeselectAllLocalPlayers();

	bool IsUIActive() const;
	void ToggleUI();
	void CloseUI();
	virtual void DoImGui();

	/** The current selected local player we are inspecting */
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ULocalPlayer>> SelectedLocalPlayers;
	/** Used by RHDTW_LocalPlayers in order to auto select the first available local player. */
	UPROPERTY(Transient)
	bool bHasSelectedLocalPlayerOnce;

	bool bActive;

	FSimpleMulticastDelegate OnActiveStateChanged;

	TArray<TWeakPtr<FRH_DebugToolWindow>> AppWindows;

	TSharedPtr<struct FRHDTW_LocalPlayers> LocalPlayersWindow;
	TSharedPtr<struct FRHDTW_Login> LoginWindow;
	TSharedPtr<struct FRHDTW_OutputLog> OutputLogWindow;
	TSharedPtr<struct FRHDTW_Friends> FriendsWindow;
	TSharedPtr<struct FRHDTW_Config> ConfigWindow;
	TSharedPtr<struct FRHDTW_Session> SessionWindow;
	TSharedPtr<struct FRHDTW_Local> LocalWindow;
	TSharedPtr<struct FRHDTW_Presence> PresenceWindow;
	TSharedPtr<struct FRHDTW_WebRequests> WebRequestsWindow;
	TSharedPtr<struct FRHDTW_Players> PlayersWindow;
	TSharedPtr<struct FRHDTW_Purge> PurgeWindow;
	TSharedPtr<struct FRHDTW_Catalog> CatalogWindow;
	TSharedPtr<struct FRHDTW_Entitlements> EntitlementsWindow;
	TSharedPtr<struct FRHDTW_Notifications> NotificationsWindow;
};