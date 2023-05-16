
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "SessionAPI.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_SessionData.h"

#include "RH_GameInstanceSessionSubsystem.generated.h"

// #MRTODO - add disconnect handling to auto-unsync session to cleanup state
// #MRTODO - listen for session update and if local player(s) are removed from session, unsync and require a resync
// #MRTODO - handle platform session restrictions

class URH_GameInstanceSubsystem;
class URH_GameInstanceSessionSubsystem;
class URH_GameInstanceServerBootstrapper;
class URH_GameInstanceClientBootstrapper;

#define RH_SESSION_PARAMETER_NAME (TEXT("RHSessionId="))


UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GameInstanceSessionSyncDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_GameInstanceSessionSyncDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_GameInstanceSessionSyncBlock, FRH_GameInstanceSessionSyncDelegate, FRH_GameInstanceSessionSyncDynamicDelegate, bool)


UCLASS(Config=RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceSessionSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	virtual void Initialize() override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Sync to Session", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SyncToSession(URH_JoinedSession* SessionInfo, const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { SyncToSession(SessionInfo, Delegate); }
	void SyncToSession(URH_JoinedSession* SessionInfo, FRH_GameInstanceSessionSyncBlock Delegate = FRH_GameInstanceSessionSyncBlock());

	const FRHAPI_Instance* GetInstance() const;

	bool IsLocallyHosted(const FRHAPI_Instance& Instance) const;

	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	bool IsLocallyHosted(const URH_JoinedSession* Session) const { return Session->GetInstanceData() ? IsLocallyHosted(*Session->GetInstanceData()) : false; }
	bool IsPlayerLocal(const FRHAPI_SessionPlayer& Player) const;

	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE URH_JoinedSession* GetDesiredSession() const { return DesiredSession; }
	UFUNCTION(BlueprintGetter, Category = "Session|Instance")
	FORCEINLINE URH_JoinedSession* GetActiveSession() const { return ActiveSession; }

	UFUNCTION(BlueprintCallable, Category = "Session|Instance")
	bool IsReadyToChangeMaps(const URH_JoinedSession* Session) const;

	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Start Join Instance Flow", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { return StartJoinInstanceFlow(Delegate); }
	bool StartJoinInstanceFlow(FRH_GameInstanceSessionSyncBlock Delegate = FRH_GameInstanceSessionSyncBlock());
	UFUNCTION(BlueprintCallable, Category = "Session|Instance", meta = (DisplayName = "Start Leave Instance Flow", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncDynamicDelegate& Delegate) { StartLeaveInstanceFlow(bAlreadyDisconnected, bCheckDesired, Delegate); }
	void StartLeaveInstanceFlow(bool bAlreadyDisconnected = false, bool bCheckDesired = false, FRH_GameInstanceSessionSyncBlock Delegate = FRH_GameInstanceSessionSyncBlock());

protected:
	UPROPERTY(BlueprintGetter = GetDesiredSession, Transient, Category = "Session|Instance")
	URH_JoinedSession*	DesiredSession;	// data we want to sync to
	UPROPERTY(BlueprintGetter = GetActiveSession, Transient, Category = "Session|Instance")
	URH_JoinedSession*	ActiveSession;	// instance we are synced to

	void OnMapLoadComplete(UWorld* pWorld);
	void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);
	void OnTravelFailure(UWorld* pWorld, ETravelFailure::Type FailureType, const FString& ErrorString);

	bool GenerateJoinURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const;
	bool GenerateHostURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const;
};
