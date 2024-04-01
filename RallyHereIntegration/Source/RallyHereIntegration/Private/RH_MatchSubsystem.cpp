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

	TSharedRef<FRH_MatchSearchResult> Result = MakeShared<FRH_MatchSearchResult>();
	Result->SearchParams = params;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Result](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					// store results in result object
					Result->Matches = Resp.Content.GetMatches();
					Result->NextPageCursor = Resp.Content.GetCursor(FString());

					// merge into the cache
					for (const auto& Match : Resp.Content.GetMatches())
					{
						MatchesCache.Add(Match.GetMatchId(), Match);
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Result, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Result.Get(), ErrorInfo);
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

void URH_MatchSubsystem::CreateMatch(const FRHAPI_MatchRequest& Match, bool bSetActive, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CreateMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchRequest = Match;

	auto Context = MakeShared<FMatchUpdateCallContext>();
	Context->bUpdateActive = bSetActive;

	// on a create call, always clear out the old active match
	if (bSetActive)
	{
		ActiveMatchId.Reset();
	}

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					// update the context
					Context->MatchId = Resp.Content.GetMatchId();
					Context->Match = Resp.Content;

					// store the match in the cache
					MatchesCache.Add(Resp.Content.GetMatchId(), Resp.Content);

					// if requested, set thea active match id
					if (Context->bUpdateActive)
					{
						SetActiveMatchId(Context->MatchId);
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Context->Match.Get(FRHAPI_MatchWithPlayers()), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesUpdatePriority
		);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}


void URH_MatchSubsystem::UpdateMatch(const FString& MatchId, const FRHAPI_MatchRequest& Match, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_PatchMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchId = MatchId;
	Request.MatchRequest = Match;

	auto Context = MakeShared<FMatchUpdateCallContext>();
	Context->MatchId = MatchId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				// update the context
				Context->Match = Resp.Content;

				// store the match in the cache
				MatchesCache.Add(Resp.Content.GetMatchId(), Resp.Content);
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Context->Match.Get(FRHAPI_MatchWithPlayers()), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesUpdatePriority
	);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}

FRHAPI_MatchPlayerResponse Convert_MatchPlayerWithMatch_to_MatchPlayerResponse(const FRHAPI_MatchPlayerWithMatch& PlayerWithMatch)
{
	FRHAPI_MatchPlayerResponse MatchPlayer;

#define CheckSetOptionalValue(FieldName) if (PlayerWithMatch.FieldName##_IsSet) { MatchPlayer.Set##FieldName(PlayerWithMatch.Get##FieldName()); }

	CheckSetOptionalValue(LastModifiedTimestamp);
	CheckSetOptionalValue(CreatedTimestamp);
	CheckSetOptionalValue(PlayerUuid);
	CheckSetOptionalValue(TeamId);
	CheckSetOptionalValue(PartySessionId);
	CheckSetOptionalValue(Placement);
	CheckSetOptionalValue(JoinedMatchTimestamp);
	CheckSetOptionalValue(LeftMatchTimestamp);
	CheckSetOptionalValue(DurationSeconds);
	CheckSetOptionalValue(StartingRank);
	CheckSetOptionalValue(FinishingRank);
	CheckSetOptionalValue(CustomData);

#undef CheckSetOptionalValue

	return MatchPlayer;
}

void URH_MatchSubsystem::UpdateMatchPlayer(const FString& MatchId, const FGuid& PlayerId, const FRHAPI_MatchPlayerRequest& Player, const FRH_OnMatchPlayerUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_PatchMatchPlayer BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchId = MatchId;
	Request.PlayerUuid = PlayerId;
	Request.MatchPlayerRequest = Player;

	auto Context = MakeShared<FMatchUpdatePlayerCallContext>();
	Context->MatchId = MatchId;
	Context->PlayerId = PlayerId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				Context->MatchPlayer = Resp.Content;

				// generate a new match player response from the update
				FRHAPI_MatchPlayerResponse UpdatedPlayer = Convert_MatchPlayerWithMatch_to_MatchPlayerResponse(Resp.Content);

				// attempt to splice into cache
				FRHAPI_MatchWithPlayers* Match = MatchesCache.Find(Context->MatchId);
				if (Match != nullptr)
				{
					bool bFoundPlayer = false;

					// set the players object as being present, if it wasn't already
					Match->Players_IsSet = true;
					auto Players = Match->GetPlayersOrNull();

					if (Players != nullptr)
					{
						for (auto& Player : *Players)
						{
							if (Player.GetPlayerUuid() == Context->PlayerId)
							{
								Player = UpdatedPlayer;
								bFoundPlayer = true;
								break;
							}
						}
						if (!bFoundPlayer)
						{
							Players->Add(UpdatedPlayer);
						}
					}
				}
			}),
			FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Context, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Context->MatchPlayer.Get(FRHAPI_MatchPlayerWithMatch()), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->MatchesUpdatePlayerPriority
	);

	Helper->Start(RH_APIs::GetMatchAPI(), Request);
}

#if WITH_DEV_AUTOMATION_TESTS

#include "RH_AutomationTests.h"
#include "RH_GameInstanceSubsystem.h"

FRHAPI_MatchPlayerRequest GenerateTestMatchPlayer()
{
	FRHAPI_MatchPlayerRequest PlayerRequest;
	PlayerRequest.SetPlayerUuid(FGuid::NewGuid());
	PlayerRequest.SetTeamId(FMath::RandBool() ? TEXT("Red") : TEXT("Blue"));
	PlayerRequest.SetPartySessionId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
	PlayerRequest.SetPlacement(1);
	const float Duration = 100;
	PlayerRequest.SetJoinedMatchTimestamp(FDateTime::UtcNow());
	PlayerRequest.SetLeftMatchTimestamp(FDateTime::UtcNow() + FTimespan::FromSeconds(Duration));
	PlayerRequest.SetDurationSeconds(Duration);
	PlayerRequest.SetStartingRank(TEXT("Last"));
	PlayerRequest.SetFinishingRank(TEXT("First"));

	TMap<FString, FString> CustomData;
	CustomData.Add(TEXT("TestField"), TEXT("TestValue"));
	CustomData.Add(TEXT("TestField2"), TEXT("TestValue2"));
	PlayerRequest.SetCustomData(CustomData);

	return PlayerRequest;
}

template <typename T>
T GenerateTestMatchEntry()
{
	// create a match
	T MatchRequest;
	MatchRequest.SetType(TEXT("TestMatch"));
	MatchRequest.SetState(ERHAPI_MatchState::Pending);
	MatchRequest.SetStartTimestamp(FDateTime::UtcNow());
	const float Duration = 200;
	MatchRequest.SetEndTimestamp(FDateTime::UtcNow() + FTimespan::FromSeconds(Duration));
	MatchRequest.SetDurationSeconds(Duration);

	TMap<FString, FString> CustomData;
	CustomData.Add(TEXT("TestField"), TEXT("TestValue"));
	CustomData.Add(TEXT("TestField2"), TEXT("TestValue2"));
	MatchRequest.SetCustomData(CustomData);

	MatchRequest.SetCorrelationId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));

	//MatchRequest.SetSessions();
	//MatchRequest.SetInstances();
	//MatchRequest.SetAllocations();

	TArray<FRHAPI_MatchPlayerRequest> Players;
	for (auto i = 0; i < 4; i++)
	{
		Players.Add(GenerateTestMatchPlayer());
	}
	MatchRequest.SetPlayers(Players);

	//MatchRequest.SetSegments();

	return MatchRequest;
}

BEGIN_DEFINE_SPEC(FRH_MatchCreateSimple, "RHAutomation.Match.Spec", EAutomationTestFlags::ClientContext | EAutomationTestFlags::RequiresUser | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::MediumPriority)
	FRHAPI_MatchRequest MatchRequest;
	TWeakObjectPtr<URH_MatchSubsystem> Subsystem;

	bool MatchTestBoilerplate()
	{
		auto GISubsystem = RHAutomationTestUtils::GetRHGameInstanceSubsystem(this);
		UTEST_NOT_NULL(TEXT("GISubsystem"), GISubsystem);

		Subsystem = GISubsystem->GetMatchSubsystem();
		UTEST_NOT_NULL(TEXT("Subsystem"), Subsystem.Get());

		UTEST_NOT_NULL(TEXT("Auth Context"), Subsystem->GetAuthContext().Get());

		UTEST_TRUE(TEXT("Logged in"), Subsystem->GetAuthContext()->IsLoggedIn());

		// clear the cache
		Subsystem->ClearMatchesCache();
		Subsystem->ClearActiveMatchId();

		return true;
	};

END_DEFINE_SPEC(FRH_MatchCreateSimple)
void FRH_MatchCreateSimple::Define()
{


	Describe("Match Subsystem", [this]()
		{
			BeforeEach([this]()
				{
					MatchTestBoilerplate();
				});

			LatentIt("should create a match", [this](const FDoneDelegate& Done)
				{
					if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
					{
						Done.Execute();
						return;
					}

					// generate a match request
					MatchRequest = GenerateTestMatchEntry<FRHAPI_MatchRequest>();

					MatchRequest.SetState(ERHAPI_MatchState::Closed);

					auto MatchSegment = GenerateTestMatchEntry<FRHAPI_MatchSegmentRequest>();
					MatchSegment.SetMatchSegment("TestSegment");
					TArray<FRHAPI_MatchSegmentRequest> MatchSegments;
					MatchSegments.Add(MatchSegment);
					MatchRequest.SetSegments(MatchSegments);

					Subsystem->CreateMatch(MatchRequest, true, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
						{
							TestTrue(TEXT("Success"), bSuccess);
							Done.Execute();
						}));
				});

			LatentIt("should create and patch match to be closed", [this](const FDoneDelegate& Done)
				{
					if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
					{
						Done.Execute();
						return;
					}

					// generate a match request
					MatchRequest = GenerateTestMatchEntry<FRHAPI_MatchRequest>();

					Subsystem->CreateMatch(MatchRequest, true, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
						{
							if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
							{
								Done.Execute();
								return;
							}

							if (!TestTrue(TEXT("Success"), bSuccess))
							{
								Done.Execute();
								return;
							}

							// generate a patch request to close the match
							FRHAPI_MatchRequest PatchRequest;
							PatchRequest.SetState(ERHAPI_MatchState::Closed);

							Subsystem->UpdateMatch(Subsystem->GetActiveMatchId(), PatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
								{
									TestTrue(TEXT("Success"), bSuccess);
									Done.Execute();
								}));
						}));
				});

			LatentIt("should create match, add a player, and patch match to be closed", [this](const FDoneDelegate& Done)
				{
					if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
					{
						Done.Execute();
						return;
					}

					// generate a match request
					MatchRequest = GenerateTestMatchEntry<FRHAPI_MatchRequest>();

					Subsystem->CreateMatch(MatchRequest, true, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
						{
							if (!TestTrue(TEXT("Success"), bSuccess))
							{
								Done.Execute();
								return;
							}

							if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
							{
								Done.Execute();
								return;
							}

							// generate a player request
							FRHAPI_MatchPlayerRequest PlayerRequest = GenerateTestMatchPlayer();

							Subsystem->UpdateMatchPlayer(Subsystem->GetActiveMatchId(), PlayerRequest.GetPlayerUuid(), PlayerRequest, FRH_OnMatchPlayerUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchPlayerWithMatch& Player, const FRH_ErrorInfo& ErrorInfo)
								{
									if (!TestTrue(TEXT("Success"), bSuccess))
									{
										Done.Execute();
										return;
									}

									if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
									{
										Done.Execute();
										return;
									}

									// generate a patch request to close the match
									FRHAPI_MatchRequest PatchRequest;
									PatchRequest.SetState(ERHAPI_MatchState::Closed);

									Subsystem->UpdateMatch(Subsystem->GetActiveMatchId(), PatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
										{
											TestTrue(TEXT("Success"), bSuccess);
											Done.Execute();
										}));
								}));


						}));
				});
		});
}

#endif