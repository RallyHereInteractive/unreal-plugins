// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_PlayerInfoSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "RallyHereIntegrationModule.h"
#include "RallyHereAPIHelpers.h"
#include "Engine/World.h"
#include "Interfaces/IMessageSanitizerInterface.h"

void URH_PlayerInfoSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	InitPropertiesWithDefaultValues();

	PlayerInfoClassOverride = GetDefault<URH_IntegrationSettings>()->PlayerInfoClass.TryLoadClass<URH_PlayerInfo>();
}

void URH_PlayerInfoSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	InitPropertiesWithDefaultValues();
}

void URH_PlayerInfoSubsystem::Tick(float DeltaTime)
{
	auto AuthContext = GetAuthContext();
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn())
	{
		for (auto PlayerInfoPair : PlayerInfos)
		{
			auto PlayerInfo = PlayerInfoPair.Value;

			if (PlayerInfo->GetPresence())
			{
				// this should kick a request if one is needed (ex: being watched)
				PlayerInfo->GetPresence()->CheckPollStatus();
			}

			if (PlayerInfo->GetPlayerInventory())
			{
				PlayerInfo->GetPlayerInventory()->CheckPollStatus();
			}
		}
	}
}

void URH_PlayerInfoSubsystem::InitPropertiesWithDefaultValues()
{
	PlayerInfos.Empty();
}

URH_PlayerInfo* URH_PlayerInfoSubsystem::GetOrCreatePlayerInfo(const FGuid& PlayerUuid)
{
	// Make sure we don't already have this player info, if we do just return it
	if (const auto Result = GetPlayerInfo(PlayerUuid))
	{
		return Result;
	}

	// Fail to create if the full information is not passed in
	if (!PlayerUuid.IsValid())
	{
		return nullptr;
	}

	const UClass* PlayerInfoClass = PlayerInfoClassOverride;
	if (!PlayerInfoClass)
	{
		PlayerInfoClass = URH_PlayerInfo::StaticClass();
	}

	const auto NewInfo = NewObject<URH_PlayerInfo>(this, PlayerInfoClass);
	NewInfo->InitializeForPlayer(PlayerUuid);
	PlayerInfos.Add(PlayerUuid, NewInfo);

	return NewInfo;
}

URH_PlayerPlatformInfo* URH_PlayerInfoSubsystem::GetOrCreatePlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId)
{
	// Make sure we don't already have this player info, if we do just return it
	if (const auto Result = GetPlayerPlatformInfo(PlayerPlatformId))
	{
		return Result;
	}

	// Fail to create if the full information is not passed in
	if (!PlayerPlatformId.IsValid())
	{
		return nullptr;
	}

	const auto NewLinkedPlatform = NewObject<URH_PlayerPlatformInfo>();
	NewLinkedPlatform->PlayerPlatformId = PlayerPlatformId;
	PlayerPlatformInfos.Add(PlayerPlatformId, NewLinkedPlatform);

	return NewLinkedPlatform;
}

URH_PlayerInfo* URH_PlayerInfoSubsystem::FindPlayerInfoByPlatformId(const FRH_PlayerPlatformId& PlayerPlatformId) const
{
	// Fail if the full information is not passed in
	if (!PlayerPlatformId.IsValid())
	{
		return nullptr;
	}

	if (const auto PlayerUuid = PlayerPlatformIdToUuidMap.Find(PlayerPlatformId))
	{
		if (const auto PlayerInfo = PlayerInfos.Find(*PlayerUuid))
		{
			return *PlayerInfo;
		}
	}

	return nullptr;
}

void URH_PlayerInfoSubsystem::ClearPlayerInfoCache()
{
	PlayerInfos.Empty();
}

URH_PlayerInfo* URH_PlayerInfoSubsystem::RemovePlayerInfoFromCache(const FGuid& PlayerUuid)
{
	URH_PlayerInfo* RemovedPlayerInfo;
	if (PlayerInfos.RemoveAndCopyValue(PlayerUuid, RemovedPlayerInfo))
	{
		return RemovedPlayerInfo;
	}
	return nullptr;
}

void URH_PlayerInfoSubsystem::LookupPlayer(FString PlayerName, const FRH_PlayerInfoLookupPlayerBlock& Delegate)
{
	auto Request = TLookupPlayer::Request();

	Request.DisplayName = TArray<FString>();
	Request.DisplayName.GetValue().Push(PlayerName);
	Request.AuthContext = GetAuthContext();
	if (!TLookupPlayer::DoCall(RH_APIs::GetUsersAPI(), Request, TLookupPlayer::Delegate::CreateUObject(this, &URH_PlayerInfoSubsystem::OnLookupPlayerResponse, Delegate), GetDefault<URH_IntegrationSettings>()->UsersLookupPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, TArray<URH_PlayerInfo*>());
	}
}

void URH_PlayerInfoSubsystem::OnLookupPlayerResponse(const TLookupPlayer::Response& Response, const FRH_PlayerInfoLookupPlayerBlock Delegate)
{
	TArray<URH_PlayerInfo*> OutInfos;

	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		if (const auto DisplayNames = Content->GetDisplayNamesOrNull())
		{
			for (auto const& DisplayName : *DisplayNames)
			{
				for (auto const& Pair : DisplayName)
				{
					for (auto const& Player : Pair.Value)
					{
						OutInfos.Push(GetOrCreatePlayerInfo(Player.PlayerUuid));
					}
				}
			}
		}
	}

	Delegate.ExecuteIfBound(OutInfos.Num() > 0, OutInfos);
}

void URH_PlayerInfoSubsystem::LookupPlayerByPlatformUserId(FRH_PlayerPlatformId PlayerPlatformId, const FRH_PlayerInfoLookupPlayerBlock& Delegate)
{
	auto Request = TLookupPlayer::Request();

	Request.Platform = PlayerPlatformId.PlatformType;
	Request.Identities = TArray<FString>();
	Request.Identities.GetValue().Push(PlayerPlatformId.UserId);
	Request.AuthContext = GetAuthContext();
	if (!TLookupPlayer::DoCall(RH_APIs::GetUsersAPI(), Request, TLookupPlayer::Delegate::CreateUObject(this, &URH_PlayerInfoSubsystem::OnLookupPlayerByPlatformUserIdResponse, Delegate), GetDefault<URH_IntegrationSettings>()->UsersLookupPlayerPriority))
	{
		Delegate.ExecuteIfBound(false, TArray<URH_PlayerInfo*>());
	}
}

void URH_PlayerInfoSubsystem::OnLookupPlayerByPlatformUserIdResponse(const TLookupPlayer::Response& Response, const FRH_PlayerInfoLookupPlayerBlock Delegate)
{
	TArray<URH_PlayerInfo*> OutInfos;

	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		if (const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>* IdentityPlatforms = Content->GetIdentityPlatformsOrNull())
		{
			for (const TPair<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& IdentityPlatform : *IdentityPlatforms)
			{
				for (const FRHAPI_PlatformIdentityLookupResults& PlatformIdentityResult : IdentityPlatform.Value)
				{
					if (const TMap<FString, FRHAPI_PlayerResponse>* IdentitiesMap = PlatformIdentityResult.GetIdentityOrNull())
					{
						for (const TPair<FString, FRHAPI_PlayerResponse>& Pair : *IdentitiesMap)
						{
							OutInfos.Push(GetOrCreatePlayerInfo(Pair.Value.GetPlayerUuid()));
						}
					}
				}
			}
		}
	}

	Delegate.ExecuteIfBound(OutInfos.Num() > 0, OutInfos);
}

///

URH_PlayerInfo::URH_PlayerInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PlayerPresence = CreateDefaultSubobject<URH_PlayerPresence>(TEXT("PlayerPresence"));

	PlayerSettings = CreateDefaultSubobject<URH_PlayerSettings>(TEXT("PlayerSettings"));

	PlayerSessions = CreateDefaultSubobject<URH_PlayerSessions>(TEXT("PlayerSessions"));

	PlayerDeserter = CreateDefaultSubobject<URH_PlayerDeserter>(TEXT("PlayerDeserter"));

	PlayerMatches = CreateDefaultSubobject<URH_PlayerMatches>(TEXT("PlayerMatches"));

	PlayerReports = CreateDefaultSubobject<URH_PlayerReports>(TEXT("PlayerReports"));

	PlayerInventory = CreateDefaultSubobject<URH_PlayerInventory>(TEXT("PlayerInventory"));
	PlayerInventory->SetPlayerInfo(this);

	PlayerNotifications = CreateDefaultSubobject<URH_PlayerNotifications>(TEXT("PlayerNotifications"));
	PlayerNotifications->SetPlayerInfo(this);
}

URH_PlayerInfoSubsystem* URH_PlayerInfo::GetPlayerInfoSubsystem() const
{
	return Cast<URH_PlayerInfoSubsystem>(GetOuter());
}

void URH_PlayerInfo::InitializeForPlayer(const FGuid& Value)
{
	check(RHPlayerUuid.IsValid() == false);
	RHPlayerUuid = Value;
	if (PlayerPresence != nullptr)
	{
		PlayerPresence->PlayerUuid = Value;
	}
	if (PlayerSettings != nullptr)
	{
		PlayerSettings->PlayerUuid = Value;
	}
	if (PlayerSessions != nullptr)
	{
		PlayerSessions->PlayerUuid = Value;
	}
	if (PlayerDeserter != nullptr)
	{
		PlayerDeserter->PlayerUuid = Value;
	}
	if (PlayerMatches != nullptr)
	{
		PlayerMatches->PlayerUuid = Value;
	}
	PlayerInventory->Initialize();
	PlayerNotifications->Initialize();
}

void URH_PlayerInfo::StartStreamingNotifications()
{
	// start streaming notifications for this context
	PlayerNotifications->StartStreamingLatestNotifications();
}

void URH_PlayerInfo::StopStreamingNotifications(bool bClearCache)
{
	// stop streaming notifications for this context
	PlayerNotifications->StopStreamingLatestNotifications(bClearCache);
}

ERHAPI_Platform URH_PlayerInfo::GetLoggedInPlatform() const
{
	// if this player info is for the player matching the auth context we are using, return the platform from the auth context as it is the *most accurate* and the presence data may not be updated yet
	const FAuthContextPtr AuthContext = GetAuthContext();
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn() && AuthContext->GetLoginResult().IsSet() &&
		AuthContext->GetLoginResult().GetValue().GetActivePlayerUuid() == RHPlayerUuid)
	{
		return AuthContext->GetLoginResult().GetValue().GetPlatform();
	}

	// return the platform from the presence data if it is available
	if (GetPresence())
	{
		ERHAPI_Platform Platform;
		EnumFromString(GetPresence()->Platform, Platform);
		return Platform;
	}

	return ERHAPI_Platform::Anon;
}

TArray<URH_PlayerPlatformInfo*> URH_PlayerInfo::GetPlayerPlatforms() const
{
	TArray<URH_PlayerPlatformInfo*> Infos;
	Infos.Reset(LinkedPlayerPlatforms.Num());
	if (URH_PlayerInfoSubsystem* PSS = GetPlayerInfoSubsystem())
	{
		for (const auto& PlatformId : LinkedPlayerPlatforms)
		{
			Infos.Add(PSS->GetOrCreatePlayerPlatformInfo(PlatformId));
		}
	}

	return Infos;
}

URH_PlayerPlatformInfo* URH_PlayerInfo::GetPlayerPlatformInfo(const FRH_PlayerPlatformId& PlayerPlatformId) const
{
	if (URH_PlayerInfoSubsystem* PSS = GetPlayerInfoSubsystem())
	{
		return PSS->GetOrCreatePlayerPlatformInfo(PlayerPlatformId);
	}
	return nullptr;
}

void URH_PlayerInfo::GetLastKnownDisplayNameAsync(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, ERHAPI_Platform PreferredPlatformType /*= ERHAPI_Platform::Anon*/, const FRH_PlayerInfoGetDisplayNameBlock& Delegate /*= FRH_PlayerInfoGetDisplayNameBlock()*/, const URH_LocalPlayerSubsystem* LocalPlayerSubsystem /*= nullptr*/)
{
	// Get platform type from logged in portal if PreferredPlatformType is not provided
	if (PreferredPlatformType == ERHAPI_Platform::Anon)
	{
		PreferredPlatformType = GetLoggedInPlatform();
	}

	if (LastRequestPlatforms.GetTicks() != 0 && !bForceRefresh)
	{
		const FDateTime Now = FDateTime::UtcNow();

		// check if we are in the stale threshold, or if it is not set (in which case, always prefer the cache)
		if (LastRequestPlatforms + StaleThreshold < Now || StaleThreshold.IsZero())
		{
			FString OutDisplayName;
			Delegate.ExecuteIfBound(GetLastKnownDisplayName(OutDisplayName, PreferredPlatformType), OutDisplayName);
			return;
		}
	}

	GetLinkedPlatformInfo(StaleThreshold, bForceRefresh, FRH_PlayerInfoGetPlatformsDelegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse, PreferredPlatformType, Delegate, LocalPlayerSubsystem));
}

void URH_PlayerInfo::OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate, const URH_LocalPlayerSubsystem* LocalPlayerSubsystem)
{
	if (Platforms.Num())
	{
		const auto findPlatformInfo = Platforms.FindByPredicate([PreferredPlatformType](const URH_PlayerPlatformInfo* PortalInfo)
			{
				return PortalInfo->GetPlatform() == PreferredPlatformType;
			});


		// If we don't have the preferred platform, just grab the first platform found
		URH_PlayerPlatformInfo* PlatformInfo = findPlatformInfo != nullptr ? *findPlatformInfo : Platforms[0];

		if (PlatformInfo != nullptr)
		{
			if (LocalPlayerSubsystem != nullptr)
			{
				if (const IOnlineSubsystem* OSS = IOnlineSubsystem::Get())
				{
					FString AuthTypeToExclude;
					const auto MessageSanitizer = OSS->GetMessageSanitizer(LocalPlayerSubsystem->GetPlatformUserId(), AuthTypeToExclude);
					if (MessageSanitizer)
					{
						MessageSanitizer->SanitizeDisplayName(PlatformInfo->GetLastKnownDisplayName(), FOnMessageProcessed::CreateUObject(this, &URH_PlayerInfo::OnDisplayNameSanitized, PreferredPlatformType, Delegate));
						return;
					}
				}
			}

			Delegate.ExecuteIfBound(true, PlatformInfo->GetLastKnownDisplayName());
			return;
		}
	}

	Delegate.ExecuteIfBound(false, FString());
}

void URH_PlayerInfo::OnDisplayNameSanitized(bool bSuccess, const FString& SanitizedMessage, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate)
{
	if (bSuccess)
	{
		auto Platforms = GetPlayerPlatforms();
		const auto findPlatformInfo = Platforms.FindByPredicate([PreferredPlatformType](const URH_PlayerPlatformInfo* PortaInfo)
			{
				return PortaInfo->GetPlatform() == PreferredPlatformType;
			});

		URH_PlayerPlatformInfo* PlatformInfo = findPlatformInfo != nullptr ? *findPlatformInfo : Platforms[0];

		if (PlatformInfo != nullptr)
		{
			PlatformInfo->DisplayName = SanitizedMessage;
		}

		Delegate.ExecuteIfBound(true, SanitizedMessage);
		return;
	}

	Delegate.ExecuteIfBound(false, FString());
}

void URH_PlayerInfo::GetLinkedPlatformInfo(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, const FRH_PlayerInfoGetPlatformsBlock& Delegate /*= FRH_PlayerInfoGetPlatformsBlock()*/)
{
	if (LastRequestPlatforms.GetTicks() != 0 && !bForceRefresh)
	{
		// check if we are in the stale threshold, or if it is not set (in which case, always prefer the cache)
		FDateTime Now = FDateTime::UtcNow();
		if (LastRequestPlatforms + StaleThreshold < Now || StaleThreshold.IsZero())
		{
			Delegate.ExecuteIfBound(true, GetPlayerPlatforms());
			return;
		}
	}

	auto Request = GetPlatforms::Request();
	Request.PlayerUuid = RHPlayerUuid;
	Request.AuthContext = GetAuthContext();
	if (!GetPlatforms::DoCall(RH_APIs::GetUsersAPI(), Request, GetPlatforms::Delegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerLinkedPlatformsResponse, Delegate), GetDefault<URH_IntegrationSettings>()->UsersGetLinkedPlatformsPriority))
	{
		Delegate.ExecuteIfBound(false, TArray<URH_PlayerPlatformInfo*>());
	}
}

void URH_PlayerInfo::OnGetPlayerLinkedPlatformsResponse(const GetPlatforms::Response& Response, const FRH_PlayerInfoGetPlatformsBlock Delegate)
{
	TArray<URH_PlayerPlatformInfo*> Infos;

	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		if (const auto PSS = GetPlayerInfoSubsystem())
		{
			// update our local cache of references
			LinkedPlayerPlatforms.Reset(Content->LinkedPortals.Num());
			Infos.Reset(Content->LinkedPortals.Num());

			for (auto const& LinkedPlatform : Content->LinkedPortals)
			{
				FString PortalUserId;
				if (LinkedPlatform.GetPortalUserId(PortalUserId))
				{
					auto PlayerPlatformId = FRH_PlayerPlatformId(PortalUserId, LinkedPlatform.Platform);
					LinkedPlayerPlatforms.Add(PlayerPlatformId);

					auto* PlayerPlatformInfo = GetPlayerPlatformInfo(PlayerPlatformId);

					// update display name
					if (PlayerPlatformInfo != nullptr)
					{
						Infos.Add(PlayerPlatformInfo);
						LinkedPlatform.GetDisplayName(PlayerPlatformInfo->DisplayName);

						FGuid PlayerUuid = LinkedPlatform.GetPlayerUuid();
						if (PlayerUuid.IsValid())
						{
							PSS->AddPlayerLink(PlayerPlatformId, PlayerUuid);
						}
					}
				}
			}
		}
	}

	LastRequestPlatforms = FDateTime::UtcNow();
	Delegate.ExecuteIfBound(Response.IsSuccessful(), Infos);
}

void URH_PlayerInfo::GetPlayerRankings(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate /*= FRH_PlayerInfoGetPlayerRankingsBlock()*/)
{
	FDateTime Now = FDateTime::UtcNow();
	if (LastRequestRankings.GetTicks() != 0 && !bForceRefresh)
	{
		// check if we are in the stale threshold, or if it is not set (in which case, always prefer the cache)
		if ((LastRequestRankings + StaleThreshold) < Now || StaleThreshold.IsZero())
		{
			TArray<FRHAPI_PlayerRankResponseV2> Values;
			PlayerRankingsByRankingId.GenerateValueArray(Values);
			Delegate.ExecuteIfBound(false, Values);
			return;
		}
	}

	auto Request = GetRankings::Request();
	Request.PlayerUuid = GetRHPlayerUuid();
	Request.AuthContext = GetAuthContext();
	if (!GetRankings::DoCall(RH_APIs::GetRankAPI(), Request, GetRankings::Delegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerRankingsResponse, Delegate), GetDefault<URH_IntegrationSettings>()->RankingGetPriority))
	{
		TArray<FRHAPI_PlayerRankResponseV2> Values;
		PlayerRankingsByRankingId.GenerateValueArray(Values);
		Delegate.ExecuteIfBound(false, Values);
	}
}

void URH_PlayerInfo::OnGetPlayerRankingsResponse(const GetRankings::Response& Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)
{
	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		PlayerRankingsByRankingId.Empty();

		for (const auto& PlayerRankResponse : Content->GetPlayerRanks())
		{
			PlayerRankingsByRankingId.Add(PlayerRankResponse.GetRankId(), PlayerRankResponse);
		}
	}

	LastRequestRankings = FDateTime::UtcNow();

	TArray<FRHAPI_PlayerRankResponseV2> Values;
	PlayerRankingsByRankingId.GenerateValueArray(Values);
	Delegate.ExecuteIfBound(true, Values);
}

void URH_PlayerInfo::UpdatePlayerRanking(const FString& RankId, const FRHAPI_PlayerRankUpdateRequest& RankData, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate /*= FRH_PlayerInfoGetPlayerRankingsBlock()*/)
{
	auto Request = UpdateRanking::Request();
	Request.PlayerUuid = GetRHPlayerUuid();
	Request.RankId = RankId;
	Request.AuthContext = GetAuthContext();
	Request.PlayerRankUpdateRequest = RankData;

	if (!UpdateRanking::DoCall(RH_APIs::GetRankAPI(), Request, UpdateRanking::Delegate::CreateUObject(this, &URH_PlayerInfo::OnUpdatePlayerRankingResponse, Delegate), GetDefault<URH_IntegrationSettings>()->RankingUpdatePriority))
	{
		TArray<FRHAPI_PlayerRankResponseV2> Values;
		PlayerRankingsByRankingId.GenerateValueArray(Values);
		Delegate.ExecuteIfBound(false, Values);
	}
}

void URH_PlayerInfo::OnUpdatePlayerRankingResponse(const UpdateRanking::Response& Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)
{
	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		for (const auto& Player : Content->UpdatedPlayers)
		{
			if (Player.GetPlayerUuid() == GetRHPlayerUuid())
			{
				PlayerRankingsByRankingId.FindOrAdd(Player.GetRankId(), Player);
			}
		}
		TArray<FRHAPI_PlayerRankResponseV2> Values;
		PlayerRankingsByRankingId.GenerateValueArray(Values);
		Delegate.ExecuteIfBound(true, Values);
	}
	else
	{
		TArray<FRHAPI_PlayerRankResponseV2> Values;
		PlayerRankingsByRankingId.GenerateValueArray(Values);
		Delegate.ExecuteIfBound(false, Values);
	}
}

bool URH_PlayerInfo::GetLastKnownDisplayName(FString& OutDisplayName, ERHAPI_Platform PreferredPlatformType) const
{
	if (LinkedPlayerPlatforms.Num() == 0)
	{
		return false;
	}

	// Get platform type from logged in portal if PreferredPlatformType is not provided
	if (PreferredPlatformType == ERHAPI_Platform::Anon)
	{
		PreferredPlatformType = GetLoggedInPlatform();
	}

	bool bSuccess = false;

	const auto* findPlatformId = LinkedPlayerPlatforms.FindByPredicate([PreferredPlatformType](const FRH_PlayerPlatformId& PlatformId)
		{
			return PlatformId.PlatformType == PreferredPlatformType;
		});

	FRH_PlayerPlatformId PlatformId = findPlatformId != nullptr ? *findPlatformId : LinkedPlayerPlatforms[0];

	const auto PSS = GetPlayerInfoSubsystem();
	if (PlatformId.IsValid() && PSS != nullptr)
	{
		const auto* PlayerPlatformInfo = PSS->GetPlayerPlatformInfo(PlatformId);
		if (PlayerPlatformInfo != nullptr)
		{
			OutDisplayName = PlayerPlatformInfo->GetLastKnownDisplayName();
			bSuccess = true;
		}
	}

	return bSuccess;
}

FAuthContextPtr URH_PlayerInfo::GetAuthContext() const
{
	if (URH_PlayerInfoSubsystem* PSS = Cast<URH_PlayerInfoSubsystem>(GetOuter()))
	{
		return PSS->GetAuthContext();
	}

	return nullptr;
}


///

URH_PlayerInfoSubobject::URH_PlayerInfoSubobject(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bInitialized(false)
{
	PollTimerName = NAME_None;
	PollPriority = 0;
}

URH_PlayerInfo* URH_PlayerInfoSubobject::GetPlayerInfo() const
{
	return Cast<URH_PlayerInfo>(GetOuter());
}

void URH_PlayerInfoSubobject::RequestUpdateIfStale(const FTimespan& StaleThreshold, bool bForceRefresh, const FRH_OnRequestPlayerInfoSubobjectDelegateBlock& Delegate)
{
	if (bInitialized)
	{
		const FDateTime& Then = LastUpdated;
		FDateTime Now = FDateTime::UtcNow();
		if (Then.GetTicks() != 0 && !bForceRefresh)
		{
			// check if we are in the stale threshold, or if it is not set (in which case, always prefer the cache)
			if ((Then + StaleThreshold) < Now || StaleThreshold.IsZero())
			{
				Delegate.ExecuteIfBound(true, this);
				return;
			}
		}
	}

	RequestUpdate(bForceRefresh, Delegate);
}

void URH_PlayerInfoSubobject::CheckPollStatus(const bool bForceUpdate)
{
	if (!ShouldPoll())
	{
		// no one is listening, disable polling
		if (Poller.IsValid())
		{
			Poller->StopPoll();
		}

		return;
	}

	// create a poller if one was not created yet
	if (!Poller.IsValid())
	{
		Poller = FRH_PollControl::CreateAutoPoller();
	}

	// only start if poller was not already started
	if (Poller->IsInactive())
	{
		// kick immediately, as someone just became interested in this result
		Poller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_PlayerInfoSubobject::Poll), PollTimerName, true);
	}
	else if (bForceUpdate)
	{
		Poller->ExecutePoll();
	}
}


void URH_PlayerInfoSubobject::ExecuteUpdatedDelegates(bool bSuccess)
{
	if (bSuccess)
	{
		LastUpdated = FDateTime::UtcNow();

		SCOPED_NAMED_EVENT(RallyHere_BroadcastPlayerSubobjectUpdated, FColor::Purple);
		BLUEPRINT_OnUpdatedDelegate.Broadcast(this);
		OnUpdatedDelegate.Broadcast(this);
	}

	// copy the temporary request array before invoking, then clear
	auto Temp = TemporaryRequestDelegates;
	TemporaryRequestDelegates.Reset();
	for (auto& Delegate : Temp)
	{
		Delegate.ExecuteIfBound(bSuccess, this);
	}
}

///

URH_PlayerPresence::URH_PlayerPresence(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Status(ERHAPI_OnlineStatus::Offline)
{
	PollTimerName = FName(TEXT("PlayerPresence"));
	PollPriority = GetDefault<URH_IntegrationSettings>()->PresenceGetOtherPriority;
}

void URH_PlayerPresence::Poll(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetPresenceType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	FRH_ObjectVersionCheck::ApplyDefaultGetBehavior(Request, ETag);

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<GetPresenceType>>(
		GetPresenceType::Delegate::CreateUObject(this, &URH_PlayerPresence::Update),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				PollComplete(bSuccess, Delegate);
			}),
		PollPriority
	);

	Helper->Start(RH_APIs::GetPresenceAPI(), Request);
}

///

URH_PlayerSessions::URH_PlayerSessions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PollTimerName = FName(TEXT("PlayerSessions"));
	PollPriority = GetDefault<URH_IntegrationSettings>()->SessionsGetOtherPriority;
}

void URH_PlayerSessions::Poll(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetSessionsType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	FRH_ObjectVersionCheck::ApplyDefaultGetBehavior(Request, ETag);

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<GetSessionsType>>(
		GetSessionsType::Delegate::CreateUObject(this, &URH_PlayerSessions::Update),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				PollComplete(bSuccess, Delegate);
			}),
		PollPriority
	);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}


///

URH_PlayerSettings::URH_PlayerSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_PlayerSettings::GetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate /*= FRH_PlayerInfoGetPlayerSettingsBlock()*/)
{
	auto Existing = PlayerSettingsByTypeId.Find(SettingTypeId);

	if (Existing != nullptr)
	{
		const FDateTime& Then = Existing->LastMultiFetchTime;
		FDateTime Now = FDateTime::UtcNow();
		if (Then.GetTicks() != 0 && !bForceRefresh)
		{
			// check if we are in the stale threshold, or if it is not set (in which case, always prefer the cache)
			if ((Then + StaleThreshold) < Now || StaleThreshold.IsZero())
			{
				// for specific settings requests, we need to check if we have all the keys we need
				if (auto FoundSettings = PlayerSettingsByTypeId.Find(SettingTypeId))
				{
					FRH_PlayerSettingsDataWrapper ReturnedSettings;
					const auto FoundSetting = FoundSettings->Content.Find(Key);
					if (FoundSetting)
					{
						ReturnedSettings.Content.Add(Key, *FoundSetting);
					}

					if (FoundSettings->Content.Num() > 0)
					{
						Delegate.ExecuteIfBound(true, ReturnedSettings);
						return;
					}
				}
			}
		}
	}

	auto Request = GetSingleSettingType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.SettingTypeId = SettingTypeId;
	Request.Key = Key;

	if (!GetSingleSettingType::DoCall(RH_APIs::GetSettingsAPI(), Request, GetSingleSettingType::Delegate::CreateUObject(this, &URH_PlayerSettings::OnGetPlayerSettingResponse, Delegate, SettingTypeId, Key), GetDefault<URH_IntegrationSettings>()->SettingsGetPriority))
	{
		FRH_PlayerSettingsDataWrapper EmptyWrapper;
		Delegate.ExecuteIfBound(false, EmptyWrapper);
	}
}

void URH_PlayerSettings::OnGetPlayerSettingResponse(const GetSingleSettingType::Response& Response, FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString Key)
{
	FRH_PlayerSettingsDataWrapper ResponseWrapper;

	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		// Update the local cache with the new settings (certain legacy setting types can affect multiple keys, so process all entries in the list)
		auto& SettingWrapper = PlayerSettingsByTypeId.FindOrAdd(SettingTypeId);
		
		ResponseWrapper.Content.Add(Key, *Content);
		SettingWrapper.Content.Add(Key, *Content);
	}

	Delegate.ExecuteIfBound(Response.IsSuccessful(), ResponseWrapper);
}

void URH_PlayerSettings::GetPlayerSettingsForKeys(const FString& SettingTypeId, const TArray<FString>& Keys, const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate /*= FRH_PlayerInfoGetPlayerSettingsBlock()*/)
{
	auto Existing = PlayerSettingsByTypeId.Find(SettingTypeId);

	if (Existing != nullptr)
	{
		const FDateTime& Then = Existing->LastMultiFetchTime;
		FDateTime Now = FDateTime::UtcNow();
		if (Then.GetTicks() != 0 && !bForceRefresh)
		{
			// check if we are in the stale threshold, or if it is not set (in which case, always prefer the cache)
			if ((Then + StaleThreshold) < Now || StaleThreshold.IsZero())
			{
				// for specific settings requests, we need to check if we have all the keys we need
				if (auto FoundSettings = PlayerSettingsByTypeId.Find(SettingTypeId))
				{
					bool bHasAllKeys = true;
					FRH_PlayerSettingsDataWrapper ReturnedSettings;
					for (const auto& Key : Keys)
					{
						const auto FoundSetting = FoundSettings->Content.Find(Key);
						if (FoundSetting)
						{
							ReturnedSettings.Content.Add(Key, *FoundSetting);
						}
						else
						{
							bHasAllKeys = false;
							break;
						}
					}

					// if no keys were specified, or all keys specified were found, return the settings, otherwise fall through and request the missing keys
					if (bHasAllKeys)
					{
						// if specific keys were requested, return just that subset
						if (Keys.Num() > 0)
						{
							Delegate.ExecuteIfBound(true, ReturnedSettings);
							return;
						}
						// if no specific keys were requested, return the full set
						else
						{
							Delegate.ExecuteIfBound(true, *FoundSettings);
							return;
						}
					}
				}
			}
		}
	}

	auto Request = GetSettingsForKeysType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.SettingTypeId = SettingTypeId;
	if (Keys.Num() > 0)
	{
		Request.Key = Keys;
	}
	if (!GetSettingsForKeysType::DoCall(RH_APIs::GetSettingsAPI(), Request, GetSettingsForKeysType::Delegate::CreateUObject(this, &URH_PlayerSettings::OnGetPlayerSettingsResponse, Delegate, SettingTypeId, Request.Key), GetDefault<URH_IntegrationSettings>()->SettingsGetPriority))
	{
		FRH_PlayerSettingsDataWrapper EmptyWrapper;
		Delegate.ExecuteIfBound(false, EmptyWrapper);
	}
}

void URH_PlayerSettings::OnGetPlayerSettingsResponse(const GetSettingsForKeysType::Response& Response, FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId, TOptional<TArray<FString>> OptionalKeys)
{
	FRH_PlayerSettingsDataWrapper ResponseWrapper;
	ResponseWrapper.LastMultiFetchTime = FDateTime::UtcNow();

	const auto Content = Response.TryGetDefaultContentAsPointer();
	if (Response.IsSuccessful() && Content != nullptr)
	{
		const bool bIsPartial = OptionalKeys.IsSet();

		for (const auto& Pair : *Content)
		{
			ResponseWrapper.Content.Add(Pair);
		}

		if (bIsPartial)
		{
			// Update the local cache with the new settings (certain legacy setting types can affect multiple keys, so process all entries in the list)
			auto& SettingWrapper = PlayerSettingsByTypeId.FindOrAdd(SettingTypeId);

			for (const auto& Key : OptionalKeys.GetValue())
			{
				const auto Value = ResponseWrapper.Content.Find(Key);
				// if value exists, add it to the local cache, otherwise remove it
				if (Value != nullptr)
				{
					SettingWrapper.Content.Add(Key, *Value);
				}
				else
				{
					SettingWrapper.Content.Remove(Key);
				}
			}

			SettingWrapper.LastMultiFetchTime = ResponseWrapper.LastMultiFetchTime;
		}
		else
		{
			// Update the local cache with the new settings (can just use the response wrapper, as it contains a full and complete set)
			PlayerSettingsByTypeId.Add(SettingTypeId, ResponseWrapper);
		}
	}

	Delegate.ExecuteIfBound(Response.IsSuccessful(), ResponseWrapper);
}

void URH_PlayerSettings::SetPlayerSetting(const FString& SettingTypeId, const FString& Key, const FRHAPI_SetSinglePlayerSettingRequest& SettingDocument, const FRH_PlayerInfoSetPlayerSettingBlock& Delegate /*= FRH_PlayerInfoSetPlayerSettingsBlock()*/, const FRH_ObjectVersionCheck& VersionCheck)
{
	auto Request = SetSettingType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.SettingTypeId = SettingTypeId;
	Request.Key = Key;
	Request.SetSinglePlayerSettingRequest = SettingDocument;
	VersionCheck.ApplyToRequest(Request);

	auto UpdatedContent = MakeShared<FRH_PlayerSettingsDataWrapper>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<SetSettingType>>(
		SetSettingType::Delegate::CreateWeakLambda(this, [this, UpdatedContent, SettingTypeId](const SetSettingType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					UpdatedContent->Content = *Content;

					// Update the local cache with the new settings (certain legacy setting types can affect multiple keys, so process all entries in the list)
					auto& SettingWrapper = PlayerSettingsByTypeId.FindOrAdd(SettingTypeId);

					for (const auto& Pair : UpdatedContent->Content)
					{
						SettingWrapper.Content.Add(Pair);
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, UpdatedContent, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, UpdatedContent.Get(), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->SettingsUpdatePriority
	);

	Helper->Start(RH_APIs::GetSettingsAPI(), Request);
}


void URH_PlayerSettings::DeletePlayerSetting(const FString& SettingTypeId, const FString& Key, const FRH_GenericSuccessWithErrorBlock& Delegate /*= FRH_GenericSuccessWithErrorBlock()*/)
{
	auto Request = DeleteSettingType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.SettingTypeId = SettingTypeId;
	Request.Key = Key;

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<DeleteSettingType>>(
		DeleteSettingType::Delegate::CreateWeakLambda(this, [this, SettingTypeId, Key](const DeleteSettingType::Response& Resp)
			{
				// Update the local cache with the deleted setting
				auto SettingWrapper = PlayerSettingsByTypeId.Find(SettingTypeId);
				if (ensure(SettingWrapper != nullptr))
				{
					SettingWrapper->Content.Remove(Key);
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->SettingsUpdatePriority
	);

	Helper->Start(RH_APIs::GetSettingsAPI(), Request);
}

///

URH_PlayerDeserter::URH_PlayerDeserter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PollTimerName = FName(TEXT("PlayerDeserter"));
	PollPriority = GetDefault<URH_IntegrationSettings>()->DeserterGetPriority;
}

void URH_PlayerDeserter::Poll(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetDeserterAllType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<GetDeserterAllType>>(
		GetDeserterAllType::Delegate::CreateUObject(this, &URH_PlayerDeserter::Update),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				PollComplete(bSuccess, Delegate);
			}),
		PollPriority
	);

	Helper->Start(RH_APIs::GetDeserterAPI(), Request);
}

void URH_PlayerDeserter::SetDeserterStatus(const FString& DeserterId, const FRHAPI_DeserterUpdateRequest& NewDeserterStatus, const FRH_OnRequestPlayerInfoSubobjectDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	SetDeserterType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.DeserterId = DeserterId;
	Request.DeserterUpdateRequest = NewDeserterStatus;

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<SetDeserterType>>(
		SetDeserterType::Delegate::CreateWeakLambda(this, [this, Delegate](const SetDeserterType::Response& Response)
			{
				const auto Content = Response.TryGetDefaultContentAsPointer();
				if (Response.IsSuccessful() && Content != nullptr)
				{
					DeserterStatus.Add(Content->GetDeserterId(), *Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, this);
			}),
		GetDefault<URH_IntegrationSettings>()->DeserterSetPriority
	);

	Helper->Start(RH_APIs::GetDeserterAPI(), Request);
}

void URH_PlayerDeserter::ClearDeserterStatus(const FString& DeserterId, const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	ClearDeserterType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.DeserterId = DeserterId;

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<ClearDeserterType>>(
		ClearDeserterType::Delegate::CreateWeakLambda(this, [this, DeserterId, Delegate](const ClearDeserterType::Response& Response)
			{
				DeserterStatus.Remove(DeserterId);
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->DeserterSetPriority
	);

	Helper->Start(RH_APIs::GetDeserterAPI(), Request);
}

void URH_PlayerDeserter::ClearAllDeserterStatus(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	ClearAllDeserterType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<ClearAllDeserterType>>(
		ClearAllDeserterType::Delegate::CreateWeakLambda(this, [this, Delegate](const ClearAllDeserterType::Response& Response)
			{
				DeserterStatus.Empty();
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->DeserterSetPriority
	);

	Helper->Start(RH_APIs::GetDeserterAPI(), Request);
}

///


URH_PlayerMatches::URH_PlayerMatches(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PollTimerName = FName(TEXT("PlayerMatches"));
	PollPriority = GetDefault<URH_IntegrationSettings>()->MatchesGetOtherPriority;


	PollPageSize = GetDefault<URH_IntegrationSettings>()->PlayerMatchesPageSize;
	PollMaxPageCount = GetDefault<URH_IntegrationSettings>()->PlayerMatchesMaxPageCount;
	PollMaxAge = GetDefault<URH_IntegrationSettings>()->PlayerMatchesMaxAge;
}

void URH_PlayerMatches::Poll(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// create a shared pointer to a cursor to track our polling context
	TSharedPtr<FPollContext> Context = MakeShared<FPollContext>();

	Context->PageSize = PollPageSize;
	Context->MaxAgeLimit = PollMaxAge;
	Context->PageCountLimit = PollMaxPageCount;

	PollNextPage(Delegate, Context);
}

void URH_PlayerMatches::PollNextPage(const FRH_PollCompleteFunc & Delegate, TSharedPtr<FPollContext> Context)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetMatchesType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	
	if (Context.IsValid())
	{
		if (!Context->Cursor.IsEmpty())
		{
			Request.Cursor = Context->Cursor;
		}

		if (Context->PageSize > 0)
		{
			Request.PageSize = Context->PageSize;
		}
	}

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<GetMatchesType>>(
		GetMatchesType::Delegate::CreateWeakLambda(this, [this, Context](const GetMatchesType::Response& Response)
			{
				// update locally based on response, and update our context
				Update(Response, Context);
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				if (Context.IsValid() && !CheckPollingCursorComplete(Context))
				{
					// if cursor is not empty, continue polling
					PollNextPage(Delegate, Context);
				}
				else
				{
					// if cursor is empty, we are done with the poll loop
					PollComplete(bSuccess, Delegate);
				}
			}),
		PollPriority
	);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}

bool URH_PlayerMatches::CheckPollingCursorComplete(const TSharedPtr<FPollContext> Context)
{
	// if cursor is not empty and there are more matches to fetch, check to see if we should fetch them
	if (Context.IsValid() && !Context->Cursor.IsEmpty())
	{
		// check if we have hit our max age limit
		if (!Context->MaxAgeLimit.IsZero() && Context->CurrentMaxAge > Context->MaxAgeLimit)
		{
			// complete the poll
			return true;
		}
		// check if we have hit our max page count limit
		else if (Context->PageCountLimit > 0 && Context->CurrentPageCount >= Context->PageCountLimit)
		{
			// complete the poll
			return true;
		}
		else
		{
			// cursor is valid and limit has not been reached, do not complete the poll
			return false;
		}
	}
	else
	{
		// if we have no valid cursor, complete the poll
		return true;
	}
}

///

URH_PlayerReports::URH_PlayerReports(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

void URH_PlayerReports::GetReportsSentAsync(const FString& Cursor, const int32 PageSize, const FRH_PlayerInfoGetPlayerReportsBlock& Delegate)
{
	typedef GetReportsSentType BaseType;

	auto Request = BaseType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	if (Cursor.Len() > 0)
	{
		Request.Cursor = Cursor;
	}
	if (PageSize > 0)
	{
		Request.PageSize = PageSize;
	}
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();

	struct FCursorContext
	{
		FString Cursor;
	} Context;
	auto SharedContext = MakeShared<FCursorContext>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, SharedContext](const BaseType::Response& Response)
			{
				const auto Content = Response.TryGetDefaultContentAsPointer();
				if (Response.IsSuccessful() && Content != nullptr)
				{
					if (auto* NextCursor = Content->GetNextCursorOrNull())
					{
						SharedContext->Cursor = *NextCursor;
					}

					// merge the response into our local cache
					for (const auto& Report : Content->GetReports())
					{
						// try to find the report in our local cache, update it there (in case of any changes)
						bool bFound = false;
						for (auto& ExistingReport : ReportsSent)
						{
							if (ExistingReport.GetReportId() == Report.GetReportId())
							{
								bFound = true;
								ExistingReport = Report;
								break;
							}
						}
						// if we didn't find it, add it to our local cache
						if (!bFound)
						{
							ReportsSent.Add(Report);
						}
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, SharedContext, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ReportsSent, SharedContext->Cursor, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetPlayerReportsSentPriority
	);

	Helper->Start(RH_APIs::GetReportsAPI(), Request);
}

void URH_PlayerReports::GetReportsReceivedAsync(const FString& Cursor, const int32 PageSize, const FRH_PlayerInfoGetPlayerReportsBlock& Delegate)
{
	typedef GetReportsReceivedType BaseType;

	auto Request = BaseType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	if (Cursor.Len() > 0)
	{
		Request.Cursor = Cursor;
	}
	if (PageSize > 0)
	{
		Request.PageSize = PageSize;
	}
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();

	struct FCursorContext
	{
		FString Cursor;
	} Context;
	auto SharedContext = MakeShared<FCursorContext>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, SharedContext](const BaseType::Response& Response)
			{
				const auto Content = Response.TryGetDefaultContentAsPointer();
				if (Response.IsSuccessful() && Content != nullptr)
				{
					if (auto* NextCursor = Content->GetNextCursorOrNull())
					{
						SharedContext->Cursor = *NextCursor;
					}

					// merge the response into our local cache
					for (const auto& Report : Content->GetReports())
					{
						// try to find the report in our local cache, update it there (in case of any changes)
						bool bFound = false;
						for (auto& ExistingReport : ReportsReceived)
						{
							if (ExistingReport.GetReportId() == Report.GetReportId())
							{
								bFound = true;
								ExistingReport = Report;
								break;
							}
						}
						// if we didn't find it, add it to our local cache
						if (!bFound)
						{
							ReportsReceived.Add(Report);
						}
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, SharedContext, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ReportsReceived, SharedContext->Cursor, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetPlayerReportsReceivedPriority
	);

	Helper->Start(RH_APIs::GetReportsAPI(), Request);
}

void URH_PlayerReports::CreateReport(const FRHAPI_PlayerReportCreate& Report, const FRH_PlayerInfoCreatePlayerReportBlock& Delegate)
{
	CreateReport(Report, GetPlayerInfo()->GetAuthContext(), Delegate);
}

void URH_PlayerReports::CreateReport(const FRHAPI_PlayerReportCreate& Report, FAuthContextPtr AuthContextOverride, const FRH_PlayerInfoCreatePlayerReportBlock& Delegate)
{
	typedef CreateReportType BaseType;

	auto Request = BaseType::Request();
	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.PlayerReportCreate = Report;

	auto ReportResult = MakeShared<FRHAPI_PlayerReport>();

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, ReportResult](const BaseType::Response& Response)
			{
				const auto Content = Response.TryGetDefaultContentAsPointer();
				if (Response.IsSuccessful() && Content != nullptr)
				{
					// merge the response into our local cache
					*ReportResult = *Content;
					ReportsSent.Add(*Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, ReportResult, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, ReportResult.Get(), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->CreatePlayerReportPriority
	);

	Helper->Start(RH_APIs::GetReportsAPI(), Request);
}

