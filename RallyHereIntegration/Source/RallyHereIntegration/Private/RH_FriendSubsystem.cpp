#include "RH_FriendSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "Engine/LocalPlayer.h"
#include "RallyHereIntegrationModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "Engine/World.h"
#include "TimerManager.h"

namespace
{
	const FName UnexpectedErrorCode = FName(TEXT("unexpected_error"));
	
	ERHAPI_PlatformTypes GetPlatformTypeFromOSSName(FName OSSName)
	{
		if (OSSName == STEAM_SUBSYSTEM || OSSName == STEAMV2_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_STEAM;
		}
		else if (OSSName == EPIC_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_EPIC;
		}
		else if (OSSName == PS4_SUBSYSTEM || OSSName == PS5_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_PSN;
		}
		else if (OSSName == LIVE_SUBSYSTEM || OSSName == GDK_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_XBOX_LIVE;
		}
		else if (OSSName == SWITCH_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_NINTENDO_SWITCH;
		}
		else if (OSSName == APPLE_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_APPLE;
		}
		else if (OSSName == GOOGLE_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_GOOGLE;
		}
		else if (OSSName == ANON_SUBSYSTEM)
		{
			return ERHAPI_PlatformTypes::PT_ANON;
		}
		else
		{
			return ERHAPI_PlatformTypes::PT_UNKNOWN;
		}
	}
}

void URH_FriendSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

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

	if (!GetFriendsListType::DoCall(RH_APIs::GetFriendsV2API(), Request, GetFriendsListType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendsListResponse, Delegate)))
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
				PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid); // #RHTODO: Verify if we need to create this at this point

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
				PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid); // #RHTODO: Verify if we need to create this at this point

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
			FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
			FriendsCached = true;
		}
		else
		{
			for (const auto UpdatedFriend : UpdatedFriends)
			{
				FriendUpdatedDelegate.Broadcast(UpdatedFriend);
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

	if (!GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), Request, GetFriendRelationshipType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchFriendResponse, Delegate)))
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
				PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid); // #RHTODO: Verify if we need to create this at this point
				ExistingFriend->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
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
				PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid); // #RHTODO: Verify if we need to create this at this point
				newEntry->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
			}
			newEntry->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
			newEntry->LastModifiedOn = NewFriend.LastModifiedOn;
			newEntry->Etag = Resp.GetHttpResponse()->GetHeader("etag");
			NewFriend.GetNotes(newEntry->Notes);
			Friends.Emplace(newEntry);
		}

		FriendUpdatedDelegate.Broadcast(UpdatedFriend);
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
			Delegate, Request, 0)))
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
		Delegate, Request, 1)))
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
				PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid); // #RHTODO: Verify if we need to create this at this point
				ExistingFriend->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
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
				PSS->GetOrCreatePlayerInfo(NewFriend.FriendsPlayerUuid); // #RHTODO: Verify if we need to create this at this point
				newEntry->PlayerAndPlatformInfo.PlayerUuid = NewFriend.FriendsPlayerUuid;
			}
			newEntry->RHFriendshipStatus = static_cast<FriendshipStatus>(NewFriend.Status);
			newEntry->LastModifiedOn = NewFriend.LastModifiedOn;
			newEntry->Etag = Resp.GetHttpResponse()->GetHeader("etag");
			NewFriend.GetNotes(newEntry->Notes);
			Friends.Emplace(newEntry);
		}

		FriendUpdatedDelegate.Broadcast(UpdatedFriend);
	}
	else if (RetryEtagFailureCount && Resp.GetHttpResponseCode() == EHttpResponseCodes::PrecondFailed)
	{
		const auto NewRetryCount = RetryEtagFailureCount - 1;
		auto GetRequest = GetFriendRelationshipType::Request();
		GetRequest.OtherPlayerUuid = Request.OtherPlayerUuid;
		SetDefaultParamsForGetFriendRequest(GetRequest);

		GetFriendRelationshipType::DoCall(RH_APIs::GetFriendsV2API(), GetRequest, GetFriendRelationshipType::Delegate::CreateUObject(
			this, &URH_FriendSubsystem::OnFetchFriendForAdd,
			Delegate, Request, NewRetryCount));
		return;
	}
	else
	{
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
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
			Delegate, Request, 0)))
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
		Delegate, Request, 1)))
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
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
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
			Delegate, Request, NewRetryCount));
		return;
	}
	else
	{
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
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
			Delegate, Request, 0)))
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
		Delegate, Request, 1)))
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

			FriendUpdatedDelegate.Broadcast(Friend);
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
			Delegate, Request, NewRetryCount));
		return;
	}
	else
	{
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		FriendUpdateErrorDelegate.Broadcast(Request.OtherPlayerUuid, ErrorCode);
	}
	
	Delegate.ExecuteIfBound(true, Resp.Content.FriendsPlayerUuid, Resp.Content.GetNotes(TEXT("")));
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
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS friends interface"),
		       ANSI_TO_TCHAR(__FUNCTION__));
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
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] failed to get OSS friends list"),
		       ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	const auto OSSPresenceInterface = OSS->GetPresenceInterface();

	TArray<URH_PlatformFriend*> RHPlatformFriends;

	for (auto i = 0; i < OnlineFriendsList.Num(); ++i)
	{
		const FOnlineFriend& OnlineFriend = *OnlineFriendsList[i];

		TSharedPtr<FOnlineUserPresence> PresencePtr;
		const FOnlineUserPresence& Presence = OSSPresenceInterface.IsValid()
		                                      && OSSPresenceInterface->GetCachedPresence(
			                                      *OnlineFriend.GetUserId(), PresencePtr) ==
		                                      EOnlineCachedResult::Success
			                                      ? *PresencePtr
			                                      : OnlineFriend.GetPresence();

		URH_PlatformFriend* RHPlatformFriend = NewObject<URH_PlatformFriend>(this);
		RHPlatformFriend->SetPlatform(GetPlatformTypeFromOSSName(OSS ? OSS->GetSubsystemName() : NULL_SUBSYSTEM));
		RHPlatformFriend->SetPlatformUserId(OnlineFriend.GetUserId()->ToString());
		RHPlatformFriend->SetGamerTag(OnlineFriend.GetDisplayName());
		RHPlatformFriend->SetIsJoinable(Presence.bIsJoinable);
		RHPlatformFriend->SetIsPlayingGame(Presence.bIsPlaying);
		RHPlatformFriend->SetIsPlayingThisGame(Presence.bIsPlayingThisGame);
		RHPlatformFriend->SetIsOnline(Presence.bIsOnline);
		RHPlatformFriend->SetHasPendingFriendRequestFromYou(
			OnlineFriend.GetInviteStatus() == EInviteStatus::PendingOutbound);
		RHPlatformFriend->
			SetHasPendingFriendRequestToYou(OnlineFriend.GetInviteStatus() == EInviteStatus::PendingInbound);
		RHPlatformFriend->SetIsFriend(OnlineFriend.GetInviteStatus() == EInviteStatus::Accepted);
		RHPlatformFriend->SetRichPresenceInfo(Presence.Status.StatusStr);
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
					PlayerPlatformInfo->GamerTag = PlatformFriend->GetClientGamerTag();
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
		FriendListUpdatedDelegate.Broadcast(UpdatedFriends);
	}
	else
	{
		for (const auto UpdatedFriend : UpdatedFriends)
		{
			FriendUpdatedDelegate.Broadcast(UpdatedFriend);
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
	if (URH_RHFriendAndPlatformFriend* ExistingFriend = GetFriendByPlayerInfo(PlayerInfo))
	{
		return ExistingFriend;
	}

	const auto NewFriend = NewObject<URH_RHFriendAndPlatformFriend>(this);
	if (PlayerInfo)
	{
		NewFriend->PlayerAndPlatformInfo.PlayerUuid = PlayerInfo->GetRHPlayerUuid();
	}

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

URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByPlatformId(
	const FRH_PlayerPlatformId& PlayerPlatformId) const
{
	for (const auto RHFriend : Friends)
	{
		const auto Friend = RHFriend->PlatformFriends.FindByPredicate(
			[PlayerPlatformId](const URH_PlatformFriend* PlatformFriend)
			{
				return PlatformFriend->PlayerPlatformId == PlayerPlatformId;
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
	const TArray<FRHAPI_BlockedPlayer> EmptyArray;
	BlockedListUpdatedDelegate.Broadcast(EmptyArray);

	for (const auto& OldEntry : OldEntries)
	{
		BlockedPlayerUpdatedDelegate.Broadcast(OldEntry, false);
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

	FriendListUpdatedDelegate.Broadcast(Out);
	for (const auto UpdatedFriend : Out)
	{
		FriendUpdatedDelegate.Broadcast(UpdatedFriend);
	}
	FriendsETag.Empty();
	FriendsCached = false;
}

bool URH_FriendSubsystem::IsPlayerBlocked(const FGuid& PlayerUuid) const
{
	return BlockedPlayersUUIDs.Contains(PlayerUuid);
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
		Delegate, Request, RetryEtagFailureCount));
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
			Delegate, Request, RetryEtagFailureCount));
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
			Delegate, Request, RetryEtagFailureCount));
}

void URH_FriendSubsystem::RemoveAllFriendsWithNoRelationships(TArray<URH_RHFriendAndPlatformFriend*>& OutArray)
{
	for (auto i = Friends.Num() - 1; i >= 0; --i)
	{
		auto Friend = Friends[i];
		if (Friend->HaveAnyRelationship())
		{
			continue;
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
		Delegate)))
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

		BlockedListUpdatedDelegate.Broadcast(BroadcastingArray);

		for (const auto& OldEntry : OldEntries)
		{
			if (!BlockedPlayersUUIDs.Contains(OldEntry))
			{
				BlockedPlayerUpdatedDelegate.Broadcast(OldEntry, false);
			}
		}

		for (auto& Entry : BroadcastingArray)
		{
			if (!OldEntries.FindByPredicate([Entry](FGuid BlockedPlayerUUID)
				{
					return Entry.BlockedPlayerUuid == BlockedPlayerUUID;
				}))
			{
				BlockedPlayerUpdatedDelegate.Broadcast(Entry.BlockedPlayerUuid, true);
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

	if (!GetBlockedType::DoCall(RH_APIs::GetBlockedV2API(), Request, GetBlockedType::Delegate::CreateUObject(this, &URH_FriendSubsystem::OnFetchBlockedPlayerResponse, Delegate, Request.OtherPlayerUuid)))
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
		auto blocked = Resp.Content;
		BlockedPlayersUUIDs.Emplace(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
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
		Delegate, Request.OtherPlayerUuid)))
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
		auto blocked = Resp.Content;
		BlockedPlayersUUIDs.Emplace(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, true);
	}
	else
	{
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		BlockedPlayerUpdateErrorDelegate.Broadcast(PlayerUuid, ErrorCode);
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
		Delegate, Request.OtherPlayerUuid)))
	{
		Delegate.ExecuteIfBound(false, FGuid());
	}

	return true;
}

void URH_FriendSubsystem::OnUnblockPlayerResponse(const UnblockType::Response& Resp, FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)
{
	if (Resp.IsSuccessful())
	{
		BlockedPlayersUUIDs.Remove(PlayerUuid);
		BlockedPlayerUpdatedDelegate.Broadcast(PlayerUuid, false);
	}
	else
	{
		const auto& ErrorCode = ExtractErrorCodeFromResponse(Resp.GetHttpResponse());
		BlockedPlayerUpdateErrorDelegate.Broadcast(PlayerUuid, ErrorCode);
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

void URH_FriendSubsystem::AcknowledgeFriendUpdate(const FGuid& PlayerUuid) const
{
	if (const auto Friend = GetFriendByUuid(PlayerUuid))
	{
		Friend->PreviousRHFriendshipStatus = Friend->RHFriendshipStatus;
	}
}

URH_PlayerInfoSubsystem* URH_FriendSubsystem::GetRH_PlayerInfoSubsystem() const
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		if (LPSS->GetLocalPlayer() == nullptr)
		{
			return nullptr;
		}		
		auto pGameInstance = LPSS->GetLocalPlayer()->GetGameInstance();
		if (pGameInstance == nullptr)
		{
			return nullptr;
		}

		auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		if (pGISubsystem == nullptr)
		{
			return nullptr;
		}

		URH_PlayerInfoSubsystem* pRH_PlayerInfoSubsystem = pGISubsystem->GetPlayerInfoSubsystem();
		return pRH_PlayerInfoSubsystem;
	}

	return nullptr;
}

///

FString URH_RHFriendAndPlatformFriend::GetLastKnownGamerTag(ERHAPI_PlatformTypes PreferredPlatformType /*= ERHAPI_PlatformTypes::PT_UNKNOWN*/) const
{
	if (UWorld* World = GetWorld())
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (URH_GameInstanceSubsystem* GISubsystem = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>())
			{
				if (URH_PlayerInfoSubsystem* PlayerInfoSubsystem = GISubsystem->GetPlayerInfoSubsystem())
				{
					if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetPlayerInfo(PlayerAndPlatformInfo.PlayerUuid))
					{
						FString DisplayName;
						if (PlayerInfo->GetLastKnownGamerTag(DisplayName, PreferredPlatformType))
						{
							return DisplayName;
						}
					}

					if (URH_PlayerPlatformInfo* PlayerPlatformInfo = PlayerInfoSubsystem->GetPlayerPlatformInfo(PlayerAndPlatformInfo.PlayerPlatformId))
					{
						return PlayerPlatformInfo->GetLastKnownGamerTag();
					}
				}
			}
		}
	}

	return FString();
}

void URH_RHFriendAndPlatformFriend::GetLastKnownGamerTagAsync(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, ERHAPI_PlatformTypes PreferredPlatformType /*= ERHAPI_PlatformTypes::PT_UNKNOWN*/, const FRH_PlayerInfoGetGamerTagBlock Delegate /*= FRH_PlayerInfoGetGamerTagBlock()*/, const URH_LocalPlayerSubsystem* LocalPlayerSubsystem /*= nullptr*/) const
{
	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (const URH_GameInstanceSubsystem* GISubsystem = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>())
			{
				if (const URH_PlayerInfoSubsystem* PlayerInfoSubsystem = GISubsystem->GetPlayerInfoSubsystem())
				{
					if (URH_PlayerInfo* PlayerInfo = PlayerInfoSubsystem->GetPlayerInfo(PlayerAndPlatformInfo.PlayerUuid))
					{
						PlayerInfo->GetLastKnownGamerTagAsync(StaleThreshold, bForceRefresh, PreferredPlatformType, Delegate, LocalPlayerSubsystem);
						return;
					}

					if (const URH_PlayerPlatformInfo* PlayerPlatformInfo = PlayerInfoSubsystem->GetPlayerPlatformInfo(PlayerAndPlatformInfo.PlayerPlatformId))
					{
						Delegate.ExecuteIfBound(true, PlayerPlatformInfo->GetLastKnownGamerTag());
						return;
					}

					Delegate.ExecuteIfBound(false, FString());
				}
			}
		}
	}
}