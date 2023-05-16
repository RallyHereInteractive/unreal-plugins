// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_PurgeSubsystem.h"
#include "UsersAPI.h"

struct FRHDTW_Purge : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Purge();
	virtual ~FRHDTW_Purge();

	virtual void Do() override;
private:
	URH_PurgeSubsystem* GetPurgeSubsystem();
	
	void HandleEnqueueMeForPurge(bool success, FRH_PurgeStatus PurgeStatus, FRH_ErrorInfo Error);
	void HandleDequeueMeForPurge(bool success, FRH_PurgeStatus PurgeStatus, FRH_ErrorInfo Error);
	void HandleGetMyPurgeStatus(bool success, FRH_PurgeStatus PurgeStatus, FRH_ErrorInfo Error);

	void DequeueMeForPurge(URH_PurgeSubsystem* pRH_PurgeSubsystem);
	void RefreshMyPurgeStatus(URH_PurgeSubsystem* pRH_PurgeSubsystem);
	
	std::string SuggestedPurgeTimeInput;
	FString PurgeActionResult;
};
