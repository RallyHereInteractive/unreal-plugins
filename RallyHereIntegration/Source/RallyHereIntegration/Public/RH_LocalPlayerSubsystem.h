#pragma once

#include <RH_FriendSubsystem.h>

#include "CoreMinimal.h"
#include "OnlineSubsystem.h"
#include "RallyHereAPIAuthContext.h"
#include "Subsystems/LocalPlayerSubsystem.h"
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

// #RHTODO - add OSS inventory checking after login, app reactivation

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
	* @brief Initialize the subsystem.
	*/
	void Initialize(FSubsystemCollectionBase& Collection);
	/**
	* @brief Safely tears down the subsystem.
	*/
	void Deinitialize();
	/**
	* @brief Gets if the player is currently logged in.
	*/
	bool IsLoggedIn() const;
	/**
	* @brief Gets the player's unique player id.
	*/
	FGuid GetPlayerUuid() const;
	/**
	* @brief Gets the platform type for the player if logged in.
	*/
	UE_DEPRECATED(5.0, "This function has been deprecated, use GetLoggedInPlatform")
	ERHAPI_PlatformTypes_DEPRECATED GetLoggedInPlatformType() const;
	/**
	* @brief Gets the platform type for the player if logged in.
	*/
	ERHAPI_Platform GetLoggedInPlatform() const;
	/**
	* @brief Gets the player's OSS unique id.
	*/
	FUniqueNetIdWrapper GetOSSUniqueId() const;

#if RH_FROM_ENGINE_VERSION(5,0)
	/**
	* @brief Gets the player's platform id.
	*/
	FPlatformUserId GetPlatformUserId() const;
#else
	/**
	* @brief Gets the player's platform id.
	*/
	int32 GetPlatformUserId() const;
#endif
	/**
	* @brief Gets the player's player info.
	*/
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	URH_PlayerInfo* GetLocalPlayerInfo() const;
	/**
	* @brief Gets the player's platform id wrapped with platform type.
	*/
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	FRH_PlayerPlatformId GetPlayerPlatformId() const;
	/**
	* @brief Gets the player's auth context.
	*/
	FAuthContextPtr GetAuthContext() const { return AuthContext; }
	/** 
	* @brief Get a specific OSS by name for this local player's world.  In editor, this allows each world/game instance to have a different OSS 
	*/
	IOnlineSubsystem* GetOSS(const FName& SubsystemName = NAME_None) const;
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
	URH_PlayerNotifications* GetPlayerNotifications() const;

	// Sandboxed plugins
	/**
	* @brief Gets the player's player info.
	*/
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;
	

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
	/** @brief Array of plugins for the Local Player Subsystem. */
	UPROPERTY()
	TArray<URH_LocalPlayerSubsystemPlugin*> SubsystemPlugins;
	/**
	 * @brief Adds a plugin to the Game Instance Subsystem.
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
		SubsystemPlugins.Add(Subsystem);
		return Subsystem;
	}

	/** @brief Array of plugins for the Local Player Subsystem. */
	UPROPERTY()
	TArray<URH_SandboxedSubsystemPlugin*> SandboxedSubsystemPlugins;
	/**
	 * @brief Adds a plugin to the Game Instance Subsystem.
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
		SandboxedSubsystemPlugins.Add(Subsystem);
		return Subsystem;
	}

	/**
	 * @brief Called whenever the user logs in.
	 * @param [in] bSuccess True if the login was successful, false otherwise.
	 */
	virtual void OnUserLoggedIn(bool bSuccess);
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
	virtual void OnUserChanged();
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
};

/** @} */