// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_Session.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
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

#include "RH_Beacons.h"

#define IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE 256
#define IMGUI_SESSION_TYPE_PREALLOCATION_SIZE 32

FRHDTW_Session::FRHDTW_Session()
	: Super()
{
	DefaultPos = FVector2D(610, 20);

	JoinByIdString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	CreateByTypeSessionTypeString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);
	CreateByTypeRegionIdString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);

	InvitePlayerUuidString.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
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

	FRH_QueueSearchParams queueSearchParams;
	QueueSearchCursor = queueSearchParams.Cursor;
	QueueSearchPageSize = queueSearchParams.PageSize;
	bFilterInactiveQueues = true;
}

FRHDTW_Session::~FRHDTW_Session()
{
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
			if (ImGui::Button("Force Refresh"))
			{
				RHSession->ForcePollForUpdate();
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
					if (ImGui::Button("Join"))
					{
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

			InstanceRequest.SetInstanceStartupParams(InstanceStartupParams);

			if (ImGui::Button("Request Player Instance"))
			{
				InstanceRequest.SetHostType(ERHAPI_HostType::Player);
				RHJoinedSession->RequestInstance(InstanceRequest);
			}

			const auto* RegionId = Session.GetRegionIdOrNull();
			if (RegionId != nullptr && RegionId->Len() > 0)
			{
				ImGui::SameLine();
				if (ImGui::Button("Request Dedicated Instance"))
				{
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
					RHOnlineSession->JoinQueue(FString(UTF8_TO_TCHAR(JoinQueueByIdString.GetData())));
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
					ImGui::TreePop();
				}
			}

			if (RHJoinedSession != nullptr)
			{
				ImGui::SetNextItemWidth(300.f);
				ImGui::InputText("PlayerUuid", InvitePlayerUuidString.GetData(), InvitePlayerUuidString.Num());
				ImGui::SameLine();
				ImGui::SetNextItemWidth(150.f);
				ImGui::InputInt("Team", &InvitePlayerTeam, 1, 0);
				ImGui::SameLine();
				if (ImGui::Button("Invite"))
				{
					FGuid tempGuid(UTF8_TO_TCHAR(InvitePlayerUuidString.GetData()));
					RHJoinedSession->InvitePlayer(tempGuid);
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

void FRHDTW_Session::ImGuiDisplayPlayerSessions(URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSubsystem* pGISubsystem)
{
	ImGui::InputText("##JoinByID", JoinByIdString.GetData(), JoinByIdString.Num());
	ImGui::SameLine();
	if (ImGui::Button("Join (SessionId)"))
	{
		// join the system by JoinbyIdString
		pLPSessionSubsystem->JoinSessionById(ImGuiGetStringFromTextInputBuffer(JoinByIdString));
	}

	ImGui::Separator();

	FString SelectedTemplateName = ImGuiGetStringFromTextInputBuffer(CreateByTypeSessionTypeString);
	if (ImGui::BeginCombo("##CreateByType", CreateByTypeSessionTypeString.GetData()))
	{
		auto Templates = pLPSessionSubsystem->GetTemplates();
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
		if (pLPSessionSubsystem->GetTemplate(ImGuiGetStringFromTextInputBuffer(CreateByTypeSessionTypeString), Template))
		{
			ImGuiDisplaySessionTemplate(Template);
		}
	}

	ImGui::SetNextItemWidth(150.f);
	ImGui::InputText("Region Id", CreateByTypeRegionIdString.GetData(), CreateByTypeRegionIdString.Num());
	if (ImGui::Button("Create/Join (Type)"))
	{
		// join the system by JoinbyIdString
		FRHAPI_CreateOrJoinRequest Params = {};
		Params.SetSessionType(ImGuiGetStringFromTextInputBuffer(CreateByTypeSessionTypeString));
		auto RegionId = ImGuiGetStringFromTextInputBuffer(CreateByTypeRegionIdString);
		if (RegionId.Len() > 0)
		{
			Params.SetRegionId(RegionId);
		}
		Params.SetClientVersion(URH_JoinedSession::GetClientVersionForSession());
		pLPSessionSubsystem->CreateOrJoinSessionByType(Params);
	}

	ImGui::Separator();
	ImGui::Separator();

	ImGui::Text("Sessions");
	if (ImGui::Button("Force Refresh"))
	{
		pLPSessionSubsystem->ForcePollForUpdate();
	}

	auto UpdateTimer = pLPSessionSubsystem->GetPollTimeRemaining();
	if (UpdateTimer >= 0)
	{
		FTimespan PollTime = FTimespan::FromSeconds(UpdateTimer);

		ImGui::SameLine();
		ImGui::Text("Next Global Poll: (%s)", TCHAR_TO_UTF8(*PollTime.ToString()));
	}

	TArray<URH_SessionView*> Sessions = pLPSessionSubsystem->GetSessions();
	for (auto& Session : Sessions)
	{
		ImGuiDisplaySession(Session->GetSessionWithETag(), Session, pLPSessionSubsystem, pGISubsystem ? pGISubsystem->GetSessionSubsystem() : nullptr);
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

void FRHDTW_Session::ImGuiDisplaySessionBrowser(URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGISessionSearchCache = pGISubsystem != nullptr ? pGISubsystem->GetSessionSearchCache() : nullptr;
	if (pGISessionSearchCache == nullptr)
	{
		ImGui::Text("No Session Browser Cache found");
		return;
	}

	if (pLPSessionSubsystem == nullptr)
	{
		ImGui::Text("Local Player Subsystem currently required to get template information");
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

	if (ImGui::Button("Search"))
	{
		// join the system by JoinbyIdString
		FRH_SessionBrowserSearchParams params;
		params.SessionType = UTF8_TO_TCHAR(SearchByTypeString.GetData());
		params.Cursor = SearchCursor;
		params.PageSize = SearchPageSize;
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
			if (Result.Sessions.Num() <= 0)
			{
				ImGui::Text("No matching sessions found");
			}
			else
			{
				for (auto Session : Result.Sessions)
				{
					if (Session.IsValid())
					{
						ImGuiDisplaySession(Session->GetSessionWithETag(), Session.Get(), pLPSessionSubsystem, pGISubsystem ? pGISubsystem->GetSessionSubsystem() : nullptr);
					}
					else
					{
						ImGui::Text("Stale/Null Result");
					}
				}
			}

			ImGui::TreePop();
		}
	}
}


void FRHDTW_Session::ImGuiDisplayQueuesBrowser(URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;
	if (pGIMatchmakingCache == nullptr)
	{
		ImGui::Text("No Matchmaking Cache found");
		return;
	}

	if (pLPSessionSubsystem == nullptr)
	{
		ImGui::Text("Local Player Subsystem currently required to search queues");
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

		ImGui::Text("Active: %s", Queue->IsActive() ? "true" : "false");
		ImGui::Text("RankingType: %d", Queue->GetRankingType());
		ImGui::Text("NumSides: %d", Queue->GetNumSides());
		ImGui::Text("MaxPlayersPerSide: %d", Queue->GetMaxPlayersPerSide());
		ImGui::Text("MinPlayersPerSide: %d", Queue->GetMinPlayersPerSide());
		ImGui::Text("MaxQueueGroupSize: %d", Queue->GetMaxQueueGroupSize());
		ImGuiDisplayCopyableValue(TEXT("MatchMakingTemplateGroupId"), Queue->GetMatchMakingTemplateGroupId());
		if (pBrowerCache != nullptr)
		{
			auto* TemplateGroup = pBrowerCache->GetMatchmakingTemplateGroup(Queue->GetMatchMakingTemplateGroupId());
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

					if (ImGui::TreeNodeEx("Possible Launch Templates", RH_DefaultTreeFlagsLeaf))
					{
						TArray<FGuid> LaunchTemplateIds = TemplateGroup->GetPossibleInstanceLaunchTemplateIds();
						if (pBrowerCache != nullptr)
						{
							for (auto& LaunchTemplateId : LaunchTemplateIds)
							{

								if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*LaunchTemplateId.ToString(EGuidFormats::DigitsWithHyphens)), RH_DefaultTreeFlagsLeaf))
								{
									ImGuiDisplayCopyableValue(LaunchTemplateId.ToString(EGuidFormats::DigitsWithHyphens), LaunchTemplateId, ECopyMode::Value);
									auto* LaunchTemplate = pBrowerCache->GetInstanceLaunchTemplate(LaunchTemplateId);
									if (LaunchTemplate != nullptr)
									{
										const auto& TemplateInfo = LaunchTemplate->GetInfo();

										const auto& MapList = TemplateInfo.GetMapSelectionList().GetMaps();

										for (auto Map : MapList)
										{
											auto MapIdentifier = FString::Printf(TEXT("%d"), Map.GetMapGameId());
											if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MapIdentifier), RH_DefaultTreeFlagsLeaf))
											{
												ImGuiDisplayCopyableValue(TEXT("MapId"), MapIdentifier);
												ImGuiDisplayCopyableValue(TEXT("Map"), Map.GetMapName());
												ImGuiDisplayCopyableValue(TEXT("GameMode"), Map.GetModeOrNull());
												ImGuiDisplayCopyableValue(TEXT("Chance"), Map.GetSelectionChance());
												ImGuiDisplayCustomData(Map.GetCustomData());
												ImGui::TreePop();
											}
										}

										ImGuiDisplayCustomData(LaunchTemplate->GetCustomData());
									}
									else
									{
										if (ImGui::Button("Lookup Launch Template"))
										{
											pBrowerCache->SearchInstanceLaunchTemplate(LaunchTemplateId);
										}
									}

									ImGui::TreePop();
								}
							}
						}
						else
						{
							for (auto& LaunchTemplateId : LaunchTemplateIds)
							{
								ImGuiDisplayCopyableValue(LaunchTemplateId.ToString(EGuidFormats::DigitsWithHyphens), LaunchTemplateId, ECopyMode::Value);
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
					pBrowerCache->SearchMatchmakingTemplateGroup(Queue->GetMatchMakingTemplateGroupId());
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
	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("ERROR - No Game Instance Found");
		return;
	}

	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		if (pOwner->GetFirstSelectedLocalPlayer() == nullptr)
		{
			ImGui::Text("Please select a local player (has Controller Id) in Player Repository.");
			return;
		}
		else
		{
			FString Note = FString::Printf(TEXT("For first selected local player with Controller Id %d."), pOwner->GetFirstSelectedLocalPlayer()->GetControllerId());
			ImGui::Text("%s", TCHAR_TO_UTF8(*Note));
		}
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	auto pGISessionSubsystem = pGISubsystem != nullptr ? pGISubsystem->GetSessionSubsystem() : nullptr;
	auto pGISessionSearchCache = pGISubsystem != nullptr ? pGISubsystem->GetSessionSearchCache() : nullptr;

	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;

	auto pLPSubsystem = GetSelectedRH_LocalPlayerSubsystem();
	auto pLPSessionSubsystem = pLPSubsystem != nullptr ? pLPSubsystem->GetSessionSubsystem() : nullptr;


	static ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;
	if (ImGui::BeginTabBar("Sessions", tab_bar_flags))
	{
		if (pLPSessionSubsystem != nullptr && ImGui::BeginTabItem("Player", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplayPlayerSessions(pLPSessionSubsystem, pGISubsystem);
			ImGui::EndTabItem();
		}

		if (pGISessionSearchCache != nullptr && ImGui::BeginTabItem("Browser", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplaySessionBrowser(pLPSessionSubsystem, pGISubsystem);
			ImGui::EndTabItem();
		}

		if (pGIMatchmakingCache != nullptr && ImGui::BeginTabItem("Queues", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplayQueuesBrowser(pLPSessionSubsystem, pGISubsystem);
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