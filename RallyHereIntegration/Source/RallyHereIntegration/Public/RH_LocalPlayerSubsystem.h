// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystem.h"
#include "RallyHereAPIAuthContext.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Common.h"

#include "CustomAPI.h"

#include "RH_LocalPlayerSubsystem.generated.h"

class URH_LocalPlayerLoginSubsystem;
class URH_AdSubsystem;
class URH_FriendSubsystem;
class URH_LocalPlayerSessionSubsystem;
class URH_LocalPlayerPresenceSubsystem;
class URH_PurgeSubsystem;
class URH_EntitlementSubsystem;
class URH_PlayerNotifications;

DECLARE_MULTICAST_DELEGATE_OneParam(FRH_AutoInventoryCompleteDelegate, bool);

/** @defgroup LocalPlayer RallyHere Local Player
 *  @{
 */

 /**
  * @brief Subsystem to manage the local player.
  */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_LocalPlayerSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()
public:
	/**
	* @brief Whether to create the subsystem (defaults to not creating if there are any derived subsystems).
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
	* @brief Gets if the player is currently logged in.
	*/
	virtual bool IsLoggedIn() const;

	/**
	* @brief Gets the player's unique player id.
	*/
	virtual FGuid GetPlayerUuid() const;
	/**
	* @brief Gets the platform type for the player if logged in.
	*/
	virtual TOptional<ERHAPI_Platform> GetLoggedInPlatform() const;
	/**
	* @brief Gets the player's OSS unique id.
	*/
	virtual FUniqueNetIdWrapper GetOSSUniqueId() const;

#if RH_FROM_ENGINE_VERSION(5,0)
	/**
	* @brief Gets the player's platform id.
	*/
	virtual FPlatformUserId GetPlatformUserId() const;
#else
	/**
	* @brief Gets the player's platform id.
	*/
	virtual int32 GetPlatformUserId() const;
#endif

	/**
	* @brief Gets the player's analytics provider
	*/
	virtual TSharedPtr<class IAnalyticsProvider> GetAnalyticsProvider() const { return AnalyticsProvider; }
	/**
	* @brief Gets the player's analytics provider
	*/
	virtual TSharedPtr<class IAnalyticsProvider> CreateAnalyticsProvider();

	/**
	* @brief Gets the player's player info.
	*/
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	virtual URH_PlayerInfo* GetLocalPlayerInfo() const;
	/**
	* @brief Gets the player's platform id wrapped with platform type.
	*/
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	virtual FRH_PlayerPlatformId GetPlayerPlatformId() const;
	/**
	* @brief Gets the player's auth context.
	*/
	FORCEINLINE FAuthContextPtr GetAuthContext() const { return AuthContext; }
	/**
	* @brief Get a specific OSS by name for this local player's world.  In editor, this allows each world/game instance to have a different OSS
	*/
	virtual IOnlineSubsystem* GetOSS(const FName& SubsystemName = NAME_None) const;
	/**
	* @brief Gets the player's login subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_LocalPlayerLoginSubsystem* GetLoginSubsystem() const { return LoginSubsystem; }
	/**
	* @brief Gets the player's ad subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_AdSubsystem* GetAdSubsystem() const { return AdSubsystem; }
	/**
	* @brief Gets the player's friend subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_FriendSubsystem* GetFriendSubsystem() const { return FriendSubsystem; }
	/**
	* @brief Gets the player's session subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_LocalPlayerSessionSubsystem* GetSessionSubsystem() const { return SessionSubsystem; }
	/**
	* @brief Gets the player's presence subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_LocalPlayerPresenceSubsystem* GetPresenceSubsystem() const { return PresenceSubsystem; }
	/**
	* @brief Gets the player's purge subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_PurgeSubsystem* GetPurgeSubsystem() const { return PurgeSubsystem; }
	/**
	* @brief Gets the player's entitlement subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_EntitlementSubsystem* GetEntitlementSubsystem() const { return EntitlementSubsystem; }
	/**
	* @brief Gets the player's notification subsystem.
	*/
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	virtual URH_PlayerNotifications* GetPlayerNotifications() const;

	// Sandboxed plugins
	/**
	* @brief Gets the player's player info.
	*/
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	virtual URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;


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

	/** @brief Broadcast delegate for when intial inventory session is created, if using auto creation. */
	FRH_AutoInventoryCompleteDelegate OnAutoInventorySessionCreated;

	/** @brief Broadcast delegate for when intial platform entitlements are processed, if using auto processing. */
	FRH_AutoInventoryCompleteDelegate OnAutoEntitlementsProcessed;

protected:
	/** @brief Array of plugins for the Local Player Subsystem. */
	UPROPERTY()
	TArray<URH_LocalPlayerSubsystemPlugin*> SubsystemPlugins;
	/**
	 * @brief Adds a plugin to the Local Player Subsystem.
	 * @param [in] SubsystemClassPath The class path of the plugin to add.
	 * @return The plugin that was added.
	 */
	template<typename UClassToUse, typename TEnableIf<TIsDerivedFrom<UClassToUse, URH_LocalPlayerSubsystemPlugin>::Value, bool>::Type = true>
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
	 * @brief Adds a plugin to the Local Player Subsystem.
	 * @param [in] SubsystemClassPath The class path of the plugin to add.
	 * @return The plugin that was added.
	 */
	virtual void AddSubsystemPlugin(URH_LocalPlayerSubsystemPlugin* InPlugin)
	{
		SubsystemPlugins.Add(InPlugin);
	}

	/** @brief Array of sandboxed plugins for the Local Player Subsystem. */
	UPROPERTY()
	TArray<URH_SandboxedSubsystemPlugin*> SandboxedSubsystemPlugins;
	/**
	 * @brief Adds a sandboxed plugin to the Local Player Subsystem.
	 * @param [in] SubsystemClassPath The class path of the plugin to add.
	 * @return The plugin that was added.
	 */
	template<typename UClassToUse, typename TEnableIf<TIsDerivedFrom<UClassToUse, URH_SandboxedSubsystemPlugin>::Value, bool>::Type = true>
	UClassToUse* AddSandboxedSubsystemPlugin(const FSoftClassPath& SubsystemClassPath)
	{
		UClass* SubsystemClass = SubsystemClassPath.TryLoadClass<UClassToUse>();

		// If an invalid class type was specified we fall back to the default.
		if (!SubsystemClass)
		{
			SubsystemClass = UClassToUse::StaticClass();
		}

		auto* Subsystem = NewObject<UClassToUse>(this, SubsystemClass);
		AddSandboxedSubsystemPlugin(Subsystem);
		return Subsystem;
	}

	/**
	 * @brief Adds a plugin to the Local Player Subsystem.
	 * @param [in] SubsystemClassPath The class path of the plugin to add.
	 * @return The plugin that was added.
	 */
	virtual void AddSandboxedSubsystemPlugin(URH_SandboxedSubsystemPlugin* InPlugin)
	{
		SandboxedSubsystemPlugins.Add(InPlugin);
	}

	/**
	 * @brief Called whenever the config subsystem KV list is updated.
	 * @param ConfigSubsystem The config subsystem that was updated.
	 */
	virtual void OnConfigKVsUpdated(class URH_ConfigSubsystem* ConfigSubsystem); 
	
	/**
	 * @brief Called whenever the user logs in.
	 * @param [in] bSuccess True if the login was successful, false otherwise.
	 */
	virtual void OnUserLoggedIn(bool bSuccess);
	/**
	 * @brief Called whenever the user logs out explicitly.
	 */
	virtual void OnUserLoggedOut(bool bRefreshTokenExpired);
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
	virtual void OnUserChanged();
	/** @brief Callback that occurs when the player's refresh token expires while logged in */
	virtual void OnUserRefreshTokenExpired(FSimpleDelegate CompletionDelegate);

	/** @brief The Login Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetLoginSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_LocalPlayerLoginSubsystem* LoginSubsystem;
	/** @brief The Ad Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetAdSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_AdSubsystem* AdSubsystem;
	/** @brief The Friend Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetFriendSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_FriendSubsystem* FriendSubsystem;
	/** @brief The Session Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetSessionSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_LocalPlayerSessionSubsystem* SessionSubsystem;
	/** @brief The Presence Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetPresenceSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_LocalPlayerPresenceSubsystem* PresenceSubsystem;
	/** @brief The Purge Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetPurgeSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_PurgeSubsystem* PurgeSubsystem;
	/** @brief The Entitlement Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetEntitlementSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_EntitlementSubsystem* EntitlementSubsystem;

	// Sandboxed subsystems.  If enabled, these provide a local per-player result cache, rather than using the global cache.
	/** @brief The Sandboxed PlayerInfo Subsystem for the player. */
	UPROPERTY(BlueprintGetter = GetPlayerInfoSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_PlayerInfoSubsystem* SandboxedPlayerInfoSubsystem;

	/** The Player Info associated with the local player. */
	TWeakObjectPtr<URH_PlayerInfo> PlayerInfoCache;
	/** The Local Players auth context. */
	FAuthContextPtr AuthContext;
	/** The timestamp of the last successful login. */
	TOptional<FDateTime> LastLoginTime;

	/** The Analytics Provider for the player. */
	TSharedPtr<class IAnalyticsProvider> AnalyticsProvider;

	/** The start time of the AnalyticsProvider */
	TOptional<FDateTime> AnalyticsStartTime;
};

/** @} */