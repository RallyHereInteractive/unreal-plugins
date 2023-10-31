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

	if (Response.IsSuccessful())
	{
		if (const auto DisplayNames = Response.Content.GetDisplayNamesOrNull())
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

	if (Response.IsSuccessful())
	{
		if (const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>* IdentityPlatforms = Response.Content.GetIdentityPlatformsOrNull())
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

	PlayerSessions = CreateDefaultSubobject<URH_PlayerSessions>(TEXT("PlayerSessions"));

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
	if (PlayerSessions != nullptr)
	{
		PlayerSessions->PlayerUuid = Value;
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
	const FAuthContextPtr AuthContext = GetAuthContext();
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		return AuthContext->GetLoginResult().GetValue().GetPlatform();
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
		if (LastRequestPlatforms + StaleThreshold < Now)
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
		FDateTime Now = FDateTime::UtcNow();
		if (LastRequestPlatforms + StaleThreshold < Now)
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
	if (Response.IsSuccessful())
	{
		if (const auto PSS = GetPlayerInfoSubsystem())
		{
			// update our local cache of references
			LinkedPlayerPlatforms.Reset(Response.Content.LinkedPortals.Num());
			Infos.Reset(Response.Content.LinkedPortals.Num());

			for (auto const& LinkedPlatform : Response.Content.LinkedPortals)
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

void URH_PlayerInfo::GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, const FRH_PlayerInfoGetPlayerSettingsBlock& Delegate /*= FRH_PlayerInfoGetPlayerSettingsBlock()*/)
{
	if (auto FoundLastRequested = LastRequestSettingsByTypeId.Find(SettingTypeId))
	{
		FDateTime Now = FDateTime::UtcNow();
		if (FoundLastRequested->GetTicks() != 0 && (*FoundLastRequested) + StaleThreshold < Now && !bForceRefresh)
		{
			if (auto FoundSettings = PlayerSettingsByTypeId.Find(SettingTypeId))
			{
				if (FoundSettings->Content.Num() > 0)
				{
					Delegate.ExecuteIfBound(true, *FoundSettings);
					return;
				}
			}
		}
	}

	auto Request = GetSettings::Request();
	Request.PlayerUuid = RHPlayerUuid;
	Request.SettingTypeId = SettingTypeId;
	Request.AuthContext = GetAuthContext();
	if (!GetSettings::DoCall(RH_APIs::GetSettingsAPI(), Request, GetSettings::Delegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerSettingsResponse, Delegate, SettingTypeId), GetDefault<URH_IntegrationSettings>()->SettingsGetPriority))
	{
		FRH_PlayerSettingsDataWrapper EmptyWrapper;
		Delegate.ExecuteIfBound(false, EmptyWrapper);
	}
}

void URH_PlayerInfo::OnGetPlayerSettingsResponse(const GetSettings::Response& Response, FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId)
{
	FRH_PlayerSettingsDataWrapper ResponseWrapper;
	ResponseWrapper.Content.Empty();

	if (Response.IsSuccessful())
	{
		for (const auto& Pair : Response.Content)
		{
			ResponseWrapper.Content.Add(Pair);
		}
	}

	PlayerSettingsByTypeId.Add(SettingTypeId, ResponseWrapper);
	LastRequestSettingsByTypeId.Add(SettingTypeId, FDateTime::UtcNow());
	Delegate.ExecuteIfBound(Response.IsSuccessful(), ResponseWrapper);
}

void URH_PlayerInfo::SetPlayerSettings(const FString& SettingTypeId, FRH_PlayerSettingsDataWrapper& SettingsData, const FRH_PlayerInfoSetPlayerSettingsBlock& Delegate /*= FRH_PlayerInfoSetPlayerSettingsBlock()*/)
{
	// Disallow duplicate active requested SettingTypeIds
	if (PendingSettingRequestsByTypeId.Contains(SettingTypeId))
	{
		FRH_PlayerSettingsDataWrapper EmptyWrapper;
		Delegate.ExecuteIfBound(false, EmptyWrapper);
		return;
	}

	if (SettingsData.Content.Num() <= 0)
	{
		PendingSettingRequestsByTypeId.Remove(SettingTypeId);
		SetPlayerSettingResponses.Remove(SettingTypeId);
		FRH_PlayerSettingsDataWrapper EmptyWrapper;
		Delegate.ExecuteIfBound(false, EmptyWrapper);
		return;
	}

	const FRH_PlayerSettingKeySetWrapper PendingKeys;
	PendingSettingRequestsByTypeId.Add(SettingTypeId, PendingKeys);

	if (const auto FoundKeySet = PendingSettingRequestsByTypeId.Find(SettingTypeId))
	{
		for (const auto& Pair : SettingsData.Content)
		{
			FoundKeySet->SettingKeySet.Add(Pair.Key);
		}
	}

	for (const auto& Pair : SettingsData.Content)
	{
		if (const auto Value = Pair.Value.GetValueOrNull())
		{
			auto Request = SetSettings::Request();
			Request.PlayerUuid = RHPlayerUuid;
			Request.SettingTypeId = SettingTypeId;
			Request.AuthContext = GetAuthContext();
			Request.Key = Pair.Key;
			Request.SetSinglePlayerSettingRequest.SetV(Pair.Value.V);
			Request.SetSinglePlayerSettingRequest.SetValue(*Value);
			if (!SetSettings::DoCall(RH_APIs::GetSettingsAPI(), Request, SetSettings::Delegate::CreateUObject(this, &URH_PlayerInfo::OnSetPlayerSettingsResponse, Delegate, SettingTypeId, Pair.Key, SettingsData), GetDefault<URH_IntegrationSettings>()->SettingsUpdatePriority))
			{
				PendingSettingRequestsByTypeId.Remove(SettingTypeId);
				FRH_PlayerSettingsDataWrapper EmptyWrapper;
				Delegate.ExecuteIfBound(false, EmptyWrapper);
			}
		}
	}
}

void URH_PlayerInfo::OnSetPlayerSettingsResponse(const SetSettings::Response& Response, const FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, FRH_PlayerSettingsDataWrapper SettingsData)
{
	if (Response.IsSuccessful())
	{
		const auto FoundPendingSettings = PendingSettingRequestsByTypeId.Find(SettingTypeId);
		if (FoundPendingSettings && FoundPendingSettings->SettingKeySet.Contains(SettingKey))
		{
			FoundPendingSettings->SettingKeySet.Remove(SettingKey);

			if (!SetPlayerSettingResponses.Contains(SettingKey))
			{
				FRH_PlayerSettingsDataWrapper NewSettingsWrapper;
				SetPlayerSettingResponses.Add(SettingKey, NewSettingsWrapper);
			}

			if (auto FoundResponses = SetPlayerSettingResponses.Find(SettingKey))
			{
				for (const auto& pair : Response.Content)
				{
					FoundResponses->Content.Add(pair);
				}

				if (FoundPendingSettings->SettingKeySet.Num() <= 0)
				{
					// All Setting update requests have responded to successfully
					PlayerSettingsByTypeId.Add(SettingTypeId, SettingsData);
					LastRequestSettingsByTypeId.Add(SettingTypeId, FDateTime::UtcNow());
					PendingSettingRequestsByTypeId.Remove(SettingTypeId);
					Delegate.ExecuteIfBound(true, (*FoundResponses));
				}
			}
		}
	}
	else
	{
		PendingSettingRequestsByTypeId.Remove(SettingTypeId);
		SetPlayerSettingResponses.Remove(SettingTypeId);
		FRH_PlayerSettingsDataWrapper EmptyWrapper;
		Delegate.ExecuteIfBound(false, EmptyWrapper);
	}
}


void URH_PlayerInfo::GetPlayerRankings(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, const FRH_PlayerInfoGetPlayerRankingsBlock& Delegate /*= FRH_PlayerInfoGetPlayerRankingsBlock()*/)
{
	FDateTime Now = FDateTime::UtcNow();
	if (LastRequestRankings.GetTicks() != 0 && (LastRequestRankings + StaleThreshold) < Now && !bForceRefresh)
	{
		TArray<FRHAPI_PlayerRankResponseV2> Values;
		PlayerRankingsByRankingId.GenerateValueArray(Values);
		Delegate.ExecuteIfBound(false, Values);
		return;
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
	if (Response.IsSuccessful())
	{
		PlayerRankingsByRankingId.Empty();

		for (const auto& PlayerRankResponse : Response.Content.GetPlayerRanks())
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
	if (Response.IsSuccessful())
	{
		for (const auto& Player : Response.Content.UpdatedPlayers)
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

URH_PlayerPresence::URH_PlayerPresence(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
	, bInitialized(false)
	, Status(ERHAPI_OnlineStatus::Offline)
{
}

UFUNCTION(BlueprintPure, Category = "Presence")
URH_PlayerInfo* URH_PlayerPresence::GetPlayerInfo() const
{
	return Cast<URH_PlayerInfo>(GetOuter());
}

void URH_PlayerPresence::CheckPollStatus(const bool bForceUpdate)
{
	if (!ShouldPoll())
	{
		// no one is listening, disable polling
		if (PresencePoller.IsValid())
		{
			PresencePoller->StopPoll();
		}

		return;
	}

	static FName PollTimerName(TEXT("PlayerPresence"));

	// create a poller if one was not created yet
	if (!PresencePoller.IsValid())
	{
		PresencePoller = FRH_PollControl::CreateAutoPoller();
	}
	
	// only start if poller was not already started
	if (PresencePoller->IsInactive())
	{
		// kick immediately, as someone just became interested in this result
		PresencePoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_PlayerPresence::PollPresence), PollTimerName, true);
	}
	else if (bForceUpdate)
	{
		PresencePoller->ExecutePoll();
	}
}

void URH_PlayerPresence::PollPresence(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetPresenceType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.IfNoneMatch = ETag;

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<GetPresenceType>>(
		GetPresenceType::Delegate::CreateUObject(this, &URH_PlayerPresence::Update),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo) { ExecuteDelegates(bSuccess); Delegate.ExecuteIfBound(bSuccess, ShouldPoll()); }),
		GetDefault<URH_IntegrationSettings>()->PresenceGetOtherPriority
	);

	Helper->Start(RH_APIs::GetPresenceAPI(), Request);
}

void URH_PlayerPresence::ExecuteDelegates(bool bSuccess)
{
	if (bSuccess)
	{
		LastUpdated = FDateTime::UtcNow();
	
		SCOPED_NAMED_EVENT(RallyHere_BroadcastPresenceUpdated, FColor::Purple);
		BLUEPRINT_OnPresenceUpdatedDelegate.Broadcast(this);
		OnPresenceUpdatedDelegate.Broadcast(this);
	}

	// copy the temporary request array before invoking, then clear
	TArray<FRH_OnRequestPlayerPresenceBlock> Temp = TemporaryRequestDelegates;
	TemporaryRequestDelegates.Reset();
	for (auto& Delegate : Temp)
	{
		Delegate.ExecuteIfBound(bSuccess, this);
	}

	auto* PlayerInfo = GetPlayerInfo();
	if (PlayerInfo != nullptr && bSuccess)
	{
		PlayerInfo->OnPresenceUpdated();
	}
}




///

URH_PlayerSessions::URH_PlayerSessions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bInitialized(false)
{
}

UFUNCTION(BlueprintPure, Category = "Presence")
URH_PlayerInfo* URH_PlayerSessions::GetPlayerInfo() const
{
	return Cast<URH_PlayerInfo>(GetOuter());
}

void URH_PlayerSessions::CheckPollStatus(const bool bForceUpdate)
{
	if (!ShouldPoll())
	{
		// no one is listening, disable polling
		if (SessionsPoller.IsValid())
		{
			SessionsPoller->StopPoll();
		}

		return;
	}

	static FName PollTimerName(TEXT("PlayerSessions"));

	// create a poller if one was not created yet
	if (!SessionsPoller.IsValid())
	{
		SessionsPoller = FRH_PollControl::CreateAutoPoller();
	}
	
	// only start if poller was not already started
	if (SessionsPoller->IsInactive())
	{
		// kick immediately, as someone just became interested in this result
		SessionsPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_PlayerSessions::PollSessions), PollTimerName, true);
	}
	else if (bForceUpdate)
	{
		SessionsPoller->ExecutePoll();
	}
}

void URH_PlayerSessions::PollSessions(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetSessionsType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.IfNoneMatch = ETag;

	const auto Helper = MakeShared<FRH_SimpleQueryHelper<GetSessionsType>>(
		GetSessionsType::Delegate::CreateUObject(this, &URH_PlayerSessions::Update),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo) { ExecuteDelegates(bSuccess); Delegate.ExecuteIfBound(bSuccess, ShouldPoll()); }),
		GetDefault<URH_IntegrationSettings>()->SessionsGetOtherPriority
	);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}

void URH_PlayerSessions::ExecuteDelegates(bool bSuccess)
{
	if (bSuccess)
	{
		LastUpdated = FDateTime::UtcNow();
	
		SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionUpdated, FColor::Purple);
		BLUEPRINT_OnSessionsUpdatedDelegate.Broadcast(this);
		OnSessionsUpdatedDelegate.Broadcast(this);
	}

	// copy the temporary request array before invoking, then clear
	TArray<FRH_OnRequestPlayerSessionsBlock> Temp = TemporaryRequestDelegates;
	TemporaryRequestDelegates.Reset();
	for (auto& Delegate : Temp)
	{
		Delegate.ExecuteIfBound(bSuccess, this);
	}

	auto* PlayerInfo = GetPlayerInfo();
	if (PlayerInfo != nullptr && bSuccess)
	{
		PlayerInfo->OnSessionsUpdated();
	}
}