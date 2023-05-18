
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "Engine/DeveloperSettings.h"

#include "RH_IntegrationSettings.generated.h"

USTRUCT()
struct FRH_SandboxConfiguration
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString SandboxId;
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString BaseUrl;
};

UCLASS(Config = RallyHereIntegration, DefaultConfig, meta = (DisplayName = "Rally Here Integration Settings"))
class RALLYHEREINTEGRATION_API URH_IntegrationSettings : public UDeveloperSettings
{
    GENERATED_UCLASS_BODY()

public:
    UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
    FString BaseUrl;

	UPROPERTY(EditAnywhere, Config, Category = "Connectivity", meta=(ShowOnlyInnerProperties))
	TArray<FRH_SandboxConfiguration> SandboxURLs;

    /** RallyHere Client ID. Determines the available permissions for RallyHere APIs */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
    FString ClientId;

	/** RallyHere Client secret. Must be associated with the defined client ID */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString ClientSecret;

    UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> BaseURLCommandLineKeys;

	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> SandboxCommandLineKeys;

	/** Keys to check for on the command line for an override to the default OSS */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> DefaultOSSCommandLineKeys;

	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
	TArray<FString> ClientIdCommandLineKeys;

	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
	TArray<FString> ClientSecretCommandLineKeys;

    /** Online Subsystem to use for selecting the base URL sandbox.  If not provided, will use the default OSS */
    UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
    FName SandboxOSSName;
};
