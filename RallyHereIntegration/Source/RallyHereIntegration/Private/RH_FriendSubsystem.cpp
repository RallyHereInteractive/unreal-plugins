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

	StartFriendsRefreshTimer();
	StartBlockedRefreshTimer();

	InitPropertiesWithDefaultValues();
}

void URH_FriendSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
	InitPropertiesWithDefaultValues();
	StopFriendsRefreshTimer();
	StopBlockedRefreshTimer();

	FriendsListPoller.Reset();
	BlockedListPoller.Reset();
}

void URH_FriendSubsystem::OnUserChanged()
{
	Super::OnUserChanged();
	InitPropertiesWithDefaultValues();
}

void URH_FriendSubsystem::InitPropertiesWithDefaultValues()
{
	Friends.Empty();
	FriendsETag = {};
	BlockedPlayersUUIDs.Empty();
	BlockedPlayersETag = {};
}

bool URH_FriendSubsystem::FetchFriendsList(FRH_GenericFriendBlock Delegate /* = FRH_GenericFriendBlock() */)
{
	auto Request = GetFriendsListType::Request();

	auto AuthContext = GetAuthContext();

	Request.Page.Emplace(0);
	Request.Limit.Emplace(10000);
	Request.AuthContext = AuthContext;
	Request.IfNoneMatch.Emplace(FriendsETag);

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

	if (!GetFriendsListType::DoCall(RH_APIs::GetFriendsV2API(), Request, GetFriendsListType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendsListResponse, Delegate), GetDefault<URH_IntegrationSettings>()->FetchFriendListPriority))
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchFriendsListResponse(const GetFriendsListType::Response& Resp, FRH_GenericFriendBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet() && !Resp.ETag->IsEmpty())
		{
			//TODO This not being set atm
			FriendsETag = Resp.ETag.GetValue();
		}
		//TODO Remove once etag is fixed
		FriendsETag = Resp.GetHttpResponse()->GetHeader("etag");

		for (const auto Friend : Friends)
		{
			Friend->ClearRHFriendStatus();
		}

		auto GetLinkedPlatformInfoHandler = [this](const TArray<URH_PlayerPlatformInfo*>& Platforms, URH_RHFriendAndPlatformFriend* MainFriend)
			{
				for (URH_PlayerPlatformInfo* Platform : Platforms)
				{
					TArray< URH_RHFriendAndPlatformFriend*> AllFriends = Friends;
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
				}
			};

		URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem();

		TArray<URH_RHFriendAndPlatformFriend*> UpdatedFriends;
		for (auto NewFriend : Resp.Content.Friends)
		{
			const auto ExistingFriend = Friends.FindByPredicate([NewFriend](const URH_RHFriendAndPlatformFriend* cachedFr)
				{
					return cachedFr->GetRHPlayerUuid() == NewFriend.FriendsPlayerUuid;
				});

			if (ExistingFriend)
			{
				if ((*ExistingFriend)->LastModifiedOn != NewFriend.LastModifiedOn)
				{
					UpdatedFriends.Emplace(*ExistingFriend);
				}
				
				if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
				{
					PlayerInfo->OnPresenceUpdatedDelegate.AddUObject((*ExistingFriend), &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
					PlayerInfo->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateLambda([GetLinkedPlatformInfoHandler, ExistingFriend](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
						{
							if (bSuccess)
							{
								GetLinkedPlatformInfoHandler(Platforms, *ExistingFriend);
							}
						}));
				}

				(*ExistingFriend)->OnPresenceUpdatedDelegate.AddUObject(this, &URH_FriendSubsystem::OnPresenceUpdated);
				(*ExistingFriend)->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
				(*ExistingFriend)->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
				(*ExistingFriend)->LastModifiedOn = NewFriend.LastModifiedOn;
				NewFriend.GetNotes((*ExistingFriend)->Notes);
			}
			else
			{
				auto NewEntry = NewObject<URH_RHFriendAndPlatformFriend>(this);
				if (!FriendsCached)
				{
					NewEntry->PreviousRHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
				}
				
				if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
				{
					PlayerInfo->OnPresenceUpdatedDelegate.AddUObject(NewEntry, &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
					PlayerInfo->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateLambda([GetLinkedPlatformInfoHandler, NewEntry](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
						{
							if (bSuccess)
							{
								GetLinkedPlatformInfoHandler(Platforms, NewEntry);
							}
						}));
				}

				NewEntry->OnPresenceUpdatedDelegate.AddUObject(this, &URH_FriendSubsystem::OnPresenceUpdated);
				NewEntry->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
				NewEntry->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
				NewEntry->LastModifiedOn = NewFriend.LastModifiedOn;
				NewFriend.GetNotes(NewEntry->Notes);
				Friends.Emplace(NewEntry);
				UpdatedFriends.Emplace(NewEntry);
			}
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

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == 304);
}

bool URH_FriendSubsystem::FetchFriend(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate /* = FRH_GenericFriendWithUuidBlock() */)
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

	if (!GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), Request, GetFriendRelationshipType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendResponse, Delegate), GetDefault<URH_IntegrationSettings>()->FetchFriendPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchFriendResponse(const GetFriendRelationshipType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		auto NewFriend = Resp.Content;
		URH_RHFriendAndPlatformFriend* UpdatedFriend;
		if (const auto ExistingFriend = GetFriendByUuid(Resp.Content.FriendsPlayerUuid))
		{
			UpdatedFriend = ExistingFriend;
			if (URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem())
			{
				ExistingFriend->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
				if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
				{
					PlayerInfo->OnPresenceUpdatedDelegate.AddUObject(ExistingFriend, &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
				}

				ExistingFriend->OnPresenceUpdatedDelegate.AddUObject(this, &URH_FriendSubsystem::OnPresenceUpdated);
			}
			ExistingFriend->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
			ExistingFriend->LastModifiedOn = NewFriend.LastModifiedOn;
			ExistingFriend->Etag = Resp.GetHttpResponse()->GetHeader("etag");
			NewFriend.GetNotes(ExistingFriend->Notes);
		}
		else
		{
			auto newEntry = NewObject<URH_RHFriendAndPlatformFriend>(this);
			UpdatedFriend = newEntry;
			if (URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem())
			{
				newEntry->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
				if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
				{
					PlayerInfo->OnPresenceUpdatedDelegate.AddUObject(newEntry, &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
				}

				newEntry->OnPresenceUpdatedDelegate.AddUObject(this, &URH_FriendSubsystem::OnPresenceUpdated);
			}
			newEntry->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
			newEntry->LastModifiedOn = NewFriend.LastModifiedOn;
			newEntry->Etag = Resp.GetHttpResponse()->GetHeader("etag");
			NewFriend.GetNotes(newEntry->Notes);
			Friends.Emplace(newEntry);
		}

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastFriendUpdated, FColor::Purple);
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
			BLUEPRINT_FriendUpdatedDelegate.Broadcast(UpdatedFriend);
		}
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == 304, Resp.Content.FriendsPlayerUuid);
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
			Request.IfNoneMatch.Emplace(Friend->Etag);
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

bool URH_FriendSubsystem::AddFriend(const FGuid& PlayerUuid, FRH_AddFriendBlock Delegate /* = FRH_AddFriendBlock() */)
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

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendForAdd,
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

	if (!AddFriendType::DoCall(RH_APIs::GetFriendsV2API(), Request, AddFriendType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnAddFriendResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->AddFriendPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid(), FriendshipStatus::RH_None);
		return false;
	}
	return true;
}

void URH_FriendSubsystem::OnAddFriendResponse(const AddFriendType::Response& Resp, FRH_AddFriendBlock Delegate, AddFriendType::Request Request, int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		auto NewFriend = Resp.Content;
		URH_RHFriendAndPlatformFriend* UpdatedFriend;
		if (const auto ExistingFriend = GetFriendByUuid(Resp.Content.FriendsPlayerUuid))
		{
			UpdatedFriend = ExistingFriend;
			if (URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem())
			{
				ExistingFriend->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
				if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
				{
					PlayerInfo->OnPresenceUpdatedDelegate.AddUObject(ExistingFriend, &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
				}

				ExistingFriend->OnPresenceUpdatedDelegate.AddUObject(this, &URH_FriendSubsystem::OnPresenceUpdated);
			}
			ExistingFriend->PreviousRHFriendshipStatus = ExistingFriend->RHFriendshipStatus;
			ExistingFriend->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
			ExistingFriend->LastModifiedOn = NewFriend.LastModifiedOn;
			ExistingFriend->Etag = Resp.GetHttpResponse()->GetHeader("etag");
			NewFriend.GetNotes(ExistingFriend->Notes);
		}
		else
		{
			auto newEntry = NewObject<URH_RHFriendAndPlatformFriend>(this);
			UpdatedFriend = newEntry;
			if (URH_PlayerInfoSubsystem* PSS = GetRH_PlayerInfoSubsystem())
			{
				newEntry->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
				if (URH_PlayerInfo* PlayerInfo = PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid))
				{
					PlayerInfo->OnPresenceUpdatedDelegate.AddUObject(newEntry, &URH_RHFriendAndPlatformFriend::OnPresenceUpdated);
				}

				newEntry->OnPresenceUpdatedDelegate.AddUObject(this, &URH_FriendSubsystem::OnPresenceUpdated);
			}
			newEntry->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
			newEntry->LastModifiedOn = NewFriend.LastModifiedOn;
			newEntry->Etag = Resp.GetHttpResponse()->GetHeader("etag");
			NewFriend.GetNotes(newEntry->Notes);
			Friends.Emplace(newEntry);
		}

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

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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

	Delegate.ExecuteIfBound(Resp.IsSuccessful(), Resp.Content.FriendsPlayerUuid, static_cast<FriendshipStatus>(Resp.Content.Status));
}

bool URH_FriendSubsystem::RemoveFriend(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate /*= FRH_GenericFriendWithUuidBlock()*/)
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

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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

	if (!DeleteFriendType::DoCall(RH_APIs::GetFriendsV2API(), Request, DeleteFriendType::Delegate::CreateUObject(this,
		&URH_FriendSubsystem::OnRemoveFriendResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->RemoveFriendPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnRemoveFriendResponse(const DeleteFriendType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, DeleteFriendType::Request Request, int32 RetryEtagFailureCount)
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
			Friend->RHFriendshipStatus = FriendshipStatus::RH_None;
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

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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

bool URH_FriendSubsystem::AddNotes(const FGuid& PlayerUuid, const FString& Notes, FRH_AddNotesBlock Delegate /* = FRH_AddNotesBlock() */)
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

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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

	if (!AddNotesType::DoCall(RH_APIs::GetFriendsV2API(), Request, AddNotesType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnAddNotesResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->AddFriendNotesPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid(), FString());
		return false;
	}
	
	return true;
}

void URH_FriendSubsystem::OnAddNotesResponse(const AddNotesType::Response& Resp, FRH_AddNotesBlock Delegate, AddNotesType::Request Request, int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		if (const auto Friend = GetFriendByUuid(Resp.Content.FriendsPlayerUuid))
		{
			auto UpdatedFriend = Resp.Content;
			if (const auto Notes = UpdatedFriend.GetNotesOrNull())
			{
				Friend->Notes = *Notes;
			}
			else
			{
				Friend->Notes.Empty();
			}
			Friend->PreviousRHFriendshipStatus = Friend->RHFriendshipStatus;
			Friend->RHFriendshipStatus = static_cast<FriendshipStatus>(UpdatedFriend.Status);
			Friend->LastModifiedOn = UpdatedFriend.LastModifiedOn;
			Friend->Etag = Resp.GetHttpResponse()->GetHeader("etag");

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

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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
	
	Delegate.ExecuteIfBound(Resp.IsSuccessful(), Resp.Content.FriendsPlayerUuid, Resp.Content.GetNotes(TEXT("")));
}

bool URH_FriendSubsystem::DeleteNotes(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate)
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

		if (GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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

	if (!DeleteNotesType::DoCall(RH_APIs::GetFriendsV2API(), Request, DeleteNotesType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnDeleteNotesResponse,
		Delegate, Request, 1), GetDefault<URH_IntegrationSettings>()->DeleteFriendNotesPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnDeleteNotesResponse(const DeleteNotesType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, DeleteNotesType::Request Request, int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		if (const auto Friend = GetFriendByUuid(Request.OtherPlayerUuid))
		{
			Friend->Notes.Empty();
 			Friend->PreviousRHFriendshipStatus = Friend->RHFriendshipStatus;
 			Friend->LastModifiedOn = FDateTime::Now();
			Friend->Etag = Resp.GetHttpResponse()->GetHeader("etag");

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

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
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

void URH_FriendSubsystem::OnOSSPresenceReceived(const FUniqueNetId& UserId, const TSharedRef<FOnlineUserPresence>& NewPresence)
{
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

	const auto OSSPresenceInterface = OSS->GetPresenceInterface();

	TArray<URH_PlatformFriend*> RHPlatformFriends;

	for (auto i = 0; i < OnlineFriendsList.Num(); ++i)
	{
		const FOnlineFriend& OnlineFriend = *OnlineFriendsList[i];

		TSharedPtr<FOnlineUserPresence> PresencePtr;
		const bool bSuccessful = OSSPresenceInterface.IsValid() && OSSPresenceInterface->GetCachedPresence(*OnlineFriend.GetUserId(), PresencePtr) == EOnlineCachedResult::Success;
		const FOnlineUserPresence& Presence = bSuccessful ? *PresencePtr : OnlineFriend.GetPresence();

		URH_PlatformFriend* RHPlatformFriend = NewObject<URH_PlatformFriend>(this);
		RHPlatformFriend->Init(OnlineFriend, Presence, OSS);
		RHPlatformFriends.Add(RHPlatformFriend);

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

	UpdatePlatformFriends(RHPlatformFriends);
}

void URH_FriendSubsystem::UpdatePlatformFriends(TArray<URH_PlatformFriend*>& NewFriends)
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

	if (URH_RHFriendAndPlatformFriend* ExistingFriend = GetFriendByPlayerInfo(PlayerInfo))
	{
		return ExistingFriend;
	}

	const auto NewFriend = NewObject<URH_RHFriendAndPlatformFriend>(this);
	NewFriend->PlayerAndPlatformInfo.PlayerUuid = PlayerInfo->GetRHPlayerUuid();
	Friends.Add(NewFriend);
	return NewFriend;
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
												FRH_AddFriendBlock Delegate,
												AddFriendType::Request Request,
												int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch.Emplace(Resp.GetHttpResponse()->GetHeader("etag"));
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	AddFriendType::DoCall(RH_APIs::GetFriendsV2API(), Request, AddFriendType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnAddFriendResponse,
		Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->AddFriendPriority);
}

void URH_FriendSubsystem::OnFetchFriendForRemove(const GetFriendRelationshipType::Response& Resp,
												FRH_GenericFriendWithUuidBlock Delegate,
                                                DeleteFriendType::Request Request,
                                                int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch.Emplace(Resp.GetHttpResponse()->GetHeader("etag"));
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	DeleteFriendType::DoCall(RH_APIs::GetFriendsV2API(), Request, DeleteFriendType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnRemoveFriendResponse,
			Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->RemoveFriendPriority);
}

void URH_FriendSubsystem::OnFetchFriendForAddNote(const GetFriendRelationshipType::Response& Resp,
												FRH_AddNotesBlock Delegate,
                                                AddNotesType::Request Request,
                                                int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch.Emplace(Resp.GetHttpResponse()->GetHeader("etag"));
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	AddNotesType::DoCall(RH_APIs::GetFriendsV2API(), Request, AddNotesType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnAddNotesResponse,
			Delegate, Request, RetryEtagFailureCount), GetDefault<URH_IntegrationSettings>()->AddFriendNotesPriority);
}

void URH_FriendSubsystem::OnFetchFriendForDeleteNote(const GetFriendRelationshipType::Response& Resp,
													FRH_GenericFriendWithUuidBlock Delegate,
													DeleteNotesType::Request Request,
													int32 RetryEtagFailureCount)
{
	if (Resp.IsSuccessful())
	{
		Request.IfMatch.Emplace(Resp.GetHttpResponse()->GetHeader("etag"));
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
	{
		Request.IfMatch.Reset();
	}

	DeleteNotesType::DoCall(RH_APIs::GetFriendsV2API(), Request, DeleteNotesType::Delegate::CreateUObject(
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

bool URH_FriendSubsystem::FetchBlockedList(FRH_GenericFriendBlock Delegate /* = FRH_GenericFriendBlock() */)
{
	auto Request = GetBlockedListType::Request();
	auto AuthContext = GetAuthContext();
	Request.Page.Emplace(0);
	Request.Limit.Emplace(10000);
	Request.AuthContext = AuthContext;
	Request.IfNoneMatch.Emplace(BlockedPlayersETag);

	FGuid ActivePlayerUuid;
	if (AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuid(ActivePlayerUuid) && ActivePlayerUuid.IsValid())
	{
		Request.PlayerUuid = ActivePlayerUuid;
	}
	else
	{
		return false;
	}

	if (!GetBlockedListType::DoCall(RH_APIs::GetBlockedV2API(), Request, GetBlockedListType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnFetchBlockedListResponse,
		Delegate), GetDefault<URH_IntegrationSettings>()->FetchBlockedListPriority))
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchBlockedListResponse(const GetBlockedListType::Response& Resp, FRH_GenericFriendBlock Delegate)
{
	if (Resp.IsSuccessful())
	{
		if (Resp.ETag.IsSet() && !Resp.ETag->IsEmpty())
		{
			//TODO This not being set atm or is it???
			BlockedPlayersETag = Resp.ETag.GetValue();
		}
		//TODO Once it is fixed
		BlockedPlayersETag = Resp.GetHttpResponse()->GetHeader("etag");

		TArray<FGuid> OldEntries = BlockedPlayersUUIDs;
		TArray<FRHAPI_BlockedPlayer> BroadcastingArray;
		BlockedPlayersUUIDs.Empty();

		for (auto Blocked : Resp.Content.Blocked)
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

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == 304);
}

bool URH_FriendSubsystem::FetchBlockedPlayer(const FGuid& PlayerUUID, FRH_GenericFriendWithUuidBlock Delegate /* = FRH_GenericFriendWithUuidBlock() */)
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

	if (!GetBlockedType::DoCall(RH_APIs::GetBlockedV2API(), Request, GetBlockedType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchBlockedPlayerResponse, Delegate, Request.OtherPlayerUuid), GetDefault<URH_IntegrationSettings>()->FetchBlockedPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnFetchBlockedPlayerResponse(const GetBlockedType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
{
	if (Resp.IsSuccessful())
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
		auto blocked = Resp.Content;
		BlockedPlayersUUIDs.Emplace(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
		BLUEPRINT_BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
	}

	Delegate.ExecuteIfBound(Resp.IsSuccessful() || Resp.GetHttpResponseCode() == 304, PlayerUuid);
}

bool URH_FriendSubsystem::BlockPlayer(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate /* = FRH_GenericFriendWithUuidBlock() */)
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

	if (!BlockType::DoCall(RH_APIs::GetBlockedV2API(), Request, BlockType::Delegate::CreateUObject(
		this, &URH_FriendSubsystem::OnBlockPlayerResponse,
		Delegate, Request.OtherPlayerUuid), GetDefault<URH_IntegrationSettings>()->BlockUnblockPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
		return false;
	}

	return true;
}

void URH_FriendSubsystem::OnBlockPlayerResponse(const BlockType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
{
	if (Resp.IsSuccessful())
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBlockedPlayerUpdated, FColor::Purple);
		auto blocked = Resp.Content;
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

bool URH_FriendSubsystem::UnblockPlayer(const FGuid& PlayerUuid, FRH_GenericFriendWithUuidBlock Delegate /* = FRH_GenericFriendWithUuidBlock() */)
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

	if (!UnblockType::DoCall(RH_APIs::GetBlockedV2API(), Request, UnblockType::Delegate::CreateUObject(
		this,
		&URH_FriendSubsystem::OnUnblockPlayerResponse,
		Delegate, Request.OtherPlayerUuid), GetDefault<URH_IntegrationSettings>()->BlockUnblockPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, FGuid());
	}

	return true;
}

void URH_FriendSubsystem::OnUnblockPlayerResponse(const UnblockType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
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
		FriendsListPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_FriendSubsystem::PollFriendsList), PollTimerName);
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
		BlockedListPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_FriendSubsystem::PollBlockedPlayers), PollTimerName);
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
					PlayerPresence->RequestUpdate(false, FRH_OnRequestPlayerPresenceDelegate::CreateWeakLambda(this, [this, LocalPlayerSubsystem, OSS, IdentityInterface, PlayerInfo](bool bSuccess, URH_PlayerPresence* Presence)
						{
							if (bSuccess && Presence != nullptr)
							{
								if (FName(Presence->Platform) == OSS->GetSubsystemName())
								{
									PlayerInfo->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateWeakLambda(this, [this, LocalPlayerSubsystem, IdentityInterface](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
										{
											for (const auto& Platform : Platforms)
											{
												if (Platform != nullptr && Platform->GetPlatform() == LocalPlayerSubsystem->GetLoggedInPlatform())
												{
													TSharedPtr<const FUniqueNetId> PlayerUniqueNetId = IdentityInterface->CreateUniquePlayerId(Platform->GetPlatformUserId());

													URH_FriendSubsystem::UpdateRecentPlayerForOSS(LocalPlayerSubsystem, PlayerUniqueNetId);
													return;
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
				PlayerInfo->GetLinkedPlatformInfo(FTimespan(), false, FRH_PlayerInfoGetPlatformsDelegate::CreateWeakLambda(this, [this, LocalPlayerSubsystem, IdentityInterface](bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms)
					{
						for (const auto& Platform : Platforms)
						{
							if (Platform != nullptr && Platform->GetPlatform() == LocalPlayerSubsystem->GetLoggedInPlatform())
							{
								TSharedPtr<const FUniqueNetId> PlayerUniqueNetId = IdentityInterface->CreateUniquePlayerId(Platform->GetPlatformUserId());

								URH_FriendSubsystem::UpdateRecentPlayerForOSS(LocalPlayerSubsystem, PlayerUniqueNetId);
								return;
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
	if (!Friends.IsValid())
	{
		return;
	}

	TArray<FReportPlayedWithUser> RecentPlayers;
	RecentPlayers.Add(FReportPlayedWithUser(RecentPlayerId.ToSharedRef(), FString()));
	Friends->AddRecentPlayers(*LocalPlayerUniqueId.GetUniqueNetId(), RecentPlayers, TEXT("Match"), FOnAddRecentPlayersComplete());
}

///

URH_FriendSubsystem* URH_RHFriendAndPlatformFriend::GetFriendSubsystem() const
{
	return CastChecked<URH_FriendSubsystem>(GetOuter());
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

void URH_RHFriendAndPlatformFriend::GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, ERHAPI_Platform PreferredPlatformType /*= ERHAPI_Platform::Anon*/, const FRH_PlayerInfoGetDisplayNameBlock Delegate /*= FRH_PlayerInfoGetDisplayNameBlock()*/) const
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

void URH_RHFriendAndPlatformFriend::GetRHPlayerUuidAsync(const FRH_GetRHPlayerUuidBlock Delegate /*= FRH_GetRHPlayerUuidBlock()*/)
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
		PlayerInfoSubsystem->LookupPlayerByPlatformUserId(GetPlayerAndPlatformInfo().PlayerPlatformId, FRH_PlayerInfoLookupPlayerDelegate::CreateLambda([this, Delegate](bool bSuccess, const TArray<URH_PlayerInfo*>& PlayerInfos)
		{
			if (bSuccess && PlayerInfos.IsValidIndex(0) && PlayerInfos[0] != nullptr)
			{
				const auto PlayerUuid = PlayerInfos[0]->GetRHPlayerUuid();
				if (PlayerUuid.IsValid())
				{
					PlayerAndPlatformInfo.PlayerUuid = PlayerUuid;
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