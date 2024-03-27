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
	static inline FRH_Integration& Get()
	{
		return FModuleManager::Get().LoadModuleChecked<FRallyHereIntegrationModule>(GetModuleName()).GetIntegration();
	}
	/** @brief Gets the Integration class fromt he module. */
    inline FRH_Integration& GetIntegration() const
    {
        return *Integration;
    }

private:
    TUniquePtr<FRH_Integration> Integration;
};

// shortener for the above lookup
namespace RH_APIs
{
	FORCEINLINE static RallyHereAPI::FRallyHereAPIAll GetAPIs() { return FRallyHereIntegrationModule::Get().GetAPIs(); }

	FORCEINLINE static TSharedRef<RallyHereAPI::FAdAPI> GetAdAPI() { return GetAPIs().GetAd(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FConfigAPI> GetConfigAPI() { return GetAPIs().GetConfig(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FAuthAPI> GetAuthAPI() { return GetAPIs().GetAuth(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FFriendsV2API> GetFriendsV2API() { return GetAPIs().GetFriendsV2(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FBlockedV2API> GetBlockedV2API() { return GetAPIs().GetBlockedV2(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FSessionsAPI> GetSessionsAPI() { return GetAPIs().GetSessions(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FMatchAPI> GetMatchAPI() { return GetAPIs().GetMatch(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FReportsAPI> GetReportsAPI() { return GetAPIs().GetReports(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FRankAPI> GetRankAPI() { return GetAPIs().GetRank(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FQueuesAPI> GetQueuesAPI() { return GetAPIs().GetQueues(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FPresenceAPI> GetPresenceAPI() { return GetAPIs().GetPresence(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FUsersAPI> GetUsersAPI() { return GetAPIs().GetUsers(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FSettingsAPI> GetSettingsAPI() { return GetAPIs().GetSettings(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FInventoryAPI> GetInventoryAPI() { return GetAPIs().GetInventory(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FCatalogAPI> GetCatalogAPI() { return GetAPIs().GetCatalog(); }
	FORCEINLINE static TSharedRef<RallyHereAPI::FEventsAPI> GetEventsAPI() { return GetAPIs().GetEvents(); }
}

/** @} */