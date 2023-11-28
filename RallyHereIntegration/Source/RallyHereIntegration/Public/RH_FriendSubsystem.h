// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FriendsV2API.h"
#include "BlockedV2API.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_PlayerInfoSubsystem.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "OnlineSubsystemTypes.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"
#include "RH_FriendSubsystem.generated.h"

class URH_FriendSubsystem;
class URH_PlatformFriend;
class URH_RHFriendAndPlatformFriend;

/** @ingroup Friends
 * @brief Status of players' friend relationship
 */
UENUM(BlueprintType)
enum class FriendshipStatus : uint8
{
	/** Not friends */
	RH_None,
	/** Mutual friends */
	RH_Friends,
	/** Friend request has been sent to other player */
	RH_FriendRequestSent,
	/** Friend request has been sent by other player */
	RH_FriendRequestPending,
	/** Friend request declined by other player */
	RH_FriendRequestDeclinedByOther,
};

DECLARE_MULTICAST_DELEGATE_OneParam(FRH_FriendListUpdatedDelegate, const TArray<URH_RHFriendAndPlatformFriend*>&);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_FriendUpdatedDelegate, URH_RHFriendAndPlatformFriend*);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_FriendUpdateErrorDelegate, const FGuid&, const FName&);
DECLARE_MULTICAST_DELEGATE_OneParam(FRH_BlockedListUpdatedDelegate, const TArray<FRHAPI_BlockedPlayer>&);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdatedDelegate, const FGuid&, const bool);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdateErrorDelegate, const FGuid&, const FName&);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_FriendListUpdatedDynamicDelegate, const TArray<URH_RHFriendAndPlatformFriend*>&, FriendList);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_FriendUpdatedDynamicDelegate, URH_RHFriendAndPlatformFriend*, Friend);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_FriendUpdateErrorDynamicDelegate, const FGuid&, PlayerId, const FName&, Error);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_BlockedListUpdatedDynamicDelegate, const TArray<FRHAPI_BlockedPlayer>&, Blocked);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdatedDynamicDelegate, const FGuid&, PlayerId, const bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRH_BlockedPlayerUpdateErrorDynamicDelegate, const FGuid&, PlayerId, const FName&, Error);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GenericFriendDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_GenericFriendDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_GenericFriendBlock, FRH_GenericFriendDelegate, FRH_GenericFriendDynamicDelegate, bool)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_GenericFriendWithUuidDynamicDelegate, bool, bSuccess, const FGuid&, FriendsPlayerUuid);
DECLARE_DELEGATE_TwoParams(FRH_GenericFriendWithUuidDelegate, bool, const FGuid&);
DECLARE_RH_DELEGATE_BLOCK(FRH_GenericFriendWithUuidBlock, FRH_GenericFriendWithUuidDelegate, FRH_GenericFriendWithUuidDynamicDelegate, bool, const FGuid&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_AddFriendDynamicDelegate, bool, bSuccess, const FGuid&, FriendsPlayerUuid, FriendshipStatus, FriendStatus);
DECLARE_DELEGATE_ThreeParams(FRH_AddFriendDelegate, bool, const FGuid&, FriendshipStatus);
DECLARE_RH_DELEGATE_BLOCK(FRH_AddFriendBlock, FRH_AddFriendDelegate, FRH_AddFriendDynamicDelegate, bool, const FGuid&, FriendshipStatus);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_AddNotesDynamicDelegate, bool, bSuccess, const FGuid&, FriendsPlayerUuid, const FString&, NewNote);
DECLARE_DELEGATE_ThreeParams(FRH_AddNotesDelegate, bool, const FGuid&, const FString&);
DECLARE_RH_DELEGATE_BLOCK(FRH_AddNotesBlock, FRH_AddNotesDelegate, FRH_AddNotesDynamicDelegate, bool, const FGuid&, const FString&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_GetRHPlayerUuidDynamicDelegate, bool, bSuccess, const FGuid&, PlayerUuid);
DECLARE_DELEGATE_TwoParams(FRH_GetRHPlayerUuidDelegate, bool, const FGuid&);
DECLARE_RH_DELEGATE_BLOCK(FRH_GetRHPlayerUuidBlock, FRH_GetRHPlayerUuidDelegate, FRH_GetRHPlayerUuidDynamicDelegate, bool, const FGuid&)

/** @defgroup Friends RallyHere Friends
 *  @{
 */

/**
 * @brief Platform Friend class tracks all the information for a user you have a relationship with on your platform.
 */
UCLASS(BlueprintType, Config=RallyHereIntegration, DefaultConfig, Within=RH_FriendSubsystem)
class RALLYHEREINTEGRATION_API URH_PlatformFriend : public UObject
{
	GENERATED_BODY()
public:
	/**
	 * @brief Gets the display name of the user on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	const FString& GetClientDisplayName() const { return DisplayName; }

	/**
	 * @brief Gets the rich presence of the user on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    const FString& GetRichPresenceInfo() const { return RichPresenceInfo; }
	/**
	 * @brief Gets a struct of the players platform and unique platform player id.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	const FRH_PlayerPlatformId& GetPlayerPlatformId() const { return PlayerPlatformId; }
	/**
	* @brief Gets the type of platform.
	*/
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	ERHAPI_Platform GetPlatform() const { return PlayerPlatformId.PlatformType; }
	/**
	 * @brief Gets the type of platform.
	 */
	UE_DEPRECATED(5.0, "Use GetPlatform() instead of GetPlatformBase()")
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	ERHAPI_Platform GetPlatformBase() const { return GetPlatform(); }
	/**
	 * @brief Gets the users unique platform player id.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    const FString& GetPlatformUserId() const { return PlayerPlatformId.UserId; }
	/**
	 * @brief Gets if you are able to join the user in their gaming session.
	 */
    UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsJoinable() const { return Joinable; }
	/**
	 * @brief Gets if the user is playing any game.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsPlayingGame() const { return PlayingGame; }
	/**
	 * @brief Gets if the user is playing this game.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsPlayingThisGame() const { return PlayingThisGame; }
	/**
	 * @brief Gets if the user is online on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsOnline() const { return Online; }
	/**
	 * @brief Gets if the user has set Do Non Disturb mode on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsDND() const { return DoNotDisturb; }
	/**
	 * @brief Gets if the user is your friend on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsFriend() const { return Friend; }
	/**
	 * @brief Gets if the user is blocked by you on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	bool IsBlocked() const { return Blocked; }
	/**
	 * @brief Sets this player as blocked by you on their platform.
	 */
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
	void SetBlocked(bool bNewBlocked = true) { Blocked = bNewBlocked; }
	/**
	 * @brief Gets if the user has sent a friend request to you on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool HasPendingFriendRequestToYou() const { return PendingFriendRequestToYou; }
	/**
	 * @brief Gets if the user has been sent a friend request by you on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool HasPendingFriendRequestFromYou() const { return PendingFriendRequestFromYou; }
	/**
	 * @brief Gets if the user is a friend or has been sent or has sent a friend request on their platform with you.
	 */
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool HasAnyRelationship() const { return IsFriend() || IsBlocked() || HasPendingFriendRequestFromYou() || HasPendingFriendRequestToYou(); }
	/**
	 * @brief Clears all the info.
	 */
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void Clear()
	{
		PlayerPlatformId = FRH_PlayerPlatformId();
		ClearFriendAndStatusInfo();
	}
	/**
	 * @brief Clears all the status information but not the users id.
	 */
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void ClearFriendAndStatusInfo()
    {
		DisplayName.Empty();
    	RichPresenceInfo.Empty();
    	Joinable = false;
    	PlayingGame = false;
    	PlayingThisGame = false;
    	Online = false;
    	DoNotDisturb = false;
    	Friend = false;
		Blocked = false;
    	PendingFriendRequestToYou = false;
    	PendingFriendRequestFromYou = false;
    }
	/**
	 * @brief Initializes a Platform Friend with another Platform Friend.
	 */
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
	void Init(URH_PlatformFriend* other)
	{
		PlayerPlatformId = other->PlayerPlatformId;
		DisplayName = other->DisplayName;
		RichPresenceInfo = other->RichPresenceInfo;
		Joinable = other->Joinable;
		PlayingGame = other->PlayingGame;
		PlayingThisGame = other->PlayingThisGame;
		Online = other->Online;
		DoNotDisturb = other->DoNotDisturb;
		Friend = other->Friend;
		Blocked = other->Blocked;
		PendingFriendRequestToYou = other->PendingFriendRequestToYou;
		PendingFriendRequestFromYou = other->PendingFriendRequestFromYou;
	}
	/**
	 * @brief Initializes a Platform Friend from online information from their platform.
	 */
	void Init(const FOnlineFriend& OnlineFriend, const FOnlineUserPresence& Presence, IOnlineSubsystem* OSS, bool bBlocked)
	{
		TOptional<ERHAPI_Platform> PlatformType = RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NULL_SUBSYSTEM);
		PlayerPlatformId.PlatformType = PlatformType.IsSet() ? PlatformType.GetValue() : ERHAPI_Platform::Anon;
		PlayerPlatformId.UserId = OnlineFriend.GetUserId()->ToString();
		DisplayName = OnlineFriend.GetDisplayName();
		PendingFriendRequestFromYou = OnlineFriend.GetInviteStatus() == EInviteStatus::PendingOutbound;
		PendingFriendRequestToYou = OnlineFriend.GetInviteStatus() == EInviteStatus::PendingInbound;
		Blocked = OnlineFriend.GetInviteStatus() == EInviteStatus::Blocked || bBlocked;
		Friend = OnlineFriend.GetInviteStatus() == EInviteStatus::Accepted;

		UpdatePresence(Presence);
	}
	/**
	 * @brief Initializes a Blocked Platform Player with minimal information
	 */
	void InitBlocked(FRH_PlayerPlatformId InPlatformId)
	{
		ClearFriendAndStatusInfo();
		PlayerPlatformId = InPlatformId;
		Blocked = true;
	}

	void UpdatePresence(const FOnlineUserPresence& Presence)
	{
		Joinable = Presence.bIsJoinable;
		PlayingGame = Presence.bIsPlaying;
		PlayingThisGame = Presence.bIsPlayingThisGame;
		Online = Presence.bIsOnline;
		RichPresenceInfo = Presence.Status.StatusStr;
	}

protected:
	/** @brief The players Platform Id. */
	UPROPERTY()
	FRH_PlayerPlatformId PlayerPlatformId;
	/** @brief The players Display Name for the platform. */
	UPROPERTY()
    FString DisplayName;
	/** @brief The players Rich Presence on the platform. */
	UPROPERTY()
    FString RichPresenceInfo;
	/** @brief If the player is currently joinable. */
	UPROPERTY()
    bool Joinable;
	/** @brief If the player is currently playering a game. */
	UPROPERTY()
    bool PlayingGame;
	/** @brief If the player is currently playing this game. */
	UPROPERTY()
    bool PlayingThisGame;
	/** @brief If the player is online. */
	UPROPERTY()
    bool Online;
	/** @brief If the player has do not disturb on. */
	UPROPERTY()
    bool DoNotDisturb;
	/** @brief If the player is a platform friend. */
	UPROPERTY()
    bool Friend;
	/** @brief If the player is blocked by you by platform. */
	UPROPERTY()
	bool Blocked;
	/** @brief If the player is requesting your friendship via platform. */
	UPROPERTY()
    bool PendingFriendRequestToYou;
	/** @brief If the player has a pendinf friendship request via platform. */
	UPROPERTY()
    bool PendingFriendRequestFromYou;
};

/**
 * @brief RH Friend and Platform Friend class that wraps a Rally Here Friend and Platform Friend together
 */
UCLASS(BlueprintType, Config=RallyHereIntegration, DefaultConfig, Within=RH_FriendSubsystem)
class RALLYHEREINTEGRATION_API URH_RHFriendAndPlatformFriend : public UObject
{
	GENERATED_BODY()
	friend class URH_FriendSubsystem;

public:
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	class URH_FriendSubsystem* GetFriendSubsystem() const;

	/**
	* @brief Blueprint delegate to listen for presence updates.
	*/
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "RH And Platform Friend", meta = (DisplayName = "On Presence Updated"))
	FRH_OnPresenceUpdatedMulticastDynamicDelegate BLUEPRINT_OnPresenceUpdatedDelegate;
	/**
	* @brief Native delegate to listen for presence updates.
	*/
	FRH_OnPresenceUpdatedMulticastDelegate OnPresenceUpdatedDelegate;
	/**
	 * @brief Gets if the player is a friend through Rally Here systems or their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool AreFriends() const
	{
		return AreRHFriends() || ArePlatformFriends();
	}
	/**
	 * @brief Gets if the player is a friend through Rally Here.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "Are RH Friends"))
	bool AreRHFriends() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_Friends;
	}
	/**
	 * @brief Gets if the player is a friend through their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool ArePlatformFriends() const
	{
		return !!PlatformFriends.FindByPredicate([](URH_PlatformFriend* PlatformFriend)
		{
			return PlatformFriend->IsFriend();
		});
	}
	/**
	 * @brief Gets if you have sent a friend request to the player through Rally Here or their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool FriendRequestSent() const
	{
		return RHFriendRequestSent() || !!PlatformFriends.FindByPredicate([](URH_PlatformFriend* PlatformFriend)
		{
			return PlatformFriend->HasPendingFriendRequestFromYou();
		});
	}
	/**
	 * @brief Gets if you have sent a friend request to the player through Rally Here.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "RH Friend Request Sent"))
	bool RHFriendRequestSent() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestSent;
	}
	/**
	 * @brief Gets if the player has sent you a friend through Rally Here or their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool PendingFriendRequest() const
	{
		return RhPendingFriendRequest() || !!PlatformFriends.FindByPredicate([](URH_PlatformFriend* pf)
		{
			return pf->HasPendingFriendRequestToYou();
		});
	}
	/**
	 * @brief Gets if the player has sent you a friend through Rally Here.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "RH Pending Friend Request"))
	bool RhPendingFriendRequest() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestPending;
	}
	/**
	 * @brief Gets if the player has any sort of relationship with you through Rally Here.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "Have RH Relationship"))
	bool HaveRhRelationship() const
	{
		return RHFriendshipStatus != FriendshipStatus::RH_None;
	}
	/**
	 * @brief Gets if the player has any sort of relationship with you through Rally Here or their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool HaveAnyRelationship() const
	{
		return HaveRhRelationship() || HavePlatformRelationship();
	}
	/**
	 * @brief Gets if the player has any sort of relationship with you through their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool HavePlatformRelationship() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->HasAnyRelationship();
		});
	}
	/**
	 * @brief Gets if the player is online on their platform.
	 */
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool IsOnline() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->IsOnline();
		});
	}
	/**
	* @brief Gets if the player is playing this game.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool IsPlayingThisGame() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->IsPlayingThisGame();
		});
	}
	/**
	* @brief Gets if the player is set to Do Not Distrub on their platform.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool IsDnD() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->IsDND();
		});
	}
	/**
	* @brief Gets if the player has declined your Rally Here friend request.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool OtherDeclinedFriendship() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestDeclinedByOther;
	}
	/**
	* @brief Gets if the player has an outstanding Rally Here friend request by you.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool AwaitingFriendshipResponse() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestSent;
	}
	/**
	* @brief Gets if the player has sent you a Rally Here friend request.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool OtherIsAwaitingFriendshipResponse() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestPending;
	}
	/**
	* @brief Gets the players unique player id.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "Get RH Player UUID"))
	const FGuid& GetRHPlayerUuid() const
	{
		return PlayerAndPlatformInfo.PlayerUuid;
	}
	/**
	* @brief Gets the current Rally Here relationship status with the player.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FriendshipStatus GetStatus() const
	{
		return RHFriendshipStatus;
	}
	/**
	* @brief Gets the previous Rally Here relationship status with the player prior to the most recent update.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FriendshipStatus GetPreviousStatus() const
	{
		return PreviousRHFriendshipStatus;
	}
	/**
	 * @brief Updates the Previous friendship status to the current friendship status for this friend.
	 */
	UFUNCTION(BlueprintCallable, Category = "RH And Platform Friend")
	void AcknowledgeFriendUpdate()
	{
		PreviousRHFriendshipStatus = RHFriendshipStatus;
	}
	/**
	* @brief Gets the last time the players friend data was modified.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	const FDateTime& GetLastModifiedOn() const
	{
		return LastModifiedOn;
	}
	/**
	* @brief Gets any notes the player has set for this player.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	const FString& GetNotes() const
	{
		return Notes;
	}
	/**
	* @brief Gets a platform friend at given index for iterating plaform Friends.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	URH_PlatformFriend* GetPlatformFriendAtIndex(int32 Index) const
	{
		if (Index < PlatformFriends.Num())
		{
			return PlatformFriends[Index];
		}
		return nullptr;
	}
	/**
	* @brief Gets a platform friend object for the specified platform if it exists.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	URH_PlatformFriend* GetPlatformFriend(ERHAPI_Platform Platform) const
	{
		const auto PlatformFriend = PlatformFriends.FindByPredicate([Platform](const URH_PlatformFriend* PlatformFriend)
			{
				return PlatformFriend->GetPlatform() == Platform;
			});
		return PlatformFriend ? *PlatformFriend : nullptr;
	}
	/**
	* @brief Gets a platform friend object for the specified platform if it exists.
	*/
	UE_DEPRECATED(5.0, "Please use GetPlatformFriend instead.")
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DeprecatedFunction, DeprecationMessage = "This function has been deprecated, use GetPlatformFriend"))
	URH_PlatformFriend* GetPlatformFriendBase(ERHAPI_Platform Platform) const
	{
		return GetPlatformFriend(Platform);
	}
	/**
	* @brief Gets all of the players platform friend entries.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	const TArray<URH_PlatformFriend*>& GetPlatformFriends() const { return PlatformFriends; }
	/**
	* @brief Gets the wrapper of the players RH and platform info.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	const FRH_PlayerAndPlatformInfo& GetPlayerAndPlatformInfo() const { return PlayerAndPlatformInfo; }
	/**
	* @brief Attempts to get the player info
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	class URH_PlayerInfo* GetPlayerInfo() const;
	/**
	* @brief Gets the last known cached display name for the player.
	* @param PreferredPlatformType The preferred platform to get the display name from.
	* @return The players last seen display name, will try to find a valid display name even if on a different platform than the preferred.
	*/
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FString GetLastKnownDisplayName(ERHAPI_Platform PreferredPlatformType = ERHAPI_Platform::Anon) const;
	/**
	* @brief Gets the last known display name for the player, will request from API as needed.
	* @param PlayerInfoSubsystem The subsystem to use for the lookup
	* @param StaleThreshold The time threshold to consider the cached display name stale.
	* @param bForceRefresh If true will force a request from the API.
	* @param PreferredPlatformType The preferred platform to get the display name from.
	* @param Delegate The delegate to call when the request is complete.
	*/
	void GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, ERHAPI_Platform PreferredPlatformType = ERHAPI_Platform::Anon, const FRH_PlayerInfoGetDisplayNameBlock& Delegate = FRH_PlayerInfoGetDisplayNameBlock()) const;
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Display Name Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate& Delegate) { GetLastKnownDisplayNameAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate); }
	/**
	* @brief Gets the RH Player UUID for the player, will request from API as needed. As a side effect, it will update the RH Player Uuid on PlayerAndPlatformInfo.
	* @param Delegate The delegate to call when the request is complete.
	*/
	void GetRHPlayerUuidAsync(const FRH_GetRHPlayerUuidBlock& Delegate = FRH_GetRHPlayerUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get RH Player UUID Name Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetRHPlayerUuidAsync(const FRH_GetRHPlayerUuidDynamicDelegate& Delegate) { GetRHPlayerUuidAsync(Delegate); }

protected:
	/** @brief Player Info and Platform Info combined. */
	FRH_PlayerAndPlatformInfo PlayerAndPlatformInfo;
	/** @brief Core friendship status. */
	FriendshipStatus RHFriendshipStatus;
	/** @brief cached previous core friendship status. */
	FriendshipStatus PreviousRHFriendshipStatus;
	/** @brief Last update of the current friend information. */
	FDateTime LastModifiedOn;
	/** @brief Notes set for the friend. */
	FString Notes;
	/** @brief Array of platforms the player has linked to their account. */
	UPROPERTY(Transient)
	TArray<URH_PlatformFriend*> PlatformFriends;
	/** @brief ETag of last friend update response */
	FString Etag;
	/**
	 * @brief Passes presence updates of the player on through internal delgates.
	 * @param PlayerPresence The players precence information.
	 */
	virtual void OnPresenceUpdated(URH_PlayerPresence* PlayerPresence)
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastPresenceUpdated, FColor::Purple);
		OnPresenceUpdatedDelegate.Broadcast(PlayerPresence);
		BLUEPRINT_OnPresenceUpdatedDelegate.Broadcast(PlayerPresence);
	}
	/**
	 * @brief Clears the cached friendship status for the player.
	 */
	virtual void ClearRHFriendStatus()
	{
		PreviousRHFriendshipStatus = RHFriendshipStatus;
		RHFriendshipStatus = FriendshipStatus::RH_None;
		Etag.Empty();
	}
	/**
	 * @brief Clears cached data for the platform friends for this player.
	 */
	virtual void ClearPlatformFriendStatus()
	{
		for (const auto PlatformFriend : PlatformFriends)
		{
			PlatformFriend->ClearFriendAndStatusInfo();
		}
	}
};

/**
 * @brief Friends Subsystem for handling a users relationships with other players.
 */
UCLASS(BlueprintType, Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_FriendSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()

public:
	/** @brief Type Define for Get Blocked List calls. */
	typedef RallyHereAPI::Traits_GetBlockedListForPlayerV2 GetBlockedListType;
	/** @brief Type Define for Get Blocked calls. */
	typedef RallyHereAPI::Traits_GetBlockedV2 GetBlockedType;
	/** @brief Type Define for Block Player calls. */
	typedef RallyHereAPI::Traits_BlockV2 BlockType;
	/** @brief Type Define for Unblock Player calls. */
	typedef RallyHereAPI::Traits_UnblockV2 UnblockType;
	/** @brief Type Define for Get Friends List calls. */
	typedef RallyHereAPI::Traits_GetFriendsListForPlayerV2 GetFriendsListType;
	/** @brief Type Define for Get Friend Relationship calls. */
	typedef RallyHereAPI::Traits_GetFriendRelationshipV2 GetFriendRelationshipType;
	/** @brief Type Define for Add Friend calls. */
	typedef RallyHereAPI::Traits_AddFriendV2 AddFriendType;
	/** @brief Type Define for Remove Friend calls. */
	typedef RallyHereAPI::Traits_DeleteFriendV2 DeleteFriendType;
	/** @brief Type Define for Add Friend Notes calls. */
	typedef RallyHereAPI::Traits_AddNotesV2 AddNotesType;
	/** @brief Type Define for Delete Friend Notes calls. */
	typedef RallyHereAPI::Traits_DeleteNotesV2 DeleteNotesType;

	/**
	 * @brief Delegate that fires whenever the friends list is updated.
	 */
	FRH_FriendListUpdatedDelegate FriendListUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever the friends list is updated.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Friends Subsystem", meta = (DisplayName = "Friend List Updated"))
	FRH_FriendListUpdatedDynamicDelegate BLUEPRINT_FriendListUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever a friend is updated.
	 */
	FRH_FriendUpdatedDelegate FriendUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever a friend is updated.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Friends Subsystem", meta = (DisplayName = "Friend Player Updated"))
	FRH_FriendUpdatedDynamicDelegate BLUEPRINT_FriendUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever a friend API call fails.
	 */
	FRH_FriendUpdateErrorDelegate FriendUpdateErrorDelegate;
	/**
	 * @brief Delegate that fires whenever a friend API call fails.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Friends Subsystem", meta = (DisplayName = "Friend Player Update Error"))
	FRH_FriendUpdateErrorDynamicDelegate BLUEPRINT_FriendUpdateErrorDelegate;
	/**
	 * @brief Delegate that fires whenever blocked players list is updated.
	 */
	FRH_BlockedListUpdatedDelegate BlockedListUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever blocked players list is updated.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Friends Subsystem", meta = (DisplayName = "Blocked List Updated"))
	FRH_BlockedListUpdatedDynamicDelegate BLUEPRINT_BlockedListUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever a blocked player is updated.
	 */
	FRH_BlockedPlayerUpdatedDelegate BlockedPlayerUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever a blocked player is updated.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Friends Subsystem", meta = (DisplayName = "Blocked Player Updated"))
	FRH_BlockedPlayerUpdatedDynamicDelegate BLUEPRINT_BlockedPlayerUpdatedDelegate;
	/**
	 * @brief Delegate that fires whenever blocked player API call fails.
	 */
	FRH_BlockedPlayerUpdateErrorDelegate BlockedPlayerUpdateErrorDelegate;
	/**
	 * @brief Delegate that fires whenever blocked player API call fails.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Friends Subsystem", meta = (DisplayName = "Blocked Player Update Error"))
	FRH_BlockedPlayerUpdateErrorDynamicDelegate BLUEPRINT_BlockedPlayerUpdateErrorDelegate;

	/**
	* @brief Initialize the subsystem.
	*/
    virtual void Initialize();
	/**
	* @brief Safely tears down the subsystem.
	*/
    virtual void Deinitialize();

	/** @brief Helper function to get the Player Info Subsystem that owns this. */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem", meta = (DisplayName = "Get Player Info Subsystem"))
	URH_PlayerInfoSubsystem* GetRH_PlayerInfoSubsystem() const;

#pragma region API Requests
	/**
	* @brief Calls the Friends API to get the players friends list.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool FetchFriendsList(const FRH_GenericFriendBlock& Delegate = FRH_GenericFriendBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Friends List", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchFriendsList(const FRH_GenericFriendDynamicDelegate& Delegate) { return FetchFriendsList(Delegate); }
	/**
	* @brief Calls the Friends API to get data for a specific friend.
	* @param [in] PlayerUUID The unique player id of the friend to get.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool FetchFriend(const FGuid& PlayerUUID, const FRH_GenericFriendWithUuidBlock& Delegate = FRH_GenericFriendWithUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Friend", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchFriend(UPARAM(ref) const FGuid& PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return FetchFriend(PlayerUUID, Delegate); }
	/**
	* @brief Calls the Friends API to create a new friendship relationship with another player.
	* @param [in] PlayerUUID The unique player id of the player to add.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool AddFriend(const FGuid& PlayerUuid, const FRH_AddFriendBlock& Delegate = FRH_AddFriendBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Add Friend", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_AddFriend(UPARAM(ref) const FGuid& PlayerUuid, const FRH_AddFriendDynamicDelegate& Delegate) { return AddFriend(PlayerUuid, Delegate); }
	/**
	* @brief Calls the Friends API to remove a friend relationship with another player.
	* @param [in] PlayerUUID The unique player id of the friend to remove.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool RemoveFriend(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate = FRH_GenericFriendWithUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Remove Friend", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_RemoveFriend(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return RemoveFriend(PlayerUuid, Delegate); }
	/**
	* @brief Calls the Friends API to set/modify personal notes for another player.
	* @param [in] PlayerUUID The unique player id of the friend to remove.
	* @param [in] Notes The notes to set for the player.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool AddNotes(const FGuid& PlayerUuid, const FString& Notes, const FRH_AddNotesBlock& Delegate = FRH_AddNotesBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Add Notes", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_AddNotes(UPARAM(ref) const FGuid& PlayerUuid, UPARAM(ref) const FString& Notes, const FRH_AddNotesDynamicDelegate& Delegate) { return AddNotes(PlayerUuid, Notes, Delegate); }
	/**
	* @brief Calls the Friends API to delete personal notes for another player.
	* @param [in] PlayerUUID The unique player id of the friend to whose notes will be modified.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool DeleteNotes(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate = FRH_GenericFriendWithUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Delete Notes", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_DeleteNotes(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return DeleteNotes(PlayerUuid, Delegate); }
	/**
	* @brief Calls the Friends API to get the list of players you have blocked.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool FetchBlockedList(const FRH_GenericFriendBlock& Delegate = FRH_GenericFriendBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Blocked List", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchBlockedList(const FRH_GenericFriendDynamicDelegate& Delegate) { return FetchBlockedList(Delegate); }
	/**
	* @brief Calls the Friends API to get data for a specific blocked player.
	* @param [in] PlayerUUID The unique player id of the blocked player to get.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool FetchBlockedPlayer(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate = FRH_GenericFriendWithUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Blocked Player", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchBlockedPlayer(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return FetchBlockedPlayer(PlayerUuid, Delegate); };
	/**
	* @brief Calls the Friends API to create a new block relationship with another player.
	* @param [in] PlayerUUID The unique player id of the player to block.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool BlockPlayer(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate = FRH_GenericFriendWithUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Block Player", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_BlockPlayer(UPARAM(ref) const FGuid& PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return BlockPlayer(PlayerUUID, Delegate); };
	/**
	* @brief Calls the Friends API to remove a block relationship with another player.
	* @param [in] PlayerUUID The unique player id of the blocked player to unblock.
	* @param [in] Delegate Callback delegate for when the call completes.
	* @return If true, the call was executed.
	*/
	bool UnblockPlayer(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate = FRH_GenericFriendWithUuidBlock());
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Unblock Player", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_UnblockPlayer(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return UnblockPlayer(PlayerUuid, Delegate); }

#pragma endregion // API Requests

	/**
	 * @brief Updates the platform OSS with a player you have recently played with.
	 *
	 * @param LocalPlayerSubsystem The local player subsystem to obtain the unique net id from.
	 * @param RecentPlayerId The recently played with players unique net id.
	 */
	static void UpdateRecentPlayerForOSS(const URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const TSharedPtr<const FUniqueNetId>& RecentPlayerId);

	/**
	 * @brief Updates the platform OSS with a player you have recently played with.
	 *
	 * @param LocalPlayerSubsystem The local player subsystem to obtain the unique net id from.
	 * @param PlayerUuid The recently player with players Unique Player Id.
	 */
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem")
	void UpdateRecentPlayerForOSS(const URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FGuid& PlayerUuid);

	/**
	 * @brief Triggers the OSS call to get platform friends.
	 */
	void OSSReadFriendsList(const FString& ListName = "Default");

	/**
	 * @brief Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.
	 * @param [in] PlayerInfo The player info to get the friend wrapper for.
	 * @return The friend wrapper for the specified player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetOrCreateFriend(URH_PlayerInfo* PlayerInfo);
	/**
	 * @brief Gets the cached friend wrapper for the specified player.
	 * @param [in] PlayerUuid The unique player Id for the requested friend wrapper.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByUuid(const FGuid& PlayerUuid) const;
	/**
	 * @brief Gets the cached friend wrapper for the specified player.
	 * @param [in] PlayerInfo The player info to get the friend wrapper for.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByPlayerInfo(URH_PlayerInfo* PlayerInfo) const;
	/**
	 * @brief Gets the cached friend wrapper for the specified player.
	 * @param [in] PlatformPlayerId The player platform id to get the friend wrapper for.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByPlatformId(const FRH_PlayerPlatformId& PlatformPlayerId) const;
	/**
	 * @brief Gets the cached friend wrapper for the specified player.
	 * @param [in] PlayerUuid The unique player Id for the requested friend wrapper.
	 * @param [in] PlatformPlayerId The player platform id to get the friend wrapper for.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByUuidOrPlatformId(const FGuid& PlayerUuid, const FRH_PlayerPlatformId& PlatformPlayerId) const;

	/**
	 * @brief Gets if the specified player is blocked via platform or Rally Here.
	 * @param [in] PlayerUuid The unique player id of the player to check.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	bool IsPlayerBlocked(const FGuid& PlayerUuid) const
	{
		return IsPlayerRhBlocked(PlayerUuid) || IsPlayerPlatformBlocked(PlayerUuid);
	}
	/**
	 * @brief Gets if the specified player is blocked via platform.
	 * @param [in] PlayerUuid The unique player id of the player to check.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	bool IsPlayerPlatformBlocked(const FGuid& PlayerUuid) const
	{
		if (const auto* Friend = GetFriendByUuid(PlayerUuid))
		{
			return !!Friend->PlatformFriends.FindByPredicate([](URH_PlatformFriend* PlatformFriend)
				{
					return PlatformFriend->IsBlocked();
				});
		}
		return false;
	}
	/**
	 * @brief Gets if the specified player is blocked via Rally Here.
	 * @param [in] PlayerUuid The unique player id of the player to check.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	bool IsPlayerRhBlocked(const FGuid& PlayerUuid) const
	{
		return BlockedPlayersUUIDs.Contains(PlayerUuid);
	}

	/**
	 * @brief Starts the polling for Rally Here friends.
	 */
	void StartFriendsRefreshTimer();
	/**
	 * @brief Stops the polling for Rally Here friends.
	 */
	void StopFriendsRefreshTimer();
	/**
	 * @brief Starts the polling for blocked players.
	 */
	void StartBlockedRefreshTimer();
	/**
	 * @brief Stops the polling for blocked players.
	 */
	void StopBlockedRefreshTimer();
	/**
	 * @brief Clears the cache of blocked players.
	 */
	void ClearBlockedCache();
	/**
	 * @brief Clears the cache of Rally Here friends.
	 */
	void ClearRHFriendCache();

	/**
	 * @brief Gets an array of your friends.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	const TArray<URH_RHFriendAndPlatformFriend*>& GetFriends() const
	{
		return Friends;
	}

	/**
	 * @brief Gets an array of blocked player ids.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	const TArray<FGuid>& GetBlocked() const
	{
		return BlockedPlayersUUIDs;
	}

	/**
	 * @brief Gets if the subsystem has cached friend data.
	 */
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	bool HasFriendsCached() const
	{
		return FriendsCached;
	}

protected:
	/** @brief Cached array of all friends. */
	UPROPERTY(Transient)
	TArray<URH_RHFriendAndPlatformFriend*> Friends;
	/** @brief Array of blocked player ids. */
	TArray<FGuid> BlockedPlayersUUIDs;
	/** @brief Array of blocked platform player ids. */
	TArray<FString> PlatformBlockedPlayers;
	/** @brief ETag of last Get Friends List call response. */
	FString FriendsETag;
	/** @brief ETag of last Get Blocked Players call response. */
	FString BlockedPlayersETag;
	/** @brief Tracks if friends are currently cached. */
	bool FriendsCached;
	/** @brief Poller for getting friends list. */
	FRH_AutoPollerPtr FriendsListPoller;
	/** @brief Poller for getting blocked players list. */
	FRH_AutoPollerPtr BlockedListPoller;
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
    virtual void OnUserChanged();
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
	/**
	 * @brief Fills our a Get Friend request.
	 * @param [out] Request The request with the default params filled out.
	 * @return True, if the request was filled out successfully.
	 */
	virtual bool SetDefaultParamsForGetFriendRequest(GetFriendRelationshipType::Request& Request) const;
	/**
	 * @brief Called from ReloadConfig after the object has reloaded its configuration data.
	 * @param [in] PropertyThatWasLoaded The property loaded.
	 */
	virtual void PostReloadConfig(class FProperty* PropertyThatWasLoaded) override;
	/**
	 * @brief Helper function to push out presence updates on delegates on this system.
	 * @param [in] PlayerPresence The Player Presence updated.
	 */
	virtual void OnPresenceUpdated(URH_PlayerPresence* PlayerPresence)
	{
		if (URH_RHFriendAndPlatformFriend* Friend = GetFriendByPlayerInfo(PlayerPresence->GetPlayerInfo()))
		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
			FriendUpdatedDelegate.Broadcast(Friend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(Friend);
		}
	}

#pragma region API Request Handlers
	/**
	* @brief Handles the response to a Fetch Friend List call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnFetchFriendsListResponse(const GetFriendsListType::Response& Resp, const FRH_GenericFriendBlock Delegate);
	/**
	* @brief Handles the response to a Fetch Friend call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnFetchFriendResponse(const GetFriendRelationshipType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate);
	/**
	* @brief Handles the response to a Add Friend call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnAddFriendResponse(const AddFriendType::Response& Resp, const FRH_AddFriendBlock Delegate, const AddFriendType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Remove Friend call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] Request The Request used to make the remove friend call.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnRemoveFriendResponse(const DeleteFriendType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteFriendType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Add Friend Notes call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnAddNotesResponse(const AddNotesType::Response& Resp, const FRH_AddNotesBlock Delegate, const AddNotesType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Delete Friend Notes call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnDeleteNotesResponse(const DeleteNotesType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteNotesType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Get Blocked List call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnFetchBlockedListResponse(const GetBlockedListType::Response& Resp, const FRH_GenericFriendBlock Delegate);
	/**
	* @brief Handles the response to a Get Blocked Player call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] PlayerUuid The UUID of the player that is being requested.
	*/
	virtual void OnFetchBlockedPlayerResponse(const GetBlockedType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid);
	/**
	* @brief Handles the response to a Block Player call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] PlayerUuid The UUID of the player that is being blocked.
	*/
	virtual void OnBlockPlayerResponse(const BlockType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid);
	/**
	* @brief Handles the response to a Unblock Player call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] PlayerUuid The UUID of the player that is being unblocked.
	*/
	virtual void OnUnblockPlayerResponse(const UnblockType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid);
	/**
	* @brief Handles the response to a Fetch Friend For Add call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] Request The Request used to make the fetch friend call.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnFetchFriendForAdd(const GetFriendRelationshipType::Response& Resp,
									 const FRH_AddFriendBlock Delegate,
									 AddFriendType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Fetch Friend For Add Note call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] Request The Request used to make the fetch friend call.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnFetchFriendForAddNote(const GetFriendRelationshipType::Response& Resp,
										 const FRH_AddNotesBlock Delegate,
										 AddNotesType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Fetch Friend For Delete Note call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] Request The Request used to make the fetch friend call.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnFetchFriendForDeleteNote(const GetFriendRelationshipType::Response& Resp,
											const FRH_GenericFriendWithUuidBlock Delegate,
											DeleteNotesType::Request Request, int32 RetryEtagFailureCount);
	/**
	* @brief Handles the response to a Fetch Friend For Remove call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] Request The Request used to make the fetch friend call.
	* @param [in] RetryEtagFailureCount Number of times this has failed, to determine course of action.
	*/
	virtual void OnFetchFriendForRemove(const GetFriendRelationshipType::Response& Resp,
										const FRH_GenericFriendWithUuidBlock Delegate,
										DeleteFriendType::Request Request, int32 RetryEtagFailureCount);
#pragma endregion // API Request Handlers
	/**
	 * @brief Updates the cached Platforms friends with the new set of friends data.
	 * @param [in] NewFriends New platform friend data.
	 */
	void UpdatePlatformFriends(const TArray<URH_PlatformFriend*>& NewFriends);
	/**
	 * @brief Removes all friends from the cached data that have no relationship to the player the subsystem is for.
	 * @param [out] OutArray Array of players that were removed.
	 */
	void RemoveAllFriendsWithNoRelationships(TArray<URH_RHFriendAndPlatformFriend*>& OutArray);
	/**
	 * @brief Executes a poll of the players friends list.
	 * @param Delegate Callback delegate for the poll.
	 */
	void PollFriendsList(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Executes a poll of the players blocked list.
	 * @param Delegate Callback delegate for the poll.
	 */
	void PollBlockedPlayers(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Gets the error code response name from a http request.
	 * @param [in] Response The Http response to get the error from.
	 * @return The error code.
	 */
	FName ExtractErrorCodeFromResponse(const FHttpResponsePtr& Response) const;

	// OSS friends update
	/**
	 * @brief Handles the response from the online subsystem call to get friends.
	 * @param [in] LocalUserNum Controller id of the local player.
	 * @param [in] bWasSuccessful If the get friends call was successful.
	 * @param [in] ListName The name of the list that was requested.
	 * @param [in] ErrorStr Error string if the call failed.
	 */
	virtual void OnReadOSSFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr);
	/**
	 * @brief Handles the response from the online subsystem call to get list of blocked players.
	 * @param [in] LocalUserNum Controller id of the local player.
	 * @param [in] ListName The name of the list that was returned.
	 */
	virtual void OnOSSBlockListChanged(int32 LocalUserNum, const FString& ListName);
	/**
	 * @brief Updates the system with the friends from the online subsystem.
	 * @param [in] ListName The list name where the friends are stored.
	 */
	virtual void UpdateWithOSSFriends(const FString& ListName = "Default");
	/**
	 * @brief Handles the response from the online subsystem call to get presence.
	 * @param [in] UserId Net Id of the player the presence is for.
	 * @param [in] NewPresence The presence information from the online subsystem.
	 */
	virtual void OnOSSPresenceReceived(const FUniqueNetId& UserId, const TSharedRef<FOnlineUserPresence>& NewPresence);
	/**
	 * @brief Delegate to be fired when online subsystem presence is received.
	 */
	FDelegateHandle OnOSSPresenceReceivedHandle;
};

/** @} */