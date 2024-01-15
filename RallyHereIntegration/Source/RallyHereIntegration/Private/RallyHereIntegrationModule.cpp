// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereIntegrationModule.h"
#include "Modules/ModuleManager.h"
#include "RallyHereAPIModule.h"
#include "Misc/ConfigCacheIni.h"
#include "RH_Polling.h"

IMPLEMENT_MODULE(FRallyHereIntegrationModule, RallyHereIntegration);
FString GRallyHereIntegrationIni;

void FRallyHereIntegrationModule::StartupModule()
{
	FModuleManager::LoadModuleChecked<FRallyHereAPIModule>(FName(TEXT("RallyHereAPI")));

    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
    FConfigCacheIni::LoadGlobalIniFile(GRallyHereIntegrationIni, TEXT("RallyHereIntegration"));

	FRH_AsyncTaskHelper::Initialize();
	FRH_PollControl::Initialize();

    if (!Integration.IsValid())
    {
        Integration = NewObject<URH_Integration>();
        Integration->AddToRoot();
        Integration->Initialize();
    }
}

void FRallyHereIntegrationModule::ShutdownModule()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// uninitialize async helper first, as it will attempt to cancel requests, which may require the integration layer to still be valid
	FRH_AsyncTaskHelper::Uninitialize();

    if (Integration.IsValid())
    {
        Integration->Uninitialize();
        Integration->RemoveFromRoot();
		Integration.Reset();
    }

	FRH_PollControl::Uninitialize();
}
