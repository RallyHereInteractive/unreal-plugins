
#include "RH_SubsystemPluginBase.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"

void URH_SubsystemPluginBase::Initialize()
{
	//UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_SubsystemPluginBase::Deinitialize()
{
	//UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
}

FAuthContextPtr URH_LocalPlayerSubsystemPlugin::GetAuthContext() const
{
	const auto* Subsystem = GetLocalPlayerSubsystem();
	return Subsystem ? Subsystem->GetAuthContext() : nullptr;
}

URH_LocalPlayerSubsystem* URH_LocalPlayerSubsystemPlugin::GetLocalPlayerSubsystem() const
{
	if (IsTemplate())
	{
		return nullptr;
	}
	return CastChecked<URH_LocalPlayerSubsystem>(GetOuter());
}

FAuthContextPtr URH_GameInstanceSubsystemPlugin::GetAuthContext() const
{
	const auto* Subsystem = GetGameInstanceSubsystem();
	return Subsystem ? Subsystem->GetAuthContext() : nullptr;
}

URH_GameInstanceSubsystem* URH_GameInstanceSubsystemPlugin::GetGameInstanceSubsystem() const
{
	if (IsTemplate())
	{
		return nullptr;
	}
	return CastChecked<URH_GameInstanceSubsystem>(GetOuter());
}