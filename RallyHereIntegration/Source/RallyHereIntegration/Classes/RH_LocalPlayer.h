
#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "IpConnection.h"
#include "PacketHandler/Classes/HandlerComponentFactory.h"
#include "RH_LocalPlayerSubsystem.h"

#include "RH_LocalPlayer.generated.h"

UCLASS()
class RALLYHEREINTEGRATION_API URH_LocalPlayer : public ULocalPlayer
{
	GENERATED_UCLASS_BODY()
public:
	FORCEINLINE URH_LocalPlayerSubsystem* GetRH_LocalPlayerSubsystem() const { return GetSubsystem<URH_LocalPlayerSubsystem>(); }

	FORCEINLINE FGuid GetRHPlayerUuid() const { return GetRH_LocalPlayerSubsystem()->GetPlayerUuid(); }

	/**
	 * Retrieves any game-specific login options for this player
	 * if this function returns a non-empty string, the returned option or options be added
	 * passed in to the level loading and connection code.  Options are in URL format,
	 * key=value, with multiple options concatenated together with an & between each key/value pair
	 *
	 * @return URL Option or options for this game, Empty string otherwise
	 */
	virtual FString GetGameLoginOptions() const override;

	virtual FString GetPlayerUuidForServerAuth() const;
	virtual FString GetSecurityTokenForServerAuth() const;
};


UCLASS(transient, config = Engine)
class RALLYHEREINTEGRATION_API URH_IpConnection : public UIpConnection
{
	GENERATED_UCLASS_BODY()

public:
	FORCEINLINE int32 IsRemoteLoggedIn() const { return bRH_RemoteIsLoggedIn; }
	FORCEINLINE const FGuid& GetRHPlayerUuid() const { return RH_PlayerUuid; }

	virtual void ImportPlayerOptionsfromURL(bool& bFound, bool& bValid);
	virtual void ClearLocalIds()
	{
		bRH_RemoteIsLoggedIn = false;
		RH_PlayerUuid.Invalidate();
	}

	// #MRTODO - reimplement connection cryptograph

protected:
	FGuid RH_PlayerUuid;

	bool bRH_RemoteIsLoggedIn;
};