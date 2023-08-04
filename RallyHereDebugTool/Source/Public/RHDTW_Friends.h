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
	void DoPlatformFriendTab(URH_FriendSubsystem* pRH_FriendSubsystem);
	void DoBlockedPlayersTab(URH_FriendSubsystem* Urh_FriendSubsystem);

	void HandleFetchFriendsList(bool bSuccessful, const FGuid InstigatorUuid);
	void HandleAddFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, FriendshipStatus FriendsStatus, const FGuid InstigatorUuid);
	void HandleRemoveFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid);
	void HandleAddNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FString& NewNote, const FGuid InstigatorUuid);
	void HandleFetchFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid);

	void HandleFetchBlockedPlayers(bool bSuccessful, const FGuid InstigatorUuid);
	void HandleBlockPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid);
	void HandleUnblockPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid);
	void HandleFetchBlockedPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid);

	TArray<ANSICHAR> PlatformUserIdString;

	FString FriendActionResult;
	FString BlockActionResult;

	std::string NotesInput;
};
