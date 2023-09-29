
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "Engine/DeveloperSettings.h"

#include "RH_DevIntegrationSettings.generated.h"

/** @defgroup IntegrationSettings RallyHere Integration Settings
 *  @{
 */

/**
 * @brief Settings for Sandbox Configuration.  If set, these override the defaults when the SandboxId matches the specified sandbox id
 */
USTRUCT()
struct FRH_DevSandboxConfiguration
{
	GENERATED_BODY()
	/** @brief Sandbox Name, for use with client side sandbox lookups and overrides. */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString SandboxId;

	/** @brief RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString BaseUrl;

	/** @brief RallyHere BaseURL. Determines the base URL to use when Authing for the RallyHereAPI */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString AuthUrl;

	/** @brief RallyHere Client ID. Determines the available permissions for RallyHere APIs */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString ClientId;

	/** @brief RallyHere Client secret. Must be associated with the defined client ID */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString ClientSecret;

	/** @brief Sandbox Guid for the environment to be used for updating dev portal data */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString SandboxGuid;
};

/**
 * @brief Main settings for the Integration.
 */
UCLASS(Config = EditorSettings, DefaultConfig, meta = (DisplayName = "Rally Here Integration Settings"))
class RALLYHEREEDITOR_API URH_DevIntegrationSettings : public UDeveloperSettings
{
    GENERATED_UCLASS_BODY()

public:
	/** @brief RallyHere default sandbox configuration */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity", meta = (ShowOnlyInnerProperties))
	FRH_DevSandboxConfiguration DefaultSandboxConfiguration;

	/** @brief Per-Sandbox configuration overrides. These sandboxes are alias names used for a BaseURL, and by default will automatically be looked up based on the OnlineEnvironment from the engine (Development, Certification, etc), but can be overridden via commandline (see SandboxCommandLineKeys) */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity", meta = (ShowOnlyInnerProperties))
	TArray<FRH_DevSandboxConfiguration> SandboxConfigurations;

	/** @brief Helper to get the configuration for a given sandbox by SandboxId */
	const FRH_DevSandboxConfiguration* GetSandboxConfiguration(const FString& SandboxId) const;

	/** @brief Keys to check for on the command line for an override to the default BaseURL */
    UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> BaseURLCommandLineKeys;

	/** @brief Keys to check for on the command line for an override to the default Sandbox when using SandboxConfigurations */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> SandboxCommandLineKeys;

	/** @brief Keys to check for on the command line for an override to the default OSS */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
    TArray<FString> DefaultOSSCommandLineKeys;

	/** @brief Keys to check for on the command line for an override to the default ClientId */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
	TArray<FString> ClientIdCommandLineKeys;

	/** @brief Keys to check for on the command line for an override to the default ClientSecret */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity|Commandline")
	TArray<FString> ClientSecretCommandLineKeys;

    /** @brief Online Subsystem to use for selecting the base URL sandbox.  If not provided, will use the default OSS */
    UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
    FName SandboxOSSName;

	/** @brief Defines the scope argument for the login URL for developer tools */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString LoginScopeArg;

	/** @brief Defines the audience argument for the login URL for developer tools */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString LoginAudienceArg;

	/** @brief Defines the callbackurl for the login URL for developer tools */
	UPROPERTY(EditAnywhere, Config, Category = "Connectivity")
	FString LoginCallbackURL;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Web Requests
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	/** @brief Sets the maximum number of Http Requests that can be made simultaneously. 0 = No Limit */
	UPROPERTY(EditAnywhere, Config, Category = "Web Requests")
	int32 MaxSimultaneousRequests;

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Editor Tools Config
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	/** @brief The Name for the primary FR_ItemId property on assets to scan for */
	UPROPERTY(EditAnywhere, Config, Category = "Editor Tool COngi")
	FName ItemIdPropertyName;
};

/** @} */