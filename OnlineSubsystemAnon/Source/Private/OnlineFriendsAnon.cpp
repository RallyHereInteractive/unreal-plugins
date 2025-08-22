	
#include "OnlineFriendsAnon.h"

#include "OnlineError.h"
#include "OnlineSubsystemTypes.h"
#include "OnlineSubsystemAnon.h"
#include "OnlineIdentityInterfaceAnon.h"


struct FOnlineFriendAnon : public FOnlineFriend
{
	FUniqueNetIdRef NetId;
	TMap<FString, FString> Attributes;
	EInviteStatus::Type InviteStatus;
	FOnlineUserPresence Presence;

	FOnlineFriendAnon(
		FUniqueNetIdPtr UserNetId,
		EInviteStatus::Type UserInviteStatus = EInviteStatus::Accepted,
		FOnlineUserPresence UserPresence = FOnlineUserPresence()
	):
		NetId{UserNetId.IsValid() ? UserNetId.ToSharedRef() : FUniqueNetIdString::Create(TEXT("ERROR"), NAME_None)},
		Attributes{},
		InviteStatus{UserInviteStatus},
		Presence{MoveTemp(UserPresence)}
	{}
	virtual ~FOnlineFriendAnon() {}

	FUniqueNetIdRef GetUserId() const override { return NetId; }
	FString GetRealName() const override { return TEXT(""); }
	FString GetDisplayName(const FString& Platform = FString()) const override { return NetId->ToString(); }
	bool GetUserAttribute(const FString& AttrName, FString& OutAttrValue) const override
	{ 
		if (const FString* Value = Attributes.Find(AttrName))
		{
			OutAttrValue = *Value;
			return true;
		}
		return false;
	}
	bool SetUserLocalAttribute(const FString& AttrName, const FString& InAttrValue) { Attributes[AttrName] = InAttrValue; return true; };

	EInviteStatus::Type GetInviteStatus() const override { return InviteStatus; }
	const class FOnlineUserPresence& GetPresence() const override { return Presence; }
};

struct FOnlineBlockedPlayerAnon : public FOnlineBlockedPlayer
{
	FUniqueNetIdRef NetId;
	TMap<FString, FString> Attributes;

	FOnlineBlockedPlayerAnon(FUniqueNetIdPtr UserNetId):
		NetId{UserNetId.IsValid() ? UserNetId.ToSharedRef() : FUniqueNetIdString::Create(TEXT("ERROR"), NAME_None)},
		Attributes{}
	{}
	virtual ~FOnlineBlockedPlayerAnon() {}

	FUniqueNetIdRef GetUserId() const override { return NetId; }
	FString GetRealName() const override { return TEXT(""); }
	FString GetDisplayName(const FString& Platform = FString()) const override { return NetId->ToString(); }
	bool GetUserAttribute(const FString& AttrName, FString& OutAttrValue) const override
	{ 
		if (const FString* Value = Attributes.Find(AttrName))
		{
			OutAttrValue = *Value;
			return true;
		}
		return false;
	}
	bool SetUserLocalAttribute(const FString& AttrName, const FString& InAttrValue) { Attributes[AttrName] = InAttrValue; return true; };
};

#if RH_ANON_FRIENDS_DEBUG
namespace
{
	const TArray<TSharedRef<FOnlineFriend>>& GetTestFriends(IOnlineSubsystem* Subsystem)
	{
		static TArray<TSharedRef<FOnlineFriend>> Friends = [Subsystem]()
		{
			TArray<TSharedRef<FOnlineFriend>> Result;
			if (!Subsystem) return Result;
			IOnlineIdentityPtr Identity = Subsystem->GetIdentityInterface();
			if (!Identity) return Result;

			FOnlineUserPresence OfflinePresence;
			FOnlineUserPresence OnlinePresence;
			OnlinePresence.bIsOnline = true;

			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel1")), EInviteStatus::Accepted, OnlinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel2")), EInviteStatus::Accepted, OnlinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel3")), EInviteStatus::Accepted, OfflinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel9")), EInviteStatus::Accepted, OnlinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel00093")), EInviteStatus::Accepted, OnlinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel00094")), EInviteStatus::PendingInbound, OnlinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel00095")), EInviteStatus::PendingOutbound, OnlinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel00096")), EInviteStatus::Accepted, OfflinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel00097")), EInviteStatus::PendingInbound, OfflinePresence));
			Result.Add(MakeShared<FOnlineFriendAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel00098")), EInviteStatus::PendingOutbound, OfflinePresence));
			return Result;
		}();
		return Friends;
	}
	
	const TArray<TSharedRef<FOnlineBlockedPlayer>>& GetTestBlocks(IOnlineSubsystem* Subsystem)
	{
		static TArray<TSharedRef<FOnlineBlockedPlayer>> Friends = [Subsystem]()
		{
			TArray<TSharedRef<FOnlineBlockedPlayer>> Result;
			if (!Subsystem) return Result;
			IOnlineIdentityPtr Identity = Subsystem->GetIdentityInterface();
			if (!Identity) return Result;

			Result.Add(MakeShared<FOnlineBlockedPlayerAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel100"))));
			Result.Add(MakeShared<FOnlineBlockedPlayerAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel101"))));
			Result.Add(MakeShared<FOnlineBlockedPlayerAnon>(Identity->CreateUniquePlayerId(TEXT("kenkel102"))));
			return Result;
		}();
		return Friends;
	}
}
#endif


FOnlineFriendsAnon::FOnlineFriendsAnon(FOnlineSubsystemAnon* InAnonOSS)
	: Subsystem{InAnonOSS}
{
}

bool FOnlineFriendsAnon::ReadFriendsList(int32 LocalUserNum, const FString& ListName, const FOnReadFriendsListComplete& Delegate)
{
#if RH_ANON_FRIENDS_DEBUG
	Subsystem->ExecuteNextTick([this, LocalUserNum, ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, true, ListName, TEXT(""));
	});
	return true;
#else
	Subsystem->ExecuteNextTick([this, LocalUserNum, ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, false, ListName, TEXT("Not Implemented"));
	});
	return false;
#endif
}

bool FOnlineFriendsAnon::DeleteFriendsList(int32 LocalUserNum, const FString& ListName, const FOnDeleteFriendsListComplete& Delegate)
{
	Subsystem->ExecuteNextTick([this, LocalUserNum, ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, false, ListName, TEXT("Not Implemented"));
	});
	return false;
}

bool FOnlineFriendsAnon::SendInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnSendInviteComplete& Delegate)
{
	Subsystem->ExecuteNextTick([this, LocalUserNum, DelayFriendId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(FriendId.ToString()), ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, false, *DelayFriendId, ListName, TEXT("Not Implemented"));
	});
	return false;
}

bool FOnlineFriendsAnon::AcceptInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnAcceptInviteComplete& Delegate)
{
	Subsystem->ExecuteNextTick([this, LocalUserNum, DelayFriendId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(FriendId.ToString()), ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, false, *DelayFriendId, ListName, TEXT("Not Implemented"));
	});
	return false;
}

bool FOnlineFriendsAnon::RejectInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
	return false;
}

void FOnlineFriendsAnon::SetFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FString& Alias, const FOnSetFriendAliasComplete& Delegate)
{
	Subsystem->ExecuteNextTick([this, LocalUserNum, DelayFriendId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(FriendId.ToString()), ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, *DelayFriendId, ListName, FOnlineError(EOnlineErrorResult::NotImplemented));
	});
}

void FOnlineFriendsAnon::DeleteFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnDeleteFriendAliasComplete& Delegate)
{
	Subsystem->ExecuteNextTick([this, LocalUserNum, DelayFriendId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(FriendId.ToString()), ListName, Delegate]()
	{
		Delegate.ExecuteIfBound(LocalUserNum, *DelayFriendId, ListName, FOnlineError(EOnlineErrorResult::NotImplemented));
	});
}

bool FOnlineFriendsAnon::DeleteFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
	return false;
}

bool FOnlineFriendsAnon::GetFriendsList(int32 LocalUserNum, const FString& ListName, TArray< TSharedRef<FOnlineFriend> >& OutFriends)
{
#if RH_ANON_FRIENDS_DEBUG
	OutFriends = GetTestFriends(Subsystem);
	return true;
#else
	return false;
#endif
}

TSharedPtr<FOnlineFriend> FOnlineFriendsAnon::GetFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
#if RH_ANON_FRIENDS_DEBUG
	for (const auto& Friend : GetTestFriends(Subsystem))
	{
		if (*Friend->GetUserId() == FriendId)
		{
			return Friend;
		}
	}
#endif
	return nullptr;
}

bool FOnlineFriendsAnon::IsFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
#if RH_ANON_FRIENDS_DEBUG
	return GetFriend(LocalUserNum, FriendId, ListName) != nullptr;
#else
	return false;
#endif
}

void FOnlineFriendsAnon::AddRecentPlayers(const FUniqueNetId& UserId, const TArray<FReportPlayedWithUser>& InRecentPlayers, const FString& ListName, const FOnAddRecentPlayersComplete& Delegate)
{
	Subsystem->ExecuteNextTick([this, DelayFriendId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(UserId.ToString()), Delegate]()
	{
		Delegate.ExecuteIfBound(*DelayFriendId, FOnlineError(EOnlineErrorResult::NotImplemented));
	});
}

bool FOnlineFriendsAnon::QueryRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace)
{
	return false;
}

bool FOnlineFriendsAnon::GetRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace, TArray< TSharedRef<FOnlineRecentPlayer> >& OutRecentPlayers)
{
	return false;
}

void FOnlineFriendsAnon::DumpRecentPlayers() const
{
}

bool FOnlineFriendsAnon::BlockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId)
{
	return false;
}

bool FOnlineFriendsAnon::UnblockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId)
{
	return false;
}

bool FOnlineFriendsAnon::QueryBlockedPlayers(const FUniqueNetId& UserId)
{
#if RH_ANON_FRIENDS_DEBUG
	TriggerOnBlockListChangeDelegates(0, TEXT(""));
	return true;
#else
	return false;
#endif
}

bool FOnlineFriendsAnon::GetBlockedPlayers(const FUniqueNetId& UserId, TArray<TSharedRef<FOnlineBlockedPlayer>>& OutBlockedPlayers)
{
#if RH_ANON_FRIENDS_DEBUG
	OutBlockedPlayers = GetTestBlocks(Subsystem);
	return true;
#else
	return false;
#endif
}

void FOnlineFriendsAnon::DumpBlockedPlayers() const
{
}
