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

			if (PlayerInfo->GetInventorySubsystem())
			{
				PlayerInfo->GetInventorySubsystem()->CheckPollStatus();
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
	
	const auto NewInfo = NewObject<URH_PlayerInfo>(this);
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

void URH_PlayerInfoSubsystem::LookupPlayer(FString PlayerName, FRH_PlayerInfoLookupPlayerBlock Delegate)
{
	auto Request = TLookupPlayer::Request();

	Request.DisplayName = TArray<FString>();
	Request.DisplayName.GetValue().Push(PlayerName);
	Request.AuthContext = GetAuthContext();
	if (!TLookupPlayer::DoCall(RH_APIs::GetUsersAPI(), Request, TLookupPlayer::Delegate::CreateUObject(this, &URH_PlayerInfoSubsystem::OnLookupPlayerResponse, Delegate)))
	{
		Delegate.ExecuteIfBound(false, TArray<URH_PlayerInfo*>());
	}
}

void URH_PlayerInfoSubsystem::OnLookupPlayerResponse(const TLookupPlayer::Response& Resp, FRH_PlayerInfoLookupPlayerBlock Delegate)
{
	TArray<URH_PlayerInfo*> OutInfos;

	if (Resp.IsSuccessful())
	{
		if (const auto DisplayNames = Resp.Content.GetDisplayNamesOrNull())
		{
			for (auto const& DisplayName : *DisplayNames)
			{
				for (auto const& Pair : DisplayName)
				{
					for (auto const& Player : Pair.Value)
					{
						FGuid PlayerUuidGuid;
						FGuid::Parse(Player.PlayerUuid, PlayerUuidGuid);
						OutInfos.Push(GetOrCreatePlayerInfo(PlayerUuidGuid));
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

	InventorySubsystem = CreateDefaultSubobject<URH_InventorySubsystem>(TEXT("InventorySubsystem"));
	InventorySubsystem->SetPlayerInfo(this);
}

void URH_PlayerInfo::BeginDestroy()
{
	if (InventorySubsystem != nullptr)
	{
		InventorySubsystem->Deinitialize();
		InventorySubsystem = nullptr;
	}

	Super::BeginDestroy();
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
	InventorySubsystem->Initialize();
}

ERHAPI_PlatformTypes URH_PlayerInfo::GetLoggedInPlatformType() const
{
	const FAuthContextPtr AuthContext = GetAuthContext();
	if (AuthContext.IsValid())
	{
		return ERHAPI_PlatformTypes(AuthContext->GetLoginResult().GetValue().PortalId);
	}
	return ERHAPI_PlatformTypes::PT_UNKNOWN;
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

void URH_PlayerInfo::GetLastKnownGamerTagAsync(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, ERHAPI_PlatformTypes PreferredPlatformType /*= ERHAPI_PlatformTypes::PT_UNKNOWN*/, const FRH_PlayerInfoGetGamerTagBlock Delegate /*= FRH_PlayerInfoGetGamerTagBlock()*/, const URH_LocalPlayerSubsystem* LocalPlayerSubsystem /*= nullptr*/)
{
	// Get platform type from logged in portal if PreferredPlatformType is not provided
	if (PreferredPlatformType == ERHAPI_PlatformTypes::PT_UNKNOWN)
	{
		PreferredPlatformType = GetLoggedInPlatformType();
	}

	if (LastRequestPlatforms.GetTicks() != 0 && !bForceRefresh)
	{
		FDateTime Now = FDateTime::UtcNow();
		if (LastRequestPlatforms + StaleThreshold < Now)
		{
			FString OutGamerTag = FString("");
			if (GetLastKnownGamerTag(OutGamerTag, PreferredPlatformType))
			{
				Delegate.ExecuteIfBound(true, OutGamerTag);
			}
			else
			{
				Delegate.ExecuteIfBound(false, OutGamerTag);
			}

			return;
		}
		return;
	}

	GetLinkedPlatformInfo(StaleThreshold, bForceRefresh, FRH_PlayerInfoGetPlatformsDelegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerLinkedPlatformsForLastKnownGamerTagResponse, PreferredPlatformType, Delegate, LocalPlayerSubsystem));
}

void URH_PlayerInfo::OnGetPlayerLinkedPlatformsForLastKnownGamerTagResponse(bool bSuccess, const TArray<URH_PlayerPlatformInfo*>& Platforms, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagBlock Delegate, const URH_LocalPlayerSubsystem* LocalPlayerSubsystem)
{
	if (Platforms.Num())
	{
		const auto findPlatformInfo = Platforms.FindByPredicate([PreferredPlatformType](const URH_PlayerPlatformInfo* PortalInfo)
			{
				return PortalInfo->GetPlatformType() == PreferredPlatformType;
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
						MessageSanitizer->SanitizeDisplayName(PlatformInfo->GetLastKnownGamerTag(), FOnMessageProcessed::CreateUObject(this, &URH_PlayerInfo::OnDisplayNameSanitized, PreferredPlatformType, Delegate));
						return;
					}
				}
			}

			Delegate.ExecuteIfBound(true, PlatformInfo->GetLastKnownGamerTag());
			return;
		}
	}

	Delegate.ExecuteIfBound(false, FString(""));
}

void URH_PlayerInfo::OnDisplayNameSanitized(bool bSuccess, const FString& SanitizedMessage, ERHAPI_PlatformTypes PreferredPlatformType, const FRH_PlayerInfoGetGamerTagBlock Delegate)
{
	if (bSuccess)
	{
		auto Platforms = GetPlayerPlatforms();
		const auto findPlatformInfo = Platforms.FindByPredicate([PreferredPlatformType](const URH_PlayerPlatformInfo* PortaInfo)
			{
				return PortaInfo->GetPlatformType() == PreferredPlatformType;
			});

		URH_PlayerPlatformInfo* PlatformInfo = findPlatformInfo != nullptr ? *findPlatformInfo : Platforms[0];

		if (PlatformInfo != nullptr)
		{
			PlatformInfo->GamerTag = SanitizedMessage;
		}
		
		Delegate.ExecuteIfBound(true, SanitizedMessage);
		return;
	}

	Delegate.ExecuteIfBound(false, FString(""));
}

void URH_PlayerInfo::GetLinkedPlatformInfo(const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, FRH_PlayerInfoGetPlatformsBlock Delegate /*= FRH_PlayerInfoGetPlatformsBlock()*/)
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
	if (!GetPlatforms::DoCall(RH_APIs::GetUsersAPI(), Request, GetPlatforms::Delegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerLinkedPlatformsResponse, Delegate)))
	{
		Delegate.ExecuteIfBound(false, TArray<URH_PlayerPlatformInfo*>());
	}
}

void URH_PlayerInfo::OnGetPlayerLinkedPlatformsResponse(const GetPlatforms::Response& Resp, FRH_PlayerInfoGetPlatformsBlock Delegate)
{
	TArray<URH_PlayerPlatformInfo*> Infos;
	if (Resp.IsSuccessful())
	{
		if (const auto PSS = GetPlayerInfoSubsystem())
		{
			// update our local cache of references
			LinkedPlayerPlatforms.Reset(Resp.Content.LinkedPortals.Num());
			Infos.Reset(Resp.Content.LinkedPortals.Num());

			for (auto const& LinkedPlatform : Resp.Content.LinkedPortals)
			{
				FString PortalUserId;
				if (LinkedPlatform.GetPortalUserId(PortalUserId))
				{
					auto PlayerPlatformId = FRH_PlayerPlatformId(PortalUserId, ERHAPI_PlatformTypes(LinkedPlatform.PortalId));
					LinkedPlayerPlatforms.Add(PlayerPlatformId);
					
					auto* PlayerPlatformInfo = GetPlayerPlatformInfo(PlayerPlatformId);
					
					// update gamertag
					if (PlayerPlatformInfo != nullptr)
					{
						Infos.Add(PlayerPlatformInfo);
						LinkedPlatform.GetDisplayName(PlayerPlatformInfo->GamerTag);

						FGuid PlayerUuid;
						if (FGuid::Parse(LinkedPlatform.GetPlayerUuid(), PlayerUuid))
						{
							PSS->AddPlayerLink(PlayerPlatformId, PlayerUuid);
						}
					}
				}
			}
		}
	}

	LastRequestPlatforms = FDateTime::UtcNow();
	Delegate.ExecuteIfBound(Resp.IsSuccessful(), Infos);
}
void URH_PlayerInfo::GetPlayerSettings(const FString& SettingTypeId, const FTimespan& StaleThreshold /* = FTimespan()*/, bool bForceRefresh /*= false*/, FRH_PlayerInfoGetPlayerSettingsBlock Delegate /*= FRH_PlayerInfoGetPlayerSettingsBlock()*/)
{
	if (auto FoundLastRequested = LastRequestSettingsByTypeId.Find(SettingTypeId))
	{
		FDateTime Now = FDateTime::UtcNow();
		if (FoundLastRequested->GetTicks() != 0 && (*FoundLastRequested) + StaleThreshold < Now && !bForceRefresh)
		{
			if (auto FoundSettings = PlayerSettingsByTypeId.Find(SettingTypeId))
			{
				if ((*FoundSettings)->Content.Num() > 0)
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
	if (!GetSettings::DoCall(RH_APIs::GetSettingsAPI(), Request, GetSettings::Delegate::CreateUObject(this, &URH_PlayerInfo::OnGetPlayerSettingsResponse, Delegate, SettingTypeId)))
	{
		Delegate.ExecuteIfBound(false, nullptr);
	}
}

void URH_PlayerInfo::OnGetPlayerSettingsResponse(const GetSettings::Response& Response, FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId)
{
	URH_PlayerSettingsDataWrapper* ResponseWrapper = NewObject<URH_PlayerSettingsDataWrapper>();
	ResponseWrapper->Content.Empty();

	if (Response.IsSuccessful())
	{
		for (const auto& Pair : Response.Content)
		{
			ResponseWrapper->Content.Add(Pair);
		}
	}

	PlayerSettingsByTypeId.Add(SettingTypeId, ResponseWrapper);
	LastRequestSettingsByTypeId.Add(SettingTypeId, FDateTime::UtcNow());
	Delegate.ExecuteIfBound(Response.IsSuccessful(), ResponseWrapper);
}

void URH_PlayerInfo::SetPlayerSettings(const FString& SettingTypeId, URH_PlayerSettingsDataWrapper* SettingsData, FRH_PlayerInfoSetPlayerSettingsBlock Delegate /*= FRH_PlayerInfoSetPlayerSettingsBlock()*/)
{
	// Disallow duplicate active requested SettingTypeIds
	if (PendingSettingRequestsByTypeId.Contains(SettingTypeId))
	{
		Delegate.ExecuteIfBound(false, nullptr);
		return;
	}

	if (SettingsData == nullptr || SettingsData->Content.Num() <= 0)
	{
		PendingSettingRequestsByTypeId.Remove(SettingTypeId);
		SetPlayerSettingResponses.Remove(SettingTypeId);
		Delegate.ExecuteIfBound(false, nullptr);
		return;
	}

	const FRH_PlayerSettingKeySetWrapper PendingKeys;
	PendingSettingRequestsByTypeId.Add(SettingTypeId, PendingKeys);

	if (const auto FoundKeySet = PendingSettingRequestsByTypeId.Find(SettingTypeId))
	{
		for (const auto& Pair : SettingsData->Content)
		{
			FoundKeySet->SettingKeySet.Add(Pair.Key);
		}
	}

	for (const auto& Pair : SettingsData->Content)
	{
		if (const auto Value = Pair.Value.GetValueOrNull())
		{
			auto Request = SetSettings::Request();
			Request.PlayerUuid = RHPlayerUuid;
			Request.SettingTypeId = SettingTypeId;
			Request.AuthContext = GetAuthContext();
			Request.Key = Pair.Key;
			Request.BodySetSinglePlayerUuidSettingV2PlayerPlayerUuidSettingTypeSettingTypeIdKeyKeyPut.V = Pair.Value.V;
			Request.BodySetSinglePlayerUuidSettingV2PlayerPlayerUuidSettingTypeSettingTypeIdKeyKeyPut.Value = *Value;
			if (!SetSettings::DoCall(RH_APIs::GetSettingsAPI(), Request, SetSettings::Delegate::CreateUObject(this, &URH_PlayerInfo::OnSetPlayerSettingsResponse, Delegate, SettingTypeId, Pair.Key, SettingsData)))
			{
				PendingSettingRequestsByTypeId.Remove(SettingTypeId);
				Delegate.ExecuteIfBound(false, nullptr);
			}
		}
	}
}

void URH_PlayerInfo::OnSetPlayerSettingsResponse(const SetSettings::Response& Response, FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, URH_PlayerSettingsDataWrapper* SettingsData)
{
	if (Response.IsSuccessful())
	{
		const auto FoundPendingSettings = PendingSettingRequestsByTypeId.Find(SettingTypeId);
		if (FoundPendingSettings && FoundPendingSettings->SettingKeySet.Contains(SettingKey))
		{
			FoundPendingSettings->SettingKeySet.Remove(SettingKey);

			if (!SetPlayerSettingResponses.Contains(SettingKey))
			{
				URH_PlayerSettingsDataWrapper* NewSettingsWrapper = NewObject<URH_PlayerSettingsDataWrapper>();
				SetPlayerSettingResponses.Add(SettingKey, NewSettingsWrapper);
			}

			if (auto FoundResponses = SetPlayerSettingResponses.Find(SettingKey))
			{
				for (const auto& pair : Response.Content)
				{
					(*FoundResponses)->Content.Add(pair);
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
		Delegate.ExecuteIfBound(false, nullptr);
	}
}

bool URH_PlayerInfo::GetLastKnownGamerTag(FString& OutGamerTag, ERHAPI_PlatformTypes PreferredPlatformType) const
{
	if (LinkedPlayerPlatforms.Num() == 0)
	{
		return false;
	}

	// Get platform type from logged in portal if PreferredPlatformType is not provided
	if (PreferredPlatformType == ERHAPI_PlatformTypes::PT_UNKNOWN)
	{
		PreferredPlatformType = GetLoggedInPlatformType();
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
			OutGamerTag = PlayerPlatformInfo->GetLastKnownGamerTag();
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
	PresenceRequestDelay = 30.f;
}

UFUNCTION(BlueprintPure, Category = "Presence")
URH_PlayerInfo* URH_PlayerPresence::GetPlayerInfo() const
{
	return Cast<URH_PlayerInfo>(GetOuter());
}

void URH_PlayerPresence::CheckPollStatus()
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

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
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
}

void URH_PlayerPresence::PollPresence(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetPresenceType::Request Request;

	Request.PlayerUuid = GetPlayerInfo()->GetRHPlayerUuid();
	Request.AuthContext = GetPlayerInfo()->GetAuthContext();
	Request.IfNoneMatch = ETag;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<GetPresenceType>>(
		GetPresenceType::Delegate::CreateUObject(this, &URH_PlayerPresence::HandleResponse),
		FRH_GenericSuccessDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess) {Delegate.ExecuteIfBound(bSuccess, ShouldPoll()); })
	);

	Helper->Start(RH_APIs::GetPresenceAPI(), Request);
}

void URH_PlayerPresence::HandleResponse(const GetPresenceType::Response& Resp)
{
	if (Resp.IsSuccessful())
	{
		Update(Resp);
		ExecuteDelegates(true, true);
	}
	else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
	{
		// mark updated, so we do not try to update again soon
		LastUpdated = FDateTime::UtcNow();
		ExecuteDelegates(true, false);
	}
	else
	{
		ExecuteDelegates(false, false);
	}
}