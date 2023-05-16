// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "SessionAPI.h"

#include "RH_SessionData.h"
#include "RH_SessionBrowser.h"

class URH_SessionView;
class URH_GameInstanceSessionSubsystem;

class URH_LocalPlayerSessionSubsystem;
class URH_GameInstanceSubsystem;
class URH_GameInstanceSessionSubsystem;

struct FRHDTW_Session : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Session();
	virtual ~FRHDTW_Session();

	virtual void Do() override;

	TArray<ANSICHAR> JoinByIdString;
	TArray<ANSICHAR> CreateByTypeSessionTypeString;
	int32 CreateByTypeSiteId;

	TArray<ANSICHAR> InvitePlayerUuidString;
	int32 InvitePlayerTeam;
	TArray<ANSICHAR> JoinQueueByIdString;

	TArray<ANSICHAR> MapName;
	TArray<ANSICHAR> GameModeName;

	TArray<ANSICHAR> SearchByTypeString;
	int32 SearchCursor;
	int32 SearchPageSize;

	TArray<FRH_SessionBrowserSearchResult> ResultCache;

	TArray<ANSICHAR> QueueSessionSelector;
	int32 QueueSearchCursor;
	int32 QueueSearchPageSize;
	bool bFilterInactiveQueues;

protected:
	void ImGuiDisplayInstance(const FRHAPI_Instance& Info, URH_GameInstanceSessionSubsystem* pGISessionSubsystem);
	void ImGuiDisplayMatch(const FRHAPI_Match& Info);
	void ImGuiDisplaySessionPlayer(URH_SessionView* RHSession, const FRHAPI_SessionPlayer& Player, int32 TeamId, URH_GameInstanceSessionSubsystem* pGISessionSubsystem);
	void ImGuiDisplayPlatformSession(const FRHAPI_PlatformSession& Info);
	void ImGuiDisplaySession(const FRH_APISessionWithETag& Session, URH_SessionView* RHSession, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSessionSubsystem* pGISessionSubsystem);

	void ImGuiDisplayPlayerSessions(URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplaySessionBrowser(URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSubsystem* pGISubsystem);

	void ImGuiDisplayQueuesBrowser(URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayQueue(const class URH_MatchmakingQueueInfo* Queue, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, class URH_OnlineSession* pSelectedSession, class URH_MatchmakingBrowserCache* pBrowerCache);

	void ImGuiDisplaySessionTemplate(const struct FRH_SessionTemplate& Template);

	void HandleBrowserSearchResult(bool bSuccess, const FRH_SessionBrowserSearchResult& Result);

};
