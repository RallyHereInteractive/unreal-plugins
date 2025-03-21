#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_LeaderboardSubsystem.h"
#include "LeaderboardAPI.h"

struct FRHDTW_Leaderboards : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Leaderboards();
	virtual ~FRHDTW_Leaderboards();

	virtual void Do() override;

	void DoViewLeaderboardPage();
	void DoViewConfig();
	void DoViewLeaderboardPosition();
	void DoViewMetaData();
	void DoRefreshLeaderboardConfig();
	class URH_LeaderboardSubsystem* GetSubsystemWithTextForFailures() const;

	FString SelectedLeaderboardId;
	FString SelectedCursor{"0"};
	FString SelectedPlayerUUID{};
	int32 PageSize{ 50 };
	int32 SelectedLeaderboardPosition{ 1 };
};

