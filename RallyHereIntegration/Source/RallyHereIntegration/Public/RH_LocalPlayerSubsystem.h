
#pragma once

#include <RH_FriendSubsystem.h>

#include "CoreMinimal.h"
#include "OnlineSubsystem.h"
#include "RallyHereAPIAuthContext.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "RH_Common.h"

#include "RH_LocalPlayerSubsystem.generated.h"

class URH_LocalPlayerLoginSubsystem;
class URH_AdSubsystem;
class URH_FriendSubsystem;
class URH_LocalPlayerSessionSubsystem;
class URH_LocalPlayerPresenceSubsystem;
class URH_PurgeSubsystem;
class URH_EntitlementSubsystem;
class URH_NotificationSubsystem;

// #MRTODO - add OSS inventory checking after login, app reactivation


UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_LocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    GENERATED_BODY()
public:
    void Initialize(FSubsystemCollectionBase& Collection);
    void Deinitialize();

	bool IsLoggedIn() const;
	FGuid GetPlayerUuid() const;
	ERHAPI_PlatformTypes GetLoggedInPlatformType() const;
	FUniqueNetIdWrapper GetOSSUniqueId() const;

#if RH_FROM_ENGINE_VERSION(5,0)
	FPlatformUserId GetPlatformUserId() const;
#else
	int32 GetPlatformUserId() const;
#endif

	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	URH_PlayerInfo* GetLocalPlayerInfo() const;

	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	FRH_PlayerPlatformId GetPlayerPlatformId() const;

	FAuthContextPtr GetAuthContext() const { return AuthContext; }

	/** Get a specific OSS by name for this local player's world.  In editor, this allows each world/game instance to have a different OSS */
	IOnlineSubsystem* GetOSS(const FName& SubsystemName = NAME_None) const;

	/** Set the client ID for the AuthContext */
	void SetClientId(FString InClientId, FString Source = TEXT("Direct"));

	/** Get the current client ID (will run ResolveClientId if there isn't one) */
	FString GetClientId();

	/**
	  * Check for a client ID across several sources and assign the first non-empty value to the APIs:
	  * 1. Command line values from the keys in ClientIdCommandLineKeys.  By default these are:
	  *     RallyHereClientIdX
	  *     RallyHereClientId
	  *     RallyHereClientIdInternal
	  * 2. ini value from the "RallyHere" section, with the "ClientId" key.
	  * 3. ini value from the section for this class, with the "ClientId" key.
	  */
	void ResolveClientId();

	// If locked, disables the ResolveClientId function
	void LockClientId(bool bLocked = true)
	{
		bIsClientIdLocked = bLocked;
	}
    
	/** Set the client secret for the AuthContext */
	void SetClientSecret(FString InClientSecret, FString Source = TEXT("Direct"));

	/** Get the current client secret (will run ResolveClientSecret if there isn't one) */
	FString GetClientSecret();

	/**
	  * Check for a client secret across several sources and assign the first non-empty value to the APIs:
	  * 1. Command line values from the keys in ClientSecretCommandLineKeys.  By default these are:
	  *     RallyHereClientSecretX
	  *     RallyHereClientSecret
	  *     RallyHereClientSecretInternal
	  * 2. ini value from the "RallyHere" section, with the "ClientSecret" key.
	  * 3. ini value from the section for this class, with the "ClientSecret" key.
	  */
	void ResolveClientSecret();

	// If locked, disables the ResolveClientSecret function
	void LockClientSecret(bool bLocked = true)
	{
		bIsClientSecretLocked = bLocked;
	}

	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
    FORCEINLINE URH_LocalPlayerLoginSubsystem* GetLoginSubsystem() const { return LoginSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
    FORCEINLINE URH_AdSubsystem* GetAdSubsystem() const { return AdSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
    FORCEINLINE URH_FriendSubsystem* GetFriendSubsystem() const { return FriendSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_LocalPlayerSessionSubsystem* GetSessionSubsystem() const { return SessionSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_LocalPlayerPresenceSubsystem* GetPresenceSubsystem() const { return PresenceSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_PurgeSubsystem* GetPurgeSubsystem() const { return PurgeSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_EntitlementSubsystem* GetEntitlementSubsystem() const { return EntitlementSubsystem; }
	UFUNCTION(BlueprintGetter, Category = "RallyHere|LocalPlayerSubsystem")
	FORCEINLINE URH_NotificationSubsystem* GetNotificationSubsystem() const { return NotificationSubsystem; }
private:
	UPROPERTY()
	TArray<URH_LocalPlayerSubsystemPlugin*> SubsystemPlugins;

	template<typename UClassToUse, typename TEnableIf<TIsDerivedFrom<UClassToUse, URH_LocalPlayerSubsystemPlugin>::Value, bool>::Type = true>
	UClassToUse* AddSubsystemPlugin()
	{
		auto* Subsystem = NewObject<UClassToUse>(this);
		SubsystemPlugins.Add(Subsystem);
		return Subsystem;
	}

	void OnUserLoggedIn(bool bSuccess);
	void OnUserChanged();

	UPROPERTY(BlueprintGetter = GetLoginSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
    URH_LocalPlayerLoginSubsystem* LoginSubsystem;

	UPROPERTY(BlueprintGetter = GetAdSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
    URH_AdSubsystem* AdSubsystem;

	UPROPERTY(BlueprintGetter = GetFriendSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
    URH_FriendSubsystem* FriendSubsystem;

	UPROPERTY(BlueprintGetter = GetSessionSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_LocalPlayerSessionSubsystem* SessionSubsystem;
	
	UPROPERTY(BlueprintGetter = GetPresenceSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_LocalPlayerPresenceSubsystem* PresenceSubsystem;
	
	UPROPERTY(BlueprintGetter = GetPurgeSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_PurgeSubsystem* PurgeSubsystem;
	
	UPROPERTY(BlueprintGetter = GetEntitlementSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_EntitlementSubsystem* EntitlementSubsystem;	

	UPROPERTY(BlueprintGetter = GetNotificationSubsystem, Category = "RallyHere|LocalPlayerSubsystem")
	URH_NotificationSubsystem* NotificationSubsystem;

	FAuthContextPtr AuthContext;

    UPROPERTY(Transient)
    FString ResolvedClientId;

    // Is the client ID locked - aka will not change during ResolveClientId calls.
    UPROPERTY(Transient)
    bool bIsClientIdLocked;

    UPROPERTY(Transient)
    FString ResolvedClientSecret;

    // Is the client secret locked - aka will not change during ResolveClientSecret calls.
    UPROPERTY(Transient)
    bool bIsClientSecretLocked;
};
