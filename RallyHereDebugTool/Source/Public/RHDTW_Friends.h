// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "FriendsAPI.h"
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
	void DoRecentPlayers();

	void HandleFetchFriendsList(bool bSuccessful, const FGuid InstigatorUuid);
	void HandleAddFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, ERHAPI_FriendshipStatus FriendsStatus, const FGuid InstigatorUuid, const FGuid TargetUuid);
	void HandleRemoveFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid);
	void HandleAddNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FString& NewNote, const FGuid InstigatorUuid, const FGuid TargetUuid);
	void HandleDeleteNote(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid);
	void HandleFetchFriend(bool bSuccessful, const FGuid& FriendsPlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid);

	void HandleFetchBlockedPlayers(bool bSuccessful, const FGuid InstigatorUuid);
	void HandleBlockPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid);
	void HandleUnblockPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid);
	void HandleFetchBlockedPlayer(bool bSuccessful, const FGuid& PlayerUuid, const FGuid InstigatorUuid, const FGuid TargetUuid);

	TArray<ANSICHAR> PlatformUserIdString;

	FString FriendActionResult;
	FString BlockActionResult;

	std::string NotesInput;
};
