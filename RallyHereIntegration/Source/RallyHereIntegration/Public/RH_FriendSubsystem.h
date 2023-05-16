#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FriendsV2API.h"
#include "BlockedV2API.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "RH_PlayerInfoSubsystem.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"
#include "RH_FriendSubsystem.generated.h"

UENUM(BlueprintType)
enum class FriendshipStatus : uint8
{
	RH_None,
	RH_Friends,
	RH_FriendRequestSent,
	RH_FriendRequestPending,
	RH_FriendRequestDeclinedByOther,
};

UCLASS(BlueprintType, Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlatformFriend : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	FString GetClientGamerTag() const { return GamerTag; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    FString GetRichPresenceInfo() const { return RichPresenceInfo; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
	const FRH_PlayerPlatformId& GetPlayerPlatformId() const { return PlayerPlatformId; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    ERHAPI_PlatformTypes GetPlatform() const { return PlayerPlatformId.PlatformType; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    const FString& GetPlatformUserId() const { return PlayerPlatformId.UserId; }
    UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsJoinable() const { return Joinable; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsPlayingGame() const { return PlayingGame; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsPlayingThisGame() const { return PlayingThisGame; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsOnline() const { return Online; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsDND() const { return DoNotDisturb; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool IsFriend() const { return Friend; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool HasPendingFriendRequestToYou() const { return PendingFriendRequestToYou; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool HasPendingFriendRequestFromYou() const { return PendingFriendRequestFromYou; }
	UFUNCTION(BlueprintPure, Category = "Platform Friend")
    bool HasAnyRelationship() const { return IsFriend() || HasPendingFriendRequestFromYou() || HasPendingFriendRequestToYou(); }

	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
	void SetPlayerPlatformId(const FRH_PlayerPlatformId& Value) { PlayerPlatformId = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetPlatformUserId(FString Value) { PlayerPlatformId.UserId = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetPlatform(ERHAPI_PlatformTypes Value) { PlayerPlatformId.PlatformType = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetGamerTag(FString Value) { GamerTag = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetRichPresenceInfo(FString Value) { RichPresenceInfo = Value;}
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetIsJoinable(bool Value) { Joinable = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetIsPlayingGame(bool Value) { PlayingGame = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetIsPlayingThisGame(bool Value) { PlayingThisGame = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetIsOnline(bool Value) { Online = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetDoNotDisturb(bool Value) { DoNotDisturb = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetIsFriend(bool Value) { Friend = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetHasPendingFriendRequestToYou(bool Value) { PendingFriendRequestToYou = Value; }
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void SetHasPendingFriendRequestFromYou(bool Value) { PendingFriendRequestFromYou = Value; }

	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void Clear()
	{
		PlayerPlatformId = FRH_PlayerPlatformId();
		ClearFriendAndStatusInfo();
	}
	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
    void ClearFriendAndStatusInfo()
    {
		GamerTag.Empty();
    	RichPresenceInfo.Empty();
    	Joinable = false;
    	PlayingGame = false;
    	PlayingThisGame = false;
    	Online = false;
    	DoNotDisturb = false;
    	Friend = false;
    	PendingFriendRequestToYou = false;
    	PendingFriendRequestFromYou = false;
    }

	UFUNCTION(BlueprintCallable, Category = "Platform Friend")
	void Init(URH_PlatformFriend* other)
	{
		PlayerPlatformId = other->PlayerPlatformId;
		GamerTag = other->GamerTag;
		RichPresenceInfo = other->RichPresenceInfo;
		Joinable = other->Joinable;
		PlayingGame = other->PlayingGame;
		PlayingThisGame = other->PlayingThisGame;
		Online = other->Online;
		DoNotDisturb = other->DoNotDisturb;
		Friend = other->Friend;
		PendingFriendRequestToYou = other->PendingFriendRequestToYou;
		PendingFriendRequestFromYou = other->PendingFriendRequestFromYou;
	}

	UPROPERTY()
	FRH_PlayerPlatformId PlayerPlatformId;
	UPROPERTY()
    FString GamerTag;
	UPROPERTY()
    FString RichPresenceInfo;
	UPROPERTY()
    bool Joinable;
	UPROPERTY()
    bool PlayingGame;
	UPROPERTY()
    bool PlayingThisGame;
	UPROPERTY()
    bool Online;
	UPROPERTY()
    bool DoNotDisturb;
	UPROPERTY()
    bool Friend;
	UPROPERTY()
    bool PendingFriendRequestToYou;
	UPROPERTY()
    bool PendingFriendRequestFromYou;
};

UCLASS(BlueprintType, Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_RHFriendAndPlatformFriend : public UObject
{
	GENERATED_BODY()
	friend class URH_FriendSubsystem;
public:
	UPROPERTY(BlueprintReadOnly, Category = "RH And Platform Friend")
	FRH_PlayerAndPlatformInfo PlayerAndPlatformInfo;
	UPROPERTY()
	FriendshipStatus RHFriendshipStatus;
	FriendshipStatus PreviousRHFriendshipStatus;
	UPROPERTY()
	FDateTime LastModifiedOn;
	UPROPERTY()
	FString Notes;
	UPROPERTY(BlueprintReadOnly, Category = "RH And Platform Friend")
	TArray<URH_PlatformFriend*> PlatformFriends;

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool AreFriends() const
	{
		return AreRHFriends() || ArePlatformFriends();
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "Are RH Friends"))
	bool AreRHFriends() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_Friends;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool ArePlatformFriends() const
	{
		return !!PlatformFriends.FindByPredicate([](URH_PlatformFriend* PlatformFriend)
		{
			return PlatformFriend->Friend;
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool FriendRequestSent() const
	{
		return RHFriendRequestSent() || !!PlatformFriends.FindByPredicate([](URH_PlatformFriend* PlatformFriend)
		{
			return PlatformFriend->PendingFriendRequestFromYou;
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "RH Friend Request Sent"))
	bool RHFriendRequestSent() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestSent;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool PendingFriendRequest() const
	{
		return RhPendingFriendRequest() || !!PlatformFriends.FindByPredicate([](URH_PlatformFriend* pf)
		{
			return pf->PendingFriendRequestToYou;
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "RH Pending Friend Request"))
	bool RhPendingFriendRequest() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestPending;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "Have RH Relationship"))
	bool HaveRhRelationship() const
	{
		return RHFriendshipStatus != FriendshipStatus::RH_None;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool HaveAnyRelationship() const
	{
		return HaveRhRelationship() || HavePlatformRelationship();
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool HavePlatformRelationship() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->HasAnyRelationship();
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool IsOnline() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->IsOnline();
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool IsPlayingThisGame() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->IsPlayingThisGame();
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool IsDnD() const
	{
		return !!PlatformFriends.FindByPredicate([](const URH_PlatformFriend* Friends)
		{
			return Friends->IsDND();
		});
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool OtherDeclinedFriendship() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestDeclinedByOther;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool AwaitingFriendshipResponse() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestSent;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	bool OtherIsAwaitingFriendshipResponse() const
	{
		return RHFriendshipStatus == FriendshipStatus::RH_FriendRequestPending;
	}
	
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend", meta = (DisplayName = "Get RH Player UUID"))
	FGuid GetRHPlayerUuid() const
	{
		return PlayerAndPlatformInfo.PlayerUuid;
	}
	
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FriendshipStatus GetStatus() const
	{
		return RHFriendshipStatus;
	}
	
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FDateTime GetLastModifiedOn() const
	{
		return LastModifiedOn;
	}
	
	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FString GetNotes() const
	{
		return Notes;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	URH_PlatformFriend* GetPlatformFriendAtIndex(int32 Index) const
	{
		if (Index < PlatformFriends.Num())
		{
			return PlatformFriends[Index];
		}
		return nullptr;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	URH_PlatformFriend * GetPlatformFriend(ERHAPI_PlatformTypes Platform) const
	{
		const auto PlatformFriend = PlatformFriends.FindByPredicate([Platform](const URH_PlatformFriend* PlatformFriend)
		{
			return PlatformFriend->GetPlatform() == Platform;
		});
		return PlatformFriend ? *PlatformFriend : nullptr;
	}

	UFUNCTION(BlueprintPure, Category = "RH And Platform Friend")
	FString GetLastKnownGamerTag(ERHAPI_PlatformTypes PreferredPlatformType = ERHAPI_PlatformTypes::PT_UNKNOWN) const;
	
	UFUNCTION(BlueprintCallable, Category = "Player Info Subsystem | Player Info", meta = (DisplayName = "Get Gamer Tag Async", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLastKnownGamerTagAsync(const URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FTimespan& StaleThreshold, bool bForceRefresh, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagDynamicDelegate& Delegate) { GetLastKnownGamerTagAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate, LocalPlayerSubsystem); }
	void GetLastKnownGamerTagAsync(const FTimespan& StaleThreshold = FTimespan(), bool bForceRefresh = false, ERHAPI_PlatformTypes PreferredPlatformType = ERHAPI_PlatformTypes::PT_UNKNOWN, const FRH_PlayerInfoGetGamerTagBlock Delegate = FRH_PlayerInfoGetGamerTagBlock(), const URH_LocalPlayerSubsystem* LocalPlayerSubsystem = nullptr) const;
	
private:
	
	FString Etag;
	
	void ClearRHFriendStatus()
	{
		PreviousRHFriendshipStatus = RHFriendshipStatus;
		RHFriendshipStatus = FriendshipStatus::RH_None;
		Etag.Empty();
	}

	void ClearPlatformFriendStatus()
	{
		for (const auto PlatformFriend : PlatformFriends)
		{
			PlatformFriend->ClearFriendAndStatusInfo();
		}
	}
};

DECLARE_MULTICAST_DELEGATE_OneParam(FriendListUpdatedDelegate, const TArray<URH_RHFriendAndPlatformFriend*>&);
DECLARE_MULTICAST_DELEGATE_OneParam(FriendUpdatedDelegate, URH_RHFriendAndPlatformFriend*);
DECLARE_MULTICAST_DELEGATE_TwoParams(FriendUpdateErrorDelegate, const FGuid&, const FName&);
DECLARE_MULTICAST_DELEGATE_OneParam(BlockedListUpdatedDelegate, const TArray<FRHAPI_BlockedPlayer>&);
DECLARE_MULTICAST_DELEGATE_TwoParams(BlockedPlayerUpdatedDelegate, const FGuid&, const bool);
DECLARE_MULTICAST_DELEGATE_TwoParams(BlockedPlayerUpdateErrorDelegate, const FGuid&, const FName&);

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

UCLASS(BlueprintType, Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_FriendSubsystem : public URH_LocalPlayerSubsystemPlugin
{
    GENERATED_BODY()

public:

	typedef RallyHereAPI::Traits_GetBlockedListForPlayerV2 GetBlockedListType;
	typedef RallyHereAPI::Traits_GetBlockedV2 GetBlockedType;
	typedef RallyHereAPI::Traits_BlockV2 BlockType;
	typedef FRHAPI_BlockedPlayer BlockedPlayerType;
	typedef RallyHereAPI::Traits_UnblockV2 UnblockType;

	typedef RallyHereAPI::Traits_GetFriendsListForPlayerV2 GetFriendsListType;
	typedef RallyHereAPI::Traits_GetFriendRelationshipV2 GetFriendRelationshipType;
	typedef RallyHereAPI::Traits_AddFriendV2 AddFriendType;
	typedef RallyHereAPI::Traits_DeleteFriendV2 DeleteFriendType;
	typedef RallyHereAPI::Traits_AddNotesV2 AddNotesType;

	FriendListUpdatedDelegate FriendListUpdatedDelegate;
	FriendUpdatedDelegate FriendUpdatedDelegate;
	FriendUpdateErrorDelegate FriendUpdateErrorDelegate;
	BlockedListUpdatedDelegate BlockedListUpdatedDelegate;
	BlockedPlayerUpdatedDelegate BlockedPlayerUpdatedDelegate;
	BlockedPlayerUpdateErrorDelegate BlockedPlayerUpdateErrorDelegate;
	
    virtual void Initialize();
    virtual void Deinitialize();

#pragma region API Requests
	
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Friends List", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchFriendsList(const FRH_GenericFriendDynamicDelegate& Delegate) { return FetchFriendsList(Delegate); }
	bool FetchFriendsList(FRH_GenericFriendBlock Delegate = FRH_GenericFriendBlock());
	
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Friend", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchFriend(UPARAM(ref) const FGuid& PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return FetchFriend(PlayerUUID, Delegate); }
	bool FetchFriend(const FGuid& PlayerUUID, FRH_GenericFriendWithUuidBlock Delegate = FRH_GenericFriendWithUuidBlock());

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Add Friend", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_AddFriend(UPARAM(ref) const FGuid& PlayerUuid, const FRH_AddFriendDynamicDelegate& Delegate) { return AddFriend(PlayerUuid, Delegate); }
	bool AddFriend(const FGuid& PlayerUuid, FRH_AddFriendBlock Delegate = FRH_AddFriendBlock());

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Remove Friend", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_RemoveFriend(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return RemoveFriend(PlayerUuid, Delegate); }
	bool RemoveFriend(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate = FRH_GenericFriendWithUuidBlock());
	
	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Add Notes", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_AddNotes(UPARAM(ref) const FGuid& PlayerUuid, UPARAM(ref) const FString& Notes, const FRH_AddNotesDynamicDelegate& Delegate) { return AddNotes(PlayerUuid, Notes, Delegate); }
	bool AddNotes(const FGuid& PlayerUuid, const FString& Notes, FRH_AddNotesBlock Delegate = FRH_AddNotesBlock());

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Blocked List", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchBlockedList(const FRH_GenericFriendDynamicDelegate& Delegate) { return FetchBlockedList(Delegate); }
	bool FetchBlockedList(FRH_GenericFriendBlock Delegate = FRH_GenericFriendBlock());

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Fetch Blocked Player", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_FetchBlockedPlayer(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return FetchBlockedPlayer(PlayerUuid, Delegate); };
	bool FetchBlockedPlayer(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate = FRH_GenericFriendWithUuidBlock());

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Block Player", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_BlockPlayer(UPARAM(ref) const FGuid& PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return BlockPlayer(PlayerUUID, Delegate); };
	bool BlockPlayer(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate = FRH_GenericFriendWithUuidBlock());

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem", meta = (DisplayName = "Unblock Player", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_UnblockPlayer(UPARAM(ref) const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate& Delegate) { return UnblockPlayer(PlayerUuid, Delegate); }
	bool UnblockPlayer(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate = FRH_GenericFriendWithUuidBlock());
#pragma endregion // API Requests
	
	void OSSReadFriendsList(const FString& ListName = "Default");
	void UpdatePlatformFriends(TArray<URH_PlatformFriend*>& NewFriends);

	UFUNCTION(BlueprintCallable, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetOrCreateFriend(URH_PlayerInfo* PlayerInfo);

	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByUuid(const FGuid& PlayerUuid) const;
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByPlayerInfo(URH_PlayerInfo* PlayerInfo) const;
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByPlatformId(const FRH_PlayerPlatformId& PlatformPlayerId) const;
	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	URH_RHFriendAndPlatformFriend* GetFriendByUuidOrPlatformId(const FGuid& PlayerUuid, const FRH_PlayerPlatformId& PlatformPlayerId) const;

	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	bool IsPlayerBlocked(const FGuid& PlayerUuid) const;

	void StartFriendsRefreshTimer();
	void StopFriendsRefreshTimer();
	void StartBlockedRefreshTimer();
	void StopBlockedRefreshTimer();

	virtual void PostReloadConfig(class FProperty* PropertyThatWasLoaded) override;
	
	void ClearBlockedCache();
	void ClearRHFriendCache();
    void AcknowledgeFriendUpdate(const FGuid& PlayerUuid) const;

	UPROPERTY(BlueprintReadWrite, Category = "Friend Subsystem")
	TArray<URH_RHFriendAndPlatformFriend*> Friends;

	UPROPERTY(BlueprintReadWrite, Category = "Friend Subsystem")
	TArray<FGuid> BlockedPlayersUUIDs;

	TArray<URH_RHFriendAndPlatformFriend*>& GetFriends()
	{
		return Friends;
	}
	
	TArray<FGuid>& GetBlocked()
	{
		return BlockedPlayersUUIDs;
	}

	UFUNCTION(BlueprintPure, Category = "Friend Subsystem")
	bool HasFriendsCached() const
	{
		return FriendsCached;
	}

private:
	UPROPERTY()
	FString FriendsETag;
	UPROPERTY()
	FString BlockedPlayersETag; 
	UPROPERTY()
	bool FriendsCached;

	FRH_AutoPollerPtr FriendsListPoller;
	FRH_AutoPollerPtr BlockedListPoller;
	
    virtual void OnUserChanged();
	void InitPropertiesWithDefaultValues();
	bool SetDefaultParamsForGetFriendRequest(GetFriendRelationshipType::Request& Request) const;

#pragma region API Request Handlers
	void OnFetchFriendsListResponse(const GetFriendsListType::Response& Resp, FRH_GenericFriendBlock Delegate);
	void OnFetchFriendResponse(const GetFriendRelationshipType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate);
	void OnAddFriendResponse(const AddFriendType::Response& Resp, FRH_AddFriendBlock Delegate, AddFriendType::Request Request, int32 RetryEtagFailureCount);
	void OnRemoveFriendResponse(const DeleteFriendType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, DeleteFriendType::Request Request, int32 RetryEtagFailureCount);
	void OnAddNotesResponse(const AddNotesType::Response& Resp, FRH_AddNotesBlock Delegate, AddNotesType::Request Request, int32 RetryEtagFailureCount);
	void OnFetchBlockedListResponse(const GetBlockedListType::Response& Resp, FRH_GenericFriendBlock Delegate);
	void OnFetchBlockedPlayerResponse(const GetBlockedType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid);
	void OnBlockPlayerResponse(const BlockType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid);
	void OnUnblockPlayerResponse(const UnblockType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid);
	
	void OnFetchFriendForAdd(const GetFriendRelationshipType::Response& Resp,
										FRH_AddFriendBlock Delegate,
										  AddFriendType::Request Request, int32 RetryEtagFailureCount);
	void OnFetchFriendForAddNote(const GetFriendRelationshipType::Response& Resp,
										FRH_AddNotesBlock Delegate,
										AddNotesType::Request Request, int32 RetryEtagFailureCount);
	void OnFetchFriendForRemove(const GetFriendRelationshipType::Response& Resp,
										FRH_GenericFriendWithUuidBlock Delegate,
										  DeleteFriendType::Request Request, int32 RetryEtagFailureCount);
#pragma endregion // API Request Handlers

	void RemoveAllFriendsWithNoRelationships(TArray<URH_RHFriendAndPlatformFriend*>& OutArray);

	void PollFriendsList(const FRH_PollCompleteFunc& Delegate);
	void PollBlockedPlayers(const FRH_PollCompleteFunc& Delegate);
	
	FName ExtractErrorCodeFromResponse(const FHttpResponsePtr& Response) const;

	URH_PlayerInfoSubsystem* GetRH_PlayerInfoSubsystem() const;

	// OSS friends update
	void OnReadOSSFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr);
	void UpdateWithOSSFriends(const FString& ListName = "Default");
	void OnOSSPresenceReceived(const FUniqueNetId& UserId, const TSharedRef<FOnlineUserPresence>& NewPresence);

	FDelegateHandle OnOSSPresenceReceivedHandle;
};

