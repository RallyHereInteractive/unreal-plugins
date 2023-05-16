// Copyright Epic Games, Inc. All Rights Reserved.

#if WITH_RALLYHEREA2S

#include "RallyHereA2SModule.h"
#include "RallyHereA2SListener.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPv4/IPv4Address.h"

DEFINE_LOG_CATEGORY(LogRallyHereA2SListener);

#define LOCTEXT_NAMESPACE "FRallyHereA2SModule"

void FRallyHereA2SModule::StartListening(const FIPv4Address& BindIp, const int32 Port, const FStaticServerInfo& Info)
{
	if (m_pA2S)
	{
		UpdateStaticSettings(Info);
		m_pA2S->Start(BindIp, Port);
		UE_LOG(LogRallyHereA2SListener, Log, TEXT("RallyHere A2S listening at %s:%i"), *BindIp.ToString(), Port);
	}
}
void FRallyHereA2SModule::UpdateStaticSettings(const FStaticServerInfo& Info)
{
	if (m_pA2S)
	{
		m_pA2S->UpdateStaticSettings(Info);
	}
}
void FRallyHereA2SModule::ManualTick(float DeltaTime)
{
	m_pA2S->Tick(DeltaTime);
}


void FRallyHereA2SModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// 
	//We only listen to A2S as a server
	if (IsRunningDedicatedServer())
	{
		UE_LOG(LogRallyHereA2SListener, Log, TEXT("Starting up RallyHere A2S because we are a dedicated server"));
		m_pA2S = TUniquePtr<FRallyHereA2SListener>(new FRallyHereA2SListener());
	}

}

void FRallyHereA2SModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRallyHereA2SModule, RallyHereA2S)
#endif // WITH_RALLYHEREA2S