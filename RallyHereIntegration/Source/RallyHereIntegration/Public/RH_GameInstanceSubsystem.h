
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_GameInstanceSubsystem.generated.h"

class URH_GameInstanceSessionSubsystem;
class URH_SessionBrowserCache;
class URH_MatchmakingBrowserCache;
class URH_GameInstanceServerBootstrapper;
class URH_GameInstanceClientBootstrapper;
class URH_PlayerInfoSubsystem;
class URH_CatalogSubsystem;
class URH_ConfigSubsystem;

UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_GameInstanceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
public:
	bool ShouldCreateSubsystem(UObject* Outer) const override { return bEnabled; }
    void Initialize(FSubsystemCollectionBase& Collection);
    void Deinitialize();

	void SetAuthContext(FAuthContextPtr InAuthContext) { AuthContext = InAuthContext; }
	FAuthContextPtr GetAuthContext() const { return AuthContext; }

	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_GameInstanceSessionSubsystem* GetSessionSubsystem() const { return SessionSubsystem; };

	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_SessionBrowserCache* GetSessionSearchCache() const { return SessionSearchCache; };

	UFUNCTION(BlueprintGetter, Category = "Matchmaking")
	inline URH_MatchmakingBrowserCache* GetMatchmakingCache() const { return MatchmakingCache; };

	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_GameInstanceServerBootstrapper* GetServerBootstrapper() const { return ServerBootstrapper; };

	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_GameInstanceClientBootstrapper* GetClientBootstrapper() const { return ClientBootstrapper; };

	UFUNCTION(BlueprintGetter, Category = "PlayerInfo")
	inline URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const { return PlayerInfoSubsystem; };

	UFUNCTION(BlueprintGetter, Category = "Catalog")
	inline URH_CatalogSubsystem* GetCatalogSubsystem() const { return CatalogSubsystem; };

	UFUNCTION(BlueprintGetter, Category = "Config")
	inline URH_ConfigSubsystem* GetConfigSubsystem() const { return ConfigSubsystem; };

	void GameModePreloginEvent(class AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& ErrorMessage);

	// the following are meant to inspect state of default object before game instance is initialized, once it is initialized use the above
	FORCEINLINE static bool DEFAULT_IsServerBootstrappingEnabled() 
	{
		auto* Default = GetDefault<URH_GameInstanceSubsystem>();
		return Default->ShouldCreateSubsystem(nullptr) && Default->bEnableGameSessions && Default->bEnableServerBootstrapper && IsRunningDedicatedServer();
	}
	FORCEINLINE static bool DEFAULT_IsClientBootstrappingEnabled()
	{
		auto* Default = GetDefault<URH_GameInstanceSubsystem>();
		return Default->ShouldCreateSubsystem(nullptr) && Default->bEnableGameSessions && Default->bEnableClientBootstrapper && !IsRunningDedicatedServer();
	}

private:
	FAuthContextPtr AuthContext;

	UPROPERTY()
	TArray<URH_GameInstanceSubsystemPlugin*> SubsystemPlugins;

	template<typename UClassToUse, typename TEnableIf<TIsDerivedFrom<UClassToUse, URH_GameInstanceSubsystemPlugin>::Value, bool>::Type = true>
	UClassToUse* AddSubsystemPlugin()
	{
		auto* Subsystem = NewObject<UClassToUse>(this);
		SubsystemPlugins.Add(Subsystem);
		return Subsystem;
	}

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSessionSubsystem, Category = "Session")
	URH_GameInstanceSessionSubsystem* SessionSubsystem;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSessionSearchCache, Category = "Session")
	URH_SessionBrowserCache* SessionSearchCache;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetMatchmakingCache, Category = "Matchmaking")
	URH_MatchmakingBrowserCache* MatchmakingCache;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetServerBootstrapper, Category = "Session")
	URH_GameInstanceServerBootstrapper* ServerBootstrapper;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetClientBootstrapper, Category = "Session")
	URH_GameInstanceClientBootstrapper* ClientBootstrapper;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetPlayerInfoSubsystem, Category = "Player Info")
	URH_PlayerInfoSubsystem* PlayerInfoSubsystem;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetCatalogSubsystem, Category = "Catalog")
	URH_CatalogSubsystem* CatalogSubsystem;

	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetConfigSubsystem, Category = "Config")
	URH_ConfigSubsystem* ConfigSubsystem;

	// control flags
	UPROPERTY(config)
	bool bEnabled = true;

	UPROPERTY(config)
	bool bEnableSessionBrowser = true;

	UPROPERTY(config)
	bool bEnableMatchmakingBrowser = true;

	UPROPERTY(config)
	bool bEnableGameSessions = true;
	UPROPERTY(config)
	bool bEnableServerBootstrapper = true;
	UPROPERTY(config)
	bool bEnableClientBootstrapper = true;
	UPROPERTY(config)
	bool bUseSecurityTokenForJoining = true;
	UPROPERTY(config)
	bool bRequireImportedPlayerIdsForJoining = true;
	UPROPERTY(config)
	bool bRequireValidPlayerIdsForJoining = true;
};
