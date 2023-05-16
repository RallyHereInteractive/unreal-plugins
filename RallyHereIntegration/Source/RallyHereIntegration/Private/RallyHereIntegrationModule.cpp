
#include "RallyHereIntegrationModule.h"
#include "Misc/ConfigCacheIni.h"
#include "RH_Polling.h"

IMPLEMENT_MODULE(FRallyHereIntegrationModule, RallyHereIntegration);
FString GRallyHereIntegrationIni;

void FRallyHereIntegrationModule::StartupModule()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
    FConfigCacheIni::LoadGlobalIniFile(GRallyHereIntegrationIni, TEXT("RallyHereIntegration"));

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

    if (Integration.IsValid())
    {
        Integration->Uninitialize();
        Integration->RemoveFromRoot();
		Integration.Reset();
    }

	FRH_PollControl::Uninitialize();
}
