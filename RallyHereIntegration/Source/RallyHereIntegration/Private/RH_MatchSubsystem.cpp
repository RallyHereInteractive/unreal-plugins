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