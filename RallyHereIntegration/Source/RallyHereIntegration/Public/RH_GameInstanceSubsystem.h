// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "RH_SubsystemPluginBase.h"

#include "CustomAPI.h"

#include "RH_GameInstanceSubsystem.generated.h"

class URH_GameInstanceSessionSubsystem;
class URH_SessionBrowserCache;
class URH_MatchmakingBrowserCache;
class URH_GameInstanceServerBootstrapper;
class URH_GameInstanceClientBootstrapper;
class URH_PlayerInfoSubsystem;
class URH_CatalogSubsystem;
class URH_ConfigSubsystem;
class URH_SettingsSubsystem;

/** @defgroup GameInstance RallyHere Game Instance
 *  @{
 */

/**
 * @brief Subsystem for the Game Instance.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_GameInstanceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
public:
	/**
	 * @brief Gets if the subsystem is enabled and should be created.
	 */
	bool ShouldCreateSubsystem(UObject* Outer) const override { return bEnabled; }
	/**
	* @brief Initialize the subsystem.
	*/
    void Initialize(FSubsystemCollectionBase& Collection);
	/**
	* @brief Safely tears down the subsystem.
	*/
    void Deinitialize();
	/**
	* @brief Sets the Auth Context for the subsystem.
	* @param [in] InAuthContext The Auth Context to set with.
	*/
	void SetAuthContext(FAuthContextPtr InAuthContext) { AuthContext = InAuthContext; }
	/**
	* @brief Gets the subsystems designated auth context.
	*/
	FAuthContextPtr GetAuthContext() const { return AuthContext; }

	/**
	* @brief Sets the analytics provider for the subsystem.
	* @param [in] InAnalyticsProvider The analytics provider to set with.
	*/
	void SetAnalyticsProvider(TSharedPtr<class IAnalyticsProvider> InAnalyticsProvider) { AnalyticsProvider = InAnalyticsProvider; }
	/**
	* @brief Gets the instance's analytics provider to use
	*/
	virtual TSharedPtr<class IAnalyticsProvider> GetAnalyticsProvider() const { return AnalyticsProvider; }

	/**
	* @brief Gets the session subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_GameInstanceSessionSubsystem* GetSessionSubsystem() const { return SessionSubsystem; };
	/**
	* @brief Gets the session search cache on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_SessionBrowserCache* GetSessionSearchCache() const { return SessionSearchCache; };
	/**
	* @brief Gets the matchmaking cache on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Matchmaking")
	inline URH_MatchmakingBrowserCache* GetMatchmakingCache() const { return MatchmakingCache; };
	/**
	* @brief Gets the server bootstrapper on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_GameInstanceServerBootstrapper* GetServerBootstrapper() const { return ServerBootstrapper; };
	/**
	* @brief Gets the client boostrapper on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	inline URH_GameInstanceClientBootstrapper* GetClientBootstrapper() const { return ClientBootstrapper; };
	/**
	* @brief Gets the player info subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "PlayerInfo")
	inline URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const { return PlayerInfoSubsystem; };
	/**
	* @brief Gets the catalog subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Catalog")
	inline URH_CatalogSubsystem* GetCatalogSubsystem() const { return CatalogSubsystem; };
	/**
	* @brief Gets the config subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	inline URH_ConfigSubsystem* GetConfigSubsystem() const { return ConfigSubsystem; };
	/**
	* @brief Gets the settings subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	inline URH_SettingsSubsystem* GetSettingsSubsystem() const { return SettingsSubsystem; };
	/**
	 * @brief Handles verification and validation of a player attempting to connect to the instance.
	 * @param [in] GameMode The game mode the instance is running.
	 * @param [in] NewPlayer The player that is attempting to connect.
	 * @param [out] ErrorMessage If an Error happens for this player being valid, this will be set to the error message.
	 */
	void GameModePreloginEvent(class AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& ErrorMessage);
	/**
	 * @brief Handles verification and validation of a player attempting to connect to the instance.
	 * @param [in] Connection The player that is attempting to connect.
	 * @param [out] ErrorMessage If an Error happens for this player being valid, this will be set to the error message.
	 */
	bool ValidateIncomingConnection(class UNetConnection* Connection, FString& ErrorMessage) const;
	/**
	 * @brief Handles logic for when a player connects
	 * @param [in] GameMode The game mode the instance is running.
	 * @param [in] NewPlayer The player that is connecting.
	 */
	void GameModePostLoginEvent(class AGameModeBase* GameMode, APlayerController* NewPlayer);
	/**
	 * @brief Handles logic for when a player disconnects
	 * @param [in] GameMode The game mode the instance is running.
	 * @param [in] Exiting The player that is disconnecting.
	 */
	void GameModeLogoutEvent(class AGameModeBase* GameMode, AController* Exiting);

	/**
	* @brief Gets if server boostrapping is enabled, by inspecting state of default object before game instance is initialized, once it is initialized use the above
	*/
	FORCEINLINE static bool DEFAULT_IsServerBootstrappingEnabled()
	{
		auto* Default = GetDefault<URH_GameInstanceSubsystem>();
		return Default->ShouldCreateSubsystem(nullptr) && Default->bEnableGameSessions && Default->bEnableServerBootstrapper && IsRunningDedicatedServer();
	}
	/**
	* @brief Gets if client boostrapping is enabled, by inspecting state of default object before game instance is initialized, once it is initialized use the above
	*/
	FORCEINLINE static bool DEFAULT_IsClientBootstrappingEnabled()
	{
		auto* Default = GetDefault<URH_GameInstanceSubsystem>();
		return Default->ShouldCreateSubsystem(nullptr) && Default->bEnableGameSessions && Default->bEnableClientBootstrapper && !IsRunningDedicatedServer();
	}

	/**
	* @brief Custom Endpoint wrapper (for custom endpoints that require authentication)
	* @param [in] FRH_CustomEndpointRequestWrapper Wrapper struct containing call information
	* @param [in] Delegate The delegate to call when the call is complete (contains raw response)
	*/
	void CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const RallyHereAPI::FDelegate_CustomEndpointSend& Delegate);
	/**
	* @brief Custom Endpoint wrapper (for custom endpoints that require authentication)
	* @param [in] FRH_CustomEndpointRequestWrapper Wrapper struct containing call information
	* @param [in] Delegate The delegate to call when the call is complete
	*/
	void CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDelegateBlock& Delegate = FRH_CustomEndpointDelegateBlock());
	/**
	* @brief Custom Endpoint wrapper (for custom endpoints that require authentication)
	* @param [in] FRH_CustomEndpointRequestWrapper Wrapper struct containing call information
	* @param [in] Delegate The delegate to call when the call is complete
	*/
	UFUNCTION(BlueprintCallable, Category = "RallyHere|LocalPlayerSubsystem", meta = (DisplayName = "Custom Endpoint", AutoCreateRefTerm = "Request, Delegate"))
	void BLUEPRINT_CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDynamicDelegate& Delegate)
	{
		CustomEndpoint(Request, Delegate);
	}

protected:
	/** @brief Auth context used by the Game Instance Subsystem. */
	FAuthContextPtr AuthContext;
	/** @brief Analytics provider used by the Game Instance Subsystem. */
	TSharedPtr<class IAnalyticsProvider> AnalyticsProvider;
	/** @brief Array of plugins for the Game Instance Subsystem. */
	UPROPERTY()
	TArray<URH_GameInstanceSubsystemPlugin*> SubsystemPlugins;
	/**
	 * @brief Adds a plugin to the Game Instance Subsystem.
	 * @param [in] SubsystemClassPath The class path of the plugin to add.
	 * @return The plugin that was added.
	 */
	template<typename UClassToUse, typename TEnableIf<TIsDerivedFrom<UClassToUse, URH_GameInstanceSubsystemPlugin>::Value, bool>::Type = true>
	UClassToUse* AddSubsystemPlugin(const FSoftClassPath& SubsystemClassPath)
	{
		UClass* SubsystemClass = SubsystemClassPath.TryLoadClass<UClassToUse>();

		// If an invalid class type was specified we fall back to the default.
		if (!SubsystemClass)
		{
			SubsystemClass = UClassToUse::StaticClass();
		}

		auto* Subsystem = NewObject<UClassToUse>(this, SubsystemClass);
		SubsystemPlugins.Add(Subsystem);
		return Subsystem;
	}
	/** @brief The Session Subsystem. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSessionSubsystem, Category = "Session")
	URH_GameInstanceSessionSubsystem* SessionSubsystem;
	/** @brief The Cache for seasion seaches. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSessionSearchCache, Category = "Session")
	URH_SessionBrowserCache* SessionSearchCache;
	/** @brief The Cache to matchmaking. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetMatchmakingCache, Category = "Matchmaking")
	URH_MatchmakingBrowserCache* MatchmakingCache;
	/** @brief The Game Instance Server Boostrapper. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetServerBootstrapper, Category = "Session")
	URH_GameInstanceServerBootstrapper* ServerBootstrapper;
	/** @brief The Game Instance Client Boostrapper. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetClientBootstrapper, Category = "Session")
	URH_GameInstanceClientBootstrapper* ClientBootstrapper;
	/** @brief The Player Info Subsystem. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetPlayerInfoSubsystem, Category = "Player Info")
	URH_PlayerInfoSubsystem* PlayerInfoSubsystem;
	/** @brief The Catalog Subsystem. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetCatalogSubsystem, Category = "Catalog")
	URH_CatalogSubsystem* CatalogSubsystem;
	/** @brief The Config Subsystem. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetConfigSubsystem, Category = "Config")
	URH_ConfigSubsystem* ConfigSubsystem;
	/** @brief The Settings Subsystem. */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetSettingsSubsystem, Category = "Settings")
	URH_SettingsSubsystem* SettingsSubsystem;

	// control flags
	/** @brief If the Game Instance Subsystem is enabled. */
	UPROPERTY(config)
	bool bEnabled = true;
	/** @brief If the Session Browser is enabled. */
	UPROPERTY(config)
	bool bEnableSessionBrowser = true;
	/** @brief If the Matchmaking Browser is enabled. */
	UPROPERTY(config)
	bool bEnableMatchmakingBrowser = true;
	/** @brief If the Game Sessions are enabled. */
	UPROPERTY(config)
	bool bEnableGameSessions = true;
	/** @brief If the Game Instance Server Bootstrapper is enabled. */
	UPROPERTY(config)
	bool bEnableServerBootstrapper = true;
	/** @brief If the Game Instance Client Bootstrapper is enabled. */
	UPROPERTY(config)
	bool bEnableClientBootstrapper = true;
	/** @brief If set, the connection attempt must have a valid security token to be allowed to connect. */
	UPROPERTY(config)
	bool bUseSecurityTokenForJoining = true;
	UPROPERTY(config)
	/** @brief If set, the Player Id must have been imported to the instance before being allowed to connect. */
	bool bRequireImportedPlayerIdsForJoining = true;
	UPROPERTY(config)
	/** @brief If set, the Player Id must be valid before being allowed to connect. */
	bool bRequireValidPlayerIdsForJoining = true;

	/** @brief Handle application going into suspension (these involve the application losing focus). */
	virtual void AppSuspendCallbackInGameThread();
	/** @brief Handle application resuming from suspension (these involve the application losing focus). */
	virtual void AppResumeCallbackInGameThread();
	/** @brief Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)). */
	virtual void AppDeactivatedCallbackInGameThread();
	/** @brief Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)). */
	virtual void AppReactivatedCallbackInGameThread();

private:
	/** @brief Handle application going into suspension (these involve the application losing focus). */
	void AppSuspendCallback();
	FDelegateHandle AppSuspendHandle;
	/** @brief Handle application resuming from suspension (these involve the application losing focus). */
	void AppResumeCallback();
	FDelegateHandle AppResumeHandle;
	/** @brief Handle application deactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)). */
	void AppDeactivatedCallback();
	FDelegateHandle AppDeactivatedHandle;
	/** @brief Handle application reactivating (these involve the game shutting down and pausing (such as when a console is put to sleep)). */
	void AppReactivatedCallback();
	FDelegateHandle AppReactivatedHandle;
};

/** @} */