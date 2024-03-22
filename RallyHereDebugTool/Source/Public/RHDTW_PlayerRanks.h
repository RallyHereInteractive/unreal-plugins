// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"

#include "RankAPI.h"

struct FRHDTW_PlayerRanks : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerRanks();
	virtual ~FRHDTW_PlayerRanks();

	virtual void Do() override;

	void DoViewRankings();
	void DoModifyRankings();

	TArray<ANSICHAR> ModifyRankIdInput;
	float ModifyRankMuInput;
	float ModifyRankSigmaInput;

private:
	void HandleUpdateRankingResponse(bool bSuccess, const TArray<FRHAPI_PlayerRankResponseV2>& PlayerRankingInfo, FGuid PlayerUuid);
	FString UpdateRankingActionResult;
};
