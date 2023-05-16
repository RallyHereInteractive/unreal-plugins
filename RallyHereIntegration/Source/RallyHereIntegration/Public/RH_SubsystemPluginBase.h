
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "RH_Common.h"	// for the FAuthContextPointer typedef

#include "RH_SubsystemPluginBase.generated.h"

class URH_LocalPlayerSubsystem;
class URH_GameInstanceSubsystem;

UCLASS(BlueprintType, Abstract, Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_SubsystemPluginBase : public UObject
{
	GENERATED_BODY()
public:
	virtual void Initialize();
	virtual void Deinitialize();

	virtual FAuthContextPtr GetAuthContext() const PURE_VIRTUAL(URH_SubsystemPluginBase::GetAuthContext, return nullptr;);
};

UCLASS(BlueprintType, Abstract)
class RALLYHEREINTEGRATION_API URH_LocalPlayerSubsystemPlugin : public URH_SubsystemPluginBase
{
	GENERATED_BODY()
public:
	virtual FAuthContextPtr GetAuthContext() const;
	UFUNCTION(BlueprintPure, Category = "RallyHere|LocalPlayerSubsystem")
	URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem() const;
	virtual void OnUserChanged() {}
};

UCLASS(BlueprintType, Abstract)
class RALLYHEREINTEGRATION_API URH_GameInstanceSubsystemPlugin : public URH_SubsystemPluginBase
{
	GENERATED_BODY()
public:
	virtual FAuthContextPtr GetAuthContext() const;
	UFUNCTION(BlueprintPure, Category = "RallyHere|GameInstanceSubsystem")
	URH_GameInstanceSubsystem* GetGameInstanceSubsystem() const;
};