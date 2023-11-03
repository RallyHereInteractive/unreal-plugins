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
#include "RH_Diagnostics.h"

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

			bool bHasValue = Args.Num() > 0;
			FString NewValue = bHasValue ? Args[0] : FString();
			NewValue.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockBaseURL(bHasValue);
			FRallyHereIntegrationModule::Get().SetBaseURL(MoveTemp(NewValue), TEXT("Console Command"));
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

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetEnvironmentId(
	TEXT("rh.setenvid"),
	TEXT("Set the Environment ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			bool bHasValue = Args.Num() > 0;
			FString NewValue = bHasValue ? Args[0] : FString();
			NewValue.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockEnvironmentId(bHasValue);
			FRallyHereIntegrationModule::Get().SetEnvironmentId(MoveTemp(NewValue), TEXT("Console Command"));

			// re-resolve anything not locked
			FRallyHereIntegrationModule::Get().ResolveBaseURL();
			FRallyHereIntegrationModule::Get().ResolveClientId();
			FRallyHereIntegrationModule::Get().ResolveClientSecret();

			Ar.Logf(TEXT("Updated Environment ID to %s"), *FRallyHereIntegrationModule::Get().GetEnvironmentId());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHResolveEnvironmentId(
	TEXT("rh.resolveenvid"),
	TEXT("Resolve the Environment ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			FRallyHereIntegrationModule::Get().LockEnvironmentId(false);
			FRallyHereIntegrationModule::Get().ResolveEnvironmentId();
			FRallyHereIntegrationModule::Get().LockBaseURL(false);
			FRallyHereIntegrationModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Environment ID to %s"), *FRallyHereIntegrationModule::Get().GetEnvironmentId());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetEnvironmentId(
	TEXT("rh.getenvid"),
	TEXT("Get the Environment ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Environment ID = %s"), *FRallyHereIntegrationModule::Get().GetEnvironmentId());
		}));


static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientId(
	TEXT("rh.setclientid"),
	TEXT("Set the client ID used to log into the RallyHere API, not specifying any id will clear the override and use the default id, and an empty id will override to not use an id"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{	
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}
			bool bHasValue = Args.Num() > 0;
			FString NewValue = bHasValue ? Args[0] : FString();
			NewValue.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockClientId(bHasValue);
			FRallyHereIntegrationModule::Get().SetClientId(MoveTemp(NewValue), TEXT("Console Command"));
			Ar.Logf(TEXT("Updated Client ID to [%s]"), *NewValue);
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
			bool bHasValue = Args.Num() > 0;
			FString NewValue = bHasValue ? Args[0] : FString();
			NewValue.TrimQuotesInline();
			FRallyHereIntegrationModule::Get().LockClientSecret(bHasValue);
			FRallyHereIntegrationModule::Get().SetClientSecret(MoveTemp(NewValue), TEXT("Console Command"));
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
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp))
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

	WebRequestTracker = NewObject<URH_WebRequests>(this);
	WebRequestTracker->Initialize(&APIs);

	Diagnostics = NewObject<URH_Diagnostics>(this);
	Diagnostics->Initialize();
}

void URH_Integration::Uninitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	WebRequestTracker->Uninitialize();
	WebRequestTracker = nullptr;

	Diagnostics->Uninitialize();
	Diagnostics = nullptr;

	for (auto& API : APIs.GetAllAPIs())
	{
		API->OnRequestStarted().RemoveAll(this);
		API->OnRequestCompleted().RemoveAll(this);
	}

	RetryManager = nullptr;
}

void URH_Integration::SetBaseURL(FString InBaseUrl, const FString& Source)
{
	ResolvedBaseUrl = MoveTemp(InBaseUrl);

	if (ResolvedBaseUrl.EndsWith(TEXT("/")))
	{
		ResolvedBaseUrl = ResolvedBaseUrl.LeftChop(1);
	}

	// Be defensive for URL schemes to avoid routing issues
	{
		const FString SchemeSeparator{ TEXT("://") };
		const FString SchemeHttp{ TEXT("http") };
		const FString SchemeHttps{ TEXT("https") };
		FString UrlScheme;
		FString UrlContent;
		if (!ResolvedBaseUrl.Split(SchemeSeparator, &UrlScheme, &UrlContent, ESearchCase::Type::CaseSensitive))
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] URL (%s) is missing scheme prefix.  Prepending https:// to avoid routing issues"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedBaseUrl);
			ResolvedBaseUrl = SchemeHttps + SchemeSeparator + ResolvedBaseUrl;
		}
		else if (UrlScheme.IsEmpty())
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] URL (%s) has empty scheme prefix.  Prepending https to avoid routing issues"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedBaseUrl);
			ResolvedBaseUrl = SchemeHttps + ResolvedBaseUrl;
		}
		else if (!UrlScheme.StartsWith(SchemeHttp))
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] URL (%s) has unknown scheme prefix.  Is This intentional?"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedBaseUrl);
		}
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
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp))
		{
			SetBaseURL(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}


	{
		// check environment
		const auto EnvironmentId = GetEnvironmentId();
		const auto* Environment = Settings->GetEnvironmentConfiguration(EnvironmentId);
		if (Environment != nullptr && !Environment->BaseUrl.IsEmpty())
		{
			SetBaseURL(Environment->BaseUrl, TEXT("Environment:") + EnvironmentId);
			return;
		}

		// check default environment as a fallback
		Environment = &Settings->DefaultEnvironmentConfiguration;
		if (Environment != nullptr && !Environment->BaseUrl.IsEmpty())
		{
			SetBaseURL(Environment->BaseUrl, TEXT("Default Environment:") + EnvironmentId);
			return;
		}
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a base URL"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_Integration::SetEnvironmentId(FString InEnvironmentId, const FString& Source)
{
	ResolvedEnvironmentId = MoveTemp(InEnvironmentId);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedEnvironmentId,
		*Source);
}

FString URH_Integration::GetEnvironmentId()
{
	if (ResolvedEnvironmentId.IsEmpty())
	{
		ResolveEnvironmentId();
	}
	return ResolvedEnvironmentId;
}

bool GetEnvironmentIdFromOSS(IOnlineSubsystem* OSS, FString& OutEnvironmentId, FString& OutSource)
{
	if (OSS)
	{
		FString EnvironmentId;

		EnvironmentId = ToString(OSS->GetOnlineEnvironment());
		if (!EnvironmentId.IsEmpty())
		{
			OutEnvironmentId = EnvironmentId;
			OutSource = TEXT("OSS ") + OSS->GetSubsystemName().ToString() + TEXT(" online environment");
			return true;
		}
	}
	return false;
}

void URH_Integration::ResolveEnvironmentId()
{
	if (bIsEnvironmentIdLocked)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_IntegrationSettings>();

	FString NewEnvironmentId;
	for (const auto& Key : Settings->EnvironmentCommandLineKeys)
	{
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT("=")), NewEnvironmentId))
		{
			SetEnvironmentId(MoveTemp(NewEnvironmentId), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	FString Source;
	if (!Settings->EnvironmentOSSName.IsNone())
	{
		if (GetEnvironmentIdFromOSS(IOnlineSubsystem::Get(Settings->EnvironmentOSSName), NewEnvironmentId, Source))
		{
			SetEnvironmentId(MoveTemp(NewEnvironmentId), MoveTemp(Source));
			return;
		}
	}

	if (GetEnvironmentIdFromOSS(IOnlineSubsystem::GetByPlatform(true), NewEnvironmentId, Source))
	{
		SetEnvironmentId(MoveTemp(NewEnvironmentId), MoveTemp(Source));
		return;
	}

	if (GetEnvironmentIdFromOSS(IOnlineSubsystem::Get(NAME_None), NewEnvironmentId, Source))
	{
		SetEnvironmentId(MoveTemp(NewEnvironmentId), MoveTemp(Source));
		return;
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a environment id"), ANSI_TO_TCHAR(__FUNCTION__));
}


void URH_Integration::SetClientId(FString InClientId, const FString& Source)
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
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp))
		{
			SetClientId(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	{
		// check environment
		const auto EnvironmentId = GetEnvironmentId();
		const auto* Environment = Settings->GetEnvironmentConfiguration(EnvironmentId);
		if (Environment != nullptr && !Environment->ClientId.IsEmpty())
		{
			SetClientId(Environment->ClientId, TEXT("Environment:") + EnvironmentId);
			return;
		}

		// check default environment as a fallback
		Environment = &Settings->DefaultEnvironmentConfiguration;
		if (Environment != nullptr && !Environment->ClientId.IsEmpty())
		{
			SetClientId(Environment->ClientId, TEXT("Default Environment:") + EnvironmentId);
			return;
		}
	}

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a client ID"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_Integration::SetClientSecret(FString InClientSecret, const FString& Source)
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
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp))
		{
			SetClientSecret(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	{
		// check environment
		const auto EnvironmentId = GetEnvironmentId();
		const auto* Environment = Settings->GetEnvironmentConfiguration(EnvironmentId);
		if (Environment != nullptr && !Environment->ClientSecret.IsEmpty())
		{
			SetClientSecret(Environment->ClientSecret, TEXT("Environment:") + EnvironmentId);
			return;
		}

		// check default environment as a fallback
		Environment = &Settings->DefaultEnvironmentConfiguration;
		if (Environment != nullptr && !Environment->ClientSecret.IsEmpty())
		{
			SetClientSecret(Environment->ClientSecret, TEXT("Default Environment:") + EnvironmentId);
			return;
		}
	}
	
	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Could not find a client secret"), ANSI_TO_TCHAR(__FUNCTION__));
}

