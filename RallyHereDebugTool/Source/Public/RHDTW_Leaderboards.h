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

	void DoViewLeaderboard();
	void DoViewConfig();
	void DoViewLeaderboardPosition();
	void DoRefreshLeaderboardConfig();
	class URH_LeaderboardSubsystem* GetSubsystemWithTextForFailures() const;

	FString SelectedLeaderboardId;
};

