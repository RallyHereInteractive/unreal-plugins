// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_DevIntegration.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "RallyHereEditor.h"
#include "HAL/IConsoleManager.h"
#include "Misc/OutputDevice.h"
#include "Misc/CommandLine.h"
#include "Misc/ConfigCacheIni.h"
#include "Serialization/JsonSerializer.h"

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetBaseUrl(
	TEXT("rh.dev.setbaseurl"),
	TEXT("Set the base URL used for Rally Here API calls (wrapper in quotes to properly handle urls)"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			FString NewBaseURL = Args.Num() >= 0 ? Args[0] : FString();
			NewBaseURL.TrimQuotesInline();
			FRallyHereEditorModule::Get().LockBaseURL(!NewBaseURL.IsEmpty());
			FRallyHereEditorModule::Get().SetBaseURL(MoveTemp(NewBaseURL), TEXT("Console Command"));
			Ar.Logf(TEXT("Updated Base URL to %s"), *FRallyHereEditorModule::Get().GetBaseURL());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHResolveBaseUrl(
	TEXT("rh.dev.resolvebaseurl"),
	TEXT("Resolve the base URL used for Rally Here API calls using preconfigured values"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			FRallyHereEditorModule::Get().LockBaseURL(false);
			FRallyHereEditorModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Base URL to %s"), *FRallyHereEditorModule::Get().GetBaseURL());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetBaseUrl(
	TEXT("rh.dev.getbaseurl"),
	TEXT("Get the base URL used for Rally Here API calls"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Base URL = %s"), *FRallyHereEditorModule::Get().GetBaseURL());
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetSandboxId(
	TEXT("rh.dev.setsandboxid"),
	TEXT("Set the Sandbox ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			FString NewSandboxId = Args.Num() >= 0 ? Args[0] : FString();
			NewSandboxId.TrimQuotesInline();
			FRallyHereEditorModule::Get().LockSandboxId(!NewSandboxId.IsEmpty());
			FRallyHereEditorModule::Get().SetSandboxId(MoveTemp(NewSandboxId), TEXT("Console Command"));
			FRallyHereEditorModule::Get().LockBaseURL(false);
			FRallyHereEditorModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Sandbox ID to %s"), *FRallyHereEditorModule::Get().GetSandboxId());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHResolveSandboxId(
	TEXT("rh.dev.resolvesandboxid"),
	TEXT("Resolve the Sandbox ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			FRallyHereEditorModule::Get().LockSandboxId(false);
			FRallyHereEditorModule::Get().ResolveSandboxId();
			FRallyHereEditorModule::Get().LockBaseURL(false);
			FRallyHereEditorModule::Get().ResolveBaseURL();
			Ar.Logf(TEXT("Updated Sandbox ID to %s"), *FRallyHereEditorModule::Get().GetSandboxId());
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetSandboxId(
	TEXT("rh.dev.getsandboxid"),
	TEXT("Get the Sandbox ID used for finding the Rally Here API base URL"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Sandbox ID = %s"), *FRallyHereEditorModule::Get().GetSandboxId());
		}));


static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientId(
	TEXT("rh.dev.setclientid"),
	TEXT("Set the client ID used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}
			FString NewClientId = Args.Num() > 0 ? Args[0] : FString();
			NewClientId.TrimQuotesInline();
			FRallyHereEditorModule::Get().LockClientId(!NewClientId.IsEmpty());
			FRallyHereEditorModule::Get().SetClientId(MoveTemp(NewClientId), TEXT("Console Command"));
			Ar.Logf(TEXT("Updated Client ID to [%s]"), *NewClientId);
		}));

static FAutoConsoleCommandWithOutputDevice ConsoleRHGetClientId(
	TEXT("rh.dev.getclientid"),
	TEXT("Get the Client ID used to log into the RallyHere API"),
	FConsoleCommandWithOutputDeviceDelegate::CreateLambda([](FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}

			Ar.Logf(TEXT("Client ID = %s"), *FRallyHereEditorModule::Get().GetClientId());
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHSetClientSecret(
	TEXT("rh.dev.setclientsecret"),
	TEXT("Set the client secret used to log into the RallyHere API"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereEditorModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereEditorModule::GetModuleName().ToString());
				return;
			}
			FString NewClientSecret = Args.Num() >= 0 ? Args[0] : FString();
			NewClientSecret.TrimQuotesInline();
			FRallyHereEditorModule::Get().LockClientSecret(!NewClientSecret.IsEmpty());
			FRallyHereEditorModule::Get().SetClientSecret(MoveTemp(NewClientSecret), TEXT("Console Command"));
			Ar.Logf(TEXT("Updated Client Secret to [**SECRET**]"));
		}));

void URH_DevIntegration::Initialize()
{
	UE_LOG(LogRallyHereEditor, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();

	// Create Dependent objects
	RetryManager = MakeShared<RallyHereDeveloperAPI::FHttpRetryManager>(6, 60); // TODO load from ini

	// Initialize the APIs
	for (auto& API : APIs.GetAllAPIs())
	{
		API->SetHttpRetryManager(*RetryManager);
	}

	auto* HttpRequester = RallyHereDeveloperAPI::FRallyHereDeveloperAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->SetMaxSimultaneousRequests(Settings->MaxSimultaneousRequests);
	}

	// Go ahead and load a base URL in case one was passed through at startup
	ResolveBaseURL();


	WebRequestTracker = NewObject<URH_DevWebRequests>(this);
	WebRequestTracker->Initialize(&APIs);
}

void URH_DevIntegration::Uninitialize()
{
	UE_LOG(LogRallyHereEditor, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	WebRequestTracker->Uninitialize();
	WebRequestTracker = nullptr;

	for (auto& API : APIs.GetAllAPIs())
	{
		API->OnRequestStarted().RemoveAll(this);
		API->OnRequestCompleted().RemoveAll(this);
	}

	RetryManager = nullptr;
}

void URH_DevIntegration::SetBaseURL(FString InBaseUrl, FString Source)
{
	ResolvedBaseUrl = MoveTemp(InBaseUrl);

	if (ResolvedBaseUrl.EndsWith(TEXT("/")))
	{
		ResolvedBaseUrl = ResolvedBaseUrl.LeftChop(1);
	}

	UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedBaseUrl,
		*Source);
	for (auto& API : APIs.GetAllAPIs())
	{
		API->SetURL(ResolvedBaseUrl + "/api");
	}
}

FString URH_DevIntegration::GetBaseURL()
{
	if (ResolvedBaseUrl.IsEmpty())
	{
		ResolveBaseURL();
	}
	return ResolvedBaseUrl;
}

void URH_DevIntegration::ResolveBaseURL()
{
	if (bIsBaseUrlLocked)
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();

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
		// check sandbox
		const auto SandboxId = GetSandboxId();
		const auto* Sandbox = Settings->GetSandboxConfiguration(SandboxId);
		if (Sandbox != nullptr && !Sandbox->BaseUrl.IsEmpty())
		{
			SetBaseURL(Sandbox->BaseUrl, TEXT("Sandbox:") + SandboxId);
			return;
		}

		// check default sandbox as a fallback
		Sandbox = &Settings->DefaultSandboxConfiguration;
		if (Sandbox != nullptr && !Sandbox->BaseUrl.IsEmpty())
		{
			SetBaseURL(Sandbox->BaseUrl, TEXT("Default Sandbox:") + SandboxId);
			return;
		}
	}

	if (!Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId())->BaseUrl.IsEmpty())
	{
		SetBaseURL(Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId())->BaseUrl, TEXT("URH_DevIntegrationSettings::BaseURL"));
		return;
	}

	UE_LOG(LogRallyHereEditor, Warning, TEXT("[%s] Could not find a base URL"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_DevIntegration::SetSandboxId(FString InSandboxId, FString Source)
{
	ResolvedSandboxId = MoveTemp(InSandboxId);
	UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedSandboxId,
		*Source);
}

FString URH_DevIntegration::GetSandboxId()
{
	if (ResolvedSandboxId.IsEmpty())
	{
		ResolveSandboxId();
	}
	return ResolvedSandboxId;
}

void URH_DevIntegration::ResolveSandboxId()
{
	if (bIsSandboxIdLocked)
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();

	FString NewSandboxId;
	for (const auto& Key : Settings->SandboxCommandLineKeys)
	{
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT("=")), NewSandboxId))
		{
			SetSandboxId(MoveTemp(NewSandboxId), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	UE_LOG(LogRallyHereEditor, Warning, TEXT("[%s] Could not find a sandbox id"), ANSI_TO_TCHAR(__FUNCTION__));
}


void URH_DevIntegration::SetClientId(FString InClientId, FString Source)
{
	ResolvedClientId = MoveTemp(InClientId);
	UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Value=%s Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *ResolvedClientId,
		*Source);
}

FString URH_DevIntegration::GetClientId()
{
	if (ResolvedClientId.IsEmpty())
	{
		ResolveClientId();
	}
	return ResolvedClientId;
}

void URH_DevIntegration::ResolveClientId()
{
	if (bIsClientIdLocked)
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();

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
		// check sandbox
		const auto SandboxId = GetSandboxId();
		const auto* Sandbox = Settings->GetSandboxConfiguration(SandboxId);
		if (Sandbox != nullptr && !Sandbox->ClientId.IsEmpty())
		{
			SetClientId(Sandbox->ClientId, TEXT("Sandbox:") + SandboxId);
			return;
		}

		// check default sandbox as a fallback
		Sandbox = &Settings->DefaultSandboxConfiguration;
		if (Sandbox != nullptr && !Sandbox->ClientId.IsEmpty())
		{
			SetClientId(Sandbox->ClientId, TEXT("Default Sandbox:") + SandboxId);
			return;
		}
	}

	if (!Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId())->ClientId.IsEmpty())
	{
		SetClientId(Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId())->ClientId, TEXT("INI: RH_DevIntegrationSettings - ClientId"));
		return;
	}

	UE_LOG(LogRallyHereEditor, Warning, TEXT("[%s] Could not find a client ID"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_DevIntegration::SetClientSecret(FString InClientSecret, FString Source)
{
	ResolvedClientSecret = MoveTemp(InClientSecret);
	UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Source=%s"), ANSI_TO_TCHAR(__FUNCTION__), *Source);
}

FString URH_DevIntegration::GetClientSecret()
{
	if (ResolvedClientSecret.IsEmpty())
	{
		ResolveClientSecret();
	}
	return ResolvedClientSecret;
}

void URH_DevIntegration::ResolveClientSecret()
{
	if (bIsClientSecretLocked)
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("[%s] Locked and will not change"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();

	for (const auto& Key : Settings->ClientSecretCommandLineKeys)
	{
		FString temp;
		if (FParse::Value(FCommandLine::Get(), *(Key + TEXT('=')), temp) && !temp.IsEmpty())
		{
			SetClientSecret(MoveTemp(temp), TEXT("CmdLine '") + Key + TEXT("'"));
			return;
		}
	}

	{
		// check sandbox
		const auto SandboxId = GetSandboxId();
		const auto* Sandbox = Settings->GetSandboxConfiguration(SandboxId);
		if (Sandbox != nullptr && !Sandbox->ClientSecret.IsEmpty())
		{
			SetClientSecret(Sandbox->ClientSecret, TEXT("Sandbox:") + SandboxId);
			return;
		}

		// check default sandbox as a fallback
		Sandbox = &Settings->DefaultSandboxConfiguration;
		if (Sandbox != nullptr && !Sandbox->ClientSecret.IsEmpty())
		{
			SetClientSecret(Sandbox->ClientSecret, TEXT("Default Sandbox:") + SandboxId);
			return;
		}
	}

	if (!Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId())->ClientSecret.IsEmpty())
	{
		SetClientSecret(Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId())->ClientSecret, TEXT("INI: RH_DevIntegrationSettings - ClientSecret"));
		return;
	}

	UE_LOG(LogRallyHereEditor, Warning, TEXT("[%s] Could not find a client secret"), ANSI_TO_TCHAR(__FUNCTION__));
}