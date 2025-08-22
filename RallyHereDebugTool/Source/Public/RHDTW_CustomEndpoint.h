// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
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

	FString EndpointId;
	FString ContentType;
	FString Body;
	int32 Priority;

	TArray<FRH_CustomEndpointResponseWrapper> LastResults;
};
