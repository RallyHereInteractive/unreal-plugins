
#include "RH_SettingsSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"


URH_SettingsSubsystem::URH_SettingsSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_SettingsSubsystem::GetSettingTypes(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto Request = TGetConfigSettings::Request();
	Request.AuthContext = GetAuthContext();

	auto Helper = MakeShared<FRH_SimpleQueryHelper<TGetConfigSettings>>(
		TGetConfigSettings::Delegate::CreateLambda([this](const TGetConfigSettings::Response& Resp)
			{
				CachedSettingsTypes.Empty();
				CachedSettingsTypes.Append(Resp.Content);
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->SettingsGetTypesPriority
		);

	Helper->Start(RH_APIs::GetSettingsAPI(), Request);
}