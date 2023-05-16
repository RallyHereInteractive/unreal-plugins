#pragma once

#include "CoreMinimal.h"
#include "RH_Common.h"
#include "Modules/ModuleManager.h"
#if WITH_RALLYHEREA2S
#include "SocketSubsystem.h"
#include "RallyHereA2SModule.h"
#include "Interfaces/IPv4/IPv4Address.h"
#endif // WITH_RALLYHEREA2S


DECLARE_DELEGATE_OneParam(FRH_ServerBootstrapMetricsInitDelegate, bool);

// standalone helper that deals with initialization of RallyHereA2S plugin
class FRH_ServerMetricsHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_ServerMetricsHelper(FRH_ServerBootstrapMetricsInitDelegate InDelegate)
		: Delegate(InDelegate)
	{
	}

	virtual void Start()
	{
		Started();

#if WITH_RALLYHEREA2S
		TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalBindAddr(*GLog);

		FRallyHereA2SModule::FStaticServerInfo info;
		bool bA2SEnabled = false;
		auto* A2SModule = FModuleManager::GetModulePtr<FRallyHereA2SModule>(TEXT("RallyHereA2S"));
		if (A2SModule)
		{
			uint32 A2SPort = 0;
			// kcooper: expect this config to change later...
			if (FParse::Value(FCommandLine::Get(), TEXT("-A2SPort="), A2SPort))
			{
				bA2SEnabled = true;
				info.Name = GetServerInstanceId();
				info.Folder = FPaths::LaunchDir();
				info.GameName = FString::Printf(TEXT("%s"), FApp::GetProjectName());
				info.MaxPlayers = 1;
				info.Visibility = 0;
				info.Version = GetGameVersionString();
				uint32 ipInt;
				localIp->GetIp(ipInt);

				A2SModule->StartListening(FIPv4Address(ipInt), A2SPort, info);
				Completed(true);
			}
		}

		if (!bA2SEnabled)
			Failed(TEXT("Failed to init RallyHereA2SModule"));

#endif // WITH_RALLYHEREA2S
	}

protected:

	FString GetServerInstanceId()
	{
		return FApp::GetInstanceId().ToString();
	}

	FString GetGameVersionString()
	{
		//return URH_JoinedSession::GetClientVersionForSession();
		// OR
		return FEngineVersion::Current().ToString();
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_ServerMetricsHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess);
	}

	FRH_ServerBootstrapMetricsInitDelegate Delegate;
};