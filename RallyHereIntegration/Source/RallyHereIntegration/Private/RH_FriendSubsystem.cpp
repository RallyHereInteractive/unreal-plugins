// Copyright 2023-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_FriendSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "OnlineSubsystem.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "Engine/LocalPlayer.h"
#include "RallyHereIntegrationModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Online.h"
#include "Net/OnlineEngineInterface.h"

namespace
{
	const FName UnexpectedErrorCode = FName(TEXT("unexpected_error"));
}

void URH_FriendSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	Friends.Empty();
	BlockedPlayersUUIDs.Empty();

	FriendsListPoller = FRH_PollControl::CreateAutoPoller();
	BlockedListPoller = FRH_PollControl::CreateAutoPoller();

	InitPropertiesWithDefaultValues();
}

void URH_FriendSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	InitPropertiesWithDefaultValues();

	StopFriendsRefreshTimer();
	StopBlockedRefreshTimer();

	FriendsListPoller.Reset();
	BlockedListPoller.Reset();

	if (GetLocalPlayerSubsystem()->GetPlayerNotifications() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("friends")).AddUObject(this, &URH_FriendSubsystem::HandleNotification);
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("blocked")).AddUObject(this, &URH_FriendSubsystem::HandleNotification);
	}

	Super::Deinitialize();
}

void URH_FriendSubsystem::OnUserChanged(const FGuid& OldPlayerUuid, class URH_PlayerInfo* OldLocalPlayerInfo)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::OnUserChanged(OldPlayerUuid, OldLocalPlayerInfo);

	// clear out old notification binding
	if (OldLocalPlayerInfo != nullptr)
	{
		OldLocalPlayerInfo->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("friends")).RemoveAll(this);
		OldLocalPlayerInfo->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("blocked")).RemoveAll(this);

		StopFriendsRefreshTimer();
		StopBlockedRefreshTimer();
	}

	InitPropertiesWithDefaultValues();


	// add new notification binding
	if (GetLocalPlayerSubsystem()->GetPlayerNotifications() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("friends")).AddUObject(this, &URH_FriendSubsystem::HandleNotification);
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("blocked")).AddUObject(this, &URH_FriendSubsystem::HandleNotification);

		StartFriendsRefreshTimer();
		StartBlockedRefreshTimer();
	}
}

void URH_FriendSubsystem::InitPropertiesWithDefaultValues()
{
	Friends.Empty();
	FriendsETag = {};
	BlockedPlayersUUIDs.Empty();
	BlockedPlayersETag = {};
}

void URH_FriendSubsystem::HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (APIName == TEXT("friends"))	// double checking, but this should be implied
	{
		// the first API param should be the API version
		// the second API param should be the object type
		if (APIParams.Num() >= 2 && APIParams[0] == TEXT("v2") && APIParams[1] == TEXT("player"))
		{
			PollFriendsList(FRH_PollCompleteFunc());
		}
	}
	else
	if (APIName == TEXT("blocked"))	// double checking, but this should be implied
	{
		// the first API param should be the API version
		// the second API param should be the object type
		if (APIParams.Num() >= 2 && APIParams[0] == TEXT("v2") && APIParams[1] == TEXT("player"))
		{
			PollBlockedPlayers(FRH_PollCompleteFunc());
		}
	}
}


bool URH_FriendSubsystem::FetchFriendsList(const FRH_GenericFriendBlock& Delegate /* = FRH_GenericFriendBlock() */)
{
	auto Request = GetFriendsListType::Request();

	auto AuthContext = GetAuthContext();

	Request.Page.Emplace(0);
	Request.Limit.Emplace(10000);
	Request.AuthContext = AuthContext;
	FRH_ObjectVersionCheck::ApplyDefaultGetBehavior(Request, FriendsETag);

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	if (!GetFriendsListType::DoCall(RH_APIs::GetFriendsAPI(), Request, GetFriendsListType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendsListResponse, Delegate), GetDefault<URH_IntegrationSettings>()->FetchFriendListPriority))
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchFriendsListResponse(const GetFriendsListType::Response& Resp, const FRH_GenericFriendBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		 Resp.TryGetDefaultHeader_ETag(FriendsETag);

		for (const auto Friend : Friends)
		{
			Friend->ClearRHFriendStatus();
		}

		auto GetLinkedPlatformInfoHandler = [this](const TArray<URH_PlayerPlatformInfo*>& Platforms, URH_RHFriendAndPlatformFriend* MainFriend)
			{
				for (URH_PlayerPlatformInfo* Platform : Platforms)
				{
					TArray<URH_RHFriendAndPlatformFriend*> AllFriends = Friends;
					URH_RHFriendAndPlatformFriend** MatchingFriendPtr = AllFriends.FindByPredicate([Platform](URH_RHFriendAndPlatformFriend* Friend)
						{
							if (!Friend->GetRHPlayerUuid().IsValid() && Friend->GetPlatformFriends().Num() > 0)
							{
								for (URH_PlatformFriend* PlatformFriend : Friend->GetPlatformFriends())
								{
									if (PlatformFriend->GetPlayerPlatformId() == Platform->GetPlayerPlatformId())
									{
										return true;
									}
								}
							}
							return false;
						});

					if (MatchingFriendPtr && *MatchingFriendPtr)
					{
						for (URH_PlatformFriend* PlatformFriend : (*MatchingFriendPtr)->GetPlatformFriends())
						{
							MainFriend->PlatformFriends.Add(PlatformFriend);
						}
						Friends.Remove(*MatchingFriendPtr);
					}
					else
					{
						URH_PlatformFriend* RHPlatformFriend = NewObject<URH_PlatformFriend>(this);
						RHPlatformFriend->Init(Platform);
						MainFriend->PlatformFriends.Add(RHPlatformFriend);
					}
				}
			};

		URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem();

		TArray<URH_RHFriendAndPlatformFriend*> UpdatedFriends;
		for (auto NewFriend : Content->Friends)
		{
			auto UpdatedFriend = GetFriendByUuid(NewFriend.GetFriendsPlayerUuid());
			bool bIsNew = UpdatedFriend == nullptr;
			if (bIsNew)
			{
				UpdatedFriend = CreateFriendObject(NewFriend.GetFriendsPlayerUuid());
				UpdatedFriend->PreviousRHFriendshipStatus = NewFriend.Status;
			}
			
			if (UpdatedFriend->LastModifiedOn != NewFriend.LastModifiedOn)
			{
				UpdatedFriends.Emplace(UpdatedFriend);
			}

			if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
			{
				PlayerInfo->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateLambda([GetLinkedPlatformInfoHandler, WeakFriend = MakeWeakObjectPtr(UpdatedFriend)](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
					{
						if (bSuccess && WeakFriend.IsValid())
						{
							GetLinkedPlatformInfoHandler(Platforms, WeakFriend.Get());
						}
					}));
			}
			
			UpdatedFriend->bPreviousHadRHFriendStatus = !bIsNew && UpdatedFriend->bHasRHFriendStatus;
			UpdatedFriend->bHasRHFriendStatus = true;
			UpdatedFriend->RHFriendshipStatus = NewFriend.Status;
			UpdatedFriend->LastModifiedOn = NewFriend.LastModifiedOn;
			NewFriend.GetNotes(UpdatedFriend->Notes);
			
		}

		RemoveAllFriendsWithNoRelationships(UpdatedFriends);
		if (!FriendsCached)
		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendListUpdated, FColor::Purple);
			FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
			BLUEPRINT_FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
			FriendsCached = true;
		}
		else
		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
			for (const auto UpdatedFriend : UpdatedFriends)
			{
				FriendUpdatedDelegate.Broadcast(UpdatedFriend);
				BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			}
		}

		if (FriendsListPoller.IsValid())
		{
			FriendsListPoller->DeferPollTimer();
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}

bool URH_FriendSubsystem::FetchFriend(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate /* = FRH_GenericFriendWithUuidBlock() */)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = GetFriendRelationshipType::Request();
	Request.OtherPlayerUuid = PlayerUuid;
	if (!SetDefaultParamsForGetFriendRequest(Request))
	{
		return false;
	}

	if (!GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), Request, GetFriendRelationshipType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendResponse, Delegate), GetDefault<URH_IntegrationSettings>()->FetchFriendPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchFriendResponse(const GetFriendRelationshipType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate)
{
	const auto NewFriend = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && NewFriend != nullptr)
	{
		URH_RHFriendAndPlatformFriend* UpdatedFriend = GetFriendByUuid(NewFriend->GetFriendsPlayerUuid());
		bool bIsNew = UpdatedFriend == nullptr;
		if (bIsNew)
		{
			UpdatedFriend = CreateFriendObject(NewFriend->GetFriendsPlayerUuid());
			UpdatedFriend->PreviousRHFriendshipStatus = NewFriend->GetStatus();
		}
		
		UpdatedFriend->bPreviousHadRHFriendStatus = !bIsNew && UpdatedFriend->bHasRHFriendStatus;
		UpdatedFriend->bHasRHFriendStatus = true;
		UpdatedFriend->RHFriendshipStatus = NewFriend->GetStatus();
		UpdatedFriend->LastModifiedOn = NewFriend->GetLastModifiedOn();
		Resp.TryGetDefaultHeader_ETag(UpdatedFriend->Etag);
		NewFriend->GetNotes(UpdatedFriend->Notes);

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified, NewFriend ? NewFriend->GetFriendsPlayerUuid() : FGuid());
}

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::CreateFriendObject(const FGuid& PlayerUuid)
{
	auto Friend = NewObject<URH_RHFriendAndPlatformFriend>(this);

	// set the player uuid into the friend object
	Friend->PlayerAndPlatformInfo.PlayerUuid = PlayerUuid;

	// bind callbacks to the friend object
	Friend->SetPlayerInfoUpdateBindings();
	
	Friends.Add(Friend);

	return Friend;
}


bool URH_FriendSubsystem::SetDefaultParamsForGetFriendRequest(GetFriendRelationshipType::Request& Request) const
{
	if (!Request.OtherPlayerUuid.IsValid())
	{
		return false;
	}

	if (!Request.AuthContext)
	{
		Request.AuthContext = GetAuthContext();
	}

	if (!Request.IfNoneMatch.IsSet())
	{
		if (const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid))
		{
			FRH_ObjectVersionCheck::ApplyDefaultGetBehavior(Request, Friend->Etag);
		}
	}

	if (!Request.PlayerUuid.IsValid())
	{
		FGuid ActivePlayerUuid;
		if (Request.AuthContext->GetLoginResult().IsSet() && Request.AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
		{
			Request.PlayerUuid = ActivePlayerUuid;
		}
		else
		{
			return false;
		}
	}

	return true;
}

bool URH_FriendSubsystem::AddFriend(const FGuid& PlayerUuid, const FRH_AddFriendBlock& Delegate /* = FRH_AddFriendBlock() */)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = AddFriendType::Request();
	auto AuthContext = GetAuthContext();

	Request.OtherPlayerUuid = PlayerUuid;
	Request.AuthContext = AuthContext;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid);
	if (!Friend || Friend->Etag.IsEmpty())
	{
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendForAdd,
			Delegate, Request, 0), GetDefault<URH_IntegrationSettings>()->AddFriendPriority))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Request.IfMatch.Emplace(Friend->Etag);

	if (!AddFriendType::DoCall(RH_APIs::GetFriendsAPI(), Request, AddFriendType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnAddFriendResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->AddFriendPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid(), ERHAPI_FriendshipStatus::None);
		return false;
	}
	return true;
}

void URH_FriendSubsystem::OnAddFriendResponse(const AddFriendType::Response& Resp, const FRH_AddFriendBlock Delegate, const AddFriendType::Request Request, int32 RetryEtagFailureCount)
{
	const auto NewFriend = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && NewFriend != nullptr)
	{
		URH_RHFriendAndPlatformFriend* UpdatedFriend = GetFriendByUuid(NewFriend->GetFriendsPlayerUuid());
		bool bIsNew = UpdatedFriend == nullptr;
		if (bIsNew)
		{
			UpdatedFriend = CreateFriendObject(NewFriend->GetFriendsPlayerUuid());
			UpdatedFriend->PreviousRHFriendshipStatus = NewFriend->GetStatus();
		}
		
		UpdatedFriend->bPreviousHadRHFriendStatus = !bIsNew && UpdatedFriend->bHasRHFriendStatus;
		UpdatedFriend->bHasRHFriendStatus = true;
		UpdatedFriend->PreviousRHFriendshipStatus = UpdatedFriend->RHFriendshipStatus;
		UpdatedFriend->RHFriendshipStatus = NewFriend->GetStatus();
		UpdatedFriend->LastModifiedOn = NewFriend->GetLastModifiedOn();
		Resp.TryGetDefaultHeader_ETag(UpdatedFriend->Etag);
		NewFriend->GetNotes(UpdatedFriend->Notes);

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
		}
	}
	else if (RetryEtagFailureCount && Resp.GetHttpResponseCode() == EHttpResponseCodes::PrecondFailed)
	{
		const auto NewRetryCount = RetryEtagFailureCount - 1;
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForAdd,
			Delegate, Request, NewRetryCount), GetDefault<URH_IntegrationSettings>()->AddFriendPriority);
		return;
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdateError, FColor::Purple);
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
		BLUEPRINT_FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
	}

	auto FriendsPlayerUuid = NewFriend ? NewFriend->GetFriendsPlayerUuid() : FGuid();
	auto Status = NewFriend ? NewFriend->GetStatus() : ERHAPI_FriendshipStatus::None;
	
	Delegate.ExecuteIfBound(Resp.IsSuccessful(), FriendsPlayerUuid, Status);
}

bool URH_FriendSubsystem::RemoveFriend(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate /*= FRH_GenericFriendWithUuidBlock()*/)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = DeleteFriendType::Request();
	auto AuthContext = GetAuthContext();
	Request.OtherPlayerUuid = PlayerUuid;
	Request.AuthContext = AuthContext;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid);
	if (!Friend || Friend->Etag.IsEmpty())
	{
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForRemove,
			Delegate, Request, 0), GetDefault<URH_IntegrationSettings>()->RemoveFriendPriority))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Request.IfMatch.Emplace(Friend->Etag);

	if (!DeleteFriendType::DoCall(RH_APIs::GetFriendsAPI(), Request, DeleteFriendType::Delegate::CreateUObject(this,
		&URH_FriendSubsystem::OnRemoveFriendResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->RemoveFriendPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnRemoveFriendResponse(const DeleteFriendType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteFriendType::Request Request, int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		URH_RHFriendAndPlatformFriend* UpdatedFriend = nullptr;
		for (auto i = Friends.Num() - 1; i >= 0; --i)
		{
			auto Friend = Friends[i];
			if (Friend->GetRHPlayerUuid() != Request.OtherPlayerUuid)
			{
				continue;
			}

			UpdatedFriend = Friend;
			Friend->PreviousRHFriendshipStatus = Friend->RHFriendshipStatus;
			Friend->RHFriendshipStatus = ERHAPI_FriendshipStatus::None;
			Friend->LastModifiedOn = FDateTime();
			if (Friend->HavePlatformRelationship())
			{
				continue;
			}

			Friends.RemoveAt(i, 1);
		}

		if (UpdatedFriend != nullptr)
		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
		}
	}
	else if (RetryEtagFailureCount && Resp.GetHttpResponseCode() == EHttpResponseCodes::PrecondFailed)
	{
		const auto NewRetryCount = RetryEtagFailureCount - 1;
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForRemove,
			Delegate, Request, NewRetryCount), GetDefault<URH_IntegrationSettings>()->RemoveFriendPriority);
		return;
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdateError, FColor::Purple);
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
		BLUEPRINT_FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful(), Request.OtherPlayerUuid);
}

bool URH_FriendSubsystem::AddNotes(const FGuid& PlayerUuid, const FString& Notes, const FRH_AddNotesBlock& Delegate /* = FRH_AddNotesBlock() */)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = AddNotesType::Request();
	auto AuthContext = GetAuthContext();
	Request.OtherPlayerUuid = PlayerUuid;
	Request.Notes.SetNotes(Notes);
	Request.AuthContext = AuthContext;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid);
	if (!Friend || Friend->Etag.IsEmpty())
	{
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForAddNote,
			Delegate, Request, 0), GetDefault<URH_IntegrationSettings>()->AddFriendNotesPriority))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Request.IfMatch.Emplace(Friend->Etag);

	if (!AddNotesType::DoCall(RH_APIs::GetFriendsAPI(), Request, AddNotesType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnAddNotesResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->AddFriendNotesPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid(), FString());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnAddNotesResponse(const AddNotesType::Response& Resp, const FRH_AddNotesBlock Delegate, const AddNotesType::Request Request, int32 RetryEtagFailureCount)
{
	const auto UpdatedFriend = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && UpdatedFriend != nullptr)
	{
		if (const auto Friend = GetFriendByUuid(UpdatedFriend->GetFriendsPlayerUuid()))
		{
			if (const auto Notes = UpdatedFriend->GetNotesOrNull())
			{
				Friend->Notes = *Notes;
			}
			else
			{
				Friend->Notes.Empty();
			}
			Friend->PreviousRHFriendshipStatus = Friend->RHFriendshipStatus;
			Friend->RHFriendshipStatus = UpdatedFriend->GetStatus();
			Friend->LastModifiedOn = UpdatedFriend->GetLastModifiedOn();
			Resp.TryGetDefaultHeader_ETag(Friend->Etag);

			{
				SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
				FriendUpdatedDelegate.Broadcast(Friend);
				BLUEPRINT_FriendUpdatedDelegate.Broadcast(Friend);
			}
		}
	}
	else if (RetryEtagFailureCount && Resp.GetHttpResponseCode() == EHttpResponseCodes::PrecondFailed)
	{
		const auto NewRetryCount = RetryEtagFailureCount - 1;
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForAddNote,
			Delegate, Request, NewRetryCount), GetDefault<URH_IntegrationSettings>()->AddFriendNotesPriority);
		return;
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdateError, FColor::Purple);
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
		BLUEPRINT_FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
	}

	FGuid FriendsPlayerUuid = UpdatedFriend ? UpdatedFriend->GetFriendsPlayerUuid() : FGuid();
	FString NotesStr = UpdatedFriend ? UpdatedFriend->GetNotes(TEXT("")) : FString();
	
	Delegate.ExecuteIfBound(Resp.IsSuccessful(), FriendsPlayerUuid, NotesStr);
}

bool URH_FriendSubsystem::DeleteNotes(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = DeleteNotesType::Request();
	auto AuthContext = GetAuthContext();
	Request.OtherPlayerUuid = PlayerUuid;
	Request.AuthContext = AuthContext;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid);
	if (!Friend || Friend->Etag.IsEmpty())
	{
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForDeleteNote,
			Delegate, Request, 0), GetDefault<URH_IntegrationSettings>()->DeleteFriendNotesPriority))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Request.IfMatch.Emplace(Friend->Etag);

	if (!DeleteNotesType::DoCall(RH_APIs::GetFriendsAPI(), Request, DeleteNotesType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnDeleteNotesResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->DeleteFriendNotesPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnDeleteNotesResponse(const DeleteNotesType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteNotesType::Request Request, int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		if (const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid))
		{
			Friend->Notes.Empty();
 			Friend->PreviousRHFriendshipStatus = Friend->RHFriendshipStatus;
 			Friend->LastModifiedOn = FDateTime::Now();
			Friend->Etag = TEXT(""); // etag no longer valid

			{
				SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
				FriendUpdatedDelegate.Broadcast(Friend);
				BLUEPRINT_FriendUpdatedDelegate.Broadcast(Friend);
			}
		}
	}
	else if (RetryEtagFailureCount && Resp.GetHttpResponseCode() == EHttpResponseCodes::PrecondFailed)
	{
		const auto NewRetryCount = RetryEtagFailureCount - 1;
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsAPI(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForDeleteNote,
			Delegate, Request, NewRetryCount), GetDefault<URH_IntegrationSettings>()->DeleteFriendNotesPriority);
		return;
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdateError, FColor::Purple);
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
		BLUEPRINT_FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful(), Request.OtherPlayerUuid);
}

void URH_FriendSubsystem::OSSReadFriendsList(const FString& ListName /* = "Default"*/)
{
	auto OSS = IOnlineSubsystem::Get();
	if (!OSS)
	{
		return;
	}

	const auto OSSFriendsInterface = OSS->GetFriendsInterface();
	const auto OSSPresenceInterface = OSS->GetPresenceInterface();

	if (OSSFriendsInterface.IsValid())
	{
		if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
		{
			// Request load platform friends list
			OSSFriendsInterface->ReadFriendsList(LPSS->GetPlatformUserId(), ListName, FOnReadFriendsListComplete::CreateUObject(this, &URH_FriendSubsystem::OnReadOSSFriendsComplete));

			// bind to the block query complete binding
			OSSFriendsInterface->ClearOnQueryBlockedPlayersCompleteDelegate_Handle(OnOSSBlockListReceivedHandle);
			OnOSSBlockListReceivedHandle = OSSFriendsInterface->AddOnQueryBlockedPlayersCompleteDelegate_Handle(FOnQueryBlockedPlayersCompleteDelegate::CreateUObject(this, &URH_FriendSubsystem::OnOSSQueryBlockListComplete));
			
			// bind to the block list change delegate
			OSSFriendsInterface->OnBlockListChangeDelegates[LPSS->GetPlatformUserId()].RemoveAll(this);
			OSSFriendsInterface->OnBlockListChangeDelegates[LPSS->GetPlatformUserId()].AddUObject(this, &URH_FriendSubsystem::OnOSSBlockListChanged);

			// Query the block list
			OSSFriendsInterface->QueryBlockedPlayers(*LPSS->GetOSSUniqueId().GetUniqueNetId());

			// Listen to presence change to update friends' metadata
			if (OSSPresenceInterface.IsValid())
			{
				OSSPresenceInterface->ClearOnPresenceReceivedDelegate_Handle(OnOSSPresenceReceivedHandle);
				OnOSSPresenceReceivedHandle = OSSPresenceInterface->AddOnPresenceReceivedDelegate_Handle(FOnPresenceReceivedDelegate::CreateUObject(this, &URH_FriendSubsystem::OnOSSPresenceReceived));
			}
		}
	}
}

void URH_FriendSubsystem::OnReadOSSFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr)
{
	if (bWasSuccessful)
	{
		UpdateWithOSSFriends(ListName);
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSSFriendsInterface failed to ReadFriendsList with error: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorStr);
	}
}

void URH_FriendSubsystem::OnOSSQueryBlockListComplete(const FUniqueNetId& UserId, bool bWasSuccessful, const FString& ErrorStr)
{
	if (bWasSuccessful)
	{
		if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
		{
			OnOSSBlockListChanged(LPSS->GetPlatformUserId().GetInternalId(), TEXT("Default"));
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OnOSSQueryBlockListComplete failed to get local player subsystem"), ANSI_TO_TCHAR(__FUNCTION__));
		}
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSSFriendsInterface failed to QueryBlockList with error: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorStr);
	}
}

void URH_FriendSubsystem::OnOSSBlockListChanged(int32 LocalUserNum, const FString& ListName)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] OnOSSBlockListChanged called %i"), ANSI_TO_TCHAR(__FUNCTION__), LocalUserNum);
	auto OSS = IOnlineSubsystem::Get();
	if (!OSS)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	// get friends interface from the OSS
	const auto OSSFriendsInterface = OSS->GetFriendsInterface();
	if (!OSSFriendsInterface.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS friends interface"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	// get identity interface from the OSS
	const auto OSSIdentityInterface = OSS->GetIdentityInterface();
	if (!OSSIdentityInterface.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS identity interface"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto UniquePlayerId = OSSIdentityInterface->GetUniquePlayerId(LocalUserNum);
	if (!UniquePlayerId.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get unique player id"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}
	
	TArray<TSharedRef<FOnlineBlockedPlayer>> BlockedPlayers;
	if (!OSSFriendsInterface->GetBlockedPlayers(*UniquePlayerId, BlockedPlayers))
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get list of blocked players"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	TOptional<ERHAPI_Platform> PlatformType = RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NULL_SUBSYSTEM);
	const ERHAPI_Platform RHPlatformType = PlatformType.IsSet() ? PlatformType.GetValue() : ERHAPI_Platform::Anon;

	// since this is a full read of the OSS, clear all stored data, and rebuild the cached list
	PlatformBlockedPlayers.Empty();
	for (const auto& BlockedPlayer : BlockedPlayers)
	{
		const FString PlatformId = BlockedPlayer->GetUserId()->ToString();

		// store the blocked player in a set for quick lookup later in case th is player is currently unknown
		PlatformBlockedPlayers.Add(PlatformId);
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] adding blocked player %s"), ANSI_TO_TCHAR(__FUNCTION__), *PlatformId);
	}

	TArray<URH_RHFriendAndPlatformFriend*> UpdatedFriends;

	// set value for any existing friends
	for (auto Friend : Friends)
	{
		auto PlatformFriend = Friend->GetPlatformFriend(RHPlatformType);
		if (PlatformFriend)
		{
			bool bWasBlocked = PlatformFriend->IsBlocked();
			bool bShouldBeBlocked = PlatformBlockedPlayers.Contains(PlatformFriend->GetPlayerPlatformId().UserId);
			PlatformFriend->SetBlocked(bShouldBeBlocked);
			Friend->GetRHPlayerUuidAsync();

			// keep track of friends who have changed blocked status
			if (bWasBlocked != bShouldBeBlocked)
			{
				UpdatedFriends.Add(Friend);
			}
		}			
	}

	for (const auto& BlockedPlayerPlatformId : PlatformBlockedPlayers )
	{
		const auto PlayerPlatformId = FRH_PlayerPlatformId(BlockedPlayerPlatformId, RHPlatformType);
		if (const URH_RHFriendAndPlatformFriend* Friend = GetFriendByPlatformId(PlayerPlatformId))
		{
			// should have been updated above in the whole-friends-list update
		}
		else
		{
			auto PlatformFriend = NewObject<URH_PlatformFriend>(this);
			PlatformFriend->InitBlocked(PlayerPlatformId);

			auto NewFriend = NewObject<URH_RHFriendAndPlatformFriend>(this);
			NewFriend->PlatformFriends.Add(PlatformFriend);
			NewFriend->PlayerAndPlatformInfo.PlayerPlatformId = PlayerPlatformId;
			Friends.Add(NewFriend);

			if (const auto pRH_PlayerInfoSubsystem = GetRH_PlayerInfoSubsystem())
			{
				TWeakObjectPtr<URH_RHFriendAndPlatformFriend> WeakFriend = NewFriend;
				pRH_PlayerInfoSubsystem->LookupPlayerByPlatformUserId(PlayerPlatformId, FRH_PlayerInfoLookupPlayerDelegate::CreateLambda([WeakFriend](bool bSuccess, const TArray<URH_PlayerInfo*>& PlayerInfos)
					{
						if (bSuccess && WeakFriend.IsValid() && PlayerInfos.IsValidIndex(0) && PlayerInfos[0] != nullptr)
						{
							WeakFriend->PlayerAndPlatformInfo.PlayerUuid = PlayerInfos[0]->GetRHPlayerUuid();
						}
					}));
			}

			NewFriend->GetRHPlayerUuidAsync();
			UpdatedFriends.Add(NewFriend);
		}
	}

	// for now, use the full update delegate, as we did not track individual updates above and we may have added to the list
	SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendListUpdated, FColor::Purple);
	FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
	BLUEPRINT_FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
}

void URH_FriendSubsystem::OnOSSPresenceReceived(const FUniqueNetId& UserId, const TSharedRef<FOnlineUserPresence>& NewPresence)
{
	auto OSS = IOnlineSubsystem::Get();
	if (OSS)
	{
		FRH_PlayerPlatformId PlayerPlatformId;
		TOptional<ERHAPI_Platform> PlatformType = RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NULL_SUBSYSTEM);
		PlayerPlatformId.PlatformType = PlatformType.IsSet() ? PlatformType.GetValue() : ERHAPI_Platform::Anon;
		PlayerPlatformId.UserId = UserId.ToString();

		if (const auto ExistingFriend = GetFriendByPlatformId(PlayerPlatformId))
		{
			auto PlatformFriend = ExistingFriend->PlatformFriends.FindByPredicate(
				[PlayerPlatformId](const URH_PlatformFriend* PlatformFriend)
				{
					return PlatformFriend->GetPlayerPlatformId() == PlayerPlatformId;
				});

			if (PlatformFriend)
			{
				(*PlatformFriend)->UpdatePresence(*NewPresence);
				FriendUpdatedDelegate.Broadcast(ExistingFriend);
				BLUEPRINT_FriendUpdatedDelegate.Broadcast(ExistingFriend);
				return;
			}
		}
	}

	// if we fail to find a friend to update, then just update all OSS friends as a fallback
	UpdateWithOSSFriends();
}

void URH_FriendSubsystem::UpdateWithOSSFriends(const FString& ListName /* = "Default"*/)
{
	auto OSS = IOnlineSubsystem::Get();
	if (!OSS)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	// get friends interface from the OSS
	const auto OSSFriendsInterface = OSS->GetFriendsInterface();
	if (!OSSFriendsInterface.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS friends interface"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	int32 LocalUserNum = INDEX_NONE;
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		LocalUserNum = LPSS->GetPlatformUserId();
	}

	TArray<TSharedRef<FOnlineFriend>> OnlineFriendsList;
	if (!OSSFriendsInterface->GetFriendsList(LocalUserNum, ListName, OnlineFriendsList))
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS friends list"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	TOptional<ERHAPI_Platform> LocalPlayerPlatform = RH_GetPlatformFromOSSName(OSS->GetSubsystemName());
	if (!LocalPlayerPlatform.IsSet())
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get local player platform"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	const auto OSSPresenceInterface = OSS->GetPresenceInterface();

	TArray<URH_PlatformFriend*> RHPlatformFriends;
	TArray<FString> ChangedPlatformUserIds;

	// create list of friends from OSS data to process
	for (auto i = 0; i < OnlineFriendsList.Num(); ++i)
	{
		const FOnlineFriend& OnlineFriend = *OnlineFriendsList[i];

		TSharedPtr<FOnlineUserPresence> PresencePtr;
		const bool bSuccessful = OSSPresenceInterface.IsValid() && OSSPresenceInterface->GetCachedPresence(*OnlineFriend.GetUserId(), PresencePtr) == EOnlineCachedResult::Success;
		const FOnlineUserPresence& Presence = bSuccessful ? *PresencePtr : OnlineFriend.GetPresence();

		URH_PlatformFriend* RHPlatformFriend = NewObject<URH_PlatformFriend>(this);
		const FString PlatformUserId = OnlineFriend.GetUserId()->ToString();
		RHPlatformFriend->Init(OnlineFriend, Presence, OSS, PlatformBlockedPlayers.Contains(PlatformUserId));
		RHPlatformFriends.Add(RHPlatformFriend);
		ChangedPlatformUserIds.Add(PlatformUserId);

		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]: Friend %s [%s]: %s %i %i %i %i %s"),
		       ANSI_TO_TCHAR(__FUNCTION__),
		       *OnlineFriend.GetDisplayName(),
		       OnlineFriend.GetUserId()->IsValid() ? *OnlineFriend.GetUserId()->ToString() : TEXT(""),
		       EInviteStatus::ToString(OnlineFriend.GetInviteStatus()),
		       (int32)Presence.bIsOnline,
		       (int32)Presence.bIsJoinable,
		       (int32)Presence.bIsPlaying,
		       (int32)Presence.bIsPlayingThisGame,
		       *Presence.Status.StatusStr);
	}

	// Add known blocked players into the list, so that UpdatePlatformFriends has a full list to work with
	for (const FString& BlockedUserId : PlatformBlockedPlayers)
	{
		if (!ChangedPlatformUserIds.Contains(BlockedUserId))
		{
			URH_PlatformFriend* RHPlatformFriend = NewObject<URH_PlatformFriend>(this);
			const auto BlockedPlatformId = FRH_PlayerPlatformId(BlockedUserId, LocalPlayerPlatform.GetValue());
			RHPlatformFriend->InitBlocked(BlockedPlatformId);
			RHPlatformFriends.Add(RHPlatformFriend);
		}
	}

	// update internal state with new friends data
	UpdatePlatformFriends(RHPlatformFriends);
}

void URH_FriendSubsystem::UpdatePlatformFriends(const TArray<URH_PlatformFriend*>& NewFriends)
{
	for (const auto Friend : Friends)
	{
		Friend->ClearPlatformFriendStatus();
	}

	TArray<URH_RHFriendAndPlatformFriend*> UpdatedFriends;
	for (URH_PlatformFriend* NewFriend : NewFriends)
	{
		const auto ExistingFriend = GetFriendByPlatformId(NewFriend->GetPlayerPlatformId());

		if (ExistingFriend)
		{
			UpdatedFriends.Emplace(ExistingFriend);
			URH_PlatformFriend** ExistingPlatformFriend = ExistingFriend->PlatformFriends.FindByPredicate(
				[NewFriend](const URH_PlatformFriend* PlatformFriend)
				{
					return PlatformFriend->GetPlayerPlatformId() == NewFriend->GetPlayerPlatformId();
				});

			if (ExistingPlatformFriend)
			{
				(*ExistingPlatformFriend)->Init(NewFriend);
			}
			else
			{
				ExistingFriend->PlatformFriends.Add(NewFriend);
			}

			if (!ExistingFriend->PlayerAndPlatformInfo.PlayerPlatformId.IsValid())
			{
				ExistingFriend->PlayerAndPlatformInfo.PlayerPlatformId = NewFriend->GetPlayerPlatformId();
			}
		}
		else
		{
			auto Friend = NewObject<URH_RHFriendAndPlatformFriend>(this);
			UpdatedFriends.Emplace(Friend);
			auto PlatformFriend = NewObject<URH_PlatformFriend>(this);
			PlatformFriend->Init(NewFriend);
			Friend->PlatformFriends.Add(PlatformFriend);

			if (URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem())
			{
				if (URH_PlayerPlatformInfo* PlayerPlatformInfo = PSS->GetOrCreatePlayerPlatformInfo(PlatformFriend->GetPlayerPlatformId()))
				{
					PlayerPlatformInfo->DisplayName = PlatformFriend->GetClientDisplayName();
				}
				Friend->PlayerAndPlatformInfo.PlayerPlatformId = PlatformFriend->GetPlayerPlatformId();

				if (URH_PlayerInfo* PlayerInfo = PSS->FindPlayerInfoByPlatformId(PlatformFriend->GetPlayerPlatformId()))
				{
					Friend->PlayerAndPlatformInfo.PlayerUuid = PlayerInfo->GetRHPlayerUuid();

					Friend->SetPlayerInfoUpdateBindings();
				}
			}

			Friends.Add(Friend);
		}
	}

	RemoveAllFriendsWithNoRelationships(UpdatedFriends);

	if (!FriendsCached)
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendListUpdated, FColor::Purple);
		FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
		BLUEPRINT_FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
		for (const auto UpdatedFriend : UpdatedFriends)
		{
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
		}
	}
}

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByUuid(const FGuid& PlayerId) const
{
	const auto Friend = Friends.FindByPredicate([PlayerId](const URH_RHFriendAndPlatformFriend* RHFriend)
	{
		return RHFriend->GetRHPlayerUuid() == PlayerId;
	});
	return Friend ? *Friend : nullptr;
}

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByUuidOrPlatformId(
	const FGuid& PlayerId, const FRH_PlayerPlatformId& PlayerPlatformId) const
{
	if (PlayerId.IsValid())
	{
		if (const auto Result = GetFriendByUuid(PlayerId))
		{
			return Result;
		}
	}

	return GetFriendByPlatformId(PlayerPlatformId);
}

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetOrCreateFriend(URH_PlayerInfo* PlayerInfo)
{
	if (PlayerInfo == nullptr)
	{
		return nullptr;
	}

	if (URH_RHFriendAndPlatformFriend* Friend = GetFriendByUuid(PlayerInfo->GetRHPlayerUuid()))
	{
		return Friend;
	}
	return CreateFriendObject(PlayerInfo->GetRHPlayerUuid());
}

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByPlayerInfo(URH_PlayerInfo* PlayerInfo) const
{
	const auto Friend = Friends.FindByPredicate([PlayerInfo](const URH_RHFriendAndPlatformFriend* RHFriend)
		{
			return RHFriend->PlayerAndPlatformInfo.PlayerUuid == PlayerInfo->GetRHPlayerUuid();
		});
	return Friend ? *Friend : nullptr;
}

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByPlatformId(const FRH_PlayerPlatformId& PlayerPlatformId) const
{
	if (const auto PlayerInfoSubsystem = GetRH_PlayerInfoSubsystem())
	{
		if (const auto PlayerInfo = PlayerInfoSubsystem->FindPlayerInfoByPlatformId(PlayerPlatformId))
		{
			if (const auto Friend = GetFriendByPlayerInfo(PlayerInfo))
			{
				return Friend;
			}
		}
	}

	for (const auto RHFriend : Friends)
	{
		const auto Friend = RHFriend->PlatformFriends.FindByPredicate(
			[PlayerPlatformId](const URH_PlatformFriend* PlatformFriend)
			{
				return PlatformFriend->GetPlayerPlatformId() == PlayerPlatformId;
			});

		if (Friend)
		{
			return RHFriend;
		}
	}

	return nullptr;
}

void URH_FriendSubsystem::ClearBlockedCache()
{
	TArray<FGuid> OldEntries = BlockedPlayersUUIDs;

	BlockedPlayersUUIDs.Empty();
	BlockedPlayersETag.Empty();

	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedListUpdated, FColor::Purple);
		const TArray<FRHAPI_BlockedPlayer> EmptyArray;
		BlockedListUpdatedDelegate.Broadcast(EmptyArray);
		BLUEPRINT_BlockedListUpdatedDelegate.Broadcast(EmptyArray);
	}

	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
		for (const auto& OldEntry : OldEntries)
		{
			BlockedPlayerUpdatedDelegate.Broadcast(OldEntry, false);
			BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(OldEntry, false);
		}
	}
}

void URH_FriendSubsystem::ClearRHFriendCache()
{
	for (const auto Friend : Friends)
	{
		Friend->ClearRHFriendStatus();
	}

	TArray<URH_RHFriendAndPlatformFriend*> Out;
	RemoveAllFriendsWithNoRelationships(Out);

	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendListUpdated, FColor::Purple);
		FriendListUpdatedDelegate.Broadcast(Out);
		BLUEPRINT_FriendListUpdatedDelegate.Broadcast(Out);
	}

	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
		for (const auto UpdatedFriend : Out)
		{
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
		}
	}

	FriendsETag.Empty();
	FriendsCached = false;
}

void URH_FriendSubsystem::OnFetchFriendForAdd(const GetFriendRelationshipType::Response& Resp,
												const FRH_AddFriendBlock Delegate,
												AddFriendType::Request Request,
												int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch = Resp.TryGetDefaultHeaderAsOptional_ETag();
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	AddFriendType::DoCall(RH_APIs::GetFriendsAPI(), Request, AddFriendType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnAddFriendResponse,
		Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->AddFriendPriority);
}

void URH_FriendSubsystem::OnFetchFriendForRemove(const GetFriendRelationshipType::Response& Resp,
												const FRH_GenericFriendWithUuidBlock Delegate,
												DeleteFriendType::Request Request,
                                                int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch = Resp.TryGetDefaultHeaderAsOptional_ETag();
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	DeleteFriendType::DoCall(RH_APIs::GetFriendsAPI(), Request, DeleteFriendType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnRemoveFriendResponse,
			Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->RemoveFriendPriority);
}

void URH_FriendSubsystem::OnFetchFriendForAddNote(const GetFriendRelationshipType::Response& Resp,
												const FRH_AddNotesBlock Delegate,
                                                AddNotesType::Request Request,
                                                int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch = Resp.TryGetDefaultHeaderAsOptional_ETag();
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	AddNotesType::DoCall(RH_APIs::GetFriendsAPI(), Request, AddNotesType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnAddNotesResponse,
			Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->AddFriendNotesPriority);
}

void URH_FriendSubsystem::OnFetchFriendForDeleteNote(const GetFriendRelationshipType::Response& Resp,
													const FRH_GenericFriendWithUuidBlock Delegate,
													DeleteNotesType::Request Request,
													int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch = Resp.TryGetDefaultHeaderAsOptional_ETag();
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	DeleteNotesType::DoCall(RH_APIs::GetFriendsAPI(), Request, DeleteNotesType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnDeleteNotesResponse,
		Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->DeleteFriendNotesPriority);
}

void URH_FriendSubsystem::RemoveAllFriendsWithNoRelationships(TArray<URH_RHFriendAndPlatformFriend*>& OutArray)
{
	FGuid LocalPlayerUuid;
	TArray<URH_SessionView*> Sessions;
	if (const URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		LocalPlayerUuid = LPSS->GetPlayerUuid();
		if (const URH_LocalPlayerSessionSubsystem* SessionSubsystem = LPSS->GetSessionSubsystem())
		{
			Sessions = SessionSubsystem->GetSessions();
		}
	}

	const bool bLocalPlayerUuidIsValid = LocalPlayerUuid.IsValid();

	for (auto i = Friends.Num() - 1; i >= 0; --i)
	{
		auto Friend = Friends[i];
		const auto FriendUuid = Friend->GetRHPlayerUuid();
		if (Friend->HaveAnyRelationship() || (bLocalPlayerUuidIsValid && FriendUuid == LocalPlayerUuid))
		{
			continue;
		}

		if (FriendUuid.IsValid())
		{
			bool bFoundFriendInSession = false;

			for (const URH_SessionView* Session : Sessions)
			{
				if (Session->GetSessionPlayer(FriendUuid))
				{
					bFoundFriendInSession = true;
					break;
				}
			}

			if (bFoundFriendInSession)
			{
				continue;
			}
		}

		OutArray.Emplace(Friend);
		Friends.RemoveAt(i, 1);
	}
}

bool URH_FriendSubsystem::FetchBlockedList(const FRH_GenericFriendBlock& Delegate /* = FRH_GenericFriendBlock() */)
{
	auto Request = GetBlockedListType::Request();
	auto AuthContext = GetAuthContext();
	Request.Page.Emplace(0);
	Request.Limit.Emplace(10000);
	Request.AuthContext = AuthContext;
	FRH_ObjectVersionCheck::ApplyDefaultGetBehavior(Request, BlockedPlayersETag);

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	if (!GetBlockedListType::DoCall(RH_APIs::GetFriendsAPI(), Request, GetBlockedListType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnFetchBlockedListResponse,
		Delegate), GetDefault<URH_IntegrationSettings>()->FetchBlockedListPriority))
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchBlockedListResponse(const GetBlockedListType::Response& Resp, const FRH_GenericFriendBlock Delegate)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		Resp.TryGetDefaultHeader_ETag(BlockedPlayersETag);

		TArray<FGuid> OldEntries = BlockedPlayersUUIDs;
		TArray<FRHAPI_BlockedPlayer> BroadcastingArray;
		BlockedPlayersUUIDs.Empty();

		for (auto Blocked : Content->Blocked)
		{
			BlockedPlayersUUIDs.Emplace(Blocked.BlockedPlayerUuid);
			BroadcastingArray.Emplace(Blocked);
		}

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedListUpdated, FColor::Purple);
			BlockedListUpdatedDelegate.Broadcast(BroadcastingArray);
			BLUEPRINT_BlockedListUpdatedDelegate.Broadcast(BroadcastingArray);
		}

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
			for (const auto& OldEntry : OldEntries)
			{
				if (!BlockedPlayersUUIDs.Contains(OldEntry))
				{
					BlockedPlayerUpdatedDelegate.Broadcast(OldEntry, false);
					BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(OldEntry, false);
				}
			}
		}

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
			for (auto& Entry : BroadcastingArray)
			{
				if (!OldEntries.FindByPredicate([Entry](FGuid BlockedPlayerUUID)
					{
						return Entry.BlockedPlayerUuid == BlockedPlayerUUID;
					}))
				{
					BlockedPlayerUpdatedDelegate.Broadcast(Entry.BlockedPlayerUuid, true);
					BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(Entry.BlockedPlayerUuid, true);
				}
			}
		}

		if (BlockedListPoller.IsValid())
		{
			BlockedListPoller->DeferPollTimer();
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified);
}

bool URH_FriendSubsystem::FetchBlockedPlayer(const FGuid& PlayerUUID, const FRH_GenericFriendWithUuidBlock& Delegate /* = FRH_GenericFriendWithUuidBlock() */)
{
	if (!PlayerUUID.IsValid())
	{
		return false;
	}

	auto Request = GetBlockedType::Request();
	auto AuthContext = GetAuthContext();
	Request.OtherPlayerUuid = PlayerUUID;
	Request.AuthContext = AuthContext;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	if (!GetBlockedType::DoCall(RH_APIs::GetFriendsAPI(), Request, GetBlockedType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchBlockedPlayerResponse, Delegate, Request.OtherPlayerUuid), GetDefault<URH_IntegrationSettings>()->FetchBlockedPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchBlockedPlayerResponse(const GetBlockedType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
		auto blocked = *Content;
		BlockedPlayersUUIDs.Emplace(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
		BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified, PlayerUuid);
}

bool URH_FriendSubsystem::BlockPlayer(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate /* = FRH_GenericFriendWithUuidBlock() */)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = BlockType::Request();
	auto AuthContext = GetAuthContext();
	Request.OtherPlayerUuid = PlayerUuid;
	Request.AuthContext = AuthContext;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	if (!BlockType::DoCall(RH_APIs::GetFriendsAPI(), Request, BlockType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnBlockPlayerResponse,
		Delegate, Request.OtherPlayerUuid), GetDefault<URH_IntegrationSettings>()->BlockUnblockPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnBlockPlayerResponse(const BlockType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
{
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
		auto blocked = *Content;
		BlockedPlayersUUIDs.Emplace(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
		BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdatedError, FColor::Purple);
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		BlockedPlayerUpdateErrorDelegate.Broadcast(PlayerUuid, ErrorCode);
		BLUEPRINT_BlockedPlayerUpdateErrorDelegate.Broadcast(PlayerUuid, ErrorCode);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful(), PlayerUuid);
}

bool URH_FriendSubsystem::UnblockPlayer(const FGuid& PlayerUuid, const FRH_GenericFriendWithUuidBlock& Delegate /* = FRH_GenericFriendWithUuidBlock() */)
{
	if (!PlayerUuid.IsValid())
	{
		return false;
	}

	auto Request = UnblockType::Request();
	auto AuthContext = GetAuthContext();
	Request.AuthContext = AuthContext;
	Request.OtherPlayerUuid = PlayerUuid;

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	if (!UnblockType::DoCall(RH_APIs::GetFriendsAPI(), Request, UnblockType::Delegate::CreateUObject(
		this,
		&URH_FriendSubsystem::OnUnblockPlayerResponse,
		Delegate, Request.OtherPlayerUuid), GetDefault<URH_IntegrationSettings>()->BlockUnblockPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
	}

	return true;
}

void URH_FriendSubsystem::OnUnblockPlayerResponse(const UnblockType::Response& Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
{
	if (Resp.IsSuccessful())
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
		BlockedPlayersUUIDs.Remove(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, false);
		BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, false);
	}
	else
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdatedError, FColor::Purple);
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		BlockedPlayerUpdateErrorDelegate.Broadcast(PlayerUuid, ErrorCode);
		BLUEPRINT_BlockedPlayerUpdateErrorDelegate.Broadcast(PlayerUuid, ErrorCode);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful(), PlayerUuid);
}

void URH_FriendSubsystem::StartFriendsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	static FName PollTimerName(TEXT("FriendsList"));

	if (FriendsListPoller.IsValid())
	{
		FriendsListPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_FriendSubsystem::PollFriendsList), PollTimerName, true);
	}
}

void URH_FriendSubsystem::PollFriendsList(const FRH_PollCompleteFunc& Delegate)
{
	auto AuthContext = GetAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	auto bPoll = FetchFriendsList(FRH_GenericFriendDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess)
		{
			Delegate.ExecuteIfBound(bSuccess, true);
		}));

	if (!bPoll)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] failed to fetch friends list."), ANSI_TO_TCHAR(__FUNCTION__));
	}
}

void URH_FriendSubsystem::StopFriendsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (FriendsListPoller.IsValid())
	{
		FriendsListPoller->StopPoll();
	}
}

void URH_FriendSubsystem::StartBlockedRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	static FName PollTimerName(TEXT("BlockedPlayersList"));

	if (BlockedListPoller.IsValid())
	{
		BlockedListPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_FriendSubsystem::PollBlockedPlayers), PollTimerName, true);
	}
}

void URH_FriendSubsystem::PollBlockedPlayers(const FRH_PollCompleteFunc& Delegate)
{
	auto AuthContext = GetAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	auto bPoll = FetchBlockedList(FRH_GenericFriendDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess)
		{
			Delegate.ExecuteIfBound(bSuccess, true);
		}));

	if (!bPoll)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] failed to fetch blocked list."), ANSI_TO_TCHAR(__FUNCTION__));
	}
}

void URH_FriendSubsystem::StopBlockedRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (BlockedListPoller.IsValid())
	{
		BlockedListPoller->StopPoll();
	}
}

void URH_FriendSubsystem::PostReloadConfig(FProperty* PropertyThatWasLoaded)
{
}

FName URH_FriendSubsystem::ExtractErrorCodeFromResponse(const FHttpResponsePtr& Response) const
{
	if (!Response.IsValid())
	{
		return UnexpectedErrorCode;
	}

	FString ContentType = Response->GetContentType();
	ContentType.TrimStartAndEndInline();
	if (!ContentType.StartsWith(TEXT("application/json")) && !ContentType.StartsWith(TEXT("text/json")))
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Failed to get error_code from Http response"), ANSI_TO_TCHAR(__FUNCTION__));
		return UnexpectedErrorCode; // Nothing to parse
	}
	const auto Content = Response->GetContentAsString();
	TSharedPtr<FJsonValue> JsonValue;
	const auto Reader = TJsonReaderFactory<>::Create(Content);
	if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
	{
		const TSharedPtr<FJsonObject>* JsonObject;
		if (JsonValue->TryGetObject(JsonObject))
		{
			const TSharedPtr<FJsonValue> FieldValue = JsonObject->Get()->TryGetField(TEXT("error_code"));
			if (FieldValue.IsValid() && !FieldValue->IsNull())
			{
				FString ErrorString;
				FieldValue->TryGetString(ErrorString);
				return FName(ErrorString);
			}
		}
	}
	UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Failed to get error_code from Http response"), ANSI_TO_TCHAR(__FUNCTION__));
	return UnexpectedErrorCode;
}

URH_PlayerInfoSubsystem* URH_FriendSubsystem::GetRH_PlayerInfoSubsystem() const
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		return LPSS->GetPlayerInfoSubsystem();
	}

	return nullptr;
}

void URH_FriendSubsystem::UpdateRecentPlayerForOSS(const URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const FGuid& PlayerUuid)
{
	if (!PlayerUuid.IsValid())
	{
		return;
	}

	if (URH_PlayerInfoSubsystem* PlayerInfoSubsystem = GetRH_PlayerInfoSubsystem())
	{
		if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetOrCreatePlayerInfo(PlayerUuid))
		{
			// weak versions for async operations
			TWeakObjectPtr<const URH_LocalPlayerSubsystem> LocalPlayerSubsystemWeak = LocalPlayerSubsystem;
			TWeakObjectPtr<URH_PlayerInfo> PlayerInfoWeak = PlayerInfo;
			
			IOnlineSubsystem* OSS = IOnlineSubsystem::Get();

			auto IdentityInterface = OSS->GetIdentityInterface();
			if (!IdentityInterface.IsValid())
			{
				return;
			}

			FName TargetPlatfromName = FName();

			if (URH_PlayerPresence* PlayerPresence = PlayerInfo->GetPresence())
			{
				if (PlayerPresence->bInitialized)
				{
					TargetPlatfromName = FName(PlayerPresence->Platform);
				}
				else
				{
					PlayerPresence->RequestUpdate(false, FRH_OnRequestPlayerInfoSubobjectDelegate::CreateWeakLambda(this, [this, LocalPlayerSubsystemWeak, PlayerInfoWeak](bool bSuccess, URH_PlayerInfoSubobject* Subobj)
						{
							auto OSS = IOnlineSubsystem::Get();
						
							auto Presence = Cast<URH_PlayerPresence>(Subobj);
							if (bSuccess && Presence != nullptr)
							{
								if (OSS != nullptr && PlayerInfoWeak.IsValid() && FName(Presence->Platform) == OSS->GetSubsystemName())
								{
									PlayerInfoWeak->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateWeakLambda(this, [this, LocalPlayerSubsystemWeak](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
										{
											if (LocalPlayerSubsystemWeak.IsValid())
											{
												auto LocalPlayerSubsystem = LocalPlayerSubsystemWeak.Get();
												const auto LoggedInPlatform = LocalPlayerSubsystem->GetLoggedInPlatform();

												auto OSS = IOnlineSubsystem::Get();
												auto IdentityInterface = OSS != nullptr ? OSS->GetIdentityInterface() : nullptr;
												
												if (LoggedInPlatform.IsSet() && IdentityInterface.IsValid())
												{
													for (const auto& Platform : Platforms)
													{
														if (Platform != nullptr && Platform->GetPlatform() == LoggedInPlatform.GetValue())
														{
															TSharedPtr<const FUniqueNetId> PlayerUniqueNetId = IdentityInterface->CreateUniquePlayerId(Platform->GetPlatformUserId());

															URH_FriendSubsystem::UpdateRecentPlayerForOSS(LocalPlayerSubsystem, PlayerUniqueNetId);
															return;
														}
													}
												}
											}
										}));
								}
							}
						}));
					return;
				}
			}

			if (TargetPlatfromName == OSS->GetSubsystemName())
			{
				PlayerInfo->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateWeakLambda(this, [this, LocalPlayerSubsystemWeak](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
					{
						if (LocalPlayerSubsystemWeak.IsValid())
						{
							auto LocalPlayerSubsystem = LocalPlayerSubsystemWeak.Get();
							const auto LoggedInPlatform = LocalPlayerSubsystem->GetLoggedInPlatform();

							auto OSS = IOnlineSubsystem::Get();
							auto IdentityInterface = OSS != nullptr ? OSS->GetIdentityInterface() : nullptr;
					
							if (LoggedInPlatform.IsSet() && IdentityInterface != nullptr)
							{
								for (const auto& Platform : Platforms)
								{
									if (Platform != nullptr && Platform->GetPlatform() == LoggedInPlatform.GetValue())
									{
										TSharedPtr<const FUniqueNetId> PlayerUniqueNetId = IdentityInterface->CreateUniquePlayerId(Platform->GetPlatformUserId());

										URH_FriendSubsystem::UpdateRecentPlayerForOSS(LocalPlayerSubsystem, PlayerUniqueNetId);
										return;
									}
								}
							}
						}
					}));
			}
		}
	}
}

void URH_FriendSubsystem::UpdateRecentPlayerForOSS(const URH_LocalPlayerSubsystem* LocalPlayerSubsystem, const TSharedPtr<const FUniqueNetId>& RecentPlayerId)
{
	if (LocalPlayerSubsystem == nullptr)
	{
		return;
	}

	const FUniqueNetIdWrapper& LocalPlayerUniqueId = LocalPlayerSubsystem->GetOSSUniqueId();

	if (!LocalPlayerUniqueId.IsValid() || !RecentPlayerId.IsValid())
	{
		return;
	}

	if (*RecentPlayerId == *LocalPlayerUniqueId.GetUniqueNetId())
	{
		return;
	}

	IOnlineSubsystem* OSS = IOnlineSubsystem::Get();
	IOnlineFriendsPtr Friends = OSS ? OSS->GetFriendsInterface() : nullptr;
	if (!Friends.IsValid() || !RH_UseRecentPlayersFromOSSName(OSS->GetSubsystemName()))
	{
		return;
	}

	TArray<FReportPlayedWithUser> RecentPlayers;
	RecentPlayers.Add(FReportPlayedWithUser(RecentPlayerId.ToSharedRef(), FString()));
	Friends->AddRecentPlayers(*LocalPlayerUniqueId.GetUniqueNetId(), RecentPlayers, TEXT("Match"), FOnAddRecentPlayersComplete());
}

///

URH_RHFriendAndPlatformFriend::URH_RHFriendAndPlatformFriend() :
	Super(),
	PlayerAndPlatformInfo{},
	RHFriendshipStatus{},
	PreviousRHFriendshipStatus{},
	LastModifiedOn{},
	Notes{},
	PlatformFriends{},
	Etag{},
	bHasRHFriendStatus{},
	bPreviousHadRHFriendStatus{}
{
}

URH_FriendSubsystem* URH_RHFriendAndPlatformFriend::GetFriendSubsystem() const
{
	return CastChecked<URH_FriendSubsystem>(GetOuter());
}

const FRH_PlayerPlatformId& GetPlayerPlatformId(const FRH_PlayerAndPlatformInfo& PlayerAndPlatformInfo, const URH_PlayerInfoSubsystem* PlayerInfoSubsystem, const ERHAPI_Platform& LocalPlayerPlatform)
{
	if (PlayerAndPlatformInfo.PlayerPlatformId.IsValid())
	{
		return PlayerAndPlatformInfo.PlayerPlatformId;
	}

	if (PlayerInfoSubsystem != nullptr)
	{
		if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetPlayerInfo(PlayerAndPlatformInfo.PlayerUuid))
		{
			for (const auto& PlayerInfoPlatformId : PlayerInfo->GetPlayerPlatformIds())
			{
				if (PlayerInfoPlatformId.PlatformType == LocalPlayerPlatform)
				{
					return PlayerInfoPlatformId;
				}
			}
		}
	}

	static FRH_PlayerPlatformId InvalidPlayerPlatformId;
	return InvalidPlayerPlatformId;
}

bool URH_RHFriendAndPlatformFriend::CanViewPlatformProfile() const
{
	const URH_PlayerInfoSubsystem* PlayerInfoSubsystem = GetFriendSubsystem()->GetRH_PlayerInfoSubsystem();
	if (PlayerInfoSubsystem == nullptr)
	{
		return false;
	}

	const auto* OSS = IOnlineSubsystem::Get();
	if (OSS == nullptr || !RH_PlatformSupportsViewProfile(OSS->GetSubsystemName()))
	{
		return false;
	}

	TOptional<ERHAPI_Platform> LocalPlayerPlatform = RH_GetPlatformFromOSSName(OSS->GetSubsystemName());
	if (!LocalPlayerPlatform.IsSet())
	{
		return false;
	}

	const FRH_PlayerPlatformId& PlatformId = GetPlayerPlatformId(GetPlayerAndPlatformInfo(), PlayerInfoSubsystem, LocalPlayerPlatform.GetValue());
	if (!PlatformId.IsValid())
	{
		return false;
	}

	const URH_PlayerPlatformInfo* PlayerPlatformInfo = PlayerInfoSubsystem->GetPlayerPlatformInfo(PlatformId);
	return PlayerPlatformInfo != nullptr && PlayerPlatformInfo->GetPlatform() == LocalPlayerPlatform.GetValue();
}

bool URH_RHFriendAndPlatformFriend::ViewPlatformProfile() const
{
	const auto* OSS = IOnlineSubsystem::Get();
	if (OSS == nullptr)
	{
		return false;
	}

	const auto ExternalUI = OSS->GetExternalUIInterface();
	if (ExternalUI == nullptr)
	{
		return false;
	}

	const auto* PlayerInfoSubsystem = GetFriendSubsystem()->GetRH_PlayerInfoSubsystem();
	if (PlayerInfoSubsystem == nullptr)
	{
		return false;
	}

	TOptional<ERHAPI_Platform> LocalPlayerPlatform = RH_GetPlatformFromOSSName(OSS->GetSubsystemName());
	if (!LocalPlayerPlatform.IsSet())
	{
		return false;
	}

	const FRH_PlayerPlatformId& PlatformId = GetPlayerPlatformId(GetPlayerAndPlatformInfo(), PlayerInfoSubsystem, LocalPlayerPlatform.GetValue());
	if (!PlatformId.IsValid())
	{
		return false;
	}

	const auto* PlayerPlatformInfo = PlayerInfoSubsystem->GetPlayerPlatformInfo(PlatformId);
	if (PlayerPlatformInfo != nullptr)
	{
		const auto* LPSS = GetFriendSubsystem()->GetLocalPlayerSubsystem();
		if (LPSS != nullptr)
		{
			const auto Requestor = UOnlineEngineInterface::Get()->CreateUniquePlayerIdWrapper(LPSS->GetPlayerPlatformId().UserId);
			const auto Requestee = UOnlineEngineInterface::Get()->CreateUniquePlayerIdWrapper(PlayerPlatformInfo->PlayerPlatformId.UserId);
			return ExternalUI->ShowProfileUI(*Requestor, *Requestee);
		}
	}

	return false;
}

URH_PlayerInfo* URH_RHFriendAndPlatformFriend::GetPlayerInfo() const
{
	const auto* PlayerInfoSubsystem = GetFriendSubsystem()->GetRH_PlayerInfoSubsystem();

	if (PlayerInfoSubsystem != nullptr)
	{
		return PlayerInfoSubsystem->GetPlayerInfo(PlayerAndPlatformInfo.PlayerUuid);
	}

	return nullptr;
}

FString URH_RHFriendAndPlatformFriend::GetLastKnownDisplayName(ERHAPI_Platform PreferredPlatformType /*= ERHAPI_Platform::Anon*/) const
{
	const auto* PlayerInfoSubsystem = GetFriendSubsystem()->GetRH_PlayerInfoSubsystem();

	if (PlayerInfoSubsystem != nullptr)
	{
		if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetPlayerInfo(PlayerAndPlatformInfo.PlayerUuid))
		{
			FString DisplayName;
			if (PlayerInfo->GetLastKnownDisplayName(DisplayName, PreferredPlatformType))
			{
				return DisplayName;
			}
		}

		if (URH_PlayerPlatformInfo* PlayerPlatformInfo = PlayerInfoSubsystem->GetPlayerPlatformInfo(PlayerAndPlatformInfo.PlayerPlatformId))
		{
			return PlayerPlatformInfo->GetLastKnownDisplayName();
		}
	}

	return FString();
}

void URH_RHFriendAndPlatformFriend::GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, ERHAPI_Platform PreferredPlatformType /*= ERHAPI_Platform::Anon*/, const FRH_PlayerInfoGetDisplayNameBlock& Delegate /*= FRH_PlayerInfoGetDisplayNameBlock()*/) const
{
	const auto* PlayerInfoSubsystem = GetFriendSubsystem()->GetRH_PlayerInfoSubsystem();

	if (PlayerInfoSubsystem != nullptr)
	{
		if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetPlayerInfo(PlayerAndPlatformInfo.PlayerUuid))
		{
			PlayerInfo->GetLastKnownDisplayNameAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate);
			return;
		}

		if (const URH_PlayerPlatformInfo* PlayerPlatformInfo = PlayerInfoSubsystem->GetPlayerPlatformInfo(PlayerAndPlatformInfo.PlayerPlatformId))
		{
			Delegate.ExecuteIfBound(true, PlayerPlatformInfo->GetLastKnownDisplayName());
			return;
		}

		Delegate.ExecuteIfBound(false, FString());
	}
	else
	{
		Delegate.ExecuteIfBound(false, FString());
	}
}

void URH_RHFriendAndPlatformFriend::GetRHPlayerUuidAsync(const FRH_GetRHPlayerUuidBlock& Delegate /*= FRH_GetRHPlayerUuidBlock()*/)
{
	if (GetRHPlayerUuid().IsValid())
	{
		Delegate.ExecuteIfBound(true, GetRHPlayerUuid());
		return;
	}

	if (!GetPlayerAndPlatformInfo().PlayerPlatformId.IsValid())
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return;
	}

	auto* PlayerInfoSubsystem = GetFriendSubsystem()->GetRH_PlayerInfoSubsystem();
	if (PlayerInfoSubsystem != nullptr)
	{
		PlayerInfoSubsystem->LookupPlayerByPlatformUserId(GetPlayerAndPlatformInfo().PlayerPlatformId, FRH_PlayerInfoLookupPlayerDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const TArray<URH_PlayerInfo*>& PlayerInfos)
		{
			auto FriendSubsystem = GetFriendSubsystem();
			
			if (bSuccess && PlayerInfos.IsValidIndex(0) && PlayerInfos[0] != nullptr)
			{
				const auto PlayerUuid = PlayerInfos[0]->GetRHPlayerUuid();
				if (PlayerUuid.IsValid())
				{
					PlayerAndPlatformInfo.PlayerUuid = PlayerUuid;

					// do not set up bindings for blocked players
					if (!FriendSubsystem->IsPlayerBlocked(PlayerUuid))
					{
						SetPlayerInfoUpdateBindings();
					}
					
					Delegate.ExecuteIfBound(true, PlayerUuid);
				}
				else
				{
					Delegate.ExecuteIfBound(false, FGuid());
				}
			}
			else
			{
				Delegate.ExecuteIfBound(false, FGuid());
			}
		}));
	}
	else
	{
		Delegate.ExecuteIfBound(false, FGuid());
	}
}

void URH_RHFriendAndPlatformFriend::SetPlayerInfoUpdateBindings()
{
	if (!GetRHPlayerUuid().IsValid())
	{
		return;
	}

	auto FriendSubsystem = GetFriendSubsystem();
	
	auto* PlayerInfoSubsystem = FriendSubsystem->GetRH_PlayerInfoSubsystem();
	if (PlayerInfoSubsystem != nullptr)
	{
		if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetOrCreatePlayerInfo(GetRHPlayerUuid()))
		{
			if (!PlayerInfo->GetPresence()->OnUpdatedDelegate.IsBoundToObject(this))
			{
				PlayerInfo->GetPresence()->OnUpdatedDelegate.AddUObject(this, &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
			}
		}
	}

	if (!OnPresenceUpdatedDelegate.IsBoundToObject(FriendSubsystem))
	{
		OnPresenceUpdatedDelegate.AddUObject(FriendSubsystem, &URH_FriendSubsystem::OnPresenceUpdated);
	}
}

