#pragma once

#include "RH_DebugToolWindow.h"

#include "RankAPI.h"

struct FRHDTW_PlayerSessions : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerSessions();
	virtual ~FRHDTW_PlayerSessions();

	virtual void Do() override;

	void DoViewRankings();
	void DoModifyRankings();

	TArray<ANSICHAR> ModifyRankIdInput;
	float ModifyRankMuInput;
	float ModifyRankSigmaInput;

private:
	void HandleUpdateRankingResponse(bool bSuccess, const TArray<FRHAPI_PlayerRankResponseV2> PlayerRankingInfo, FGuid PlayerUuid);
	FString UpdateRankingActionResult;
};

