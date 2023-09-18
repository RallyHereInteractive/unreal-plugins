#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "RH_Common.h"	// for the FAuthContextPointer typedef

#include "RH_SubsystemPluginBase.generated.h"

class URH_LocalPlayerSubsystem;
class URH_GameInstanceSubsystem;

/** @defgroup SubsystemBase RallyHere Subsystem Base
 *  @{
 */

/**
 * @brief Base class for subsystem plugins.
 */
UCLASS(BlueprintType, Abstract, Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_SubsystemPluginBase : public UObject
{
	GENERATED_BODY()
public:
	/**
	* @brief Initialize the subsystem plugin.
	*/
	virtual void Initialize();
	/**
	* @brief Safely tears down the subsystem plugin.
	*/
	virtual void Deinitialize();
	/**
	 * @brief Gets the auth context for the plugin to use, override to provide functionality.
	 */
	virtual FAuthContextPtr GetAuthContext() const PURE_VIRTUAL(URH_SubsystemPluginBase::GetAuthContext, return nullptr;);
};

/**
 * @brief Local Player Subsystem Plugin.
 */
UCLASS(BlueprintType, Abstract)
class RALLYHEREINTEGRATION_API URH_LocalPlayerSubsystemPlugin : public URH_SubsystemPluginBase
{
	GENERATED_BODY()
public:
	/**
	 * @brief Gets the local players Auth Context.
	 */
	virtual FAuthContextPtr GetAuthContext() const;
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	/**
	 * @brief Gets the Local Player Subsystem.
	 */
	virtual URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem() const;
	UFUNCTION(BlueprintPure, Category = "RallyHere|GameInstanceSubsystem")
	/**
	* @brief Get the Game Instance Subsystem.
	*/
	virtual URH_GameInstanceSubsystem* GetGameInstanceSubsystem() const;
	/**
	 * @brief Base handling when the local user changes, override to provide functionality
	 */
	virtual void OnUserChanged() {}
	/**
	 * @brief Base handling when the local user changes, override to provide functionality
	 * @param [in] OldPlayerUuid The old player Uuid.
	 * @param [in] OldLocalPlayerInfo The old local player info.
	 */
	virtual void OnUserChanged(const FGuid& OldPlayerUuid, class URH_PlayerInfo* OldLocalPlayerInfo) {}
};

/**
 * @brief Game Instace Subsystem Plugin.
 */
UCLASS(BlueprintType, Abstract)
class RALLYHEREINTEGRATION_API URH_GameInstanceSubsystemPlugin : public URH_SubsystemPluginBase
{
	GENERATED_BODY()
public:
	/**
	 * @brief Gets the game instance Auth Context.
	 */
	virtual FAuthContextPtr GetAuthContext() const;
	UFUNCTION(BlueprintPure, Category = "RallyHere|GameInstanceSubsystem")
	/**
	 * @brief Get the Game Instance Subsystem.
	 */
	virtual URH_GameInstanceSubsystem* GetGameInstanceSubsystem() const;
};


/**
 * @brief A plugin that can exist on the game instance as a global cache, or optionally on the local player as a sandboxed plugin
 */
UCLASS(BlueprintType, Abstract)
class RALLYHEREINTEGRATION_API URH_SandboxedSubsystemPlugin : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	/**
	 * @brief Gets the game instance Auth Context.
	 */
	virtual FAuthContextPtr GetAuthContext() const;
	/**
	* @brief Get the Game Instance Subsystem.
	*/
	virtual URH_GameInstanceSubsystem* GetGameInstanceSubsystem() const;

protected:
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	/**
	* @brief Gets the Local Player Subsystem.
	*/
	virtual URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem() const;
};

/** @} */