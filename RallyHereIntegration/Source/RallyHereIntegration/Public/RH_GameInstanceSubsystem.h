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
class URH_MatchSubsystem;
class URH_RemoteFileSubsystem;

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
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	/**
	* @brief Initialize the subsystem.
	*/
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	/**
	* @brief Safely tears down the subsystem.
	*/
    virtual void Deinitialize() override;
	/**
	* @brief Sets the Auth Context for the subsystem.
	* @param [in] InAuthContext The Auth Context to set with.
	*/
	virtual void SetAuthContext(FAuthContextPtr InAuthContext) { AuthContext = InAuthContext; }
	/**
	* @brief Gets the subsystems designated auth context.
	*/
	FORCEINLINE FAuthContextPtr GetAuthContext() const { return AuthContext; }

	/**
	* @brief Sets the analytics provider for the subsystem.
	* @param [in] InAnalyticsProvider The analytics provider to set with.
	*/
	virtual void SetAnalyticsProvider(TSharedPtr<class IAnalyticsProvider> InAnalyticsProvider) { AnalyticsProvider = InAnalyticsProvider; }
	/**
	* @brief Gets the instance's analytics provider to use
	*/
	FORCEINLINE TSharedPtr<class IAnalyticsProvider> GetAnalyticsProvider() const { return AnalyticsProvider; }

	/**
	* @brief Gets the session subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	FORCEINLINE URH_GameInstanceSessionSubsystem* GetSessionSubsystem() const { return SessionSubsystem; };
	/**
	* @brief Gets the session search cache on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	FORCEINLINE URH_SessionBrowserCache* GetSessionSearchCache() const { return SessionSearchCache; };
	/**
	* @brief Gets the matchmaking cache on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Matchmaking")
	FORCEINLINE URH_MatchmakingBrowserCache* GetMatchmakingCache() const { return MatchmakingCache; };
	/**
	* @brief Gets the server bootstrapper on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	FORCEINLINE URH_GameInstanceServerBootstrapper* GetServerBootstrapper() const { return ServerBootstrapper; };
	/**
	* @brief Gets the client boostrapper on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Session")
	FORCEINLINE URH_GameInstanceClientBootstrapper* GetClientBootstrapper() const { return ClientBootstrapper; };
	/**
	* @brief Gets the player info subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "PlayerInfo")
	FORCEINLINE URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const { return PlayerInfoSubsystem; };
	/**
	* @brief Gets the catalog subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Catalog")
	FORCEINLINE URH_CatalogSubsystem* GetCatalogSubsystem() const { return CatalogSubsystem; };
	/**
	* @brief Gets the config subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	FORCEINLINE URH_ConfigSubsystem* GetConfigSubsystem() const { return ConfigSubsystem; };
	/**
	* @brief Gets the settings subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Config")
	FORCEINLINE URH_SettingsSubsystem* GetSettingsSubsystem() const { return SettingsSubsystem; };
	/**
	* @brief Gets the match subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "Match")
	FORCEINLINE URH_MatchSubsystem* GetMatchSubsystem() const { return MatchSubsystem; };
	/**
	* @brief Gets the remote file subsystem on the instance.
	*/
	UFUNCTION(BlueprintGetter, Category = "File")
	FORCEINLINE URH_RemoteFileSubsystem* GetRemoteFileSubsystem() const { return RemoteFileSubsystem; };

	/**
	* @brief Gets if server boostrapping is enabled
	*/
	virtual bool IsServerBootstrappingEnabled()
	{
		return bEnableGameSessions && bEnableServerBootstrapper && IsRunningDedicatedServer();
	}
	/**
	* @brief Gets if client boostrapping is enabled
	*/
	virtual bool IsClientBootstrappingEnabled()
	{
		return bEnableGameSessions && bEnableClientBootstrapper && !IsRunningDedicatedServer();
	}

	/**
	* @brief Custom Endpoint wrapper (for custom endpoints that require authentication)
	* @param [in] FRH_CustomEndpointRequestWrapper Wrapper struct containing call information
	* @param [in] Delegate The delegate to call when the call is complete (contains raw response)
	*/
	virtual void CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const RallyHereAPI::FDelegate_CustomEndpointSend& Delegate);
	/**
	* @brief Custom Endpoint wrapper (for custom endpoints that require authentication)
	* @param [in] FRH_CustomEndpointRequestWrapper Wrapper struct containing call information
	* @param [in] Delegate The delegate to call when the call is complete
	*/
	virtual void CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDelegateBlock& Delegate = FRH_CustomEndpointDelegateBlock());
	/**
	* @private
	* @brief Custom Endpoint wrapper (for custom endpoints that require authentication)
	* @param [in] FRH_CustomEndpointRequestWrapper Wrapper struct containing call information
	* @param [in] Delegate The delegate to call when the call is complete
	*/
	UFUNCTION(BlueprintCallable, Category = "RallyHere|LocalPlayerSubsystem", meta = (DisplayName = "Custom Endpoint", AutoCreateRefTerm = "Request, Delegate"))
	void BLUEPRINT_CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDynamicDelegate& Delegate)
	{
		CustomEndpoint(Request, Delegate);
	}

	/**
	 * @brief Gets a last-known IP address for use with reporting
	 * @return The last-known IP address, if known, empty otherwise
	 */
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem", meta = (DisplayName = "Get Last Known IP Address"))
	FString GetLastKnownIPAddress() const { return LastKnownIPAddress; }

	/**
	 * @brief Gets a delegate triggered if the last-known IP address is updated
	 * @return The delegate
	 */
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem", meta = (DisplayName = "Get Last Known IP Address Update Delegate"))
	FSimpleMulticastDelegate& GetOnLastKnownIpAddressUpdated() { return OnLastKnownIpAddressUpdated; }

	/**
	 * @brief Attempts to update the IP address
	 * @param [in] bForce If true, forces the query to occur even if one is already in progress or has already completed
	 * @param [in] Delegate The delegate to call when the call is complete
	 */
	virtual void QueryIpAddressIfNeeded(bool bForce = false, FSimpleDelegate Delegate = FSimpleDelegate());

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
		AddSubsystemPlugin(Subsystem);
		return Subsystem;
	}
	/**
	 * @brief Adds a plugin to the Game Instance Subsystem.
	 * @param [in] SubsystemClassPath The class path of the plugin to add.
	 * @return The plugin that was added.
	 */
	virtual void AddSubsystemPlugin(URH_GameInstanceSubsystemPlugin* InPlugin)
	{
		SubsystemPlugins.Add(InPlugin);
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
	/** @brief The Match Subsystem */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetMatchSubsystem, Category = "Match")
	URH_MatchSubsystem* MatchSubsystem;
	/** @brief The File Subsystem */
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetRemoteFileSubsystem, Category = "Match")
	URH_RemoteFileSubsystem* RemoteFileSubsystem;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetLastKnownIPAddress, Category = "Match")
	FString LastKnownIPAddress;
	
	enum IpQueryState
	{
		IP_QUERY_STATE_NONE,
		IP_QUERY_STATE_IN_PROGRESS,
		IP_QUERY_STATE_COMPLETE_SUCCESS,
		IP_QUERY_STATE_COMPLETE_FAILURE
	};
	IpQueryState LastKnownIPAddressQueryState = IP_QUERY_STATE_NONE;
	
	FSimpleMulticastDelegate OnLastKnownIpAddressUpdated;
	TArray<FSimpleDelegate> LastKnownIpAddressUpdateDelegates;
	
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