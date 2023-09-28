
#include "RH_SubsystemPluginBase.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
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

URH_GameInstanceSubsystem* URH_LocalPlayerSubsystemPlugin::GetGameInstanceSubsystem() const
{
	if (IsTemplate())
	{
		return nullptr;
	}

	const auto* LPSubsystem = GetLocalPlayerSubsystem();
	if (LPSubsystem != nullptr)
	{
		auto pGameInstance = LPSubsystem->GetLocalPlayer()->GetGameInstance();
		if (pGameInstance != nullptr)
		{
			return pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		}
	}

	return nullptr;
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

FAuthContextPtr URH_SandboxedSubsystemPlugin::GetAuthContext() const
{
	const auto* LPSubsystem = GetLocalPlayerSubsystem();
	if (LPSubsystem != nullptr)
	{
		return LPSubsystem->GetAuthContext();
	}

	const auto* Subsystem = GetGameInstanceSubsystem();
	return Subsystem ? Subsystem->GetAuthContext() : nullptr;
}

URH_GameInstanceSubsystem* URH_SandboxedSubsystemPlugin::GetGameInstanceSubsystem() const
{
	if (IsTemplate())
	{
		return nullptr;
	}

	const auto* LPSubsystem = GetLocalPlayerSubsystem();
	if (LPSubsystem != nullptr)
	{
		auto pGameInstance = LPSubsystem->GetLocalPlayer()->GetGameInstance();
		if (pGameInstance != nullptr)
		{
			return pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		}
	}

	return Cast<URH_GameInstanceSubsystem>(GetOuter());
}

URH_LocalPlayerSubsystem* URH_SandboxedSubsystemPlugin::GetLocalPlayerSubsystem() const
{
	if (IsTemplate())
	{
		return nullptr;
	}
	return Cast<URH_LocalPlayerSubsystem>(GetOuter());
}