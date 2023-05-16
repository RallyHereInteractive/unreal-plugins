// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_EntitlementSubsystem.h"

struct FRHDTW_Entitlements : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Entitlements();
	void UpdateEntitlements(const TArray<FPurchaseReceipt>& UpdatedEntitlements);
	void UpdateEntitlementStatus(const EntitlementStatusMapStruct EntitlementStatusMap);
	virtual void Do() override;
private:
	TArray<FPurchaseReceipt> Entitlements = TArray<FPurchaseReceipt>();
	TMap<FUniqueEntitlementId,EntitlementStatus> EntitlementStatusMap = TMap<FUniqueEntitlementId,EntitlementStatus>();
	URH_EntitlementSubsystem* GetEntitlementSubsystem();
};
