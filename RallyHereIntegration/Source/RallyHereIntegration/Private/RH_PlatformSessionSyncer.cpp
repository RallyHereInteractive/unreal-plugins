
#include "RH_PlatformSessionSyncer.h"
#include "RH_SessionData.h"
#include "RH_Integration.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_SessionHelpers.h"

#include "Online/OnlineSessionNames.h"

void MakeSessionIdJsonCaseConsistent(FString& SessionIdStr)
{
	// force uppercase for the subsystem FName for consistency when storing the IDs
	TArray<FString> Tokens;

	int32 NumTokens = SessionIdStr.ParseIntoArray(Tokens, TEXT(":"));
	if (NumTokens == 2)
	{
		SessionIdStr = FString::Printf(TEXT("%s:%s"), *Tokens[0].ToUpper(), *Tokens[1]);
	}
}

URH_PlatformSessionSyncer::URH_PlatformSessionSyncer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	RHPlatform = ERHAPI_Platform::Anon;// should always be set by Initialize()

	CurrentSyncActionState = ESyncActionState::Uninitialized;
}

bool URH_PlatformSessionSyncer::Initialize(const FString& InSessionId, FRH_SessionOwnerPtr InSessionOwner)
{
	RHSessionId = InSessionId;
	SessionOwner = InSessionOwner;

	// make sure we can look up the session through the session owner
	auto RHSession = GetRHSession();

	// no session, nothing to sync
	if (!RHSession)
	{
		return false;
	}

	FString SessionType;
	if (!RHSession->GetTemplate().GetEngineSessionType(SessionType))
	{
		return false;
	}

	// syncing requires an OSS, try to get one now
	auto* OSS = GetOSS();
	if (!OSS)
	{
		return false;
	}

	OSSSessionName = FName(*GetRHSession()->GetSessionId());
	auto OptionalPlatformId = RH_GetPlatformFromOSSName(OSS->GetSubsystemName());
	check(OptionalPlatformId.IsSet());
	RHPlatform = OptionalPlatformId.GetValue();

	// determine if session already exists in OSS
	auto OSSInterface = GetOSSSessionInterface();
	if (OSSInterface == nullptr)
	{
		return false;
	}

	check(CurrentSyncActionState == ESyncActionState::Uninitialized);

	// PAST THIS POINT, CLEANUP() MUST BE CALLED
	// NOTE - RHSession->GetPlatformSyncer() will return nullptr until this function completes and registration finishes in the subsystem

	RHSession->OnSessionUpdatedDelegate.AddUObject(this, &URH_PlatformSessionSyncer::OnRHSessionUpdated);

	// move into the next state to begin processing
	SyncActionComplete(true, true);	// intentionally delay a frame, as the syncer does not get added to the tracking array unless this function returns true

	return true;
}

void URH_PlatformSessionSyncer::Cleanup(const FSimpleDelegate& CompletionDelegate)
{
	// add delegate first in case cleanup happens in line.
	OnCleanupComplete.AddLambda([CompletionDelegate](URH_PlatformSessionSyncer* Syncer) { CompletionDelegate.ExecuteIfBound(); });

	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (IsCleanupComplete())
	{
		// already cleaned up, trigger delegate now
		CompletionDelegate.ExecuteIfBound();
	}
	else if (IsCleaningUp())
	{
		// do nothing
	}
	else if (!SetSyncActionState(ESyncActionState::Cleanup))
	{
		check(!bDeferCleanup);
		bDeferCleanup = true;

		FString CurrentStateString = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ESyncActionState", CurrentSyncActionState);
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Could not start cleanup, current state is %s, deferring"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentStateString);
	}
}


void URH_PlatformSessionSyncer::OnRHSessionUpdated(URH_SessionView* UpdatedSession)
{
	// once cleanup begins, ignore all updates
	if (IsCleaningUp())
	{
		return;
	}

	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Session updated, checking state"), ANSI_TO_TCHAR(__FUNCTION__));

	// kick off a state check - this is done outside of our normal operation, and will get blocked if an operation is in progress (that operation should call CheckState() at the end, if viable)
	CheckState();
}

void URH_PlatformSessionSyncer::SetCachedPlatformSessionInvite(const FOnlineSessionSearchResult& SessionInvite)
{
	// once cleanup begins, ignore all updates
	if (IsCleaningUp())
	{
		return;
	}

	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Session invite cached, checking state"), ANSI_TO_TCHAR(__FUNCTION__));

	CachedSessionInvite = SessionInvite;

	// kick off a state check - this is done outside of our normal operation, and will get blocked if an operation is in progress (that operation should call CheckState() at the end, if viable)
	CheckState();
}

bool URH_PlatformSessionSyncer::IsLocalPlayerScout() const
{
	// TODO - come up with a scouting rule.  For now, hope that the first player in that cant find a session can scout quickly enough

	auto RHSession = GetRHSession();
	if (RHSession == nullptr || !SessionOwner.IsValid())
	{
		return false;
	}

	FGuid FirstGuidOnPlatform;

	for (const auto& Team : RHSession->GetSessionData().GetTeams())
	{
		for (const auto& Player : Team.GetPlayers())
		{
			const auto* ClientSettings = Player.GetClientSettingsOrNull();
			if (ClientSettings == nullptr)
			{
				continue;
			}
			const auto* Platform = ClientSettings->GetPlatformOrNull();
			if (Platform == nullptr)
			{
				continue;
			}

			if (*Platform == RHPlatform)
			{
				const auto& PlayerUuid = Player.GetPlayerUuid();
				if (!FirstGuidOnPlatform.IsValid() || PlayerUuid < FirstGuidOnPlatform)
				{
					FirstGuidOnPlatform = PlayerUuid;
				}
			}
		}
	}

	auto PlayerUuid = SessionOwner->GetPlayerUuid();

	if (FirstGuidOnPlatform.IsValid() && PlayerUuid == FirstGuidOnPlatform)
	{
		return true;
	}

	return false;;
}

void URH_PlatformSessionSyncer::JoinRHSessionByPlatformSession(FRH_SessionOwnerPtr SessionOwner, const FOnlineSessionSearchResult& SessionInvite, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	if (SessionInvite.Session.SessionInfo.IsValid() && SessionOwner.IsValid())
	{
		FUniqueNetIdRepl PlatformSessionId = SessionInvite.Session.SessionInfo->GetSessionId();
		FString PlatformSessionIdJson;

		FString PlatformSessionIdStr;
		if (ConvertPlatformSessionIdToJson(PlatformSessionId, PlatformSessionIdStr))
		{
			MakeSessionIdJsonCaseConsistent(PlatformSessionIdStr);
			UE_LOG(LogRHSession, Log, TEXT("[%s] - Attempting to join RH Session for Platform Session %s"), ANSI_TO_TCHAR(__FUNCTION__), *PlatformSessionIdStr);

			auto OSS = SessionOwner->GetOSS();
			auto PlatformOptional = RH_GetPlatformFromOSSName(OSS != nullptr ? OSS->GetSubsystemName() : NAME_None);

			if (PlatformOptional.IsSet())
			{
				auto CompletionDelegate = FRH_OnSessionUpdatedDelegate::CreateLambda([SessionInvite, Delegate](bool bSuccess, URH_JoinedSession* Session)
					{
						if (bSuccess)
						{
							if (Session != nullptr)
							{
								// inject the invite into the session syncer, so it can consume it for joining.  This is required since not all OSS implementations allow you to look up the invite after the fact
								auto* Syncer = Session->GetPlatformSyncer();
								if (Syncer != nullptr)
								{
									Syncer->SetCachedPlatformSessionInvite(SessionInvite);
								}
							}

							Delegate.ExecuteIfBound(true, FRH_ErrorInfo());
						}
						else
						{
							Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
						}
					});

				auto Helper = MakeShared<FRH_SessionJoinByPlatformIdHelper>(SessionOwner, CompletionDelegate, GetDefault<URH_IntegrationSettings>()->SessionJoinPriority);
				Helper->Start(PlatformOptional.GetValue(), PlatformSessionIdStr, JoinDetails);
				return;
			}
		}
	}	

	Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
}


URH_JoinedSession* URH_PlatformSessionSyncer::GetRHSession() const
{
	auto pOwner = GetSessionOwner();
	if (pOwner != nullptr)
	{
		return Cast<URH_JoinedSession>(pOwner->GetSessionById(RHSessionId));
	}
	return nullptr;
}

FNamedOnlineSession* URH_PlatformSessionSyncer::GetPlatformSession() const
{
	auto OSSInterface = GetOSSSessionInterface();
	if (OSSInterface != nullptr)
	{
		return OSSInterface->GetNamedSession(OSSSessionName);
	}
	return nullptr;
}

bool URH_PlatformSessionSyncer::GetPlatformSessionIdFromPlatformSession(FUniqueNetIdRepl& PlatformSessionId) const
{
	const auto PlatformSession = GetPlatformSession();
	if (PlatformSession != nullptr && PlatformSession->SessionInfo.IsValid())
	{
		PlatformSessionId = PlatformSession->SessionInfo->GetSessionId();
		return true;
	}
	return false;
}

bool URH_PlatformSessionSyncer::ConvertPlatformSessionIdToJson(const FUniqueNetIdRepl& PlatformSessionId, FString& OutJson)
{
	auto PlatformSessionIdJson = PlatformSessionId.ToJson();
	FString PlatformSessionIdStr;
	if (PlatformSessionIdJson->TryGetString(OutJson))
	{
		MakeSessionIdJsonCaseConsistent(OutJson);
		return true;
	}
	return false;
}

FUniqueNetIdWrapper URH_PlatformSessionSyncer::GetOSSUniqueId() const
{
	auto pOwner = GetSessionOwner();
	if (pOwner != nullptr)
	{
		return pOwner->GetOSSUniqueId();
	}

	return FUniqueNetIdWrapper();
}

IOnlineSubsystem* URH_PlatformSessionSyncer::GetOSS() const
{
	auto pOwner = GetSessionOwner();
	if (pOwner != nullptr)
	{
		return pOwner->GetOSS();
	}
	return nullptr;
}

IOnlineSessionPtr URH_PlatformSessionSyncer::GetOSSSessionInterface() const
{
	auto OSS = GetOSS();
	if (OSS != nullptr)
	{
		return OSS->GetSessionInterface();
	}
	return nullptr;
}

bool URH_PlatformSessionSyncer::GetPlatformSessionIdFromRHSession(FUniqueNetIdRepl& RHPlatformSessionId) const
{
	auto RHSession = GetRHSession();
	if (RHSession != nullptr && SessionOwner.IsValid())
	{
		const auto* PlatformSessionArrayPtr = RHSession->GetSessionData().GetPlatformSessionOrNull();
		if (PlatformSessionArrayPtr != nullptr)
		{
			auto& PlatformSessionArray = *PlatformSessionArrayPtr;

			for (auto& PlatformSession : PlatformSessionArray)
			{
				if (PlatformSession.GetPlatform() == RHPlatform)
				{
					FString DecodedPlatformSessionId;
					if (RallyHereAPI::Base64UrlDecode(PlatformSession.PlatformSessionIdBase64, DecodedPlatformSessionId) && !DecodedPlatformSessionId.IsEmpty())
					{
						// the following call unfortunately does not work properly, since it relies on the identity system and treats it like a player id
						// RHPlatformSessionId.FromJson(DecodedPlatformSessionId);

						// therefore, we need to crack the JSON value, then pass it into the session system creation utility function instead
						auto OSSSession = GetOSSSessionInterface();
						if (OSSSession.IsValid())
						{
							TArray<FString> Tokens;

							int32 NumTokens = DecodedPlatformSessionId.ParseIntoArray(Tokens, TEXT(":"));
							if (NumTokens == 2)
							{
								FName Type = FName(*Tokens[0]);
								RHPlatformSessionId = OSSSession->CreateSessionIdFromString(Tokens[1]);

								// the above function does not work well for EOS, since it has two different ID types for sessions.  Try falling back to player id creation which works in some cases properly
								if (Type != RHPlatformSessionId.GetType())
								{
									RHPlatformSessionId.FromJson(DecodedPlatformSessionId);

									if (Type != RHPlatformSessionId.GetType())
									{
										return false;
									}
								}
							}
							else if (NumTokens == 1)
							{
								RHPlatformSessionId = OSSSession->CreateSessionIdFromString(Tokens[0]);
							}
						}

						return RHPlatformSessionId.IsValid();
					}
					break;
				}
			}
		}
	}

	return false;
}

// State handling
bool URH_PlatformSessionSyncer::SetSyncActionState(ESyncActionState NewState)
{
	// once cleanup starts, can only use cleanup states, and only transition to cleanup complete
	if (IsCleaningUp())
	{
		if (NewState <= CurrentSyncActionState)
		{
			return false;
		}
	}
	else if (CurrentSyncActionState != ESyncActionState::Unsynchronized && CurrentSyncActionState != ESyncActionState::Synchronized && CurrentSyncActionState != ESyncActionState::Error)
	{
		// if we are currently performing an action, let that action complete first
		if (NewState != ESyncActionState::Unsynchronized && NewState != ESyncActionState::Synchronized && NewState != ESyncActionState::Error)
		{
			return false;
		}
	}
	CurrentSyncActionState = NewState;
	KickOffState(CurrentSyncActionState);
	return true;
}

void URH_PlatformSessionSyncer::SyncActionComplete(bool bSuccess, bool bDeferFrame)
{
	// if cleanup was deferred, start cleanup
	if (bDeferCleanup && !IsCleaningUp())
	{
		// transition out of the old state first
		SetSyncActionState(bSuccess ? ESyncActionState::Unsynchronized : ESyncActionState::Error);

		// clear flag
		bDeferCleanup = false;

		// begin cleanup
		Cleanup();
	}
	else if (!bDeferFrame)
	{
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Action was %s, continuing without deferal"), ANSI_TO_TCHAR(__FUNCTION__), bSuccess ? TEXT("successful") : TEXT("unsuccessful"));
		SetSyncActionState(bSuccess ? ESyncActionState::Unsynchronized : ESyncActionState::Error);
	}
	else
	{
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Action was %s, continuing with deferal"), ANSI_TO_TCHAR(__FUNCTION__), bSuccess ? TEXT("successful") : TEXT("unsuccessful"));

		// defer the state change to the next frame
		FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this, bSuccess](float)
			{
				SetSyncActionState(bSuccess ? ESyncActionState::Unsynchronized : ESyncActionState::Error);
				return false;
			}), 0);
	}
}

void URH_PlatformSessionSyncer::KickOffState(ESyncActionState NewState)
{
	switch (NewState)
	{
	case ESyncActionState::Uninitialized:
		// no work to do
		break;
	case ESyncActionState::Unsynchronized:
		// check to see what work we need to perform
		CheckState();
		break;
	case ESyncActionState::CreatePlatformSession:
		CreatePlatformSession();
		break;
	case ESyncActionState::JoinPlatformSession:
		JoinPlatformSession();
		break;
	case ESyncActionState::LeavePlatformSession:
		LeavePlatformSession();
		break;
	case ESyncActionState::UpdateRHSession:
		UpdateRHSessionWithPlatformSession();
		break;
	case ESyncActionState::Synchronized:
		// we are syhcronized, no work to do
		break;
	case ESyncActionState::Error:
		// we encountered an error from which we do not want to recycle into another state
		break;
	case ESyncActionState::Cleanup:
		CleanupInternal();
		break;
	case ESyncActionState::CleanupComplete:
		// fire cleanup delegates - note that this may cause the delegate list to be modified
		{
			UE_LOG(LogRHSession, Log, TEXT("[%s] - Cleanup complete, firing delegates"), ANSI_TO_TCHAR(__FUNCTION__));
			SCOPED_NAMED_EVENT(RallyHere_BroadcastPlatformSyncerCleanupComplete, FColor::Purple);
			BLUEPRINT_OnCleanupComplete.Broadcast(this);
			OnCleanupComplete.Broadcast(this);
		}
		break;
	}
}

void URH_PlatformSessionSyncer::CheckState()
{
	auto RHSession = GetRHSession();

	if (RHSession == nullptr)
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - RHSession is no longer valid, starting cleanup"), ANSI_TO_TCHAR(__FUNCTION__));

		SetSyncActionState(ESyncActionState::Cleanup);
		Cleanup();
		return;
	}

	// if we are currently performing an action, let that action complete first
	if (CurrentSyncActionState != ESyncActionState::Unsynchronized && CurrentSyncActionState != ESyncActionState::Synchronized && CurrentSyncActionState != ESyncActionState::Error)
	{
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Attempting to check state while another action is running"), ANSI_TO_TCHAR(__FUNCTION__));

		return;
	}
	else if (IsCleaningUp())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Attempting to check state while cleaning up"), ANSI_TO_TCHAR(__FUNCTION__));

		return;
	}

	FUniqueNetIdRepl RHPlatformSessionId;
	bool bRHHasPlatformSessionId = GetPlatformSessionIdFromRHSession(RHPlatformSessionId);

	auto OSSInterface = GetOSSSessionInterface();
	if (OSSInterface != nullptr)
	{
		FNamedOnlineSession* ExistingOSSSession = GetPlatformSession();
		if (ExistingOSSSession != nullptr)
		{
			FUniqueNetIdRepl OSSSessionId;

			if (ExistingOSSSession->SessionInfo != nullptr && ExistingOSSSession->SessionInfo->IsValid())
			{
				OSSSessionId = ExistingOSSSession->SessionInfo->GetSessionId();
			}

			if (OSSSessionId.IsValid())
			{
				if (!RHPlatformSessionId.IsValid())
				{
					// we found a session for the session id, but we are not in the RH session, we need to update the RH session to match
					UE_LOG(LogRHSession, Verbose, TEXT("[%s] - RHSession has no valid session id, but we have a OSS Session, so update RH Session"), ANSI_TO_TCHAR(__FUNCTION__));
					SetSyncActionState(ESyncActionState::UpdateRHSession);
				}
				else if (OSSSessionId == RHPlatformSessionId)
				{
					// already in the right session, potentially need to update it but no create/join
					UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Synchronized"), ANSI_TO_TCHAR(__FUNCTION__));
					SetSyncActionState(ESyncActionState::Synchronized);
				}
				else
				{
					// in a session that does not match, leave and join the proper session.  Potentially caused by scouting conflict or error
					UE_LOG(LogRHSession, Verbose, TEXT("[%s] - OSS Session ID %s does not match RHSession Platform Session ID %s.  Leave OSS Session and resync"), ANSI_TO_TCHAR(__FUNCTION__), *OSSSessionId.ToString(), *RHPlatformSessionId.ToString());
					SetSyncActionState(ESyncActionState::LeavePlatformSession);
				}
			}
			else
			{
				// OSS Session does not have a session id or is not valid, leave and recreate
				UE_LOG(LogRHSession, Verbose, TEXT("[%s] - OSS Session ID is not valid but OSS Session exists.  Leave OSS Session and resync"), ANSI_TO_TCHAR(__FUNCTION__));
				SetSyncActionState(ESyncActionState::LeavePlatformSession);
			}
		}
		else
		{
			if (!bRHHasPlatformSessionId)
			{
				// session does not yet exist on either side, determine if we are scout, else wait for an update
				if (IsLocalPlayerScout())
				{
					// create a session and upload it
					UE_LOG(LogRHSession, Verbose, TEXT("[%s] - No session found, and we are the scout, starting OSS Session creation"), ANSI_TO_TCHAR(__FUNCTION__));
					SetSyncActionState(ESyncActionState::CreatePlatformSession);
				}
			}
			else
			{
				// session exists on RH side, we need to join it on OSS side
				UE_LOG(LogRHSession, Verbose, TEXT("[%s] - RH session has OSS Session Id %s but no OSS session exists, starting OSS Session join"), ANSI_TO_TCHAR(__FUNCTION__), *RHPlatformSessionId.ToString());
				SetSyncActionState(ESyncActionState::JoinPlatformSession);
			}
		}
	}
}

void URH_PlatformSessionSyncer::UpdateRHSessionWithPlatformSession()
{
	auto PlatformSession = GetPlatformSession();
	if (PlatformSession == nullptr)
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - OSS Session is null"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}

	FUniqueNetIdRepl OSSSessionId;
	if (PlatformSession->SessionInfo != nullptr && PlatformSession->SessionInfo->IsValid())
	{
		OSSSessionId = PlatformSession->SessionInfo->GetSessionId();
	}

	if (!OSSSessionId.IsValid())
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - OSS Session Id is invalid"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}

	if (!SessionOwner.IsValid())
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - Session Owner is null"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}

	auto RHSession = GetRHSession();
	if (RHSession == nullptr)
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - RH Session is null"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}
	
	FString PlatformSessionIdStr;
	if (ConvertPlatformSessionIdToJson(OSSSessionId, PlatformSessionIdStr))
	{
		MakeSessionIdJsonCaseConsistent(PlatformSessionIdStr);

		FString Base64Str = RallyHereAPI::Base64UrlEncode(PlatformSessionIdStr);

		typedef RallyHereAPI::Traits_AddPlatformSessionToRallyHereSession BaseType;

		BaseType::Request Request;
		Request.AuthContext = SessionOwner->GetSessionAuthContext();
		Request.SessionId = RHSession->GetSessionId();
		Request.Platform = RHPlatform;
		Request.PlatformSessionIdBase64 = Base64Str;

		auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(SessionOwner, RHSession->GetSessionId(), FRH_OnSessionUpdatedDelegate::CreateWeakLambda(this, [this](bool bSuccess, URH_JoinedSession* Session)
			{
				if (bSuccess)
				{
					UE_LOG(LogRHSession, Log, TEXT("[%s] - Updated session with platform session id"), ANSI_TO_TCHAR(__FUNCTION__));
				}
				else
				{
					UE_LOG(LogRHSession, Warning, TEXT("[%s] - Failed to update session with platform session id"), ANSI_TO_TCHAR(__FUNCTION__));
				}
				SyncActionComplete(bSuccess);
			}),
			GetDefault<URH_IntegrationSettings>()->SessionUpdateWithPlatformSessionPriority);

		Helper->Start(Request);
		return;
	}
	else
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not export platform session id"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}
}

void URH_PlatformSessionSyncer::CreatePlatformSession()
{
	auto OSSSessionInterface = GetOSSSessionInterface();

	auto* RHSession = GetRHSession();
	if (!RHSession)
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not find RH Session"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}

	const auto& Template = RHSession->GetTemplate();

	const auto* PlatformTemplatesMap = Template.GetPlatformTemplatesOrNull();

	if (PlatformTemplatesMap == nullptr)
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not find platform templates map"), ANSI_TO_TCHAR(__FUNCTION__));
		SyncActionComplete(false);
		return;
	}

	const auto* PlatformTemplate = PlatformTemplatesMap->Find(EnumToString(RHPlatform));

	FString SessionType;
	if (PlatformTemplate == nullptr)
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not find platform session template for %s using platform "), ANSI_TO_TCHAR(__FUNCTION__), *RHSession->GetSessionId(), *EnumToString(RHPlatform));
		SyncActionComplete(false);
		return;
	}
	check(PlatformTemplate->GetPlatform() == RHPlatform);

	UE_LOG(LogRHSession, Log, TEXT("[%s] - Creating platform session for RH Session %s of type %s"), ANSI_TO_TCHAR(__FUNCTION__), *RHSession->GetSessionId(), *SessionType);

	FOnlineSessionSettings SessionSettings;
	SessionSettings.Settings.Add(SETTING_SESSION_TEMPLATE_NAME, PlatformTemplate->GetPlatformSessionType());
	SessionSettings.Settings.Add(SETTING_RALLYHERE_SESSION_ID, RHSession->GetSessionId());

	// TODO - read these from template
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.bAllowInvites = true;
	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.bAllowJoinViaPresence = true;
#if RH_FROM_ENGINE_VERSION(5,0)
	SessionSettings.bUseLobbiesIfAvailable = SessionSettings.bUsesPresence;	// NOTE - must match for Steam due to an engine bug, otherwise DestroySession() will crash (last checked in UE 5.2.1)
#endif
	SessionSettings.NumPublicConnections = PlatformTemplate->GetMaxPlayers(4); // todo - better fallback?

	auto PlatformPlayerId = GetOSSUniqueId();
	if (!PlatformPlayerId.IsValid() || !OSSSessionInterface->CreateSession(*PlatformPlayerId, OSSSessionName, SessionSettings))
	{
		UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not create platform session for %s"), *RHSession->GetSessionId());
		SyncActionComplete(false);
	}
}

void URH_PlatformSessionSyncer::OnPlatformSessionCreated(bool bSuccess)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Session created %s"), ANSI_TO_TCHAR(__FUNCTION__), bSuccess ? TEXT("true") : TEXT("false"));
	if (bSuccess)
	{
		auto OSSSessionInterface = GetOSSSessionInterface();
		auto PlatformSession = GetPlatformSession();

		if (OSSSessionInterface != nullptr && PlatformSession != nullptr)
		{
			auto* Settings = GetDefault<URH_IntegrationSettings>();
			if (Settings->bAutoStartSessionsAfterJoin)
			{
				StartPlatformSession();
			}

			// next step should update RH session with the ID
			SyncActionComplete(true);
			return;
		}
	}

	SyncActionComplete(false);
}

void URH_PlatformSessionSyncer::JoinPlatformSession()
{
	// make sure out platform session id cache is updated
	FUniqueNetIdRepl RHPlatformSessionId;
	if (!GetPlatformSessionIdFromRHSession(RHPlatformSessionId))
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Cannot find platform session id to join %s"), ANSI_TO_TCHAR(__FUNCTION__));
	}

	auto OSSSessionInterface = GetOSSSessionInterface();

	if (OSSSessionInterface != nullptr && RHPlatformSessionId.IsValid())
	{
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Searching for platform session %s to join"), ANSI_TO_TCHAR(__FUNCTION__), *RHPlatformSessionId.ToString());

		if (CachedSessionInvite.IsSet())
		{
			// copy and consume the cached invite
			auto CachedSessionInviteCopy = CachedSessionInvite.GetValue();
			CachedSessionInvite.Reset();

			FUniqueNetIdRepl CachedInvitePlatformSessionId = CachedSessionInviteCopy.Session.SessionInfo->GetSessionId();
			if (CachedInvitePlatformSessionId == RHPlatformSessionId)
			{
				UE_LOG(LogRHSession, Log, TEXT("[%s] - Joining via cached session invite %s"), ANSI_TO_TCHAR(__FUNCTION__), *CachedInvitePlatformSessionId->ToString());
				JoinFoundPlatformSession(CachedSessionInviteCopy);
			}
			else
			{
				UE_LOG(LogRHSession, Warning, TEXT("[%s] - Cached session invite session id %s mismatches RH session id %s, ignoring cache"), ANSI_TO_TCHAR(__FUNCTION__), *CachedInvitePlatformSessionId.ToString(), *RHPlatformSessionId.ToString());
			}
		}

		bool bSearched = OSSSessionInterface->FindSessionById(
			*GetOSSUniqueId(), 
			*RHPlatformSessionId,
#if RH_FROM_ENGINE_VERSION(5,1)
			*FUniqueNetIdString::EmptyId(), 
#endif
			FOnSingleSessionResultCompleteDelegate::CreateWeakLambda(this,
			[this](int32 LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult& FoundSession)
				{
					// make sure out platform session id cache is updated
					UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Searching for platform session result %s"), ANSI_TO_TCHAR(__FUNCTION__), bWasSuccessful ? TEXT("true") : TEXT("false"));

					if (bWasSuccessful)
					{
						FUniqueNetIdRepl RHPlatformSessionId;
						FUniqueNetIdRepl OSSPlatformSessionId;

						if (FoundSession.Session.SessionInfo != nullptr)
						{
							OSSPlatformSessionId = FoundSession.Session.SessionInfo->GetSessionId();
						}

						if (!OSSPlatformSessionId.IsValid())
						{
							UE_LOG(LogRHSession, Warning, TEXT("[%s] - Found session does not have a valid session id"), ANSI_TO_TCHAR(__FUNCTION__));
							SyncActionComplete(false);
						}
						else if (GetPlatformSessionIdFromRHSession(RHPlatformSessionId) && RHPlatformSessionId == OSSPlatformSessionId)
						{
							JoinFoundPlatformSession(FoundSession);
						}
						else
						{
							UE_LOG(LogRHSession, Warning, TEXT("[%s] - Found session does not match expected session id, marking complete to recycle"), ANSI_TO_TCHAR(__FUNCTION__));
							SyncActionComplete(true); // note this uses the complete flag rather than directly recycling to prevent recursion in the case of an inline failure
						}
					}
					else
					{
						UE_LOG(LogRHSession, Warning, TEXT("[%s] - Session search was not successful"), ANSI_TO_TCHAR(__FUNCTION__));
						SyncActionComplete(false);
					}
				})
			);

		if (!bSearched)
		{
			UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not attemp search for platform session for %s"), ANSI_TO_TCHAR(__FUNCTION__), *RHPlatformSessionId.ToString());
			SyncActionComplete(false);
		}
	}
}

void URH_PlatformSessionSyncer::JoinFoundPlatformSession(const FOnlineSessionSearchResult& SearchResult)
{
	auto OSSSessionInterface = GetOSSSessionInterface();
	if (OSSSessionInterface != nullptr)
	{
		if (!OSSSessionInterface->JoinSession(*GetOSSUniqueId(), OSSSessionName, SearchResult))
		{
			UE_LOG(LogRHSession, Warning, TEXT("[%s] - Could not attempt join for platform session for %s"), ANSI_TO_TCHAR(__FUNCTION__), *SearchResult.Session.GetSessionIdStr());
			SyncActionComplete(false);
		}
	}
}

void URH_PlatformSessionSyncer::OnPlatformSessionJoined(EOnJoinSessionCompleteResult::Type Result)
{
	auto OSSSessionInterface = GetOSSSessionInterface();
	auto PlatformSession = GetPlatformSession();

	if (OSSSessionInterface != nullptr)
	{
		if (PlatformSession != nullptr)
		{
			if (Result == EOnJoinSessionCompleteResult::Success)
			{
				UE_LOG(LogRHSession, Log, TEXT("[%s] - Successfully joined platform session %s"), ANSI_TO_TCHAR(__FUNCTION__), *PlatformSession->GetSessionIdStr());

				auto PlayerUniqueIdPtr = GetOSSUniqueId().GetUniqueNetId();
				OSSSessionInterface->RegisterPlayer(OSSSessionName, *PlayerUniqueIdPtr.Get(), false);

				auto* Settings = GetDefault<URH_IntegrationSettings>();
				if (Settings->bAutoStartSessionsAfterJoin)
				{
					StartPlatformSession();
				}

				SyncActionComplete(true);
				return;
			}
			else if (Result == EOnJoinSessionCompleteResult::AlreadyInSession)
			{
				UE_LOG(LogRHSession, Log, TEXT("[%s] - Already in platform session %s"), ANSI_TO_TCHAR(__FUNCTION__), *PlatformSession->GetSessionIdStr());

				SyncActionComplete(true);
				return;
			}
			else
			{
				UE_LOG(LogRHSession, Warning, TEXT("[%s] - Session join error %s"), ANSI_TO_TCHAR(__FUNCTION__), *PlatformSession->GetSessionIdStr(), LexToString(Result));
			}
		}
		else
		{
			UE_LOG(LogRHSession, Warning, TEXT("[%s] - Platform session not found after join with result %s"), ANSI_TO_TCHAR(__FUNCTION__), LexToString(Result));
		}
	}

	SyncActionComplete(false);
}

void URH_PlatformSessionSyncer::LeavePlatformSession()
{
	auto OSSSessionInterface = GetOSSSessionInterface();
	auto PlatformSession = GetPlatformSession();

	if (OSSSessionInterface != nullptr && PlatformSession != nullptr)
	{
		auto PlayerUniqueIdPtr = GetOSSUniqueId().GetUniqueNetId().Get();
		if (PlayerUniqueIdPtr != nullptr)
		{
			OSSSessionInterface->UnregisterPlayer(OSSSessionName, *PlayerUniqueIdPtr);
		}

		// TODO - figure out how to more properly do this for split screen
		OSSSessionInterface->DestroySession(OSSSessionName);
	}
	else
	{
		SyncActionComplete(true, true);
	}
}

bool URH_PlatformSessionSyncer::StartPlatformSession()
{
	auto OSSSessionInterface = GetOSSSessionInterface();
	auto PlatformSession = GetPlatformSession();

	if (OSSSessionInterface != nullptr && PlatformSession != nullptr)
	{
		return OSSSessionInterface->StartSession(OSSSessionName);
	}
	return false;
}

void URH_PlatformSessionSyncer::OnPlatformSessionStarted(bool bSuccess)
{

}

bool URH_PlatformSessionSyncer::EndPlatformSession()
{
	auto OSSSessionInterface = GetOSSSessionInterface();
	auto PlatformSession = GetPlatformSession();

	if (OSSSessionInterface != nullptr && PlatformSession != nullptr)
	{
		return OSSSessionInterface->EndSession(OSSSessionName);
	}
	return false;
}

void URH_PlatformSessionSyncer::OnPlatformSessionEnded(bool bSuccess)
{

}

void URH_PlatformSessionSyncer::CleanupInternal()
{
	// leave the platform session - note - may not be able to destroy it if other users are still in it!
	auto OSSSessionInterface = GetOSSSessionInterface();
	auto PlatformSession = GetPlatformSession();
	
	// unbind callbacks
	auto RHSession = GetRHSession();
	if (RHSession != nullptr)
	{
		RHSession->OnSessionUpdatedDelegate.RemoveAll(this);
	}

	if (OSSSessionInterface != nullptr && PlatformSession != nullptr)
	{
		auto PlayerUniqueIdPtr = GetOSSUniqueId().GetUniqueNetId();
		if (PlayerUniqueIdPtr.IsValid())
		{
			OSSSessionInterface->UnregisterPlayer(OSSSessionName, *PlayerUniqueIdPtr.Get());
		}

		// TODO - figure out how to more properly do this for split screen
		OSSSessionInterface->DestroySession(OSSSessionName);
	}
	else
	{
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Cleanup complete"), ANSI_TO_TCHAR(__FUNCTION__));
		SetSyncActionState(ESyncActionState::CleanupComplete);
	}
}

void URH_PlatformSessionSyncer::OnPlatformSessionDestroyed(bool bSuccess)
{
	// session has been ended, remove it from the OSS
	auto OSSSessionInterface = GetOSSSessionInterface();
	auto PlatformSession = GetPlatformSession();

	if (OSSSessionInterface != nullptr && PlatformSession != nullptr)
	{
		OSSSessionInterface->RemoveNamedSession(OSSSessionName);
	}

	// if we are cleaning up, move to cleanup complete, otherwise complete the sync action
	if (CurrentSyncActionState == ESyncActionState::Cleanup)
	{
		UE_LOG(LogRHSession, Verbose, TEXT("[%s] - Cleanup complete"), ANSI_TO_TCHAR(__FUNCTION__));
		SetSyncActionState(ESyncActionState::CleanupComplete);
	}
	else
	{
		SyncActionComplete(bSuccess);
	}
}