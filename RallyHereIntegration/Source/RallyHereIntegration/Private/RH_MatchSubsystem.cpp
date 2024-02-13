// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_MatchSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"


URH_MatchSubsystem::URH_MatchSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_MatchSubsystem::Initialize()
{
	Super::Initialize();
}

void URH_MatchSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void URH_MatchSubsystem::SearchMatches(const FRH_MatchSearchParams& params, const FRH_OnMatchSearchCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_GetMatches BaseType;

	BaseType::Request Request = params.ToAPIRequest(GetAuthContext());

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					/*
					for (const auto& Match : Resp.Content.GetMatches())
					{
						MatchesCache.Add(Match.GetMatchId(), Match);
					}
					*/
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, params, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				FRH_MatchSearchResult Result;
				Result.SearchParams = params;
				if (bSuccess)
				{
					//Result.Matches = Resp.Content.GetMatches();
				}
				//Result.NextCursor = Resp.Cursor;
				Delegate.ExecuteIfBound(bSuccess, Result, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesSearchPriority
	);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}

void URH_MatchSubsystem::GetMatchAsync(const FString& MatchId, bool bIgnoreCache, const FRH_OnMatchLookupCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	FRHAPI_MatchWithPlayers CachedMatch;
	bool bCached = GetMatch(MatchId, CachedMatch);

	if (!bIgnoreCache && bCached)
	{
		Delegate.ExecuteIfBound(true, CachedMatch, FRH_ErrorInfo());
		return;
	}

	typedef RallyHereAPI::Traits_GetMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchId = MatchId;
	//Request.IfNoneMatch = bCached ? CachedMatch.ETag : FString();

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					MatchesCache.Add(Resp.Content.GetMatchId(), Resp.Content);
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, MatchId, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, bSuccess ? MatchesCache.FindRef(MatchId) : FRHAPI_MatchWithPlayers(), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesLookupPriority
		);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}

//////////////////////////////////////////////////////////////////////////////

void URH_MatchSubsystem::CreateMatch(const FRHAPI_MatchRequest& Match, const TArray<FRHAPI_PlayerRequest>& Players, bool bSetActive, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CreateMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchRequest = Match;
	// Request.Players = Players; // TODO - not yet working on single call, so ignore for now

	auto Context = MakeShared<FMatchUpdateCallContext>();
	Context->bUpdateActive = bSetActive;

	// on a create call, always clear out the old active match
	if (bSetActive)
	{
		ActiveMatch.Reset();
		ActiveMatchPlayers.Reset();
	}

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					if (Context->bUpdateActive)
					{
						ActiveMatch = Resp.Content;
					}
					Context->MatchId = Resp.Content.GetMatchId();
					Context->Match = Resp.Content;
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Context->Match.Get(FRHAPI_MatchResponse()), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesUpdatePriority
		);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}


void URH_MatchSubsystem::UpdateMatch(const FString& MatchId, const FRHAPI_MatchRequest& Match, bool bUpdateActive, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_PatchMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchRequest = Match;

	auto Context = MakeShared<FMatchUpdateCallContext>();
	Context->bUpdateActive = bUpdateActive;
	Context->MatchId = MatchId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				if (Context->bUpdateActive)
				{
					ActiveMatch = Resp.Content;
				}
				Context->Match = Resp.Content;
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Context->Match.Get(FRHAPI_MatchResponse()), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesUpdatePriority
	);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}

void URH_MatchSubsystem::UpdateMatchPlayer(const FString& MatchId, const FGuid& PlayerId, const FRHAPI_PlayerRequest& Player, bool bUpdateActive, const FRH_OnMatchPlayerUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_PatchPlayerMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchId = MatchId;
	Request.PlayerUuid = PlayerId;
	Request.PlayerRequest = Player;

	auto Context = MakeShared<FMatchUpdatePlayerCallContext>();
	Context->bUpdateActive = bUpdateActive;
	Context->MatchId = MatchId;
	Context->PlayerId = PlayerId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				if (Context->bUpdateActive)
				{
					ActiveMatchPlayers.Add(Context->PlayerId, Resp.Content);
				}
				Context->MatchPlayer = Resp.Content;
			}),
			FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Context->MatchPlayer.Get(FRHAPI_MatchPlayerResponse()), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesUpdatePlayerPriority
	);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}
