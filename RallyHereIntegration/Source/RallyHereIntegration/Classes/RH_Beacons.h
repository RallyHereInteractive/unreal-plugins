
#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "OnlineBeaconHostObject.h"
#include "OnlineBeaconClient.h"
#include "RH_Common.h"
#include "RH_Beacons.generated.h"


/** @defgroup Game Instance RallyHere Beacon
 *  @{
 */


// handler class that provides authentication support for ARH_OnlineBeaconClient
UCLASS(transient, notplaceable, config = Engine)
class RALLYHEREINTEGRATION_API ARH_OnlineBeaconHost : public AOnlineBeaconHost
{
	GENERATED_UCLASS_BODY()

public:
	/**
	 * Initialize the host beacon on a specified port
	 *	Creates the net driver and begins listening for connections
	 *
	 * @return true if host was setup correctly, false otherwise
	 */
	virtual bool InitHost();

#if RH_FROM_ENGINE_VERSION(5,2)
	/**
	 * Start verifying an authentication token for a connection.
	 * OnAuthenticationVerificationComplete must be called to complete authentication verification.
	 *
	 * @param NetConnection network connection associated with the authentication challenge.
	 * @param PlayerId net id of player to authenticate.
	 * @param AuthenticationToken token to use for verification.
	 */
	virtual bool StartVerifyAuthentication(const FUniqueNetId& PlayerId, const FString& AuthenticationToken, const FOnAuthenticationVerificationCompleteDelegate& OnComplete) override;
#else
	/**
	 * Start verifying an authentication token for a connection.
	 * OnAuthenticationVerificationComplete must be called to complete authentication verification.
	 *
	 * @param PlayerId net id of player to authenticate.
	 * @param AuthenticationToken token to use for verification.
	 */
	virtual bool StartVerifyAuthentication(const FUniqueNetId& PlayerId, const FString& AuthenticationToken) override;
#endif
	/**
	 * Start verifying an authentication token for a connection (shared implementation for multiple engine versions)
	 * @param [in] PlayerId net id of player to authenticate.
	 * @param [in] AuthenticationToken token to use for verification.
	 * @param [out] AuthenticationToken token to use for verification.
	 * @return whether authentication was begun
	 */
	virtual bool CommonVerifyAuthentication(const FUniqueNetId& PlayerId, const FString& AuthenticationToken, FOnlineError& Error);

	/** Called when this actor is explicitly being destroyed during gameplay or in the editor, not called during level streaming or gameplay ending */
	virtual void Destroyed();

	/** Flag to determine whether to require RH authentication */
	UPROPERTY(Config)
	bool bRequireBeaconAuthentication;

	/** Flag to determine whether to automatically initialize and register a RH_TestBeaconHostObject */
	UPROPERTY(Config)
	bool bAutoCreateTestHost;
};

// small handler class for beacons that injects our login authentication options
UCLASS(transient, notplaceable, config = Engine)
class RALLYHEREINTEGRATION_API ARH_OnlineBeaconClient : public AOnlineBeaconClient
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin FNetworkNotify Interface
	virtual void NotifyControlMessage(UNetConnection* Connection, uint8 MessageType, FInBunch& Bunch) override;
	//~ End FNetworkNotify Interface

#if RH_FROM_ENGINE_VERSION(5,3)
	/** Get stored login URL options */
	virtual FString GetLoginOptions(const FUniqueNetIdRepl& PlayerId) override { return Super::GetLoginOptions(PlayerId) + LoginOptions; }
#else
	/** Get stored login URL options */
	const FString& GetLoginOptions() const { return LoginOptions; }
#endif

	/** Set stored login URL options, passed up during connect */
	void SetLoginOptions(const FString& InLoginOptions) { LoginOptions = InLoginOptions; }

protected:
	FString LoginOptions;
};

// Test beacon client and host to do simple ping determination
UCLASS(transient, notplaceable, config = Engine)
class RALLYHEREINTEGRATION_API ARH_TestBeaconClient : public ARH_OnlineBeaconClient
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin AOnlineBeaconClient Interface
	virtual void OnFailure() override;
	//~ End AOnlineBeaconClient Interface

	/** Send a ping RPC to the host, using the current time */
	UFUNCTION()
	void TestPing() { ServerPing(FDateTime::Now()); }

	/** Send a pong RPC to the client */
	UFUNCTION(client, reliable)
	virtual void ClientPong(FDateTime ClientTime);

	/** Send a ping RPC to the host */
	UFUNCTION(server, reliable, WithValidation)
	virtual void ServerPing(FDateTime ClientTime);
};

UCLASS(transient, notplaceable, config = Engine)
class RALLYHEREINTEGRATION_API ARH_TestBeaconHostObject : public AOnlineBeaconHostObject
{
	GENERATED_UCLASS_BODY()
};

/** @} */