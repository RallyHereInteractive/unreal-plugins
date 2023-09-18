// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_Common.h"
#include "CustomAPI.h"

struct FRHDTW_CustomEndpoint : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_CustomEndpoint();
	virtual ~FRHDTW_CustomEndpoint();

	virtual void Do() override;
	void HandleCustomEndpointResult(const FRH_CustomEndpointResponseWrapper& Response);

	TArray<ANSICHAR> EndpointId;
	TArray<ANSICHAR> ContentType;
	TArray<ANSICHAR> Body;
	int32 Priority;

	TArray<FRH_CustomEndpointResponseWrapper> LastResults;
};
