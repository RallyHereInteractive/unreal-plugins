// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemSteamV2Private.h"
#include "OnlineAsyncTaskManager.h"
#include "OnlineSubsystemSteamV2Package.h"

/**
 * Base class that holds a delegate to fire when a given async task is complete
 */
class FOnlineAsyncTaskSteam : public FOnlineAsyncTaskBasic<class FOnlineSubsystemSteamV2>
{
PACKAGE_SCOPE:

	/** Unique handle for the Steam async call initiated */
	SteamAPICall_t CallbackHandle;

	/** Hidden on purpose */
	FOnlineAsyncTaskSteam() :
		FOnlineAsyncTaskBasic(NULL),
		CallbackHandle(k_uAPICallInvalid)
	{
	}

public:

	FOnlineAsyncTaskSteam(class FOnlineSubsystemSteamV2* InSteamSubsystem, SteamAPICall_t InCallbackHandle) :
		FOnlineAsyncTaskBasic(InSteamSubsystem),
		CallbackHandle(InCallbackHandle)
	{
	}

	virtual ~FOnlineAsyncTaskSteam()
	{
	}
};


/**
 *	Steam version of the async task manager to register the various Steam callbacks with the engine
 */
class FOnlineAsyncTaskManagerSteamV2 : public FOnlineAsyncTaskManager
{
private:

	STEAM_CALLBACK(FOnlineAsyncTaskManagerSteamV2, OnInventoryDefinitionUpdate, SteamInventoryDefinitionUpdate_t, OnInventoryDefinitionUpdateCallback);
	STEAM_CALLBACK(FOnlineAsyncTaskManagerSteamV2, OnInventoryResultReady, SteamInventoryResultReady_t, OnInventoryResultReadyCallback);

protected:

	/** Cached reference to the main online subsystem */
	class FOnlineSubsystemSteamV2* SteamSubsystem;

public:

	FOnlineAsyncTaskManagerSteamV2(class FOnlineSubsystemSteamV2* InOnlineSubsystem) :
		OnInventoryDefinitionUpdateCallback(this, &FOnlineAsyncTaskManagerSteamV2::OnInventoryDefinitionUpdate),
		OnInventoryResultReadyCallback(this, &FOnlineAsyncTaskManagerSteamV2::OnInventoryResultReady),
		SteamSubsystem(InOnlineSubsystem)
	{
	}

	~FOnlineAsyncTaskManagerSteamV2()
	{
	}

	// FOnlineAsyncTaskManager
	virtual void OnlineTick() override;

	// FOnlineAsyncTaskManagerSteam
};