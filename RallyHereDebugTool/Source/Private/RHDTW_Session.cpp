// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

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

void FRHDTW_Session::FInstanceLaunchParamsDisplay::ResetToDefaults()
{
	Clear();

	// ensure stager names are set
	InstanceCustomDataStager.SetName("Instance Custom Data");
	InstanceStartupCustomDataStager.SetName("Instance StartupParams Custom Data");
	
	if (URallyHereDebugToolSettings::Get())
	{
		FRHAPI_InstanceStartupParams DefaultInstanceStartupParams;
		
		DefaultInstanceStartupParams.SetMap(URallyHereDebugToolSettings::Get()->DefaultSessionMapName);
		auto DefaultMode = URallyHereDebugToolSettings::Get()->DefaultSessionGameModeName;
		if (DefaultMode.Len() > 0)
		{
			DefaultInstanceStartupParams.SetMode(DefaultMode);
		}
		DefaultInstanceStartupParams.SetMiscParams(URallyHereDebugToolSettings::Get()->DefaultSessionGameMiscParams);
	
		Request.SetInstanceStartupParams(DefaultInstanceStartupParams);

		auto DefaultTemplateId = URallyHereDebugToolSettings::Get()->DefaultSessionLaunchTemplateId;
		if (DefaultTemplateId.Len() > 0)
		{
			TemplateIdString = DefaultTemplateId;
			FGuid DefaultTemplateIdGuid = FGuid(DefaultTemplateId);
			if (DefaultTemplateIdGuid.IsValid())
			{
				Request.SetInstanceRequestTemplateId(DefaultTemplateIdGuid);
			}
		}
	}
}

FRHDTW_Session::FRHDTW_Session()
	: Super()
	, InstanceLaunchParamsDisplay(MakeShared<FInstanceLaunchParamsDisplay>())
{
	DefaultPos = FVector2D(610, 20);

	JoinByIdTeam = 0;
	JoinByIdString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	CreateByTypeSessionTypeString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);
	CreateByTypeRegionIdString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);
	SessionActionResult.Empty();

	InvitePlayerTeam = 0;
	InviteSessionString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	JoinQueueByIdString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);

	InstanceLaunchParamsDisplay->ResetToDefaults();

	SearchByTypeString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);
	SearchByRegionIdString.SetNumZeroed(IMGUI_SESSION_TYPE_PREALLOCATION_SIZE);

	QueueSessionSelector.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);

	MatchmakingProfileSearchString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);
	InstanceRequestSearchString.SetNumZeroed(IMGUI_SESSION_TEXTENTRY_PREALLOCATION_SIZE);

	// inherit defaults from search params for paging
	FRH_SessionBrowserSearchParams params;
	SearchCursor = params.Cursor;
	SearchPageSize = params.PageSize;
	SearchCacheSessions = params.bCacheSessionDetails;

	FRH_QueueSearchParams queueSearchParams;
	QueueSearchCursor = queueSearchParams.Cursor;
	QueueSearchPageSize = queueSearchParams.PageSize;
	bFilterInactiveQueues = true;

	InstanceCustomDataStager.SetName("Instance Update");
	InstanceJoinParamsCustomDataStager.SetName("Instance JoinParams Custom Data");
	InvitePlayerCustomDataStager.SetName("Invite Players");
	BrowserCustomDataStager.SetName("Browser");
	SessionUpdateCustomDataStager.SetName("Session Update");
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

void FRHDTW_Session::ImGuiDisplayInstance(const FRHAPI_InstanceInfo& Info, URH_SessionView* RHSession, URH_GameInstanceSessionSubsystem* pGISessionSubsystem)
{
	const FString HeaderString = FString::Printf(TEXT("Instance ID: %s"), *Info.GetInstanceId());

	auto RHJoinedSession = Cast<URH_JoinedSession>(RHSession);

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		ImGuiDisplayCopyableValue(TEXT("InstanceId"), Info.GetInstanceId());
		ImGuiDisplayCopyableEnumValue(TEXT("HostType"), Info.GetHostType());
		if (pGISessionSubsystem && pGISessionSubsystem->IsLocallyHostedInstance(Info))
		{
			ImGui::SameLine();
			ImGui::Text(" <LOCALHOST>");
		}
		ImGuiDisplayCopyableValue(TEXT("AllocationId"), Info.GetAllocationIdOrNull());
		ImGuiDisplayCopyableValue(TEXT("HostPlayerUuid"), Info.GetHostPlayerUuidOrNull());

		ImGuiDisplayCopyableEnumValue(TEXT("Joinability"),Info.GetJoinStatus());
		ImGuiDisplayCopyableEnumValue(TEXT("Health"), Info.GetInstanceHealthOrNull());

		if (const auto InstanceStartupParams = Info.GetInstanceStartupParamsOrNull())
		{
			if (ImGui::TreeNodeEx("InstanceStartupParams", RH_DefaultTreeFlagsLeaf))
			{
				ImGuiDisplayCopyableValue(TEXT("Map"), InstanceStartupParams->GetMap());
				ImGuiDisplayCopyableValue(TEXT("Mode"), InstanceStartupParams->GetMode());
				ImGuiDisplayCopyableValue(TEXT("MiscParams"), InstanceStartupParams->GetMiscParams());
				ImGuiDisplayCustomData(InstanceStartupParams->GetCustomData());

				ImGui::TreePop();
			}
		}

		if (const auto JoinParams = Info.GetJoinParamsOrNull())
		{
			if (ImGui::TreeNodeEx("JoinParams", RH_DefaultTreeFlagsLeaf))
			{
				ImGuiDisplayCopyableValue(TEXT("PublicConnStr"), JoinParams->GetPublicConnStr());
				ImGuiDisplayCopyableValue(TEXT("PrivateConnStr"), JoinParams->GetPrivateConnStr());
				ImGuiDisplayCustomData(JoinParams->GetCustomData());

				ImGui::TreePop();
			}
		}

		ImGuiDisplayCopyableValue(TEXT("Version"), Info.GetVersionOrNull());
		ImGuiDisplayCopyableValue(TEXT("Created"), Info.GetCreated());

		ImGuiDisplayCustomData(Info.GetCustomData());

		if (ImGui::TreeNodeEx("Update Instance State", RH_DefaultTreeFlags))
		{
			{
				ImGui::Checkbox("##JoinStatusOptional", &InstanceUpdate.JoinStatus_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!InstanceUpdate.JoinStatus_IsSet);
		
				ImGuiDisplayEnumCombo("JoinStatus", InstanceUpdate.JoinStatus_Optional);

				ImGui::EndDisabled();
			}

			{
				ImGui::Checkbox("##JoinParamsOptional", &InstanceUpdate.JoinParams_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!InstanceUpdate.JoinParams_IsSet);
		
				if (ImGui::TreeNodeEx("JoinParams", RH_DefaultTreeFlags))
				{
					auto& JoinParams = InstanceUpdate.JoinParams_Optional;
					
					ImGui::InputText("PublicConnStr", &JoinParams.PublicConnStr);
					ImGui::InputText("PrivateConnStr", &JoinParams.PrivateConnStr);

					{
						ImGui::Checkbox("##CustomDataOptional", &JoinParams.CustomData_IsSet);
						ImGui::SameLine();
						ImGui::BeginDisabled(!JoinParams.CustomData_IsSet);
						
						InstanceJoinParamsCustomDataStager.DisplayCustomDataStager(false, Info.GetJoinParamsOrNull() ? Info.GetJoinParamsOrNull()->GetCustomDataOrNull() : nullptr);
						InstanceJoinParamsCustomDataStager.GetCustomDataMap(JoinParams.CustomData_Optional);

						ImGui::EndDisabled();
					}
					
					
					ImGui::TreePop();
				}

				ImGui::EndDisabled();
			}
			
			{
				ImGui::Checkbox("##VersionOptional", &InstanceUpdate.Version_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!InstanceUpdate.Version_IsSet);
		
				ImGui::InputText("Version", &InstanceUpdate.Version_Optional);

				ImGui::EndDisabled();
			}
			
			{
				ImGui::Checkbox("##MatchIdOptional", &InstanceUpdate.MatchId_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!InstanceUpdate.MatchId_IsSet);
		
				ImGui::InputText("MatchId", &InstanceUpdate.MatchId_Optional);

				ImGui::EndDisabled();
			}
			
			{
				ImGui::Checkbox("##CustomDataOptional", &InstanceUpdate.CustomData_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!InstanceUpdate.CustomData_IsSet);
		
				InstanceCustomDataStager.DisplayCustomDataStager(false, Info.GetCustomDataOrNull());
				InstanceCustomDataStager.GetCustomDataMap(InstanceUpdate.CustomData_Optional);

				ImGui::EndDisabled();
			}

			if (RHJoinedSession != nullptr && ImGui::Button("Update Instance Info"))
			{
				RHJoinedSession->UpdateInstanceInfo(InstanceUpdate);
			}

			ImGui::TreePop();
		}

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayInstanceRequest(TSharedRef<FInstanceLaunchParamsDisplay>& InstanceLaunchParams, URH_GameInstanceSubsystem* pGISubsystem, URH_JoinedSession* Session)
{
	if (ImGui::Button("Clear"))
	{
		InstanceLaunchParams->Clear();
	}
	ImGui::SameLine();
	if (ImGui::Button("Reset"))
	{
		InstanceLaunchParams->ResetToDefaults();
	}
	
	{
		ImGui::Checkbox("##TemplateIdOptional", &InstanceLaunchParams->Request.InstanceRequestTemplateId_IsSet);
		ImGui::SameLine();
		ImGui::BeginDisabled(!InstanceLaunchParams->Request.InstanceRequestTemplateId_IsSet);	
		
		ImGui::SetNextItemWidth(GuidFieldWidth);
		ImGui::InputText("TemplateId", &InstanceLaunchParams->TemplateIdString);
		FGuid LaunchTemplateId = FGuid(InstanceLaunchParams->TemplateIdString);

		bool bValidTemplateId = LaunchTemplateId.IsValid();
		if (bValidTemplateId)
		{
			InstanceLaunchParams->Request.InstanceRequestTemplateId_Optional = LaunchTemplateId;

			ImGui::Indent();
			// display the template if able
			if (pGISubsystem != nullptr)
			{
				auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;
				if (pGIMatchmakingCache != nullptr)
				{
					if (auto LaunchTemplate = pGIMatchmakingCache->GetInstanceRequestTemplate(LaunchTemplateId))
					{
						ImGuiDisplayInstanceRequestTemplate(LaunchTemplate->GetInfo(), pGIMatchmakingCache);
					}
					else
					{
						if (ImGui::Button("Lookup Template"))
						{
							pGIMatchmakingCache->SearchInstanceRequestTemplate(LaunchTemplateId);
						}
					}
				}
			}
			ImGui::Unindent();
		}
		else
		{
			InstanceLaunchParams->Request.InstanceRequestTemplateId_Optional = FGuid();

			if (InstanceLaunchParams->TemplateIdString.Len() > 0)
			{
				ImGui::SameLine();
				ImGui::Text("Invalid Template Id");
			}
		}

		ImGui::EndDisabled();
	}

	{
		ImGui::Checkbox("##StartupParamsOptional", &InstanceLaunchParams->Request.InstanceStartupParams_IsSet);
		ImGui::SameLine();
		ImGui::BeginDisabled(!InstanceLaunchParams->Request.InstanceStartupParams_IsSet);
		
		if (ImGui::TreeNodeEx("Startup Params", RH_DefaultTreeFlagsDefaultOpen))
		{
			auto& StartupParams = InstanceLaunchParams->Request.InstanceStartupParams_Optional;
			ImGui::InputText("Map", &StartupParams.Map);
			ImGui::InputText("GameMode", &StartupParams.Mode_Optional);
			StartupParams.Mode_IsSet = StartupParams.Mode_Optional.Len() > 0;
			ImGui::InputText("MiscParams", &StartupParams.MiscParams);

			InstanceLaunchParams->InstanceStartupCustomDataStager.DisplayCustomDataStager(false);
			InstanceLaunchParams->InstanceStartupCustomDataStager.GetCustomDataMap(StartupParams.CustomData_Optional);
		
			ImGui::Checkbox("Beacon", &InstanceLaunchParams->bMakeBeaconInstance);
			if (InstanceLaunchParams->bMakeBeaconInstance)
			{
				// inject beacon flag into final custom data if enabled
				StartupParams.CustomData_Optional.Add(RH_SessionCustomDataKeys::BeaconFlag, TEXT("true"));
			}
			StartupParams.CustomData_IsSet = StartupParams.CustomData_Optional.Num() > 0;

			ImGui::TreePop();
		}

		ImGui::EndDisabled();
	}

	{
		ImGui::Checkbox("##CustomDataOptional", &InstanceLaunchParams->Request.CustomData_IsSet);
		ImGui::SameLine();
		ImGui::BeginDisabled(!InstanceLaunchParams->Request.CustomData_IsSet);
		
		InstanceLaunchParams->InstanceCustomDataStager.DisplayCustomDataStager(false);
		InstanceLaunchParams->InstanceCustomDataStager.GetCustomDataMap(InstanceLaunchParams->Request.CustomData_Optional);
	
		InstanceLaunchParams->Request.CustomData_IsSet = InstanceLaunchParams->Request.CustomData_Optional.Num() > 0;

		ImGui::EndDisabled();
	}

	{
		ImGui::Checkbox("##HostTypeOptional", &InstanceLaunchParams->Request.HostType_IsSet);
		ImGui::SameLine();
		ImGui::BeginDisabled(!InstanceLaunchParams->Request.HostType_IsSet);
		
		ImGuiDisplayEnumCombo("HostType", InstanceLaunchParams->Request.HostType_Optional);

		ImGui::EndDisabled();
	}

	ImGui::BeginDisabled(Session == nullptr);
	if (ImGui::Button("Request Instance"))
	{
		InstanceLaunchParams->RequestError.Empty();
		Session->RequestInstance(InstanceLaunchParams->Request, FRH_OnSessionUpdatedDelegate::CreateLambda([WeakThis=InstanceLaunchParams.ToWeakPtr()](bool bSuccess, URH_SessionView* SessionData, const FRH_ErrorInfo& ErrorInfo)
		{
			auto InstanceLaunchParams = WeakThis.Pin();
			if (InstanceLaunchParams.IsValid())
			{
				if (!bSuccess)
				{
					if (ErrorInfo.bIsRHCommonError)
					{
						InstanceLaunchParams->RequestError = FString::Printf(TEXT("%s: %s"), *ErrorInfo.RHCommonError.GetErrorCode(), *ErrorInfo.RHCommonError.GetDesc()); 
					}
					else
					{
						InstanceLaunchParams->RequestError = ErrorInfo.ResponseContent;
					}
				}
			}
		}));
	}

	if (InstanceLaunchParams->RequestError.Len() > 0)
	{
		ImGui::Text("Error: %s", TCHAR_TO_UTF8(*InstanceLaunchParams->RequestError));
	}
	ImGui::EndDisabled();
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
			PlayerCustomDataStager->DisplayCustomDataStager(false, Player.GetCustomDataOrNull());
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

void FRHDTW_Session::ImGuiDisplaySession(const FRH_APISessionWithETag& SessionWrapper, URH_SessionView* RHSession, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSessionSubsystem* pGISessionSubsystem)
{
	auto& Session = SessionWrapper.Data;
	if (RHSession != nullptr && (&Session != &RHSession->GetSessionData()))
	{
		ImGui::Text("Invalid session cross reference: %s", TCHAR_TO_UTF8(*Session.SessionId));
		return;
	}

	auto SessionOwner = RHSession ? RHSession->GetSessionOwner() :nullptr;

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
			if (SessionOwner != nullptr)
			{
				if (SessionOwner->GetSessionById(Session.SessionId) == nullptr)
				{
					ImGui::SetNextItemWidth(150.f);
					ImGui::InputInt("Team", &JoinByIdTeam, 1, 0);
					ImGui::SameLine();

					auto JoinDetails = URH_OnlineSession::GetJoinDetailDefaults(SessionOwner);
					JoinDetails.SetTeamId(JoinByIdTeam);



					if (ImGui::Button("Join"))
					{
						URH_OnlineSession::JoinByIdEx(Session.SessionId, MoveTemp(JoinDetails), SessionOwner);
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
		else if (SessionOwner != nullptr && SessionOwner->GetTemplate(Session.Type, Template))
		{
			// autofilled
		}
		else
		{
			Template.SessionType = Session.Type + TEXT(" <UNKNOWN TYPE>");
		}

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

				if (pLPSessionSubsystem != nullptr) // only support these operations when run by a local player
				{
					if (pGISessionSubsystem != nullptr && !bIsBeaconSession)
					{
						if (RHJoinedSession->IsActive())
						{
							if (ImGui::Button("Deactivate"))
							{
								pGISessionSubsystem->SyncToSession(nullptr);
							}
						}
						else
						{
							FString ErrorLog;
							bool bCanActivate = pGISessionSubsystem->IsReadyToJoinInstanceWithReason(RHJoinedSession, ErrorLog);
							ImGui::BeginDisabled(!bCanActivate);
							if (ImGui::Button("Activate"))
							{
								if (!bCanActivate && ErrorLog.Len() > 0)
								{
									ImGui::SameLine();
									ImGui::Text("(%s)", TCHAR_TO_UTF8(*ErrorLog));
								}
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
				}

				if (ImGui::Button("End Instance"))
				{
					RHJoinedSession->EndInstance(FRH_OnSessionUpdatedDelegate());
				}
			}

			ImGuiDisplayInstance(*Instance, RHSession, pGISessionSubsystem);
		}
		else if (RHJoinedSession != nullptr)
		{
			if (ImGui::TreeNodeEx("Instance Request", RH_DefaultTreeFlagsDefaultOpen))
			{
				ImGuiDisplayInstanceRequest(InstanceLaunchParamsDisplay, pGISessionSubsystem->GetGameInstanceSubsystem(), RHJoinedSession);

				ImGui::TreePop();
			}
		}

		// Matchmaking
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

		if (ImGui::TreeNodeEx("MatchMaking Result", RH_DefaultTreeFlags))
		{
			auto MatchMakingResults = Session.GetMatchmakingResultsOrNull();
			if (MatchMakingResults)
			{
				ImGuiDisplayCopyableValue(TEXT("MatchMakingId"), MatchMakingResults->GetMatchMakingId());
				ImGuiDisplayCopyableValue(TEXT("Created"), MatchMakingResults->GetCreated());
				
				if (ImGui::TreeNodeEx("Ticket Ids", RH_DefaultTreeFlagsLeaf))
				{
					auto* TicketIds = MatchMakingResults->GetTicketIdsOrNull();
					if (TicketIds != nullptr)
					{
						for (auto TicketId : *TicketIds)
						{
							ImGuiDisplayCopyableValue(TEXT("TicketId"), TicketId);
						}
					}

					ImGui::TreePop();
				}

				auto* bTicketsAssigned = MatchMakingResults->GetTicketsAssignedOrNull();
				ImGui::Text("Tickets Assigned: %s", 
					bTicketsAssigned != nullptr
					? (*bTicketsAssigned ? "true" : "false") 
					: "<UNSET>"
				);

				ImGuiDisplayCustomData(MatchMakingResults->GetCustomData());
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNodeEx("Backfill", RH_DefaultTreeFlags))
		{
			auto Backfill = Session.GetBackfillOrNull();
			if (Backfill)
			{
				if (pGISessionSubsystem != nullptr)
				{
					ImGui::Text("Backfill Terminated: %s", pGISessionSubsystem->IsBackfillTerminated() ? "true" : "false");
					ImGui::BeginDisabled(pGISessionSubsystem->IsBackfillTerminated());
					if (ImGui::Button("Terminate Backfill"))
					{
						pGISessionSubsystem->TerminateBackfill();
					}
					ImGui::EndDisabled();
				}
				ImGuiDisplayCopyableValue(TEXT("BackfillId"), Backfill->GetBackfillId());
				ImGuiDisplayCustomData(Backfill->GetExtensionsOrNull(), TEXT("Extensions"), TEXT("Extensions"));
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNodeEx("Browser", RH_DefaultTreeFlags))
		{
			auto BrowserData = Session.GetBrowserOrNull();
			if (BrowserData)
			{
				ImGuiDisplayCustomData(BrowserData->GetCustomDataOrNull());

				if (ImGui::TreeNodeEx("Update Browser", RH_DefaultTreeFlags))
				{
					BrowserCustomDataStager.DisplayCustomDataStager(false, BrowserData->GetCustomDataOrNull());

					if (ImGui::Button("Update Browser Info"))
					{
						TMap<FString, FString> CustomData;
						BrowserCustomDataStager.GetCustomDataMap(CustomData);

						if (RHJoinedSession != nullptr)
						{
							RHJoinedSession->UpdateBrowserInfo(true, CustomData);
						}
					}
					ImGui::SameLine();
					if (ImGui::Button("Delete Browser Info"))
					{
						if (RHJoinedSession != nullptr)
						{
							RHJoinedSession->UpdateBrowserInfo(false, TMap<FString, FString>());
						}
					}

					ImGui::TreePop();
				}
			}
			else
			{
				ImGui::Text("No Browser Info");

				BrowserCustomDataStager.DisplayCustomDataStager(false);

				if (ImGui::Button("Create Browser Info"))
				{
					TMap<FString, FString> CustomData;
					BrowserCustomDataStager.GetCustomDataMap(CustomData);

					if (RHJoinedSession != nullptr)
					{
						RHJoinedSession->UpdateBrowserInfo(true, CustomData);
					}
				}
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
				FString TeamHeaderString = FString::Printf(TEXT("Team %d"), Team.GetTeamId());

				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*TeamHeaderString), RH_DefaultTreeFlags))
				{
					ImGuiDisplayCopyableValue(TEXT("TeamId"), Team.GetTeamId());
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

				// player invites
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

				// session to session invites
				ImGui::InputText("Target Session Id", InviteSessionString.GetData(), InviteSessionString.Num());
				ImGui::SameLine();
				if (ImGui::Button(TCHAR_TO_UTF8(*FString::Printf(TEXT("Invite Whole Session"), NumTargetedPlayers))))
				{
					TMap<FString, FString> CustomData;
					InvitePlayerCustomDataStager.GetCustomDataMap(CustomData);

					FString InvitedSessionId = ImGuiGetStringFromTextInputBuffer(InviteSessionString);

					FRHAPI_SessionInviteRequest InviteRequest;
					InviteRequest.SetTeamId(InvitePlayerTeam);
					InviteRequest.SetCustomData(CustomData);

					// for now, do not specify an overflow action type

					RHJoinedSession->InviteOtherSession(InvitedSessionId, InviteRequest);
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

		if (ImGui::TreeNodeEx("Update Session State", RH_DefaultTreeFlags))
		{
			if (ImGui::Button("Reset"))
			{
				SessionUpdate = FRHAPI_SessionUpdate();
			}

			{
				ImGui::Checkbox("##RegionIdOptional", &SessionUpdate.RegionId_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!SessionUpdate.RegionId_IsSet);
		
				ImGui::InputText("Region Id", &SessionUpdate.RegionId_Optional);

				ImGui::EndDisabled();
			}
			
			{
				ImGui::Checkbox("##JoinableOptional", &SessionUpdate.Joinable_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!SessionUpdate.Joinable_IsSet);
		
				ImGui::Checkbox("Joinable", &SessionUpdate.Joinable_Optional);

				ImGui::EndDisabled();
			}
			
			{
				ImGui::Checkbox("##CustomDataOptional", &SessionUpdate.CustomData_IsSet);
				ImGui::SameLine();
				ImGui::BeginDisabled(!SessionUpdate.CustomData_IsSet);
		
				SessionUpdateCustomDataStager.DisplayCustomDataStager(false, Session.GetCustomDataOrNull());
				SessionUpdateCustomDataStager.GetCustomDataMap(SessionUpdate.CustomData_Optional);

				ImGui::EndDisabled();
			}
			
			if (RHJoinedSession != nullptr && ImGui::Button("Update Session Info"))
			{
				RHJoinedSession->UpdateSessionInfo(SessionUpdate);
			}

			ImGui::TreePop();
		}

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


void FRHDTW_Session::ImGuiDisplayDedicatedServerSessions(URH_GameInstanceSubsystem* pGISubsystem)
{
	if (pGISubsystem == nullptr)
	{
		ImGui::Text("Game Instance Subsystem not available.");
		return;
	}

	auto pServerBootstrapper = pGISubsystem->GetServerBootstrapper();
	if (pServerBootstrapper == nullptr)
	{
		ImGui::Text("Server Bootstrapper unavailable.");
		return;
	}

	ImGui::Separator();
	auto BootstrappingResult = pServerBootstrapper->GetBootstrappingResult();
	if (ImGui::TreeNodeEx("Bootstrapping Result", RH_DefaultTreeFlags))
	{
		ImGuiDisplayCopyableValue(TEXT("Allocation Id"), BootstrappingResult.AllocationInfo.AllocationId);
		ImGuiDisplayCopyableValue(TEXT("Allocation Host"), BootstrappingResult.AllocationInfo.PublicHost);
		ImGuiDisplayCopyableValue(TEXT("Allocation Port"), BootstrappingResult.AllocationInfo.PublicPort);
		ImGuiDisplayCopyableValue(TEXT("Allocation Session Id"), BootstrappingResult.AllocationInfo.SessionId);
		ImGui::Separator();
		if (BootstrappingResult.Session.IsSet())
		{
			ImGuiDisplaySession(BootstrappingResult.Session.GetValue(), nullptr, nullptr, pGISubsystem->GetSessionSubsystem());
		}
		else
		{
			ImGui::Text("No Session");
		}

		ImGui::TreePop();
	}
	ImGui::Separator();

	if (!SessionActionResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Session Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*SessionActionResult));
		}
	}

	ImGui::Separator();
	
	auto Session = pServerBootstrapper->GetSession();
	if (Session != nullptr)
	{
		ImGuiDisplaySession(Session->GetSessionWithETag(), Session, nullptr, pGISubsystem->GetSessionSubsystem());
	}
	else
	{
		ImGui::Text("No Session");
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
						pp->RequestUpdate(false, FRH_OnRequestPlayerInfoSubobjectDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerSessions, PlayerInfo->GetRHPlayerUuid()));
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
						pp->RequestUpdate(true, FRH_OnRequestPlayerInfoSubobjectDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerSessions, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPlayerSessionsResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No sessions found on player info.") LINE_TERMINATOR;
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


void FRHDTW_Session::ImGuiDisplayPlayerDeserter(URH_GameInstanceSubsystem* pGISubsystem)
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


	if (ImGui::Button("Refresh Deserter List"))
	{
		GetPlayerDeserterResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetDeserter())
					{
						pp->RequestUpdate(false, FRH_OnRequestPlayerInfoSubobjectDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerDeserter, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No deserter found on player info.") LINE_TERMINATOR;
					}
				}
			}));
	}
	ImGui::SameLine();
	if (ImGui::Button("Refresh Deserter List (Force)"))
	{
		GetPlayerDeserterResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetDeserter())
					{
						pp->RequestUpdate(true, FRH_OnRequestPlayerInfoSubobjectDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerDeserter, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No deserter found on player info.") LINE_TERMINATOR;
					}
				}
			}));
	}

	if (!GetPlayerDeserterResult.IsEmpty())
	{
		if (ImGui::CollapsingHeader("Get Deserter Action Result", RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGui::Text("%s", TCHAR_TO_UTF8(*GetPlayerDeserterResult));
		}
	}
	ImGui::Separator();

	ImGui::SetNextItemWidth(GuidFieldWidth);
	ImGui::InputText("Deserter Id", &SetDeserterId);
	ImGui::SameLine();
	ImGui::SetNextItemWidth(80);
	ImGui::InputInt3("Duration (HH:MM:SS)", SetDeserterTime);
	ImGui::SameLine();
	ImGui::SetNextItemWidth(80);
	ImGui::InputInt("Count", &SetDeserterCount);
	SetDeserterCustomDataStager.DisplayCustomDataStager();

	if (ImGui::Button("Set Deserter"))
	{
		const FString DeserterId = SetDeserterId;
		
		FRHAPI_DeserterUpdateRequest Request;
		Request.SetDeserterExpiration(FDateTime::UtcNow() + FTimespan(SetDeserterTime[0], SetDeserterTime[1], SetDeserterTime[2]));
		Request.SetDeserterCount(SetDeserterCount);
		TMap<FString, FString> CustomData;
		SetDeserterCustomDataStager.GetCustomDataMap(CustomData);
		Request.SetCustomData(CustomData);

		GetPlayerDeserterResult.Empty();
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, DeserterId, Request](URH_PlayerInfo* PlayerInfo)
			{
				if (PlayerInfo)
				{
					if (auto pp = PlayerInfo->GetDeserter())
					{
						pp->SetDeserterStatus(DeserterId, Request, FRH_OnRequestPlayerInfoSubobjectDelegate::CreateSP(SharedThis(this), &FRHDTW_Session::HandleGetPlayerDeserter, PlayerInfo->GetRHPlayerUuid()));
					}
					else
					{
						GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No deserter found on player info.") LINE_TERMINATOR;
					}
				}
			}));
	}
	
	ImGui::Separator();

	if (URH_PlayerInfo* ActivePlayerInfo = pOwner->GetFirstSelectedPlayerInfo())
	{
		ImGui::Text("For first selected player with UUID %s", TCHAR_TO_UTF8(*ActivePlayerInfo->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens)));

		if (auto pDeserter = ActivePlayerInfo->GetDeserter())
		{
			if (!pDeserter->bInitialized)
			{
				ImGui::Text("Deserter data has not been requested");
			}
			else if (pDeserter->DeserterStatus.Num() <= 0)
			{
				// no deserter data presently
				ImGui::Text("No Deserters");
			}
			else
			{
				if (ImGui::Button("Clear All"))
				{
					GetPlayerDeserterResult.Empty();
					ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this](URH_PlayerInfo* PlayerInfo)
						{
							if (PlayerInfo)
							{
								const auto PlayerUuid = PlayerInfo->GetRHPlayerUuid();
								if (auto pp = PlayerInfo->GetDeserter())
								{
									pp->ClearAllDeserterStatus(FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, WeakThis=AsWeak(), PlayerUuid](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
									{
										// use weak pointer to validate this pointer is still valid (this is a workaround for some engine versions not having CreateLambdaSP())
										auto StrongThis = WeakThis.Pin();
										if (StrongThis.IsValid())
										{
											if (bSuccess)
											{
												GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Clear All Player Deserter succeeded.") LINE_TERMINATOR;
											}
											else
											{
												GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Clear All Player Deserter failed.") LINE_TERMINATOR;
											}
										}
									}));
								}
								else
								{
									GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No deserter found on player info.") LINE_TERMINATOR;
								}
							}
						}));
				}
				
				for (const auto& DeserterPair : pDeserter->DeserterStatus)
				{
					ImGui::Separator();
					FString ButtonLabel = FString::Printf(TEXT("Clear##%s"), *DeserterPair.Key);
					if (ImGui::Button(TCHAR_TO_UTF8(*ButtonLabel)))
					{
						const FString DeserterId = DeserterPair.Key;
						GetPlayerDeserterResult.Empty();
						ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, DeserterId](URH_PlayerInfo* PlayerInfo)
							{
								if (PlayerInfo)
								{
									const auto PlayerUuid = PlayerInfo->GetRHPlayerUuid();
									if (auto pp = PlayerInfo->GetDeserter())
									{
										pp->ClearDeserterStatus(DeserterId, FRH_GenericSuccessWithErrorDelegate::CreateLambda([this, WeakThis=AsWeak(), DeserterId, PlayerUuid](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
										{
											// use weak pointer to validate this pointer is still valid (this is a workaround for some engine versions not having CreateLambdaSP())
											auto StrongThis = WeakThis.Pin();
											if (StrongThis.IsValid())
											{
												if (bSuccess)
												{
													GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Clear Player Deserter succeeded.") LINE_TERMINATOR;
												}
												else
												{
													GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Clear Player Deserter failed.") LINE_TERMINATOR;
												}
											}
										}));
									}
									else
									{
										GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerInfo->GetRHPlayerUuid()) + TEXT("] No deserter found on player info.") LINE_TERMINATOR;
									}
								}
							}));
					}
					ImGuiDisplayModelData(DeserterPair.Value);
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

	ImGui::InputText("Region Id", SearchByRegionIdString.GetData(), SearchByRegionIdString.Num());
	
	ImGui::SetNextItemWidth(150.f);
	ImGui::InputInt("Cursor", &SearchCursor);
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
		params.RegionId = ImGuiGetStringFromTextInputBuffer(SearchByRegionIdString);
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
			ImGuiDisplayCopyableValue(FString("Next Page Cursor"), Result.NextPageCursor);

			if (Result.NextPageCursor != 0)
			{
				ImGui::SameLine();
				if (ImGui::Button("Fetch Next Page"))
				{
					FRH_SessionBrowserSearchParams params = Result.SearchParams;
					params.Cursor = Result.NextPageCursor;
					pLPSessionSubsystem->SearchForSessions(params, FRH_OnSessionSearchCompleteDelegate::CreateSP(this, &FRHDTW_Session::HandleBrowserSearchResult));
				}
			}

			if (Result.SessionInfos.Num() <= 0)
			{
				ImGui::Text("No matching sessions found");
			}
			else
			{
				for (auto SessionInfo : Result.SessionInfos)
				{
					const FString& SessionId = SessionInfo.SessionId;

					// check if we have a cached session
					auto Session = pGISessionSearchCache->GetSessionById(SessionId);
					if (Session != nullptr)
					{
						ImGuiDisplaySession(Session->GetSessionWithETag(), Session, pLPSessionSubsystem, pGISubsystem ? pGISubsystem->GetSessionSubsystem() : nullptr);
					}
					else
					{
						// mimic header from session display
						FString SessionHeaderString = FString::Printf(TEXT("Session: %s - %s"), *SessionId, *Result.SearchParams.SessionType);
						if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*SessionHeaderString), RH_DefaultTreeFlags))
						{
							ImGuiDisplayCopyableValue(TEXT("Session Id"), SessionId);
							ImGui::SameLine();
							if (pGISessionSearchCache != nullptr)
							{
								if (ImGui::SmallButton("Get Session Details"))
								{
									URH_SessionView::PollSingleSession(SessionId, pGISessionSearchCache);
								}
							}


							ImGuiDisplayCopyableValue(TEXT("Player Count"), SessionInfo.GetPlayerCountOrNull());
							ImGuiDisplayCopyableValue(TEXT("Max Player Count"), SessionInfo.GetMaxPlayerCountOrNull());

							ImGuiDisplayCustomData(SessionInfo.GetCustomDataOrNull());

							ImGui::TreePop();
						}
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
			ImGui::Text("Please select a local player (has Controller Id) in Player Repository to display session selection for queue join.");
		}
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
	if (pLPSessionSubsystem)
	{
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
			ImGuiDisplayQueue(Queue->GetQueueInfo(), SelectedSession, pGIMatchmakingCache);
		}
	}
}

void FRHDTW_Session::ImGuiDisplayQueue(const FRHAPI_QueueConfigV2& Queue, URH_OnlineSession* pSelectedSession, URH_MatchmakingBrowserCache* pBrowerCache)
{
	FString HeaderString = FString::Printf(TEXT("Queue: %s"), *Queue.GetQueueId());

	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*HeaderString), RH_DefaultTreeFlags))
	{
		if (pSelectedSession != nullptr && !pSelectedSession->IsInQueue())
		{
			if (ImGui::Button("Join"))
			{
				pSelectedSession->JoinQueue(Queue.GetQueueId());
			}
		}

		ImGuiDisplayCopyableValue(TEXT("QueueId"), Queue.GetQueueId());

		ImGui::Text("Active: %s", Queue.GetActive() ? "true" : "false");
		ImGui::Text("MaxQueueGroupSize: %d", Queue.GetMaxQueueGroupSize());

		ImGuiDisplayCustomData(Queue.GetLegacyConfigOrNull(), TEXT(""), TEXT("LegacyConfig"));

		ImGuiDisplayCopyableValue(TEXT("MatchMakingTemplateGroupId"), Queue.GetMatchMakingTemplateGroupId());

		if (pBrowerCache != nullptr)
		{
			auto* TemplateGroup = pBrowerCache->GetMatchmakingTemplateGroup(Queue.GetMatchMakingTemplateGroupId());
			if (TemplateGroup != nullptr)
			{
				const auto& TemplateInfo = TemplateGroup->GetInfo();
				if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*TemplateGroup->GetDescription()), RH_DefaultTreeFlags))
				{
					ImGuiDisplayCopyableValue(TEXT("TemplateGroupId"), TemplateInfo.GetMatchMakingTemplateGroupId());

					FString RequiredItemsString;
					const auto* RequiredItems = TemplateInfo.GetRequiredItemIdsOrNull();
					if (RequiredItems != nullptr)
					{
						RequiredItemsString.Reset(RequiredItems->Num() * 4);
						for (const auto& item : *RequiredItems)
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
					}
					else
					{
						ImGui::Text("RequiredItems: <UNSET>");
					}

					for (const auto& Template : TemplateGroup->GetInfo().GetTemplateOptions())
					{
						ImGuiDisplayMatchmakingTemplate(Template, pBrowerCache);
					}

					ImGui::TreePop();
				}
			}
			else
			{
				ImGui::SameLine();
				if (ImGui::SmallButton("Lookup Template Group Id"))
				{
					pBrowerCache->SearchMatchmakingTemplateGroup(Queue.GetMatchMakingTemplateGroupId());
				}
			}
		}

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayMatchmakingTemplate(const FRHAPI_MatchMakingTemplateV2& Template, URH_MatchmakingBrowserCache* pBrowserCache)
{
	FString TemplateHeaderString = FString::Printf(TEXT("Template: %s"), *Template.GetMatchMakingTemplateId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens));
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*TemplateHeaderString), RH_DefaultTreeFlags))
	{
		ImGuiDisplayCopyableValue(TEXT("TemplateId"), Template.GetMatchMakingTemplateIdOrNull());

		ImGuiDisplayCopyableEnumValue(TEXT("MmrGroupingMethod"), Template.GetMmrGroupingMethod());

		const auto* Ruleset = Template.GetRulesetOrNull();
		if (Ruleset)
		{
			ImGuiDisplayModelData(*Ruleset);
		}
		else
		{
			ImGui::Text("Ruleset: <UNSET>");
		}

		for (const auto& Profile : Template.GetProfiles())
		{
			ImGuiDisplayMatchmakingProfile(Profile, pBrowserCache);
		}

		//ImGuiDisplayCustomData(Template.GetCustomData());

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayMatchmakingProfile(const FRHAPI_MatchMakingProfileV2& Profile, URH_MatchmakingBrowserCache* pBrowserCache)
{
	FString TemplateHeaderString = FString::Printf(TEXT("Profile: %s"), *Profile.GetMatchMakingProfileId());
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*TemplateHeaderString), RH_DefaultTreeFlags))
	{
		ImGuiDisplayCopyableValue(TEXT("MatchMakingProfileId"), Profile.GetMatchMakingProfileId());

		ImGuiDisplayCopyableEnumValue(TEXT("JoinMode"), Profile.GetJoinModeOrNull());

		auto* LaunchTemplate = pBrowserCache->GetInstanceRequestTemplate(Profile.GetInstanceRequestTemplateId());
		if (LaunchTemplate != nullptr)
		{
			ImGuiDisplayInstanceRequestTemplate(LaunchTemplate->GetInfo(), pBrowserCache);
		}
		else
		{
			ImGuiDisplayCopyableValue(TEXT("InstanceRequestTemplateId"), Profile.GetInstanceRequestTemplateId());

			// add a handy "lookup" button
			ImGui::SameLine();
			if (ImGui::SmallButton("Lookup"))
			{
				pBrowserCache->SearchInstanceRequestTemplate(Profile.GetInstanceRequestTemplateId());
			}
		}

		ImGuiDisplayCopyableValue(TEXT("RankId"), Profile.GetRankIdOrNull());
		ImGuiDisplayCopyableValue(TEXT("NumSides"), Profile.GetNumSidesOrNull());
		ImGuiDisplayCopyableValue(TEXT("MaxPlayersPerSide"), Profile.GetMaxPlayersPerSideOrNull());
		ImGuiDisplayCopyableValue(TEXT("MinPlayersPerSide"), Profile.GetMinPlayersPerSideOrNull());
		ImGuiDisplayCopyableValue(TEXT("DeserterId"), Profile.GetDeserterIdOrNull());
		
		if (const FRHAPI_JsonObject* LegacyConfig = Profile.GetLegacyConfigOrNull())
		{
			FString PrettyJson;

			if (LegacyConfig->GetObject().IsValid() && FJsonSerializer::Serialize(LegacyConfig->GetObject().ToSharedRef(), TJsonWriterFactory<>::Create(&PrettyJson)))
			{
				ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
			}
		}

		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayInstanceRequestTemplate(const FRHAPI_InstanceRequestTemplate& RequestTemplate, URH_MatchmakingBrowserCache* pBrowerCache)
{
	const auto& RequestTemplateId = RequestTemplate.GetInstanceRequestTemplateId();
	if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*RequestTemplateId.ToString(EGuidFormats::DigitsWithHyphens)), RH_DefaultTreeFlags))
	{
		ImGuiDisplayModelData(RequestTemplate);
		
		ImGui::TreePop();
	}
}

void FRHDTW_Session::ImGuiDisplayMatchmakingProfiles(URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;
	if (pGIMatchmakingCache == nullptr)
	{
		ImGui::Text("No Matchmaking Cache found");
		return;
	}

	ImGui::InputText("##LookupById", MatchmakingProfileSearchString.GetData(), MatchmakingProfileSearchString.Num());
	FString InputString = ImGuiGetStringFromTextInputBuffer(MatchmakingProfileSearchString);

	ImGui::SameLine();
	if (ImGui::Button("Lookup By Id"))
	{
		pGIMatchmakingCache->SearchMatchmakingProfile(InputString);
	}

	ImGui::Separator();

	for (const auto* RequestTemplate : pGIMatchmakingCache->GetAllInstanceRequestTemplates())
	{
		ImGuiDisplayInstanceRequestTemplate(RequestTemplate->GetInfo(), pGIMatchmakingCache);
	}
}

void FRHDTW_Session::ImGuiDisplayInstanceRequestTemplates(URH_GameInstanceSubsystem* pGISubsystem)
{
	auto pGIMatchmakingCache = pGISubsystem != nullptr ? pGISubsystem->GetMatchmakingCache() : nullptr;
	if (pGIMatchmakingCache == nullptr)
	{
		ImGui::Text("No Matchmaking Cache found");
		return;
	}

	ImGui::InputText("##LookupById", InstanceRequestSearchString.GetData(), InstanceRequestSearchString.Num());
	FString InputString = ImGuiGetStringFromTextInputBuffer(InstanceRequestSearchString);
	FGuid InputGuid(InputString);

	ImGui::SameLine();
	ImGui::BeginDisabled(!InputGuid.IsValid());
	if (ImGui::Button("Lookup By Id"))
	{
		pGIMatchmakingCache->SearchInstanceRequestTemplate(InputGuid);
	}
	ImGui::EndDisabled();
	if (!InputGuid.IsValid())
	{
		ImGui::SameLine();
		ImGui::Text("Invalid Guid");
	}

	ImGui::Separator();

	for (const auto* RequestTemplate : pGIMatchmakingCache->GetAllInstanceRequestTemplates())
	{
		ImGuiDisplayInstanceRequestTemplate(RequestTemplate->GetInfo(), pGIMatchmakingCache);
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
		ImGui::TableSetupColumn("Description");
		ImGui::TableHeadersRow();

		// Content
		for (const auto& Region : pGIMatchmakingCache->GetAllRegions())
		{
			ImGui::PushID(TCHAR_TO_ANSI(*Region.GetRegionId()));

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("RegionID"), Region.GetRegionId(), ECopyMode::Value);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Region.CustomOnly);
			ImGui::TableNextColumn();
			ImGui::Text("%d", Region.SortOrder);
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(TEXT("Description"), Region.GetDescriptionOrNull(), ECopyMode::Value);

			ImGui::PopID();
		}

		ImGui::EndTable();
	}
}

void FRHDTW_Session::ImGuiDisplaySessionTypes(URH_GameInstanceSubsystem* pGISubsystem)
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

	TArray<FRHAPI_SessionTemplate> Templates;
	if (firstLPSessionSS)
	{
		Templates = firstLPSessionSS->GetTemplates();
	}

	for (auto& Template : Templates)
	{
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*FString::Printf(TEXT("Type: %s"), *Template.SessionType)), RH_DefaultTreeFlags))
		{
			ImGuiDisplayModelData<FRHAPI_SessionTemplate>(Template);
			ImGui::TreePop();
		}
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
		if (!IsRunningDedicatedServer())
		{
			if (ImGui::BeginTabItem("Selected Player(s)", nullptr, ImGuiTabItemFlags_None))
			{
				ImGuiDisplayLocalPlayerSessions(pGISubsystem);
				ImGui::EndTabItem();
			}
		}
		else
		{
			if (ImGui::BeginTabItem("Server", nullptr, ImGuiTabItemFlags_None))
			{
				ImGuiDisplayDedicatedServerSessions(pGISubsystem);
				ImGui::EndTabItem();
			}
		}

		if (ImGui::BeginTabItem("Target Player(s)", nullptr, ImGuiTabItemFlags_None))
		{
			if (ImGui::BeginTabBar("Sessions", tab_bar_flags))
			{
				if (ImGui::BeginTabItem("Sessions", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplayPlayerSessions(pGISubsystem);
					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Deserter", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplayPlayerDeserter(pGISubsystem);
					ImGui::EndTabItem();
				}

				ImGui::EndTabBar();
			}
			
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Browser", nullptr, ImGuiTabItemFlags_None))
		{
			ImGuiDisplaySessionBrowser(pGISubsystem);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Session Config", nullptr, ImGuiTabItemFlags_None))
		{
			if (ImGui::BeginTabBar("Sessions", tab_bar_flags))
			{
				if (ImGui::BeginTabItem("Session Types", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplaySessionTypes(pGISubsystem);
					ImGui::EndTabItem();
				}

				if (ImGui::BeginTabItem("Queues", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplayQueuesBrowser(pGISubsystem);
					ImGui::EndTabItem();
				}

				if (ImGui::BeginTabItem("Matchmaking Profiles", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplayMatchmakingProfiles(pGISubsystem);
					ImGui::EndTabItem();
				}

				if (ImGui::BeginTabItem("Instance Request Templates", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplayInstanceRequestTemplates(pGISubsystem);
					ImGui::EndTabItem();
				}

				if (ImGui::BeginTabItem("Regions", nullptr, ImGuiTabItemFlags_None))
				{
					ImGuiDisplayRegionsBrowser(pGISubsystem);
					ImGui::EndTabItem();
				}

				ImGui::EndTabBar();
			}

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

void FRHDTW_Session::HandleSessionUpdatedResult(bool bSuccess, URH_SessionView* SessionData, const FRH_ErrorInfo& ErrorInfo, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		SessionActionResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Session action succeeded.") LINE_TERMINATOR;
	}
	else
	{
		SessionActionResult += FString::Printf(TEXT("[%s] Session action failed with code %d."), *GetShortUuid(PlayerUuid), ErrorInfo.ResponseCode) + LINE_TERMINATOR;
	}
}

void FRHDTW_Session::HandleGetPlayerSessions(bool bSuccess, URH_PlayerInfoSubobject* SessionsData, FGuid PlayerUuid)
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


void FRHDTW_Session::HandleGetPlayerDeserter(bool bSuccess, URH_PlayerInfoSubobject* SessionsData, FGuid PlayerUuid)
{
	if (bSuccess)
	{
		GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Get Player Deserter succeeded.") LINE_TERMINATOR;
	}
	else
	{
		GetPlayerDeserterResult += TEXT("[") + GetShortUuid(PlayerUuid) + TEXT("] Get Player Deserter failed.") LINE_TERMINATOR;
	}
}

