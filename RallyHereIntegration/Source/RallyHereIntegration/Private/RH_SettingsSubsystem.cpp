#include "RH_SettingsSubsystem.h"

URH_SettingsSubsystem::URH_SettingsSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_SettingsSubsystem::GetSettingTypes(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto Request = TGetConfigSettings::Request();
	Request.AuthContext = GetAuthContext();

	if (!TGetConfigSettings::DoCall(RH_APIs::GetSettingsAPI(), Request, TGetConfigSettings::Delegate::CreateLambda([this, Delegate](const TGetConfigSettings::Response& Resp)
		{
			CachedSettingsTypes.Empty();
			CachedSettingsTypes.Append(Resp.Content);
			//Delegate.ExecuteIfBound(true);
		})))
	{
		//Delegate.ExecuteIfBound(false);
	}
}