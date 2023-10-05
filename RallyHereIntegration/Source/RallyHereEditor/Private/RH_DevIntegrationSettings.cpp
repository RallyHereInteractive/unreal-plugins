
#include "RH_DevIntegrationSettings.h"
#include "RH_Common.h"

URH_DevIntegrationSettings::URH_DevIntegrationSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("Rally Here Dev Integration Settings");

	ItemIdPropertyName = FName("ItemId");
}

const FRH_DevSandboxConfiguration* URH_DevIntegrationSettings::GetSandboxConfiguration(const FString& SandboxId) const
{
	// prefer the SandboxConfigurations array, but fall back to the deprecated array for backwards compatibility
	const auto* SandboxConfig = SandboxConfigurations.FindByPredicate([SandboxId](const FRH_DevSandboxConfiguration& Config) { return Config.SandboxId == SandboxId; });

	// if we could not find a sandbox, use the default one
	if (SandboxConfig == nullptr)
	{
		SandboxConfig = &DefaultSandboxConfiguration;
	}

	return SandboxConfig;
}