// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "IpConnection.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"

#include "RH_LocalPlayer.generated.h"

/**
* The UObject classes in this file are optional, but the interfaces are required for certain parts of the integration to work.  If you are unable to use or extend from these classes, please implement the interfaces.
*/

/** @ingroup LocalPlayer
 * @brief LocalPlayer Interface class.
 */
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class URH_LocalPlayerInterface : public UInterface
{
	GENERATED_BODY()
};

/** @ingroup LocalPlayer
 * @brief LocalPlayer Interface.
 */
class RALLYHEREINTEGRATION_API IRH_LocalPlayerInterface
{
	GENERATED_BODY()

public:
	/** @brief gets the RallyHere local player subsystem for this local player object */
	virtual URH_LocalPlayerSubsystem* GetRH_LocalPlayerSubsystem() const PURE_VIRTUAL(IRH_LocalPlayerInterface::GetRH_LocalPlayerSubsystem(), return nullptr;);

	/** @brief gets the RallyHere local player UUID for this local player object */
	virtual FGuid GetRHPlayerUuid() const;

	/** @brief gets the RallyHere game instance subsystem for this local player object */
	virtual URH_GameInstanceSubsystem* GetRH_GameInstanceSubsystem() const;

	/** @brief Helper function for retrieving UUID for server authentication */
	virtual FString GetPlayerUuidForServerAuth() const;
	/** @brief Helper function for retrieving SecurityToken for server authentication */
	virtual FString GetSecurityTokenForServerAuth() const;
};

/** @ingroup LocalPlayer
 * @brief Local Player base class (implements the interface).
 */
UCLASS()
class RALLYHEREINTEGRATION_API URH_LocalPlayer : public ULocalPlayer, public IRH_LocalPlayerInterface
{
	GENERATED_UCLASS_BODY()

public:
	virtual URH_LocalPlayerSubsystem* GetRH_LocalPlayerSubsystem() const override { return GetSubsystem<URH_LocalPlayerSubsystem>(); }

	/**
	 * Retrieves any game-specific login options for this player
	 * if this function returns a non-empty string, the returned option or options be added
	 * passed in to the level loading and connection code.  Options are in URL format,
	 * key=value, with multiple options concatenated together with an & between each key/value pair
	 *
	 * @return URL Option or options for this game, Empty string otherwise
	 */
	virtual FString GetGameLoginOptions() const override;
};



/** @ingroup LocalPlayer
 * @brief IpConnection Interface class.
 */
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class URH_IpConnectionInterface : public UInterface
{
	GENERATED_BODY()
};

/** @ingroup LocalPlayer
 * @brief IpConnection Interface.
 */
class RALLYHEREINTEGRATION_API IRH_IpConnectionInterface
{
	GENERATED_BODY()

public:

	IRH_IpConnectionInterface()
	{
		RH_PlayerUuid.Invalidate();

		bRH_RemoteIsLoggedIn = false;
	}

	virtual FString GetImportRequestURL() const PURE_VIRTUAL(IRH_IpConnectionInterface::GetImportRequestURL, return FString(););

	FORCEINLINE int32 IsRemoteLoggedIn() const { return bRH_RemoteIsLoggedIn; }
	FORCEINLINE const FGuid& GetRHPlayerUuid() const { return RH_PlayerUuid; }

	virtual void ImportPlayerOptionsfromURL(bool& bFound, bool& bValid);
	virtual void ClearLocalIds()
	{
		bRH_RemoteIsLoggedIn = false;
		RH_PlayerUuid.Invalidate();
	}

protected:
	FGuid RH_PlayerUuid;

	bool bRH_RemoteIsLoggedIn;
};


/** @ingroup LocalPlayer
 * @brief IpConnection base class (implements the interface)
 */
UCLASS(transient, config = Engine)
class RALLYHEREINTEGRATION_API URH_IpConnection : public UIpConnection, public IRH_IpConnectionInterface
{
	GENERATED_UCLASS_BODY()

public:
	virtual FString GetImportRequestURL() const override { return RequestURL; }
};