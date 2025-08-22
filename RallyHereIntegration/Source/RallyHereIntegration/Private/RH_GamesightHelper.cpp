// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GamesightHelper.h"
#include "Engine/LocalPlayer.h"
#include "HttpModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"

DEFINE_LOG_CATEGORY(LogRHGamesight);

URHGamesightHelper::URHGamesightHelper(class FObjectInitializer const& initializer)
{
}

bool URHGamesightHelper::IsEventEnabled(EGamesightEvent Event)
{
	auto* ConfigSubsystem = GetConfigSubsystem();
	if (ConfigSubsystem == nullptr)
	{
		return false;
	}

	FString EventEnabled{};
	switch (Event)
	{
		case EGamesightEvent::ESE_None:
			return false;
		case EGamesightEvent::ESE_Custom:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_CUSTOM_ENABLE"), EventEnabled);
			break;
		case EGamesightEvent::ESE_Login:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_LOGIN_ENABLE"), EventEnabled);
			break;
		case EGamesightEvent::ESE_FirstLogin:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_FIRST_LOGIN_ENABLE"), EventEnabled);
			break;
		case EGamesightEvent::ESE_RealMoneyPurchase:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_REAL_MONEY_PURCHASE_ENABLE"), EventEnabled);
			break;
		case EGamesightEvent::ESE_InGameCurrencyPurchase:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_IN_GAME_CURRENCY_PURCHASE_ENABLE"), EventEnabled);
			break;
		case EGamesightEvent::ESE_LevelChange:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_LEVEL_CHANGE_ENABLE"), EventEnabled);
			break;
		case EGamesightEvent::ESE_MatchPlayed:
			ConfigSubsystem->GetKV(TEXT("GAMESIGHT_MATCH_PLAYED_ENABLE"), EventEnabled);
			break;
		default:
			return false;
	}

	return EventEnabled.ToBool();
}

FString URHGamesightHelper::GetEventName(EGamesightEvent Event)
{
	switch (Event)
	{
		// TODO Need to handle passing a custom game events instead of just an empty event name
		case EGamesightEvent::ESE_None:
		case EGamesightEvent::ESE_Custom:
			return FString();
		case EGamesightEvent::ESE_Login:
			return FString("game_login");
		case EGamesightEvent::ESE_FirstLogin:
			return FString("game_first_login");
		case EGamesightEvent::ESE_RealMoneyPurchase:
			return FString("real_money_purchase");
		case EGamesightEvent::ESE_InGameCurrencyPurchase:
			return FString("in_game_currency_purchase");
		case EGamesightEvent::ESE_LevelChange:
			return FString("level_change");
		case EGamesightEvent::ESE_MatchPlayed:
			return FString("match_playerd");
		default:
			return FString();
	}
}

URH_ConfigSubsystem* URHGamesightHelper::GetConfigSubsystem()
{
	if (GameInstance == nullptr)
	{
		return nullptr;
	}

	auto* GISS = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (GISS == nullptr)
	{
		return nullptr;
	}

	return GISS->GetConfigSubsystem();
}

void URHGamesightHelper::SendEvent(EGamesightEvent Event)
{
	SendEvent(Event, FGamesightEventParameters());
}

void URHGamesightHelper::SendEvent(EGamesightEvent Event, const FGamesightEventParameters& Parameters)
{
	FHttpModule* HttpModule = static_cast<FHttpModule*>(FModuleManager::Get().GetModule("HTTP"));
	if (!HttpModule)
	{
		return;
	}

	if (LocalPlayer == nullptr)
	{
		return;
	}

	auto* LPSS = LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
	if (LPSS == nullptr)
	{
		return;
	}

	FAuthContextPtr AuthContext = LPSS->GetAuthContext();
	if (!AuthContext || !AuthContext->IsLoggedIn())
	{
		return;
	}

	const auto& LoginResult = AuthContext->GetLoginResult();
	if (!LoginResult)
	{
		return;
	}

	if (!GameInstance)
	{
		return;
	}

	auto* GISS = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (GISS == nullptr)
	{
		return;
	}

	auto* ConfigSubsystem = GetConfigSubsystem();
	if (ConfigSubsystem == nullptr)
	{
		return;
	}

	if (!IsEventEnabled(Event))
	{
		UE_LOG(LogRHGamesight, VeryVerbose, TEXT("[%s] Gamesight event [%s] disabled"), ANSI_TO_TCHAR(__FUNCTION__), *GetEventName(Event));
		return;
	}

	FString GamesightApiKey;
	if (!ConfigSubsystem->GetKV(TEXT("GAMESIGHT_MEASUREMENT_KEY"), GamesightApiKey))
	{
		UE_LOG(LogRHGamesight, VeryVerbose, TEXT("[%s] Gamesight skipped due to no key"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	FString GamesightIngestUrl;
	if (!ConfigSubsystem->GetKV(TEXT("GAMESIGHT_INGEST_URL"), GamesightIngestUrl))
	{
		UE_LOG(LogRHGamesight, VeryVerbose, TEXT("[%s] Gamesight skipped due to no url"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	TSharedRef<IHttpRequest> HttpRequest = HttpModule->CreateRequest();
	HttpRequest->SetVerb(TEXT("POST"));
	HttpRequest->SetURL(GamesightIngestUrl);
	HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	HttpRequest->SetHeader(TEXT("accept"), TEXT("application/json"));
	HttpRequest->SetHeader(TEXT("Authorization"), GamesightApiKey);

	FString GamesightAPIVersion;
	if (ConfigSubsystem->GetKV(TEXT("GAMESIGHT_API_VERSION"), GamesightAPIVersion))
	{
		HttpRequest->SetHeader(TEXT("X-Api-Version"), GamesightAPIVersion);
	}

	TSharedPtr<FJsonObject> Content = MakeShared<FJsonObject>();
	if (!Parameters.EventNameSuffix.IsEmpty())
	{
		Content->SetStringField(TEXT("type"), *(FString::Printf(TEXT("%s_%s"), *GetEventName(Event), *Parameters.EventNameSuffix)));
	}
	else
	{
		Content->SetStringField(TEXT("type"), *GetEventName(Event));
	}

	for (auto& StringVals : Parameters.StringFields)
	{
		Content->SetStringField(*StringVals.Key, *StringVals.Value);
	}
	for (auto& DoubleVals : Parameters.DoubleFields)
	{
		Content->SetNumberField(*DoubleVals.Key, DoubleVals.Value);
	}

	Content->SetStringField(TEXT("user_id"), LoginResult->GetActivePlayerUuid().ToString(EGuidFormats::DigitsWithHyphensLower));
	{
		TSharedPtr<FJsonObject> Identifiers = MakeShared<FJsonObject>();
		Identifiers->SetStringField(TEXT("ip"), GISS->GetLastKnownIPAddress());
		Identifiers->SetStringField(TEXT("language"), FPlatformMisc::GetDefaultLanguage());

		const FTimespan TimezoneOffset = FDateTime::UtcNow() - FDateTime::Now();
		const int32 TimezoneMinutes = (int32)TimezoneOffset.GetTotalMinutes();
		Identifiers->SetStringField(TEXT("timezone"), FString::FromInt(TimezoneMinutes));

		FString OsVersionLabel, OsSubVersionLabel;
		FPlatformMisc::GetOSVersions(OsVersionLabel, OsSubVersionLabel);
		if (!OsVersionLabel.IsEmpty())
		{
			Identifiers->SetStringField(TEXT("os"), OsVersionLabel);
		}

		if (const auto* GameViewportClient = GameInstance->GetGameViewportClient())
		{
			FVector2D ViewportSize;
			GameViewportClient->GetViewportSize(ViewportSize);
			if (ViewportSize.X != 0 && ViewportSize.Y != 0)
			{
				FString ScreenRes = FString::Printf(TEXT("%dx%d"), (int32)ViewportSize.X, (int32)ViewportSize.Y);
				Identifiers->SetStringField(TEXT("resolution"), MoveTemp(ScreenRes));
			}
		}

		switch (LoginResult->GetPlatform())
		{
		case ERHAPI_Platform::Steam:
			Identifiers->SetStringField(TEXT("platform"), TEXT("steam"));
			break;
		case ERHAPI_Platform::XboxLive:
#if PLATFORM_XSX
			switch (FXSXPlatformMisc::GetConsoleType())
			{
			case EXSXConsoleType::Lockhart:
				Identifiers->SetStringField(TEXT("platform"), TEXT("xbox_seriess"));
				break;
			case EXSXConsoleType::Anaconda:
			default:
				Identifiers->SetStringField(TEXT("platform"), TEXT("xbox_seriesx"));
				break;
			}
#else
			Identifiers->SetStringField(TEXT("platform"), TEXT("microsoft_store"));
#endif
			break;
		case ERHAPI_Platform::Epic:
			Identifiers->SetStringField(TEXT("platform"), TEXT("epicgs"));
			break;
		case ERHAPI_Platform::NintendoNaid:
		case ERHAPI_Platform::NintendoSwitch:
		case ERHAPI_Platform::NintendoPpid:
			Identifiers->SetStringField(TEXT("platform"), TEXT("nintendo_switch"));
			break;
		case ERHAPI_Platform::Psn:
#if PLATFORM_PS5
			Identifiers->SetStringField(TEXT("platform"), TEXT("playstation_5"));
#elif PLATFORM_PS4
			Identifiers->SetStringField(TEXT("platform"), TEXT("playstation_4"));
#else
			Identifiers->SetStringField(TEXT("platform"), EnumToString(LoginResult->GetPlatform()).ToLower());
#endif
			break;
		case ERHAPI_Platform::Anon:
		case ERHAPI_Platform::Basic:
		case ERHAPI_Platform::Google:
		case ERHAPI_Platform::GooglePlay:
		case ERHAPI_Platform::Apple:
		case ERHAPI_Platform::Amazon:
		case ERHAPI_Platform::Twitch:
		case ERHAPI_Platform::Rallyhere:
		case ERHAPI_Platform::Legacyname:
			Identifiers->SetStringField(TEXT("platform"), EnumToString(LoginResult->GetPlatform()).ToLower());
			break;
		}

		Content->SetObjectField(TEXT("identifiers"), MoveTemp(Identifiers));
	}
	// TODO add more props https://docs.gamesight.io/reference/measurement-api-events

	if (Parameters.TransactionID.IsEmpty())
	{
		Content->SetStringField(TEXT("transaction_id"), *Parameters.TransactionID);
	}

	FString ContentStr;
	auto Writer = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>::Create(&ContentStr);
	if (!FJsonSerializer::Serialize(Content.ToSharedRef(), Writer))
	{
		UE_LOG(LogRHGamesight, VeryVerbose, TEXT("[%s] Gamesight failed to serialize content"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}
	HttpRequest->SetContentAsString(MoveTemp(ContentStr));

	HttpRequest->OnProcessRequestComplete().BindWeakLambda(this, [](FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess)
		{
			if (!bSuccess || !HttpResponse)
			{
				UE_LOG(LogRHGamesight, Log, TEXT("[%s] Gamesight Request Failed"), ANSI_TO_TCHAR(__FUNCTION__));
				return;
			}

			if (!EHttpResponseCodes::IsOk(HttpResponse->GetResponseCode()))
			{
				UE_LOG(LogRHGamesight, Log, TEXT("[%s] Gamesight Request Failed = %d - %s"), ANSI_TO_TCHAR(__FUNCTION__), HttpResponse->GetResponseCode(), *HttpResponse->GetContentAsString());
				return;
			}

			UE_LOG(LogRHGamesight, Verbose, TEXT("[%s] Gamesight Request Success = %d - %s"), ANSI_TO_TCHAR(__FUNCTION__), HttpResponse->GetResponseCode(), *HttpResponse->GetContentAsString());
		});

	HttpRequest->ProcessRequest();
}