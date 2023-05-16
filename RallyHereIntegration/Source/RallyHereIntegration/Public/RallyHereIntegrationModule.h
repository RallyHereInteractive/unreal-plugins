
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "RH_Common.h"
#include "RH_Integration.h"

class RALLYHEREINTEGRATION_API FRallyHereIntegrationModule : public IModuleInterface
{
public:
    ~FRallyHereIntegrationModule() = default;

	void StartupModule() final;
	void ShutdownModule() final;

    static inline FName GetModuleName()
    {
		static const FName ModuleName(TEXT("RallyHereIntegration"));
        return ModuleName;
    }

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(GetModuleName());
	}

	static inline URH_Integration& Get()
	{
		return FModuleManager::Get().LoadModuleChecked<FRallyHereIntegrationModule>(GetModuleName()).GetIntegration();
	}

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
	FORCEINLINE static RallyHereAPI::FSessionAPI& GetSessionAPI() { return GetAPIs().GetSession(); }
	FORCEINLINE static RallyHereAPI::FQueuesAPI& GetQueuesAPI() { return GetAPIs().GetQueues(); }
	FORCEINLINE static RallyHereAPI::FPresenceAPI& GetPresenceAPI() { return GetAPIs().GetPresence(); }
	FORCEINLINE static RallyHereAPI::FUsersAPI& GetUsersAPI() { return GetAPIs().GetUsers(); }
	FORCEINLINE static RallyHereAPI::FSettingsAPI& GetSettingsAPI() { return GetAPIs().GetSettings(); }
	FORCEINLINE static RallyHereAPI::FInventoryAPI& GetInventoryAPI() { return GetAPIs().GetInventory(); }
	FORCEINLINE static RallyHereAPI::FCatalogAPI& GetCatalogAPI() { return GetAPIs().GetCatalog(); }
}

