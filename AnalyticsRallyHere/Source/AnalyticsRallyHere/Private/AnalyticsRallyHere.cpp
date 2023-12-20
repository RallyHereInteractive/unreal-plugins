// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "AnalyticsRallyHere.h"

#include "HttpModule.h"
#include "Analytics.h"

DEFINE_LOG_CATEGORY(LogAnalyticsRallyHere);

IMPLEMENT_MODULE( FRH_Analytics, AnalyticsRallyHere );

void FRH_Analytics::StartupModule()
{
	// Make sure http is loaded so that we can flush events during module shutdown
	FModuleManager::LoadModuleChecked<FHttpModule>("HTTP");

	// Make sure rally here integration is loaded so we can get the endpoint to emit to
	FModuleManager::LoadModuleChecked<FHttpModule>("RallyHereIntegration");
}

void FRH_Analytics::ShutdownModule()
{
}

TSharedPtr<IAnalyticsProvider> FRH_Analytics::CreateAnalyticsProvider(const FAnalyticsProviderConfigurationDelegate& GetConfigValue) const
{
	if (GetConfigValue.IsBound())
	{
		FAnalyticsET::Config ConfigValues;
		ConfigValues.APIServerET = GetConfigValue.Execute(FAnalyticsET::Config::GetKeyNameForAPIServer(), true);
		return CreateAnalyticsProvider(ConfigValues);
	}
	else
	{
		UE_LOG(LogAnalytics, Warning, TEXT("CreateAnalyticsProvider called with an unbound delegate"));
	}
	return NULL;
}

