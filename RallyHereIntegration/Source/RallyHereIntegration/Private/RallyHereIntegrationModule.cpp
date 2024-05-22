// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereIntegrationModule.h"
#include "Modules/ModuleManager.h"
#include "RallyHereAPIModule.h"
#include "Misc/ConfigCacheIni.h"
#include "RH_Polling.h"
#include "Interfaces/IPluginManager.h"

IMPLEMENT_MODULE(FRallyHereIntegrationModule, RallyHereIntegration);
FString GRallyHereIntegrationIni;

void FRallyHereIntegrationModule::StartupModule()
{
	FModuleManager::LoadModuleChecked<FRallyHereAPIModule>(FName(TEXT("RallyHereAPI")));
	FModuleManager::LoadModuleChecked<IModuleInterface>(FName(TEXT("HTTP")));

	FString PluginVersion = TEXT("Unknown");
	auto RHIntegrationPlugin = IPluginManager::Get().FindPlugin(TEXT("RallyHereIntegration"));
	if (RHIntegrationPlugin != nullptr)
	{
		const auto& Descriptor = RHIntegrationPlugin->GetDescriptor();
		PluginVersion = Descriptor.VersionName;
	}

    UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Plugin Version %s"), ANSI_TO_TCHAR(__FUNCTION__), *PluginVersion);

	FString UserAgentComment = FString::Printf(TEXT("rallyhere-sdk-ver=%s"), *PluginVersion);
	FPlatformHttp::AddDefaultUserAgentProjectComment(UserAgentComment);

    FConfigCacheIni::LoadGlobalIniFile(GRallyHereIntegrationIni, TEXT("RallyHereIntegration"));

	FRH_AsyncTaskHelper::Initialize();
	FRH_PollControl::Initialize();

    if (!Integration.IsValid())
    {
        Integration = MakeUnique<FRH_Integration>();
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
		Integration.Reset();
    }

	FRH_PollControl::Uninitialize();
}
