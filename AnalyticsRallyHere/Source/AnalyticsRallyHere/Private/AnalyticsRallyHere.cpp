// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "AnalyticsRallyHere.h"

#include "HttpModule.h"
#include "Analytics.h"

IMPLEMENT_MODULE( FRH_Analytics, AnalyticsRallyHere );

void FRH_Analytics::StartupModule()
{
	// Make sure http is loaded so that we can flush events during module shutdown
	FModuleManager::LoadModuleChecked<FHttpModule>("HTTP");
}

void FRH_Analytics::ShutdownModule()
{
}

TSharedPtr<IAnalyticsProvider> FRH_Analytics::CreateAnalyticsProvider(const FAnalyticsProviderConfigurationDelegate& GetConfigValue) const
{
	if (GetConfigValue.IsBound())
	{
		Config ConfigValues;
		ConfigValues.APIKey = GetConfigValue.Execute(Config::GetKeyNameForAPIKey(), true);
		ConfigValues.APIServer = GetConfigValue.Execute(Config::GetKeyNameForAPIServer(), true);
		return CreateAnalyticsProvider(ConfigValues);
	}
	else
	{
		UE_LOG(LogAnalytics, Warning, TEXT("CreateAnalyticsProvider called with an unbound delegate"));
	}
	return NULL;
}

