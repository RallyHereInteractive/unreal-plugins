#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAuthContext.h"
#include "PresenceAPI.h"
#include "Engine/EngineTypes.h"
#include "RH_Common.h"
#include "UsersAPI.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"

#include "RH_LocalPlayerPresenceSubsystem.generated.h"

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_LocalPlayerPresenceSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()
public:
	
	virtual void Initialize() override;
	virtual void Deinitialize() override;
	
	void UpdatePlayerPresenceSelf(RallyHereAPI::FRequest_UpdatePlayerPresenceSelf& Request, const RallyHereAPI::FDelegate_UpdatePlayerPresenceSelf& Delegate);

	/** \defgroup Raw call accessors
	 * @{
	 */
	void GetPlayerPresenceSelf(RallyHereAPI::FRequest_GetPlayerPresenceSelf& Request, const RallyHereAPI::FDelegate_GetPlayerPresenceSelf& Delegate);
	void GetSettings(RallyHereAPI::FRequest_GetPresenceSettings& Request, const RallyHereAPI::FDelegate_GetPresenceSettings& Delegate);
	/** @} */

	UFUNCTION(BlueprintSetter, Category = "Presence")
	void SetDesiredStatus(ERHAPI_OnlineStatus NewStatus) { DesiredStatus = NewStatus; RefreshStatus(); }
	UFUNCTION(BlueprintGetter, Category = "Presence")
	ERHAPI_OnlineStatus GetDesiredStatus() const { return DesiredStatus; }

	UFUNCTION(BlueprintCallable, Category = "Presence")
	void StartRefreshTimer();
	UFUNCTION(BlueprintCallable, Category = "Presence")
	void StopRefreshTimer();
	
	void RefreshStatus();
	void PollRefreshStatus(const FRH_PollCompleteFunc& Delegate);
	
private:
	virtual void OnUserChanged() override;
	void InitPropertiesWithDefaultValues();

	FRH_AutoPollerPtr Poller;

	UPROPERTY(BlueprintGetter = GetDesiredStatus, BlueprintSetter = SetDesiredStatus, Category = "Presence")
	ERHAPI_OnlineStatus DesiredStatus;
};
