#pragma once

#include "RH_DebugToolWindow.h"

struct FRHDTW_PlayerSessions : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerSessions();
	virtual ~FRHDTW_PlayerSessions();

	virtual void Do() override;

	void DoViewRankings();
	void DoModifyRankings();

	int32 ModifyRankIdInput;
	float ModifyRankMuInput;
	float ModifyRankSigmaInput;

private:
	void HandleUpdateRankingResponse(bool bSuccess, const TArray<FRHAPI_PlayerRankResponse> PlayerRankingInfo, FGuid PlayerUuid);
	FString UpdateRankingActionResult;
};

