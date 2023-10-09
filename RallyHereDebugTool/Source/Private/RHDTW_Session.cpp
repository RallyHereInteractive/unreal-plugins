// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_Session.h"
#include "imgui.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameInstance.h"
#include "RallyHereDebugToolSettings.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"
#include "RH_MatchmakingBrowser.h"
#include "RH_PlatformSessionSyncer.h"
#include "RH_PlayerInfoSubsystem.h"

#include "RH_Beacons.h"

#define IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE 256
#define IMGUI_SESSION_TYPE_PREALLOCATION_SIZE 32

FRHDTW_Session::FRHDTW_Session()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	JoinByIdTeam = 0;
	JoinByIdString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	CreateByTypeSessionTypeString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);
	CreateByTypeRegionIdString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);
	SessionActionResult.Empty();

	InvitePlayerTeam = 0;
	JoinQueueByIdString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);

	MapName.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	GameModeName.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	bMakeBeaconInstance = false;

	if (URallyHereDebugToolSettings::Get())
	{
		ImGuiCopyStringToTextInputBuffer(URallyHereDebugToolSettings::Get()->DefaultSessionMapName, MapName);
		ImGuiCopyStringToTextInputBuffer(URallyHereDebugToolSettings::Get()->DefaultSessionGameModeName, GameModeName);
	}

	SearchByTypeString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);

	QueueSessionSelector.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);

	// inherit defaults from search params for paging
	FRH_SessionBrowserSearchParams params;
	SearchCursor = params.Cursor;
	SearchPageSize = params.PageSize;
	SearchCacheSessions = params.bCacheSessionDetails;

	FRH_QueueSearchParams queueSearchParams;
	QueueSearchCursor = queueSearchParams.Cursor;
	QueueSearchPageSize = queueSearchParams.PageSize;
	bFilterInactiveQueues = true;

	InstanceCustomDataStager.SetName("Instance Startup");
	InvitePlayerCustomDataStager.SetName("Invite Players");
}

FRHDTW_Session::~FRHDTW_Session()
{
	if (UpdatePlayerCustomDataStagers.Num() > 0)
	{
		for (auto Pair : UpdatePlayerCustomDataStagers)
		{
			delete Pair.Value;
		}
	}
}

void FRHDTW_Session::ImGuiDisplayInstance(const FRHAPI_InstanceInfo& Info, URH_GameInstanceSessionSubsystem* pGISessionSubsystem)
{
	const FString HeaderString = FString::Printf(TEXT("Instance ID: %s"), *Info.GetInstanceId(TEXT("<UNSET>")));

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		ImGuiDisplayCopyableValue(TEXT("InstanceId"), Info.GetInstanceIdOrNull());
		if (Info.HostType == ERHAPI_HostType::Dedicated)
		{
			ImGui::Text("Type: Dedicated");
			ImGuiDisplayCopyableValue(TEXT("AllocationId"), Info.GetAllocationIdOrNull());
		}
		else
		{
			ImGui::Text("Type: Player Hosted");
			if (pGISessionSubsystem && pGISessionSubsystem->IsLocallyHostedInstance(Info))
			{
				ImGui::SameLine();
				ImGui::Text("<LOCALHOST>");
			}

			ImGuiDisplayCopyableValue(TEXT("HostPlayerUuid"), Info.GetHostPlayerUuidOrNull());
		}

		ImGui::Text("Joinability: %s", TCHAR_TO_UTF8(*EnumToString(Info.JoinStatus)));

		if (const auto InstanceStartupParams = Info.GetInstanceStartupParamsOrNull())
		{
			if (ImGui::TreeNodeEx("InstanceStartupParams", RH_DefaultTreeFlagsLeaf))
			{
				ImGuiDisplayCopyableValue(TEXT("Map"), InstanceStartupParams->Map);
				ImGuiDisplayCopyableValue(TEXT("Mode"), InstanceStartupParams->GetMode());
				ImGuiDisplayCopyableValue(TEXT("MiscParams"), InstanceStartupParams->MiscParams);
				ImGuiDisplayCustomData(InstanceStartupParams->GetCustomData());

				ImGui::TreePop();
			}
		}

		if (const auto JoinParams = Info.GetJoinParamsOrNull())
		{
			if (ImGui::TreeNodeEx("JoinParams", RH_DefaultTreeFlagsLeaf))
			{
				ImGuiDisplayCopyableValue(TEXT("PublicConnStr"), JoinParams->PublicConnStr);
				ImGuiDisplayCopyableValue(TEXT("PrivateConnStr"), JoinParams->PrivateConnStr);
				ImGuiDisplayCustomData(JoinParams->GetCustomData());

				ImGui::TreePop();
			}
		}

		ImGuiDisplayCopyableValue(TEXT("Version"), Info.GetVersionOrNull());
		ImGuiDisplayCopyableValue(TEXT("Created"), Info.Created);

		ImGuiDisplayCustomData(Info.GetCustomData());

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayMatch(const FRHAPI_MatchInfo& Info)
{
	const FString HeaderString = FString::Printf(TEXT("Match ID: %s"), *Info.MatchId);
	
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlagsDefaultOpen))
	{
		ImGuiDisplayCopyableValue(TEXT("Id"), Info.MatchId);

		ImGuiDisplayCopyableValue(TEXT("Created"), Info.Created);

		ImGuiDisplayCustomData(Info.GetCustomData());

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplaySessionPlayer(URH_SessionView* RHSession, const FRHAPI_SessionPlayer& Player, int32 TeamId, URH_GameInstanceSessionSubsystem* pGISessionSubsystem)
{
	FString HeaderString = FString::Printf(TEXT("Player: %s"), *Player.GetPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens));

	if (pGISessionSubsystem && pGISessionSubsystem->IsPlayerLocal(Player))
	{
		HeaderString += TEXT(" <LOCAL>");
	}

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		URH_JoinedSession* RHJoinedSession = Cast<URH_JoinedSession>(RHSession);
		if (RHJoinedSession != nullptr)
		{
			if (ImGui::Button("Kick")) // todo - check local player permissions?
			{
				RHJoinedSession->KickPlayer(Player.PlayerUuid);
			}
			ImGui::SameLine();
			if (ImGui::Button("Make Leader")) // todo - check local player permissions?
			{
				RHJoinedSession->SetLeader(Player.PlayerUuid);
			}

			ImGui::SameLine();
			int32 NewTeamId = TeamId;
			ImGui::SetNextItemWidth(200.f);
			if (ImGui::InputInt("#Change Team", &NewTeamId, 1, 0))
			{
				NewTeamId = FMath::Max(NewTeamId, 0);
				RHJoinedSession->ChangePlayerTeam(Player.PlayerUuid, NewTeamId);
			}			
		}
		ImGuiDisplayCopyableValue(TEXT("PlayerUuid"), Player.PlayerUuid);

		ImGui::Text("Status: %s", TCHAR_TO_UTF8(*EnumToString(Player.Status)));

		ImGuiDisplayCopyableValue(TEXT("Inviting Player Uuid"), Player.GetInvitingPlayerUuidOrNull());
		
		ImGuiDisplayCopyableValue(TEXT("Version"), Player.GetVersion());
		ImGuiDisplayCopyableValue(TEXT("Invited"), Player.GetInvitedOrNull());
		ImGuiDisplayCopyableValue(TEXT("Joined"), Player.GetJoinedOrNull());

		ImGuiDisplayCustomData(Player.GetCustomData());

		FImGuiCustomDataStager* PlayerCustomDataStager = nullptr;
		if (Player.GetPlayerUuid().IsValid())
		{
			if (!UpdatePlayerCustomDataStagers.Contains(Player.GetPlayerUuid()))
			{
				UpdatePlayerCustomDataStagers.Emplace(Player.GetPlayerUuid(), new FImGuiCustomDataStager());
				UpdatePlayerCustomDataStagers[Player.GetPlayerUuid()]->SetName(GetShortUuid(Player.GetPlayerUuid()));
				if (Player.GetCustomData().Num() > 0)
				{
					UpdatePlayerCustomDataStagers[Player.GetPlayerUuid()]->SetDataFromMap(Player.GetCustomData());
				}
			}
			PlayerCustomDataStager = UpdatePlayerCustomDataStagers[Player.GetPlayerUuid()];
		}

		if (PlayerCustomDataStager != nullptr)
		{
			PlayerCustomDataStager->DisplayCustomDataStager(false);
			if (ImGui::Button("Update Custom Data"))
			{
				TMap<FString, FString> CustomData;
				PlayerCustomDataStager->GetCustomDataMap(CustomData);
				RHJoinedSession->UpdatePlayerCustomData(Player.PlayerUuid, CustomData);
			}
		}

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayPlatformSession(const FRHAPI_PlatformSession& Info)
{
	FString HeaderString = FString::Printf(TEXT("%s"), *EnumToString(Info.Platform));

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		//ImGui::Text("Platform: %s", TCHAR_TO_UTF8(*EnumToString(EPlatform PlatformId)));

		FString DecodedPlatformSessionId;
		if (RallyHereAPI::Base64UrlDecode(Info.PlatformSessionIdBase64, DecodedPlatformSessionId))
		{
			ImGuiDisplayCopyableValue(TEXT("PlatformSessionId"), DecodedPlatformSessionId);
		}
		ImGuiDisplayCopyableValue(TEXT("PlatformSessionIdBase64"), Info.PlatformSessionIdBase64);

		/* Players in the platform session */
		for (auto Player : Info.Players)
		{
			FString Label = FString::Printf(TEXT("Player##%d"), *Player.PlayerUuid.ToString(EGuidFormats::DigitsWithHyphens));
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*Label), RH_DefaultTreeFlagsLeaf))
			{
				ImGuiDisplayCopyableValue(TEXT("PlayerUuid"), Player.PlayerUuid);
			}
		}

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplaySessionTemplate(const FRHAPI_SessionTemplate& Template)
{
	FString HeaderString = FString::Printf(TEXT("Type: %s"), *Template.SessionType);

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		ImGuiDisplayCopyableValue(TEXT("SessionType"), Template.GetSessionType());
		ImGuiDisplayCopyableValue(TEXT("EngineSessionType"), Template.GetEngineSessionTypeOrNull());
		ImGuiDisplayCopyableValue(TEXT("CanJoinMatchmaking"), Template.GetCanJoinMatchmakingOrNull());
		ImGuiDisplayCopyableValue(TEXT("CanBeCreatedByPlayersDirectly"), Template.GetCanBeCreatedByPlayersDirectlyOrNull());
		ImGuiDisplayCopyableValue(TEXT("Joinable"), Template.GetJoinableOrNull());
		ImGuiDisplayCopyableValue(TEXT("AutoAddToBrowser"), Template.GetAutoAddToBrowserOrNull());

		ImGuiDisplayCustomData(Template.GetAutoBrowserParamsOrNull(), TEXT("AutoBrowserParams"), TEXT("AutoBrowserParams"));

		ImGuiDisplayCopyableValue(TEXT("CanBeAddedToServerBrowser"), Template.GetCanBeAddedToServerBrowserOrNull());
		ImGuiDisplayCopyableValue(TEXT("KeepAliveOnEmpty"), Template.GetKeepAliveOnEmptyOrNull());

		auto* PlatformTemplates = Template.GetPlatformTemplatesOrNull();

		if (ImGui::TreeNodeEx("PlatformTemplates", RH_DefaultTreeFlags))
		{
			if (PlatformTemplates != nullptr)
			{
				for (auto& PlatformTemplate : *PlatformTemplates)
				{
					FString PlatformTemplateHeaderString = FString::Printf(TEXT("Platform: %s"), *EnumToString(PlatformTemplate.Value.GetPlatform()));

					if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*PlatformTemplateHeaderString), RH_DefaultTreeFlagsLeaf))
					{
						ImGuiDisplayCopyableValue(TEXT("Platform"), EnumToString(PlatformTemplate.Value.GetPlatform()));
						ImGuiDisplayCopyableValue(TEXT("PlatformId"), EnumToString(PlatformTemplate.Value.GetPlatformId()));
						ImGuiDisplayCopyableValue(TEXT("PlatformSessionType"), PlatformTemplate.Value.GetPlatformSessionType());
						ImGuiDisplayCopyableValue(TEXT("MaxPlayers"), PlatformTemplate.Value.GetMaxPlayersOrNull());
						ImGuiDisplayCustomData(PlatformTemplate.Value.GetCustomData());

						ImGui::TreePop();
					}
				}
			}
			else
			{
				ImGui::Text("No PlatformTemplates");
			}

			ImGui::TreePop();
		}

		if (const auto InstanceStartupParams = Template.GetAutoStartupParamsOrNull())
		{
			if (ImGui::TreeNodeEx("AutoStartupParams", RH_DefaultTreeFlagsLeaf))
			{
				ImGuiDisplayCopyableValue(TEXT("Map"), InstanceStartupParams->Map);
				ImGuiDisplayCopyableValue(TEXT("Mode"), InstanceStartupParams->GetMode());
				ImGuiDisplayCopyableValue(TEXT("MiscParams"), InstanceStartupParams->MiscParams);
				ImGuiDisplayCustomData(InstanceStartupParams->GetCustomData());

				ImGui::TreePop();
			}
		}
		else
		{
			ImGui::Text("No AutoStartupParams");
		}

		ImGuiDisplayCopyableValue(TEXT("MinSessionCount"), Template.GetMinSessionCountOrNull());

		ImGuiDisplayCustomData(Template.GetCustomDataOrNull());

		ImGuiDisplayCopyableValue(TEXT("NumTeams"), Template.GetNumTeamsOrNull());
		ImGuiDisplayCopyableValue(TEXT("PlayersPerTeam"), Template.GetPlayersPerTeamOrNull());
		ImGuiDisplayCopyableValue(TEXT("CanChangeOwnTeam"), Template.GetCanChangeOwnTeamOrNull());

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplaySession(const FRH_APISessionWithETag& SessionWrapper, URH_SessionView* RHSession, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSessionSubsystem* pGISessionSubsystem)
{
	auto& Session = SessionWrapper.Data;
	if (RHSession != nullptr && (&Session != &RHSession->GetSessionData()))
	{
		ImGui::Text("Invalid session cross reference: %s", TCHAR_TO_UTF8(*Session.SessionId));
		return;
	}

	FString HeaderString = FString::Printf(TEXT("Session: %s - %s"), *Session.SessionId, *Session.Type);

	auto RHJoinedSession = Cast<URH_JoinedSession>(RHSession);
	auto RHOnlineSession = Cast<URH_OnlineSession>(RHSession);
	auto RHInvitedSession = Cast<URH_InvitedSession>(RHSession);

	ImGuiTreeNodeFlags TreeFlags = RH_DefaultTreeFlags;
	if (RHSession != nullptr)
	{
		if (RHJoinedSession != nullptr && RHJoinedSession->IsActive())
		{
			HeaderString += TEXT("\t<ACTIVE>");
			TreeFlags = RH_DefaultTreeFlagsDefaultOpen;
		}

		if (RHInvitedSession != nullptr)
		{
			HeaderString += TEXT("\t<INVITED>");
		}

		if (RHSession->IsOffline())
		{
			HeaderString += TEXT("\t<OFFLINE>");
		}
	}

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), TreeFlags))
	{
		if (RHSession != nullptr && RHSession->IsOnline())
		{
			if (ImGui::Button("Refresh"))
			{
				RHSession->ForcePollForUpdate();
			}
			ImGui::SameLine();
			if (ImGui::Button("Force Refresh"))
			{
				RHSession->ForcePollForUpdate(true);
			}

			auto UpdateTimer = RHSession->GetPollTimeRemaining();
			if (UpdateTimer >= 0)
			{
				ImGui::SameLine();
				FTimespan PollTime = FTimespan::FromSeconds(UpdateTimer);
				ImGui::Text("Next Poll: (%s)", TCHAR_TO_UTF8(*PollTime.ToString()));
			}
		}

		if (RHJoinedSession != nullptr)
		{
			if (ImGui::Button("Leave"))
			{
				RHJoinedSession->Leave(false);
			}
		}
		else if (RHInvitedSession != nullptr)
		{
			if (ImGui::Button("Accept"))
			{
				RHInvitedSession->Join(FRH_OnSessionUpdatedDelegate());
			}
			ImGui::SameLine();
			if (ImGui::Button("Decline"))
			{
				RHInvitedSession->Leave(FRH_OnSessionUpdatedDelegate());
			}
		}
		else if (Session.Joinable) // sessions that are freely joinable
		{
			// if pLPSessionSubsystem is valid, try to allow for easy joining if the session is public (ex: this is on server browser)
			if (pLPSessionSubsystem != nullptr)
			{
				if (pLPSessionSubsystem->GetSessionById(Session.SessionId) == nullptr)
				{
					ImGui::SetNextItemWidth(150.f);
					ImGui::InputInt("Team", &JoinByIdTeam, 1, 0);
					ImGui::SameLine();

					auto JoinDetails = URH_OnlineSession::GetJoinDetailDefaults(pLPSessionSubsystem);
					JoinDetails.SetTeamId(JoinByIdTeam);

					

					if (ImGui::Button("Join"))
					{
						URH_OnlineSession::JoinByIdEx(Session.SessionId, MoveTemp(JoinDetails), pLPSessionSubsystem);
						pLPSessionSubsystem->JoinSessionById(Session.SessionId);
					}
				}
			}
		}

		ImGuiDisplayCopyableValue(TEXT("SessionId"), Session.SessionId);
		ImGuiDisplayCopyableValue(TEXT("ETag"), SessionWrapper.ETag);

		FRHAPI_SessionTemplate Template;
		if (RHSession != nullptr)
		{
			Template = RHSession->GetTemplate();
		}
		else if (pLPSessionSubsystem != nullptr && pLPSessionSubsystem->GetTemplate(Session.Type, Template))
		{
			// autofilled
		}
		else
		{
			Template.SessionType = Session.Type + TEXT(" <UNKNOWN TYPE>");
		}
		ImGuiDisplaySessionTemplate(Template);

		ImGuiDisplayCopyableValue(TEXT("Region Id"), Session.GetRegionIdOrNull());

		if (Session.Joinable)
		{
			ImGui::Text("Join Rule: Public");
		}
		else
		{
			ImGui::Text("Join Rule: Private");
		}

		// Instance
		if (const auto Instance = Session.GetInstanceOrNull())
		{
			auto StartupCustomData = Instance->GetInstanceStartupParamsOrNull() ? Instance->GetInstanceStartupParamsOrNull()->GetCustomDataOrNull() : nullptr;
			if (RHJoinedSession != nullptr)
			{
				bool bIsBeaconSession = RHJoinedSession->IsBeaconSession();

				if (pGISessionSubsystem != nullptr && !bIsBeaconSession)
				{
					if (RHJoinedSession->IsActive())
					{
						if (ImGui::Button("Deactivate"))
						{
							pGISessionSubsystem->SyncToSession(nullptr);
						}
						ImGui::SameLine();
						if (ImGui::Button("Mark Fubar"))
						{
							pGISessionSubsystem->MarkInstanceFubar(TEXT("Debug Tool"));
						}
					}
					else
					{
						ImGui::BeginDisabled(!pGISessionSubsystem->IsReadyToJoinInstance(RHJoinedSession, false));
						if (ImGui::Button("Activate"))
						{
							pGISessionSubsystem->SyncToSession(RHJoinedSession);
						}
						ImGui::EndDisabled();
					}
				}
				else if (bIsBeaconSession)
				{
					auto* LastBeacon = Cast<ARH_TestBeaconClient>(RHOnlineSession->GetLastBeacon());
					if (LastBeacon != nullptr)
					{
						if (ImGui::Button("Ping"))
						{
							LastBeacon->TestPing();
						}
						ImGui::SameLine();
						if (ImGui::Button("Destroy Test Beacon"))
						{
							LastBeacon->DestroyBeacon();
						}
					}
					else
					{
						if (ImGui::Button("Connect Test Beacon"))
						{
							RHOnlineSession->CreateBeacon(pLPSessionSubsystem->GetLocalPlayerSubsystem()->GetLocalPlayer(), ARH_TestBeaconClient::StaticClass(), FEncryptionData());
						}
					}
				}

				if (ImGui::Button("End Instance"))
				{
					RHJoinedSession->EndInstance(FRH_OnSessionUpdatedDelegate());
				}
			}

			ImGuiDisplayInstance(*Instance, pGISessionSubsystem);
		}
		else if (RHJoinedSession != nullptr)
		{
			ImGui::InputText("Map", MapName.GetData(), MapName.Num());
			ImGui::InputText("GameMode", GameModeName.GetData(), GameModeName.Num());
			ImGui::Checkbox("Beacon", &bMakeBeaconInstance);

			FRHAPI_InstanceRequest InstanceRequest;

			FRHAPI_InstanceStartupParams InstanceStartupParams;
			FString MapNameString = UTF8_TO_TCHAR(MapName.GetData());
			FString GameModeNameString = UTF8_TO_TCHAR(GameModeName.GetData());
			InstanceStartupParams.Map = MapNameString;
			InstanceStartupParams.SetMode(GameModeNameString);

			if (bMakeBeaconInstance)
			{
				TMap<FString, FString> CustomData;
				CustomData.Add(RH_SessionCustomDataKeys::BeaconFlag, TEXT("true"));
				InstanceStartupParams.SetCustomData(CustomData);
			}

			InstanceCustomDataStager.DisplayCustomDataStager(false);

			InstanceRequest.SetInstanceStartupParams(InstanceStartupParams);

			auto SetCustomData = [this, InstanceRequest]() mutable
			{
				TMap<FString, FString> OutCustomData;
				InstanceCustomDataStager.GetCustomDataMap(OutCustomData);
				InstanceRequest.SetCustomData(OutCustomData);
			};

			if (ImGui::Button("Request Player Instance"))
			{
				SetCustomData();
				InstanceRequest.SetHostType(ERHAPI_HostType::Player);
				RHJoinedSession->RequestInstance(InstanceRequest);
			}

			const auto* RegionId = Session.GetRegionIdOrNull();
			if (RegionId != nullptr && RegionId->Len() > 0)
			{
				ImGui::SameLine();
				if (ImGui::Button("Request Dedicated Instance"))
				{
					SetCustomData();
					InstanceRequest.SetHostType(ERHAPI_HostType::Dedicated);
					RHJoinedSession->RequestInstance(InstanceRequest);
				}
			}
		}

		// Match
		if (const auto Match = Session.GetMatchOrNull())
		{
			if (RHJoinedSession != nullptr && ImGui::Button("End Match"))
			{
				RHJoinedSession->EndMatch(FRH_OnSessionUpdatedDelegate());
			}
			ImGuiDisplayMatch(*Match);
		}
		else if (RHJoinedSession != nullptr && ImGui::Button("Start Match"))
		{
			RHJoinedSession->StartMatch(FRH_OnSessionUpdatedDelegate());
		}
		
		if (ImGui::TreeNodeEx("MatchMaking", RH_DefaultTreeFlags))
		{
			if (const auto MatchMaking = Session.GetMatchmakingOrNull())
			{
				if (RHOnlineSession != nullptr)
				{
					if (ImGui::Button("Leave Queue"))
					{
						RHOnlineSession->LeaveQueue();
					}
				}

				ImGuiDisplayCopyableValue(TEXT("TicketId"), MatchMaking->TicketId);
				ImGuiDisplayCustomData(MatchMaking->GetCustomData());
			}
			else if (RHOnlineSession != nullptr)
			{
				ImGui::InputText("##QueueId", JoinQueueByIdString.GetData(), JoinQueueByIdString.Num());
				ImGui::SameLine();
				if (ImGui::Button("Join Queue"))
				{
					FRHAPI_QueueJoinRequest JoinQueueRequest;
					JoinQueueRequest.QueueId = ImGuiGetStringFromTextInputBuffer(JoinQueueByIdString);
					RHOnlineSession->JoinQueue(JoinQueueRequest);
				}
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNodeEx("Browser", RH_DefaultTreeFlags))
		{
			auto BrowserData = Session.GetBrowserOrNull();
			if (BrowserData)
			{
				ImGuiDisplayCustomData(BrowserData->GetCustomDataOrNull());
			}
			else
			{
				ImGui::Text("No Browser Info");
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNodeEx("Players", RH_DefaultTreeFlags))
		{
			// TODO probably want change display to reflect teams properly
			for (int32 i = 0; i < Session.Teams.Num(); ++i)
			{
				const auto& Team = Session.Teams[i];
				const int32 TeamId = i;
				FString TeamHeaderString = FString::Printf(TEXT("Team %d"), i);

				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*TeamHeaderString), RH_DefaultTreeFlags))
				{
					ImGuiDisplayCopyableValue(TEXT("MaxSize"), Team.GetMaxSize());
					for (auto Player : Team.Players)
					{
						ImGuiDisplaySessionPlayer(RHSession, Player, TeamId, pGISessionSubsystem);
					}

					// Remove obsolete custom data stagers
					TArray<FGuid> Keys;
					UpdatePlayerCustomDataStagers.GenerateKeyArray(Keys);
					for (FGuid UUIDKey : Keys)
					{
						if (!Team.Players.ContainsByPredicate([UUIDKey](const FRHAPI_SessionPlayer& Player)
							{
								return Player.GetPlayerUuid() == UUIDKey;
							}))
						{
							// No longer in player list, remove stager
							delete UpdatePlayerCustomDataStagers[UUIDKey];
							UpdatePlayerCustomDataStagers.Remove(UUIDKey);
						}
					}

					ImGui::TreePop();
				}
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNodeEx("Invite Players", RH_DefaultTreeFlags))
		{
			if (RHJoinedSession != nullptr)
			{
				int NumTargetedPlayers = 0;
				if (URallyHereDebugTool* pOwner = GetOwner())
				{
					NumTargetedPlayers = pOwner->GetAllTargetedPlayerInfos().Num();
				}
				ImGui::SetNextItemWidth(150.f);
				ImGui::InputInt("Team", &InvitePlayerTeam, 1, 0);
				InvitePlayerCustomDataStager.DisplayCustomDataStager(false);
				if (ImGui::Button(TCHAR_TO_UTF8(*FString::Printf(TEXT("Invite [%d] Targeted Players"), NumTargetedPlayers))))
				{
					TMap<FString, FString> CustomData;
					InvitePlayerCustomDataStager.GetCustomDataMap(CustomData);
					ForEachTargetedRHPlayer(FRHDT_RHPAction::CreateLambda([this, RHJoinedSession, CustomData](URH_PlayerInfo* PlayerInfo)
						{
							if (PlayerInfo)
							{
								RHJoinedSession->InvitePlayer(PlayerInfo->GetRHPlayerUuid(), InvitePlayerTeam, CustomData);
							}
						}));
				}
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNodeEx("Platform Sessions", RH_DefaultTreeFlags))
		{
			if (const auto PlatformSessions = Session.GetPlatformSessionOrNull())
			{
				for (auto& platformSession : *PlatformSessions)
				{
					ImGuiDisplayPlatformSession(platformSession);
				}
			}
			else
			{
				ImGui::Text("No Platform Sessions");
			}

			if (RHJoinedSession != nullptr)
			{
				const auto* Syncer = RHJoinedSession->GetPlatformSyncer();
				if (Syncer != nullptr)
				{
					const auto PlatformSession = Syncer->GetPlatformSession();
					FUniqueNetIdRepl PlatformSessionId;
					Syncer->GetPlatformSessionIdFromPlatformSession(PlatformSessionId);

					FString SessionIdStr;
					if (PlatformSessionId.IsValid() && Syncer->ConvertPlatformSessionIdToJson(PlatformSessionId, SessionIdStr))
					{
						ImGui::Text("Local Platform Session Id: %s", TCHAR_TO_UTF8(*SessionIdStr));
					}
					else if (PlatformSession != nullptr)
					{
						ImGui::Text("Invalid Local Platform Session");
					}
					else
					{
						ImGui::Text("No Local Platform Session");
					}
				}
			}
			

			ImGui::TreePop();
		}

		ImGuiDisplayCopyableValue(TEXT("Created"), Session.Created);
		ImGui::Text("CreatedByMatchmaking: %s", Session.GetCreatedByMatchmakingOrNull() ? (Session.GetCreatedByMatchmaking() ? "true" : "false") : "<UNSET>");

		ImGuiDisplayCustomData(Session.GetCustomData());

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayLocalPlayerSessions(URH_GameInstanceSubsystem* pGISubsystem)
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedLocalPlayers().Num();
	}
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("%s", "Please select a local player (has Controller Id) in Player Repository.");
		return;
	}
	ImGui::Text("For [%d] selected Local Players (with Controller Ids).", NumSelectedPlayers);

	URH_LocalPlayerSessionSubsystem* firstLPSessionSS = nullptr;
	FString firstSelectedPlayerNote = FString();
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (ULocalPlayer* pLocalPlayer = pOwner->GetFirstSelectedLocalPlayer())
		{
			firstSelectedPlayerNote = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pOwner->GetFirstSelectedLocalPlayer()->GetControllerId());
			if (URH_LocalPlayerSubsystem* LPSS = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>(GetFirstSelectedLocalPlayer()))
			{
				firstLPSessionSS = LPSS->GetSessionSubsystem();
			}
		}
	}

	ImGui::InputText("##JoinByID", JoinByIdString.GetData(), JoinByIdString.Num());
	ImGui::SameLine();
	ImGui::SetNextItemWidth(150.f);
	ImGui::InputInt("Team", &JoinByIdTeam, 1, 0);
	ImGui::SameLine();
	if (ImGui::Button("Join (SessionId)"))
	{
		SessionActionResult.Empty();
		// Join the system by JoinbyIdString
		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this](URH_LocalPlayerSubsystem* LPSS)
			{
				if (LPSS)
				{
					if (URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem = LPSS->GetSessionSubsystem())
					{
						auto Delegate = FRH_OnSessionUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleSessionUpdatedResult, LPSS->GetPlayerUuid());

						auto JoinDetails = URH_OnlineSession::GetJoinDetailDefaults(pLPSessionSubsystem);
						JoinDetails.SetTeamId(JoinByIdTeam);

						URH_OnlineSession::JoinByIdEx(ImGuiGetStringFromTextInputBuffer(JoinByIdString), MoveTemp(JoinDetails), pLPSessionSubsystem, MoveTemp(Delegate));
					}
					else
					{
						SessionActionResult += TEXT("[") + GetShortUuid(LPSS->GetPlayerUuid()) + TEXT("] RH_LocalPlayerSessionSubsystem unavailable.") LINE_TERMINATOR;
					}
				}
			}));
	}

	ImGui::Separator();

	FString SelectedTemplateName = ImGuiGetStringFromTextInputBuffer(CreateByTypeSessionTypeString);
	if (ImGui::BeginCombo("##CreateByType", CreateByTypeSessionTypeString.GetData()))
	{
		TArray<FRHAPI_SessionTemplate> Templates;
		if (firstLPSessionSS)
		{
			Templates = firstLPSessionSS->GetTemplates();
		}
		
		for (auto& Template : Templates)
		{
			bool bIsSelected = SelectedTemplateName == Template.SessionType;

			FTCHARToUTF8 UTF8TemplateName(*Template.SessionType);
			if (ImGui::Selectable(UTF8TemplateName.Get(), bIsSelected))
			{
				CreateByTypeSessionTypeString.Reset();
				CreateByTypeSessionTypeString.AddZeroed(CreateByTypeSessionTypeString.Max());
				FMemory::Memcpy(CreateByTypeSessionTypeString.GetData(), UTF8TemplateName.Get(), CreateByTypeSessionTypeString.Num());

				bIsSelected = true;
			}
			if (bIsSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}
	{
		FRHAPI_SessionTemplate Template;
		if (firstLPSessionSS)
		{
			if (firstLPSessionSS->GetTemplate(ImGuiGetStringFromTextInputBuffer(CreateByTypeSessionTypeString), Template))
			{
				ImGuiDisplaySessionTemplate(Template);
			}
		}
	}

	ImGui::SetNextItemWidth(150.f);
	ImGui::InputText("Region Id", CreateByTypeRegionIdString.GetData(), CreateByTypeRegionIdString.Num());
	if (ImGui::Button("Create/Join (Type)"))
	{
		SessionActionResult.Empty();
		// join the system by JoinbyIdString
		FRHAPI_CreateOrJoinRequest Params = {};
		Params.SetSessionType(ImGuiGetStringFromTextInputBuffer(CreateByTypeSessionTypeString));
		auto RegionId = ImGuiGetStringFromTextInputBuffer(CreateByTypeRegionIdString);
		if (RegionId.Len() > 0)
		{
			Params.SetRegionId(RegionId);
		}
		Params.SetClientVersion(URH_JoinedSession::GetClientVersionForSession());

		ForEachSelectedLocalRHPlayer(FRHDT_RHLPAction::CreateLambda([this, Params](URH_LocalPlayerSubsystem* LPSS)
			{
				if (LPSS)
				{
					if (URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem = LPSS->GetSessionSubsystem())
					{
						auto Delegate = FRH_OnSessionUpdatedDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleSessionUpdatedResult, LPSS->GetPlayerUuid());
						pLPSessionSubsystem->CreateOrJoinSessionByType(Params, MoveTemp(Delegate));
					}
					else
					{
						SessionActionResult += TEXT("[") + GetShortUuid(LPSS->GetPlayerUuid()) + TEXT("] RH_LocalPlayerSessionSubsystem unavailable.") LINE_TERMINATOR;
					}
				}
			}));

	}

	if (!SessionActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Session Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*SessionActionResult));
		}
	}

	ImGui::Separator();
	ImGui::Separator();

	if (firstLPSessionSS)
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*firstSelectedPlayerNote));

		ImGui::Text("Sessions");
		if (ImGui::Button("Refresh"))
		{
			firstLPSessionSS->ForcePollForUpdate();
		}
		ImGui::SameLine();
		if (ImGui::Button("Force Refresh"))
		{
			firstLPSessionSS->ForcePollForUpdate(true);
		}

		auto UpdateTimer = firstLPSessionSS->GetPollTimeRemaining();
		if (UpdateTimer >= 0)
		{
			FTimespan PollTime = FTimespan::FromSeconds(UpdateTimer);

			ImGui::SameLine();
			ImGui::Text("Next Global Poll: (%s)", TCHAR_TO_UTF8(*PollTime.ToString()));
		}

		TArray<URH_SessionView*> Sessions = firstLPSessionSS->GetSessions();
		for (auto& Session : Sessions)
		{
			ImGuiDisplaySession(Session->GetSessionWithETag(), Session, firstLPSessionSS, pGISubsystem ? pGISubsystem->GetSessionSubsystem() : nullptr);
		}
	}



	// Offline mode testing
	ImGui::Separator();
	ImGui::Separator();
	ImGui::Text("Offline Support");
	if (ImGui::Button("Create Offline Session"))
	{
		if (pGISubsystem && pGISubsystem->GetClientBootstrapper())
		{
			pGISubsystem->GetClientBootstrapper()->CreateOfflineSession();
		}
	}
}


void FRHDTW_Session::ImGuiDisplayPlayerSessions(URH_GameInstanceSubsystem* pGISubsystem)
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	int NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	if (NumSelectedPlayers <= 0)
	{
		ImGui::Text("Please select a player with a Player UUID in Player Repository.");
		return;
	}
	ImGui::Text("For [%d] selected players with UUIDs.", NumSelectedPlayers);


	if (ImGui::Button("Refresh Sessions List"))
	{
		GetPlayerSessionsResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetSessions())
					{
						pp->RequestUpdate(false, FRH_OnRequestPlayerSessionsDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerSessions, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPlayerSessionsResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No sessions found on player info.") LINE_TERMINATOR;
					}
				}
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Refresh Sessions List (Force)"))
	{
		GetPlayerSessionsResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetSessions())
					{
						pp->RequestUpdate(true, FRH_OnRequestPlayerSessionsDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerSessions, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPlayerSessionsResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No presence found on player info.") LINE_TERMINATOR;
					}
				}
			}));
	}

	if (!GetPlayerSessionsResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Get Sessions Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*GetPlayerSessionsResult));
		}
	}
	ImGui::Separator();


	if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
	{
		ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

		if (auto pSessionsWrapper = ActivePlayerInfo->GetSessions())
		{
			TArray<FString> SessionTypes;
			TArray<FString> SessionIds;

			auto* pGISessionSearchCache = pGISubsystem != nullptr ? pGISubsystem->GetSessionSearchCache() : nullptr;

			auto* SessionsMap = pSessionsWrapper->Sessions.GetSessionsOrNull();

			if (!pSessionsWrapper->bInitialized)
			{
				ImGui::Text("Session data has not been requested");
			}
			else if (SessionsMap == nullptr || SessionsMap->Num() <= 0)
			{
				// no sessions presently
				ImGui::Text("No Sessions");
			}
			else
			{
				for (auto pair : *SessionsMap)
				{
					const auto SessionIdSet = pair.Value.GetSessionIdsOrNull();
					if (SessionIdSet && SessionIdSet->Num() > 0)
					{
						SessionIds.Append(SessionIdSet->Array());
					}

					const auto PendingInvites = pair.Value.GetPendingInvitesOrNull();
					if (PendingInvites && PendingInvites->Num() > 0)
					{
						TArray<FString> InviteSessionIds;
						PendingInvites->GenerateKeyArray(InviteSessionIds);
						SessionIds.Append(InviteSessionIds);
					}
				}

				for (const auto& SessionId : SessionIds)
				{
					URH_SessionView* RHSession = nullptr;
					if (pGISessionSearchCache != nullptr)
					{
						RHSession = pGISessionSearchCache->GetSessionById(SessionId);
					}

					if (RHSession != nullptr)
					{
						// session display has its own refresh functionality
						ImGuiDisplaySession(RHSession->GetSessionWithETag(), RHSession, nullptr, pGISubsystem ? pGISubsystem->GetSessionSubsystem() : nullptr);
					}
					else
					{
						ImGuiDisplayCopyableValue(TEXT("SessionId"), SessionId);
						ImGui::SameLine();
						if (pGISessionSearchCache != nullptr)
						{
							if (ImGui::SmallButton("Get Session Details"))
							{
								URH_SessionView::PollSingleSession(SessionId, pGISessionSearchCache);
							}
						}
					}
				}
			}
		}
	}
}

void FRHDTW_Session::ImGuiDisplaySessionBrowser(URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGISessionSearchCache = pGISubsystem != nullptr ? pGISubsystem->GetSessionSearchCache() : nullptr;
	if (pGISessionSearchCache == nullptr)
	{
		ImGui::Text("No Session Browser Cache found");
		return;
	}

	URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (ULocalPlayer* pLocalPlayer = pOwner->GetFirstSelectedLocalPlayer())
		{
			FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pOwner->GetFirstSelectedLocalPlayer()->GetControllerId());
			ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

			if (URH_LocalPlayerSubsystem* LPSS = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>(GetFirstSelectedLocalPlayer()))
			{
				pLPSessionSubsystem = LPSS->GetSessionSubsystem();
			}
		}
		else
		{
			ImGui::Text("Please select a local player (has Controller Id) in Player Repository. Local Player Subsystem currently required to search queues.");
			return;
		}
	}

	if (pLPSessionSubsystem == nullptr)
	{
		ImGui::Text("RH_LocalPlayerSessionSubstem unavailable.");
		return;
	}

	// search fields
	FString SelectedTemplateName(UTF8_TO_TCHAR(SearchByTypeString.GetData()));
	if (ImGui::BeginCombo("##SearchByType", SearchByTypeString.GetData()))
	{
		auto Templates = pLPSessionSubsystem->GetTemplates();
		for (auto& Template : Templates)
		{
			bool bIsSelected = SelectedTemplateName == Template.SessionType;

			FTCHARToUTF8 UTF8TemplateName(*Template.SessionType);
			if (ImGui::Selectable(UTF8TemplateName.Get(), bIsSelected))
			{
				SearchByTypeString.Reset();
				SearchByTypeString.AddZeroed(SearchByTypeString.Max());
				FMemory::Memcpy(SearchByTypeString.GetData(), UTF8TemplateName.Get(), SearchByTypeString.Num());

				bIsSelected = true;
			}
			if (bIsSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}

	ImGui::SetNextItemWidth(150.f);
	ImGui::InputInt("Page Num", &SearchCursor);
	ImGui::SameLine();
	ImGui::SetNextItemWidth(150.f);
	ImGui::InputInt("Page Size", &SearchPageSize);
	ImGui::SameLine();
	ImGui::Checkbox("Fetch Session Details", &SearchCacheSessions);

	if (ImGui::Button("Search"))
	{
		// join the system by JoinbyIdString
		FRH_SessionBrowserSearchParams params;
		params.SessionType = UTF8_TO_TCHAR(SearchByTypeString.GetData());
		params.Cursor = SearchCursor;
		params.PageSize = SearchPageSize;
		params.bCacheSessionDetails = SearchCacheSessions;
		pLPSessionSubsystem->SearchForSessions(params, FRH_OnSessionSearchCompleteDelegate::CreateSP(this, &FRHDTW_Session::HandleBrowserSearchResult));
	}

	ImGui::Separator();
	if (ImGui::Button("Clear Result Cache"))
	{
		ResultCache.Reset();
	}
	ImGui::SameLine();
	if (ImGui::Button("Force Clear Browser Cache"))
	{
		pGISessionSearchCache->ClearCache();
	}

	ImGui::Separator();
	ImGui::Separator();

	// display newest first
	for (int i = ResultCache.Num() - 1; i >= 0; --i)
	{
		const auto& Result = ResultCache[i];
		FString HeaderString = FString::Printf(TEXT("Search #%d: %s"), i, *Result.GetDescription());

		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
		{
			if (Result.SessionInfos.Num() <= 0)
			{
				ImGui::Text("No matching sessions found");
			}
			else
			{
				for (auto SessionInfo : Result.SessionInfos)
				{
					FString SessionId = SessionInfo.SessionId;

					// check if we have a cached session
					auto Session = pGISessionSearchCache->GetSessionById(SessionId);
					if (Session != nullptr)
					{
						ImGuiDisplaySession(Session->GetSessionWithETag(), Session, pLPSessionSubsystem, pGISubsystem ? pGISubsystem->GetSessionSubsystem() : nullptr);
					}
					else
					{
						ImGuiDisplayCopyableValue(TEXT("SessionId"), SessionId);
						ImGui::SameLine();
						if (pGISessionSearchCache != nullptr)
						{
							if (ImGui::SmallButton("Get Session Details"))
							{
								URH_SessionView::PollSingleSession(SessionId, pGISessionSearchCache);
							}
						}

						ImGuiDisplayCustomData(SessionInfo.GetCustomDataOrNull());
					}
				}
			}

			ImGui::TreePop();
		}
	}
}


void FRHDTW_Session::ImGuiDisplayQueuesBrowser(URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;
	if (pGIMatchmakingCache == nullptr)
	{
		ImGui::Text("No Matchmaking Cache found");
		return;
	}

	URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem = nullptr;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (ULocalPlayer* pLocalPlayer = pOwner->GetFirstSelectedLocalPlayer())
		{
			FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pOwner->GetFirstSelectedLocalPlayer()->GetControllerId());
			ImGui::Text("%s", TCHAR_TO_UTF8(*Note));

			if (URH_LocalPlayerSubsystem* LPSS = pLocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>(GetFirstSelectedLocalPlayer()))
			{
				pLPSessionSubsystem = LPSS->GetSessionSubsystem();
			}
		}
		else
		{
			ImGui::Text("Please select a local player (has Controller Id) in Player Repository. Local Player Subsystem currently required to search queues.");
			return;
		}
	}

	if (pLPSessionSubsystem == nullptr)
	{
		ImGui::Text("RH_LocalPlayerSessionSubstem unavailable.");
		return;
	}

	auto DisplayNameFromSession = [](URH_SessionView* Session) -> FString
	{
		if (Session == nullptr)
		{
			return FString();
		}
		return FString::Printf(TEXT("%s - %s"), *Session->GetSessionId(), *Session->GetSessionType());
	};

	URH_OnlineSession* SelectedSession = nullptr;
	FString SelectedSessionDisplayName(UTF8_TO_TCHAR(QueueSessionSelector.GetData()));
	if (ImGui::BeginCombo("Session", QueueSessionSelector.GetData()))
	{
		auto Sessions = pLPSessionSubsystem->GetSessions();
		for (auto* Session : Sessions)
		{
			auto* OnlineSession = Cast<URH_OnlineSession>(Session);
			if (OnlineSession == nullptr)
			{
				// only online sessions are joinable
				continue;
			}

			FString DisplayName = DisplayNameFromSession(Session);
			bool bIsSelected = DisplayName == SelectedSessionDisplayName;

			FTCHARToUTF8 UTF8DisplayName(*DisplayName);
			if (ImGui::Selectable(UTF8DisplayName.Get(), bIsSelected))
			{
				QueueSessionSelector.Reset();
				QueueSessionSelector.AddZeroed(QueueSessionSelector.Max());
				FMemory::Memcpy(QueueSessionSelector.GetData(), UTF8DisplayName.Get(), QueueSessionSelector.Num());

				bIsSelected = true;
			}
			if (bIsSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}

	{
		// make sure we re-read the selected session in case it changed
		SelectedSessionDisplayName = UTF8_TO_TCHAR(QueueSessionSelector.GetData());
		auto Sessions = pLPSessionSubsystem->GetSessions();
		for (auto* Session : Sessions)
		{
			FString DisplayName = DisplayNameFromSession(Session);
			if (DisplayName == SelectedSessionDisplayName)
			{
				SelectedSession = Cast<URH_OnlineSession>(Session);
				break;
			}
		}
	}

	// clean up selector if it no longer corresponds to a valid session
	if (SelectedSession == nullptr && QueueSessionSelector.Num() > 0)
	{
		QueueSessionSelector.Reset();
		QueueSessionSelector.AddZeroed(QueueSessionSelector.Max());
	}

	if (SelectedSession != nullptr && SelectedSession->IsInQueue())
	{
		if (ImGui::Button("Leave Queue"))
		{
			SelectedSession->LeaveQueue();
		}
	}

	ImGui::Separator();

	// search fields
	ImGui::SetNextItemWidth(150.f);
	ImGui::InputInt("Page Num", &QueueSearchCursor);
	ImGui::SameLine();
	ImGui::SetNextItemWidth(150.f);
	ImGui::InputInt("Page Size", &QueueSearchPageSize);

	if (ImGui::Button("Search"))
	{
		// join the system by JoinbyIdString
		FRH_QueueSearchParams params;
		params.Cursor = QueueSearchCursor;
		params.PageSize = QueueSearchPageSize;
		pGIMatchmakingCache->SearchQueues(params);
	}
	ImGui::SameLine();
	if (ImGui::Button("Clear Cache"))
	{
		pGIMatchmakingCache->ClearCache();
	}

	ImGui::Checkbox("Filter Inactive Queues", &bFilterInactiveQueues);

	ImGui::Separator();
	ImGui::Text("Queues");
	auto Queues = pGIMatchmakingCache->GetAllQueues();
	for (auto* Queue : Queues)
	{
		if (Queue->IsActive() || !bFilterInactiveQueues)
		{
			ImGuiDisplayQueue(Queue, pLPSessionSubsystem, SelectedSession, pGIMatchmakingCache);
		}
	}
}

void FRHDTW_Session::ImGuiDisplayQueue(const URH_MatchmakingQueueInfo* Queue, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_OnlineSession* pSelectedSession, URH_MatchmakingBrowserCache* pBrowerCache)
{
	FString HeaderString = FString::Printf(TEXT("Queue: %s"), *Queue->GetDescription());

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		if (pSelectedSession != nullptr && !pSelectedSession->IsInQueue())
		{
			if (ImGui::Button("Join"))
			{
				pSelectedSession->JoinQueue(Queue->GetQueueId());
			}
		}

		ImGuiDisplayCopyableValue(TEXT("QueueId"), Queue->GetQueueId());
		ImGuiDisplayCopyableValue(TEXT("Description"), Queue->GetDescription());

		const auto& QueueInfo = Queue->GetQueueInfo();

		ImGui::Text("Active: %s", QueueInfo.GetActive() ? "true" : "false");
		ImGui::Text("MaxQueueGroupSize: %d", QueueInfo.GetMaxQueueGroupSize());

		ImGuiDisplayCustomData(QueueInfo.GetLegacyConfigOrNull(), TEXT(""), TEXT("LegacyConfig"));

		ImGuiDisplayCopyableValue(TEXT("MatchMakingTemplateGroupId"), QueueInfo.GetMatchMakingTemplateGroupId());		
		
		if (pBrowerCache != nullptr)
		{
			auto* TemplateGroup = pBrowerCache->GetMatchmakingTemplateGroup(QueueInfo.GetMatchMakingTemplateGroupId());
			if (TemplateGroup != nullptr)
			{
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*TemplateGroup->GetDescription()), RH_DefaultTreeFlags))
				{
					// todo - pull more data
					FString RequiredItemsString;
					auto RequiredItems = TemplateGroup->GetRequiredItemIds();
					RequiredItemsString.Reset(RequiredItems.Num() * 4);
					for (auto item : RequiredItems)
					{
						if (RequiredItemsString.Len() == 0)
						{
							RequiredItemsString = FString::Printf(TEXT("%d"), item);
						}
						else
						{
							RequiredItemsString = FString::Printf(TEXT(",%d"), item);
						}
					}
					ImGuiDisplayCopyableValue(TEXT("RequiredItems"), RequiredItemsString);

					if (ImGui::TreeNodeEx("Possible Request Templates", RH_DefaultTreeFlagsLeaf))
					{
						TArray<FGuid> RequestTemplateIds = TemplateGroup->GetPossibleInstanceRequestTemplateIds();
						if (pBrowerCache != nullptr)
						{
							for (auto& RequestTemplateId : RequestTemplateIds)
							{

								if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*RequestTemplateId.ToString(EGuidFormats::DigitsWithHyphens)), RH_DefaultTreeFlagsLeaf))
								{
									ImGuiDisplayCopyableValue(RequestTemplateId.ToString(EGuidFormats::DigitsWithHyphens), RequestTemplateId, ECopyMode::Value);
									auto* RequestTemplate = pBrowerCache->GetInstanceRequestTemplate(RequestTemplateId);
									if (RequestTemplate != nullptr)
									{
										const auto& TemplateInfo = RequestTemplate->GetInfo();

										const auto& MapList = TemplateInfo.GetMapSelectionList().GetMaps();

										for (auto Map : MapList)
										{
											auto MapIdentifier = FString::Printf(TEXT("Map %s"), *Map.GetMapId());
											if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MapIdentifier), RH_DefaultTreeFlagsLeaf))
											{
												ImGuiDisplayCopyableValue(TEXT("MapId"), Map.GetMapId());
												ImGuiDisplayCopyableValue(TEXT("Name"), Map.GetName());
												ImGuiDisplayCopyableValue(TEXT("GameMode"), Map.GetModeOrNull());
												ImGuiDisplayCopyableValue(TEXT("Weight"), Map.GetMapWeight());
												ImGuiDisplayCustomData(Map.GetCustomData());
												ImGui::TreePop();
											}
										}

										ImGuiDisplayCustomData(RequestTemplate->GetCustomData());
									}
									else
									{
										if (ImGui::Button("Lookup Request Template"))
										{
											pBrowerCache->SearchInstanceRequestTemplate(RequestTemplateId);
										}
									}

									ImGui::TreePop();
								}
							}
						}
						else
						{
							for (auto& RequestTemplateId : RequestTemplateIds)
							{
								ImGuiDisplayCopyableValue(RequestTemplateId.ToString(EGuidFormats::DigitsWithHyphens), RequestTemplateId, ECopyMode::Value);
							}
						}


						ImGui::TreePop();
					}

					ImGui::TreePop();
				}
			}
			else
			{
				ImGui::SameLine();
				if (ImGui::SmallButton("Lookup Template Group Id"))
				{
					pBrowerCache->SearchMatchmakingTemplateGroup(QueueInfo.GetMatchMakingTemplateGroupId());
				}
			}
		}

		ImGui::TreePop();
	}
}


void FRHDTW_Session::ImGuiDisplayRegionsBrowser(URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;
	if (pGIMatchmakingCache == nullptr)
	{
		ImGui::Text("No Matchmaking Cache found");
		return;
	}

	if (ImGui::Button("Get Regions"))
	{
		pGIMatchmakingCache->SearchRegions();
	}
	ImGui::SameLine();
	if (ImGui::Button("Clear Cache"))
	{
		pGIMatchmakingCache->ClearCache();
	}


	ImGui::Separator();

	if (ImGui::BeginTable("RegionsTable", 4, RH_TableFlagsPropSizing))
	{
		// Header
		ImGui::TableSetupColumn("Region ID");
		ImGui::TableSetupColumn("Custom Only");
		ImGui::TableSetupColumn("Sort Order");
		ImGui::TableSetupColumn("Message");
		ImGui::TableHeadersRow();

		// Content
		for (const auto& Region : pGIMatchmakingCache->GetAllRegions())
		{
			ImGui::PushID(Region.SiteId);

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("RegionID"), FString::Printf(TEXT("%d"), Region.SiteId), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Region.CustomOnly);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Region.SortOrder);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Message"), Region.GetMessageNameOrNull(), ECopyMode::Value);

			ImGui::PopID();
		}

		ImGui::EndTable();
	}
}

void FRHDTW_Session::Do()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("No Game Instance Found");
		return;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	auto pGISessionSubsystem = pGISubsystem != nullptr ? pGISubsystem->GetSessionSubsystem() : nullptr;
	auto pGISessionSearchCache = pGISubsystem != nullptr ? pGISubsystem->GetSessionSearchCache() : nullptr;
	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;


	static ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("Sessions", tab_bar_flags))
	{
		if (ImGui::BeginTabItem("Local Player", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplayLocalPlayerSessions(pGISubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Player", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplayPlayerSessions(pGISubsystem);
			ImGui::EndTabItem();
		}

		if (pGISessionSearchCache != nullptr && ImGui::BeginTabItem("Browser", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplaySessionBrowser(pGISubsystem);
			ImGui::EndTabItem();
		}

		if (pGIMatchmakingCache != nullptr && ImGui::BeginTabItem("Queues", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplayQueuesBrowser(pGISubsystem);
			ImGui::EndTabItem();
		}

		if (pGIMatchmakingCache != nullptr && ImGui::BeginTabItem("Regions", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplayRegionsBrowser(pGISubsystem);
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Session::HandleBrowserSearchResult(bool bSuccess, const FRH_SessionBrowserSearchResult& Result)
{
	if (bSuccess)
	{
		FRH_SessionBrowserSearchResult TempResult = Result;
		ResultCache.Add(MoveTemp(TempResult));
	}
}

void FRHDTW_Session::HandleSessionUpdatedResult(bool bSuccess, URH_JoinedSession* SessionData, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		SessionActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Session action succeeded.") LINE_TERMINATOR;
	}
	else
	{
		SessionActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Session action failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_Session::HandleGetPlayerSessions(bool bSuccess, URH_PlayerSessions* SessionsData, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		GetPlayerSessionsResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Get Player Sessions succeeded.") LINE_TERMINATOR;
	}
	else
	{
		GetPlayerSessionsResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Get Player Sessions failed.") LINE_TERMINATOR;
	}
}

void FRHDTW_Session::HandleGetPlayerSessionsDetails(bool bSuccess, const FRH_SessionBrowserSearchResult& Result)
{
	if (bSuccess)
	{
		GetPlayerSessionsResult += TEXT("Get Player Sessions Details succeeded.") LINE_TERMINATOR;
	}
	else
	{
		GetPlayerSessionsResult += TEXT("Get Player Sessions Details failed.") LINE_TERMINATOR;
	}
}

