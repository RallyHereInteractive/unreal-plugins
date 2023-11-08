// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
/** @ingroup IntegrationBase RallyHere Integration
 *  @{
 */

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "RH_Common.h"
#include "RH_Integration.h"

/**
 * @brief Module for the Rally Here Integration Layer.
 */
class RALLYHEREINTEGRATION_API FRallyHereIntegrationModule : public IModuleInterface
{
public:
	/** @brief Default constructor. */
	~FRallyHereIntegrationModule() = default;
	/** @brief Initializes the module. */
	void StartupModule() final;
	/** @brief Safely ends the module. */
	void ShutdownModule() final;
	/** @brief Returns the module name. */
    static inline FName GetModuleName()
    {
		static const FName ModuleName(TEXT("RallyHereIntegration"));
        return ModuleName;
    }
	/** @brief Checks if the module is loaded. */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(GetModuleName());
	}
	/** @brief Gets the module, lazy loads it if needed. */
	static inline URH_Integration& Get()
	{
		return FModuleManager::Get().LoadModuleChecked<FRallyHereIntegrationModule>(GetModuleName()).GetIntegration();
	}
	/** @brief Gets the Integration class fromt he module. */
    inline URH_Integration& GetIntegration() const
    {
        return *Integration;
    }

private:
    TWeakObjectPtr<URH_Integration> Integration;
};

// shortener for the above lookup
namespace RH_APIs
{
	FORCEINLINE static RallyHereAPI::FRallyHereAPIAll& GetAPIs() { return FRallyHereIntegrationModule::Get().GetAPIs(); }
	FORCEINLINE static RallyHereAPI::FAdAPI& GetAdAPI() { return GetAPIs().GetAd(); }
	FORCEINLINE static RallyHereAPI::FConfigAPI& GetConfigAPI() { return GetAPIs().GetConfig(); }
	FORCEINLINE static RallyHereAPI::FAuthAPI& GetAuthAPI() { return GetAPIs().GetAuth(); }
	FORCEINLINE static RallyHereAPI::FFriendsV2API& GetFriendsV2API() { return GetAPIs().GetFriendsV2(); }
	FORCEINLINE static RallyHereAPI::FBlockedV2API& GetBlockedV2API() { return GetAPIs().GetBlockedV2(); }
	FORCEINLINE static RallyHereAPI::FSessionsAPI& GetSessionsAPI() { return GetAPIs().GetSessions(); }
	FORCEINLINE static RallyHereAPI::FRankAPI& GetRankAPI() { return GetAPIs().GetRank(); }
	FORCEINLINE static RallyHereAPI::FQueuesAPI& GetQueuesAPI() { return GetAPIs().GetQueues(); }
	FORCEINLINE static RallyHereAPI::FPresenceAPI& GetPresenceAPI() { return GetAPIs().GetPresence(); }
	FORCEINLINE static RallyHereAPI::FUsersAPI& GetUsersAPI() { return GetAPIs().GetUsers(); }
	FORCEINLINE static RallyHereAPI::FSettingsAPI& GetSettingsAPI() { return GetAPIs().GetSettings(); }
	FORCEINLINE static RallyHereAPI::FInventoryAPI& GetInventoryAPI() { return GetAPIs().GetInventory(); }
	FORCEINLINE static RallyHereAPI::FCatalogAPI& GetCatalogAPI() { return GetAPIs().GetCatalog(); }
}

/** @} */