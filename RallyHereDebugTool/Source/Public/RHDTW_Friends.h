// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "FriendsV2API.h"
#include "BlockedV2API.h"
#include "RH_DebugToolWindow.h"
#include "RH_FriendSubsystem.h"
#include <string>

struct FRHDTW_Friends : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Friends();
	virtual ~FRHDTW_Friends();

	virtual void Do() override;
	void DoRHFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem);
	void DoPlatformFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem) const;
	void DoBlockedPlayersTab(URH_FriendSubsystem* Urh_FriendSubsystem);

	void HandleFetchFriendsList(bool bSuccessful);
	void HandleAddFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, FriendshipStatus FriendsStatus);
	void HandleRemoveFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid);
	void HandleAddNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FString& NewNote);
	void HandleFetchFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid);

	void HandleFetchBlockedPlayers(bool bSuccessful);
	void HandleBlockPlayer(bool bSuccessful, const FGuid& PlayerUuid);
	void HandleUnblockPlayer(bool bSuccessful, const FGuid& PlayerUuid);
	void HandleFetchBlockedPlayer(bool bSuccessful, const FGuid& PlayerUuid);

	TArray<ANSICHAR> FriendPlayerUuidString;
	TArray<ANSICHAR> BlockedPlayerUuidString;

	FString FriendActionResult;
	FString BlockActionResult;

	std::string NotesInput;
};
