// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_MatchSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "Misc/Paths.h"
#include "RH_RemoteFileSubsystem.h"


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

	bool bUpdateCache = params.CanCacheResults();

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, bUpdateCache, Result](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					// store results in result object
					Result->Matches = Content->GetMatches();
					Result->NextPageCursor = Content->GetCursor(FString());

					// merge into the cache if allowed
					if (bUpdateCache)
					{
						for (const auto& Match : Result->Matches)
						{
							MatchesCache.Add(Match.GetMatchId(), Match);
						}
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
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					MatchesCache.Add(Content->GetMatchId(), *Content);
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

void URH_MatchSubsystem::CreateMatch(const FRHAPI_MatchRequest& Match, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CreateMatch BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchRequest = Match;

	auto Context = MakeShared<FMatchUpdateCallContext>();

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					// update the context
					Context->MatchId = Content->GetMatchId();
					Context->Match = *Content;

					// store the match in the cache
					MatchesCache.Add(Context->MatchId, Context->Match.GetValue());
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
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					// update the context
					Context->Match = *Content;

					// store the match in the cache
					MatchesCache.Add(Context->Match->GetMatchId(), Context->Match.GetValue());
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
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					// update the context
					Context->MatchPlayer = *Content;;

					// generate a new match player response from the update
					FRHAPI_MatchPlayerResponse UpdatedPlayer = Convert_MatchPlayerWithMatch_to_MatchPlayerResponse(Context->MatchPlayer.GetValue());

					// attempt to splice into cache
					FRHAPI_MatchWithPlayers* Match = MatchesCache.Find(Context->MatchId);
					if (Match != nullptr)
					{
						// set the players object as being present, if it wasn't already
						Match->Players_IsSet = true;
						auto Players = Match->GetPlayersOrNull();

						if (Players != nullptr)
						{
							bool bFoundPlayer = false;
							
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


void URH_MatchSubsystem::UpdateMatchSegment(const FString& MatchId, const FString& SegmentId, const FRHAPI_MatchSegmentPatchRequest& Segment, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_PatchMatchSegment BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchId = MatchId;
	Request.SegmentId = SegmentId;
	Request.MatchSegmentPatchRequest = Segment;

	auto Context = MakeShared<FMatchUpdateCallContext>();
	Context->MatchId = MatchId;
	Context->SegmentId = SegmentId;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Context](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					auto Match = MatchesCache.Find(Context->MatchId);
					if (Match != nullptr)
					{						
						// update the segment in the cache
						auto Segments = Match->GetSegmentsOrNull();
						if (Segments != nullptr)
						{
							for (auto& Segment : *Segments)
							{
								if (Segment.GetMatchSegment() == Context->SegmentId)
								{
									Segment = *Content;
									break;
								}
							}
						}
						
						// update the context from the cached value
						Context->Match = *Match;;
					}
					else
					{
						// create a dummy match object to use to store the segment for the return value only
						TArray<FRHAPI_MatchSegmentWithPlayers> Segments;
						Segments.Add(*Content);
						Context->Match = FRHAPI_MatchWithPlayers();
						Context->Match->SetMatchId(Context->MatchId);
						Context->Match->SetSegments(Segments);
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

#if WITH_DEV_AUTOMATION_TESTS

#include "RH_AutomationTests.h"
#include "RH_GameInstanceSubsystem.h"
#include "GameMapsSettings.h"
#include "Misc/FileHelper.h"

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

	MatchRequest.SetCorrelationIdToNull();

	// players
	TArray<FRHAPI_MatchPlayerRequest> Players;
	{
		for (auto i = 0; i < 4; i++)
		{
			Players.Add(GenerateTestMatchPlayer());
		}
		MatchRequest.SetPlayers(Players);
	}

	// sessions
	TArray<FRHAPI_MatchSession> Sessions;
	{
		FRHAPI_MatchSession Session;
		Session.SetMatchmakingProfileId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
		Session.SetSessionId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
		Sessions.Add(Session);

		MatchRequest.SetSessions(Sessions);
	}
	
	// instances
	TArray<FRHAPI_MatchInstance> Instances;
	{
		FRHAPI_MatchInstance Instance;
		Instance.SetInstanceId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
		Instance.SetHostPlayerUuid(Players[0].GetPlayerUuid());
		Instance.SetRegionId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
		Instance.SetInstanceRequestTemplateId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
		Instance.SetMap(UGameMapsSettings::GetGameDefaultMap());
		Instance.SetGameMode(UGameMapsSettings::GetGlobalDefaultGameMode());
		Instance.SetHostType(ERHAPI_MatchHostType::Player);

		Instances.Add(Instance);

		MatchRequest.SetInstances(Instances);
	}

	// allocations
	{
		TArray<FRHAPI_MatchAllocation> Allocations;

		FRHAPI_MatchAllocation Allocation;
		Allocation.SetAllocationId(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens));
		Allocations.Add(Allocation);

		MatchRequest.SetAllocations(Allocations);
	}



	// segments are handled elsewhere, as not all types have them
	//MatchRequest.SetSegments();

	return MatchRequest;
}

BEGIN_DEFINE_SPEC(FRH_MatchCreateSimple, "RHAutomation.Match.Spec", EAutomationTestFlags::ClientContext | EAutomationTestFlags::ServerContext | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::MediumPriority)
	FRHAPI_MatchRequest MatchRequest;
	TWeakObjectPtr<URH_MatchSubsystem> Subsystem;
	TOptional<FString> MatchId;

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
		MatchId.Reset();

		return true;
	};

	void GetAndValidateMatchRequest(const FDoneDelegate& Done)
	{
		// retrieve the match from the remote
		if (!TestNotNull(TEXT("Validate Subsystem"), Subsystem.Get()))
		{
			Done.Execute();
			return;
		}

		if (!TestTrue(TEXT("Validate ActiveMatchId"), MatchId.IsSet() && !MatchId->IsEmpty()))
		{
			Done.Execute();
			return;
		}

		// Write locally stored request to json string
		FString LocalJsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&LocalJsonBody);
		MatchRequest.WriteJson(Writer);
		Writer->Close();

		// deserialize the string to a new json object
		TSharedPtr<FJsonValue> LocalJsonValue;
		if (!TestTrue(TEXT("Validate Local Deserialize Json"), FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(LocalJsonBody), LocalJsonValue)))
		{
			Done.Execute();
			return;
		}

		Subsystem->GetMatchAsync(MatchId.GetValue(), true, FRH_OnMatchLookupCompleteDelegate::CreateLambda([this, LocalJsonBody, LocalJsonValue, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
			{
				if (!TestTrue(TEXT("Validate Success"), bSuccess))
				{
					Done.Execute();
					return;
				}

				// Write locally stored request to json string
				FString RemoteJsonBody;
				TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RemoteJsonBody);
				Match.WriteJson(Writer);
				Writer->Close();

				// deserialize the string to a new json object
				TSharedPtr<FJsonValue> RemoteJsonValue;
				if (!TestTrue(TEXT("Validate Remote Deserialize Json"), FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(RemoteJsonBody), RemoteJsonValue)))
				{
					Done.Execute();
					return;
				}

				AddInfo(FString::Printf(TEXT("Local Json: %s"), *LocalJsonBody));
				AddInfo(FString::Printf(TEXT("Remote Json: %s"), *RemoteJsonBody));

				// compare the json objects for equivalency
				/* This does not work for a few reasons, but may be useful in the future
				if (!FJsonValue::CompareEqual(*LocalJsonValue.Get(), *RemoteJsonValue.Get()))
				{
					AddError(FString::Printf(TEXT("Validate Json Mismatch:\nLocal:\n%s\n\nRemote:\n%s"), *LocalJsonBody, *RemoteJsonBody));
					Done.Execute();
					return;
				}
				*/

				Done.Execute();
			}));
	}

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

					Subsystem->CreateMatch(MatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
						{
							if (!TestTrue(TEXT("Success"), bSuccess))
							{
								Done.Execute();
								return;
							}

							MatchId = Match.GetMatchId();
						
							GetAndValidateMatchRequest(Done);
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

					Subsystem->CreateMatch(MatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
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

							MatchId = Match.GetMatchId();

							// generate a patch request to close the match
							FRHAPI_MatchRequest PatchRequest;
							PatchRequest.SetState(ERHAPI_MatchState::Closed);

							// update the local match request object to match, for validation
							MatchRequest.SetState(ERHAPI_MatchState::Closed);

							Subsystem->UpdateMatch(MatchId.GetValue(), PatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
								{
									if (!TestTrue(TEXT("Success"), bSuccess))
									{
										Done.Execute();
										return;
									}
									
									GetAndValidateMatchRequest(Done);
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

					Subsystem->CreateMatch(MatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
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

							MatchId = Match.GetMatchId();

							// generate a player request
							FRHAPI_MatchPlayerRequest PlayerRequest = GenerateTestMatchPlayer();

							// update the local match request object to match, for validation
							MatchRequest.Players_IsSet = true;
							MatchRequest.Players_Optional.Add(PlayerRequest);

							Subsystem->UpdateMatchPlayer(MatchId.GetValue(), PlayerRequest.GetPlayerUuid(), PlayerRequest, FRH_OnMatchPlayerUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchPlayerWithMatch& Player, const FRH_ErrorInfo& ErrorInfo)
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

									// update the local match request object to match, for validation
									MatchRequest.SetState(ERHAPI_MatchState::Closed);

									Subsystem->UpdateMatch(MatchId.GetValue(), PatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
										{
											if (!TestTrue(TEXT("Success"), bSuccess))
											{
												Done.Execute();
												return;
											}

											GetAndValidateMatchRequest(Done);
										}));
								}));


						}));
				});

			LatentIt("should create match in the closed state, create a local temporary file, upload it, and download it", [this](const FDoneDelegate& Done)
				{
					if (!TestNotNull(TEXT("LatentSubsystem"), Subsystem.Get()))
					{
						Done.Execute();
						return;
					}

					// generate a match request
					MatchRequest = GenerateTestMatchEntry<FRHAPI_MatchRequest>();
					MatchRequest.SetState(ERHAPI_MatchState::Closed);

					Subsystem->CreateMatch(MatchRequest, FRH_OnMatchUpdateCompleteDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
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

							auto GISubsystem = RHAutomationTestUtils::GetRHGameInstanceSubsystem(this);
							if (!TestNotNull(TEXT("GISubsystem"), GISubsystem))
							{
								Done.Execute();
								return;
							}

							auto RemoteFileSubsystem = GISubsystem->GetRemoteFileSubsystem();
							if (!TestNotNull(TEXT("RemoteFileSubsystem"), RemoteFileSubsystem))
							{
								Done.Execute();
								return;
							}

							MatchId = Match.GetMatchId();
						
							// generate a temporary file
							const FString UploadMatchDir = FPaths::ProjectSavedDir() / TEXT("Temp");
							
							FString TempFile = UploadMatchDir / FString::Printf(TEXT("Match_%s.tmp"), *MatchId.GetValue());
							FString TempFileContents = FString::Printf(TEXT("MatchId: %s"), *MatchId.GetValue());
							FFileHelper::SaveStringToFile(TempFileContents, *TempFile);

							// upload the file
							const auto RemoteFileDirectory = URH_MatchSubsystem::GetMatchFileDirectory(MatchId.GetValue());
							const auto RemoteFileName = TEXT("TestFile.txt");
							RemoteFileSubsystem->UploadFromFile(RemoteFileDirectory, RemoteFileName, TempFile, true,
								FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, RemoteFileDirectory, RemoteFileName, TempFileContents, Done](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
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

									auto GISubsystem = RHAutomationTestUtils::GetRHGameInstanceSubsystem(this);
									if (!TestNotNull(TEXT("GISubsystem"), GISubsystem))
									{
										Done.Execute();
										return;
									}

									auto RemoteFileSubsystem = GISubsystem->GetRemoteFileSubsystem();
									if (!TestNotNull(TEXT("RemoteFileSubsystem"), RemoteFileSubsystem))
									{
										Done.Execute();
										return;
									}

									const FString DownloadMatchDir = FPaths::ProjectPersistentDownloadDir();
									FString DestFile = DownloadMatchDir / FString::Printf(TEXT("Match_%s.txt"), *MatchId.GetValue());

									RemoteFileSubsystem->DownloadToFile(RemoteFileDirectory, RemoteFileName, DestFile, true, FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, DestFile, TempFileContents, Done](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
										{
											if (!TestTrue(TEXT("Success"), bSuccess))
											{
												Done.Execute();
												return;
											}

											FString DownloadedContents;
											if (!FFileHelper::LoadFileToString(DownloadedContents, *DestFile))
											{
												AddError(TEXT("Failed to load downloaded file"));
												Done.Execute();
												return;
											}

											if (!TestEqual(TEXT("Validate Downloaded File Contents"), DownloadedContents, TempFileContents))
											{
												Done.Execute();
												return;
											}

											Done.Execute();
										}));
								}));

						}));
				});
		});
}

#endif