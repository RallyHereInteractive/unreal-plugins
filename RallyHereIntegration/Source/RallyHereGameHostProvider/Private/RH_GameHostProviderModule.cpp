// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GameHostProviderModule.h"
#include "RH_GameHostProviderInterface.h"

IMPLEMENT_MODULE(FRallyHereGameHostProviderModule, RallyHereGameHostProvider);

DEFINE_LOG_CATEGORY(LogRHGameHostProvider);

void FRallyHereGameHostProviderModule::StartupModule()
{
}

void FRallyHereGameHostProviderModule::ShutdownModule()
{
}
