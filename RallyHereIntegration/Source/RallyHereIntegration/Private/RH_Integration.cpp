#include "RH_Integration.h"
#include "OnlineSubsystem.h"
#include "RallyHereAPIHttpRequester.h"
#include "RallyHereIntegrationModule.h"
#include "HAL/IConsoleManager.h"
#include "Misc/OutputDevice.h"
#include "Misc/CommandLine.h"
#include "Misc/ConfigCacheIni.h"
#include "Serialization/JsonSerializer.h"
#include "RH_WebRequests.h"

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetBaseUrl(
	TEXT("rh.setbaseurl"),
	TEXT("Set the base URL used for Rally Here API calls (wrapper in quotes to properly handle urls)"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			FString NewBaseURL = Args.Num() >= 0 ? Args[0] : FString();
			NewBaseURL.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockBaseURL(!NewBaseURL.IsEmpty());
			FRallyHereIntegrationModule::Get().SetBaseURL(MoveTemp(NewBaseURL), TEXT("Console Command"));
			Ar.Logf(TEXT("Updated Base URL to %s"), *FRallyHereIntegrationModule::Get().GetBaseURL());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHResolveBaseUrl(
	TEXT("rh.resolvebaseurl"),
	TEXT("Resolve the base URL used for Rally Here API calls using preconfigured values"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			FRallyHereIntegrationModule::Get().LockBaseURL(false);
			FRallyHereIntegrationModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Base URL to %s"), *FRallyHereIntegrationModule::Get().GetBaseURL());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetBaseUrl(
	TEXT("rh.getbaseurl"),
	TEXT("Get the base URL used for Rally Here API calls"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Base URL = %s"), *FRallyHereIntegrationModule::Get().GetBaseURL());
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetSandboxId(
	TEXT("rh.setsandboxid"),
	TEXT("Set the Sandbox ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			FString NewSandboxId = Args.Num() >= 0 ? Args[0] : FString();
			NewSandboxId.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockSandboxId(!NewSandboxId.IsEmpty());
			FRallyHereIntegrationModule::Get().SetSandboxId(MoveTemp(NewSandboxId), TEXT("Console Command"));
			FRallyHereIntegrationModule::Get().LockBaseURL(false);
			FRallyHereIntegrationModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Sandbox ID to %s"), *FRallyHereIntegrationModule::Get().GetSandboxId());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHResolveSandboxId(
	TEXT("rh.resolvesandboxid"),
	TEXT("Resolve the Sandbox ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			FRallyHereIntegrationModule::Get().LockSandboxId(false);
			FRallyHereIntegrationModule::Get().ResolveSandboxId();
			FRallyHereIntegrationModule::Get().LockBaseURL(false);
			FRallyHereIntegrationModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Sandbox ID to %s"), *FRallyHereIntegrationModule::Get().GetSandboxId());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetSandboxId(
	TEXT("rh.getsandboxid"),
	TEXT("Get the Sandbox ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Sandbox ID = %s"), *FRallyHereIntegrationModule::Get().GetSandboxId());
		}));


static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientId(
	TEXT("rh.setclientid"),
	TEXT("Set the client ID used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{	
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}
			FString NewClientId = Args.Num() > 0 ? Args[0] : FString();
			NewClientId.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockClientId(!NewClientId.IsEmpty());
			FRallyHereIntegrationModule::Get().SetClientId(MoveTemp(NewClientId), TEXT("Console Command"));		
			Ar.Logf(TEXT("Updated Client ID to [%s]"), *NewClientId);
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetClientId(
	TEXT("rh.getclientid"),
	TEXT("Get the Client ID used to log into the RallyHere API"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Client ID = %s"), *FRallyHereIntegrationModule::Get().GetClientId());
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientSecret(
	TEXT("rh.setclientsecret"),
	TEXT("Set the client secret used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}
			FString NewClientSecret = Args.Num() >= 0 ? Args[0] : FString();
			NewClientSecret.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockClientSecret(!NewClientSecret.IsEmpty());
			FRallyHereIntegrationModule::Get().SetClientSecret(MoveTemp(NewClientSecret), TEXT("Console Command"));
			Ar.Logf(TEXT("Updated Client Secret to [**SECRET**]"));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetOSS(
	TEXT("rh.setOSS"),
	TEXT("Set the Default Online Subsystem at runtime"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (Args.Num() > 0)
			{
				FString OSSName = Args[0];
				Ar.Logf(TEXT("Set OSS = %s"), *OSSName);
				GConfig->SetString(TEXT("OnlineSubsystem"), TEXT("DefaultPlatformService"), *OSSName, GEngineIni);
				IOnlineSubsystem::ReloadDefaultSubsystem();
			}
		}));

void URH_Integration::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto* Settings = GetDefault<URH_IntegrationSettings>();

	// override default OSS if specified
	for (const auto& Key : Settings->DefaultOSSCommandLineKeys)
	{
		FString temp;
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Update Default OSS Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *temp, *Key);
			GConfig->SetString(TEXT("OnlineSubsystem"), TEXT("DefaultPlatformService"), *temp, GEngineIni);
			IOnlineSubsystem::ReloadDefaultSubsystem();
			break;
		}
	}

	// Create Dependent objects
	RetryManager = MakeShared<RallyHereAPI::FHttpRetryManager>(6, 60); // TODO load from ini

	// Initialize the APIs
	for (auto& API : APIs.GetAllAPIs())
	{
		API->SetHttpRetryManager(*RetryManager);
	}

	auto* HttpRequester = RallyHereAPI::FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->SetMaxSimultaneousRequests(Settings->MaxSimultaneousRequests);
	}

	// Go ahead and load a base URL in case one was passed through at startup
	ResolveBaseURL();

	WebRequestTracker = NewObject<URH_WebRequests>(this, URH_WebRequests::StaticClass(), NAME_None);
	WebRequestTracker->Initialize(&APIs);
}

void URH_Integration::Uninitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	WebRequestTracker->Uninitialize();
	WebRequestTracker = nullptr;

	for (auto& API : APIs.GetAllAPIs())
	{
		API->OnRequestStarted().RemoveAll(this);
		API->OnRequestCompleted().RemoveAll(this);
	}

	RetryManager = nullptr;
}

void URH_Integration::SetBaseURL(FString InBaseUrl, FString Source)
{
	ResolvedBaseUrl = MoveTemp(InBaseUrl);

	if (ResolvedBaseUrl.EndsWith(TEXT("/")))
	{
		ResolvedBaseUrl = ResolvedBaseUrl.LeftChop(1);
	}

	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedBaseUrl,
		*Source);
	for (auto& API : APIs.GetAllAPIs())
	{
		API->SetURL(ResolvedBaseUrl);
	}
}

FString URH_Integration::GetBaseURL()
{
	if (ResolvedBaseUrl.IsEmpty())
	{
		ResolveBaseURL();
	}
	return ResolvedBaseUrl;
}

void URH_Integration::ResolveBaseURL()
{
	if (bIsBaseUrlLocked)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_IntegrationSettings>();

	for (const auto& Key : Settings->BaseURLCommandLineKeys)
	{
		FString temp;
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
		{
			SetBaseURL(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}


	{
		const auto SandboxId = GetSandboxId();
		const auto* Sandbox = Settings->GetSandboxConfiguration(SandboxId);
		if (Sandbox != nullptr && !Sandbox->BaseUrl.IsEmpty())
		{
			SetBaseURL(Sandbox->BaseUrl, TEXT("Sandbox:") + SandboxId);
			return;
		}
	}

	if (!Settings->BaseUrl.IsEmpty())
	{
		SetBaseURL(Settings->BaseUrl, TEXT("URH_IntegrationSettings::BaseURL"));
		return;
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a base URL"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_Integration::SetSandboxId(FString InSandboxId, FString Source)
{
	ResolvedSandboxId = MoveTemp(InSandboxId);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedSandboxId,
		*Source);
}

FString URH_Integration::GetSandboxId()
{
	if (ResolvedSandboxId.IsEmpty())
	{
		ResolveSandboxId();
	}
	return ResolvedSandboxId;
}

bool GetSandboxIdFromOSS(IOnlineSubsystem* OSS, FString& OutSandboxId, FString& OutSource)
{
	if (OSS)
	{
		FString SandboxId;

#if WITH_HIREZ_ENGINE
		SandboxId = OSS->GetSandboxId();
		if (!SandboxId.IsEmpty())
		{
			OutSandboxId = SandboxId;
			OutSource = TEXT("OSS ") + OSS->GetSubsystemName().ToString() + TEXT(" sandbox");
			return true;
		}
#endif

		SandboxId = ToString(OSS->GetOnlineEnvironment());
		if (!SandboxId.IsEmpty())
		{
			OutSandboxId = SandboxId;
			OutSource = TEXT("OSS ") + OSS->GetSubsystemName().ToString() + TEXT(" online environment");
			return true;
		}
	}
	return false;
}

void URH_Integration::ResolveSandboxId()
{
	if (bIsSandboxIdLocked)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_IntegrationSettings>();

	FString NewSandboxId;
	for (const auto& Key : Settings->SandboxCommandLineKeys)
	{
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT("=")), NewSandboxId))
		{
			SetSandboxId(MoveTemp(NewSandboxId), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	FString Source;
	if (!Settings->SandboxOSSName.IsNone())
	{
		if (GetSandboxIdFromOSS(IOnlineSubsystem::Get(Settings->SandboxOSSName), NewSandboxId, Source))
		{
			SetSandboxId(MoveTemp(NewSandboxId), MoveTemp(Source));
			return;
		}
	}

	if (GetSandboxIdFromOSS(IOnlineSubsystem::GetByPlatform(true), NewSandboxId, Source))
	{
		SetSandboxId(MoveTemp(NewSandboxId), MoveTemp(Source));
		return;
	}

	if (GetSandboxIdFromOSS(IOnlineSubsystem::Get(NAME_None), NewSandboxId, Source))
	{
		SetSandboxId(MoveTemp(NewSandboxId), MoveTemp(Source));
		return;
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a sandbox id"), ANSI_TO_TCHAR(__FUNCTION__));
}


void URH_Integration::SetClientId(FString InClientId, FString Source)
{
	ResolvedClientId = MoveTemp(InClientId);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedClientId,
		*Source);
}

FString URH_Integration::GetClientId()
{
	if (ResolvedClientId.IsEmpty())
	{
		ResolveClientId();
	}
	return ResolvedClientId;
}

void URH_Integration::ResolveClientId()
{
	if (bIsClientIdLocked)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_IntegrationSettings>();

	for (const auto& Key : Settings->ClientIdCommandLineKeys)
	{
		FString temp;
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
		{
			SetClientId(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	{
		const auto SandboxId = GetSandboxId();
		const auto* Sandbox = Settings->GetSandboxConfiguration(SandboxId);
		if (Sandbox != nullptr && !Sandbox->ClientId.IsEmpty())
		{
			SetClientId(Sandbox->ClientId, TEXT("Sandbox:") + SandboxId);
			return;
		}
	}

	if (!Settings->ClientId.IsEmpty())
	{
		SetClientId(Settings->ClientId, TEXT("INI: RH_IntegrationSettings - ClientId"));
		return;
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a client ID"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_Integration::SetClientSecret(FString InClientSecret, FString Source)
{
	ResolvedClientSecret = MoveTemp(InClientSecret);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *Source);
}

FString URH_Integration::GetClientSecret()
{
	if (ResolvedClientSecret.IsEmpty())
	{
		ResolveClientSecret();
	}
	return ResolvedClientSecret;
}

void URH_Integration::ResolveClientSecret()
{
	if (bIsClientSecretLocked)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_IntegrationSettings>();

	for (const auto& Key : Settings->ClientSecretCommandLineKeys)
	{
		FString temp;
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
		{
			SetClientSecret(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	const auto SandboxId = GetSandboxId();
	const auto* Sandbox = Settings->GetSandboxConfiguration(SandboxId);
	if (Sandbox != nullptr && !Sandbox->ClientSecret.IsEmpty())
	{
		SetClientSecret(Sandbox->ClientSecret, TEXT("Sandbox:") + SandboxId);
		return;
	}

	if (!Settings->ClientSecret.IsEmpty())
	{
		SetClientSecret(Settings->ClientSecret, TEXT("INI: RH_IntegrationSettings - ClientSecret"));
		return;
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a client secret"), ANSI_TO_TCHAR(__FUNCTION__));
}

