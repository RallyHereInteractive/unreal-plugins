// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_CatalogSubsystem.h"
#include <string>

struct FRHDTW_Catalog : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Catalog();
	virtual ~FRHDTW_Catalog();

	void Do() override;
	void DoShowClaim(URH_CatalogSubsystem* catalog);
	void DoShowVendors(URH_CatalogSubsystem* catalog);
	void DoShowXpTables(URH_CatalogSubsystem* catalog);
	void DoShowItemInventoryBucketUseRuleSets(URH_CatalogSubsystem* catalog);
	void DoShowPricePoints(URH_CatalogSubsystem* catalog);
	void DoShowPricePoint(const URH_CatalogPricePoint* pp);
	void DoShowPriceBreakpointList(const TArray<URH_CatalogPriceBreakpoint*>& bpl);

	TArray<ANSICHAR> VendorIdInput;
	TArray<ANSICHAR> PromoCodeInput;
	int32 SelectedInventoryBucketRuleSet;
};
