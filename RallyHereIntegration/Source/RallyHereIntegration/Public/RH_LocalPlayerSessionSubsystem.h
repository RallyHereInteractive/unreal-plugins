
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "SessionAPI.h"
#include "Delegates/Delegate.h"
#include "Delegates/DelegateCombinations.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_SessionData.h"
#include "RH_SessionBrowser.h"
#include "RH_Polling.h"

#include "RH_LocalPlayerSessionSubsystem.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnLoginPollSessionsComplete, bool);

class URH_LocalPlayerSubsystem;

UCLASS(Config=RallyHereIntegration, DefaultConfig, Within = RH_LocalPlayerSubsystem)
class RALLYHEREINTEGRATION_API URH_LocalPlayerSessionSubsystem : public URH_LocalPlayerSubsystemPlugin, public IRH_SessionOwnerInterface
{
    GENERATED_BODY()
public:
	URH_LocalPlayerSessionSubsystem();

    virtual void Initialize() override;
    virtual void Deinitialize() override;

	virtual FAuthContextPtr GetSessionAuthContext() const override { return GetAuthContext(); }

	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const override
	{
		auto ptr = Sessions.Find(SessionId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	UFUNCTION(BlueprintPure, Category = "Session")
	TArray<URH_SessionView*> GetSessionsByType(const FString& Type) const;
	UFUNCTION(BlueprintPure, Category = "Session")
	TArray<URH_InvitedSession*> GetInvitedSessionsByType(const FString& Type) const;
	UFUNCTION(BlueprintPure, Category = "Session")
	TArray<URH_JoinedSession*> GetJoinedSessionsByType(const FString& Type) const;

	// accessors useful for "only one of" type configurations
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE URH_SessionView* GetFirstSessionByType(const FString& Type) const
	{
		auto sessions = GetSessionsByType(Type);
		return sessions.Num() > 0 ? sessions[0] : nullptr;
	}
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE URH_InvitedSession* GetFirstInvitedSessionByType(const FString& Type) const
	{
		auto sessions = GetInvitedSessionsByType(Type);
		return sessions.Num() > 0 ? sessions[0] : nullptr;
	}
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE URH_JoinedSession* GetFirstJoinedSessionByType(const FString& Type) const
	{
		auto sessions = GetJoinedSessionsByType(Type);
		return sessions.Num() > 0 ? sessions[0] : nullptr;
	}
	UFUNCTION(BlueprintPure, Category = "Session")
	URH_JoinedSession* GetFirstActiveSession() const;

	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE TArray<URH_SessionView*> GetSessions() const { TArray<URH_SessionView*> result; Sessions.GenerateValueArray(result); return result; }
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE bool IsInSession(const FString& SessionId) { return Sessions.Contains(SessionId); }

	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;
	
	virtual IOnlineSubsystem* GetOSS() const override;

	// Wrapper kickoff calls
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Create Or Join Sesion by Type", AutoCreateRefTerm = "CreateParams,Delegate"))
	void BLUEPRINT_CreateOrJoinSessionByType(const FRH_SessionCreateParams& CreateParams, const FRH_OnSessionUpdatedDynamicDelegate& Delegate)
	{
		CreateOrJoinSessionByType(CreateParams, Delegate);
	}
	void CreateOrJoinSessionByType(const FRH_SessionCreateParams& CreateParams, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock())
	{
		URH_OnlineSession::CreateOrJoinByType(CreateParams, this, Delegate);
	}
	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Join Session By Id", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_JoinSessionById(const FString& SessionId, const FRH_OnSessionUpdatedDynamicDelegate& Delegate)
	{
		JoinSessionById(SessionId, Delegate);
	}
	void JoinSessionById(const FString& SessionId, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock())
	{
		URH_OnlineSession::JoinById(SessionId, this, Delegate);
	}

	// intentionally public for offline usage
	virtual void ImportAPISession(const FRH_APISessionWithETag& Session) override;
	virtual void ImportAPITemplate(const FRH_APISessionTemplateWithETag& Session) override;

	virtual void ReconcileAPISessions(const TArray<FRH_APISessionWithETag>& SessionsModified, const TArray<FString>& SessionsNotModified, bool bOnlineOnly = true) override;
	virtual void ReconcileAPITemplates(const TArray<FRH_APISessionTemplateWithETag>& TemplatesModified, const TArray<FString>& TemplatesNotModified, bool bOnlineOnly = true) override;

	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRH_SessionTemplate& Template) const;
	UFUNCTION(BlueprintPure, Category = "Session")
	FORCEINLINE TArray<FRH_SessionTemplate> GetTemplates() const { TArray<FRH_SessionTemplate> result; Templates.GenerateValueArray(result); return result; }

	UFUNCTION(BlueprintCallable, Category = "Session", meta = (DisplayName = "Search for Sessions", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchForSessions(const FRH_SessionBrowserSearchParams& params, const FRH_OnSessionSearchCompleteDynamicDelegate& Delegate)
	{
		SearchForSessions(params, Delegate);
	}
	void SearchForSessions(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDelegateBlock Delegate = FRH_OnSessionSearchCompleteDelegateBlock());

	// simple polling interface
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StartPolling();
	UFUNCTION(BlueprintCallable, Category = "Session")
	void StopPolling();
	void PollForUpdate(const FRH_PollCompleteFunc& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Session")
	void ForcePollForUpdate();

	UPROPERTY(BlueprintReadWrite, Category = "Session", meta = (DisplayName = "On Session Updated"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionUpdatedDelegate;
	UPROPERTY(BlueprintReadWrite, Category = "Session", meta = (DisplayName = "On Session Added"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionAddedDelegate;
	UPROPERTY(BlueprintReadWrite, Category = "Session", meta = (DisplayName = "On Session Removed"))
	FRH_OnSessionUpdatedMulticastDynamicDelegate BLUEPRINT_OnSessionRemovedDelegate;

	FRH_OnSessionUpdatedMulticastDelegate OnSessionUpdatedDelegate;
	FRH_OnSessionUpdatedMulticastDelegate OnSessionAddedDelegate;
	FRH_OnSessionUpdatedMulticastDelegate OnSessionRemovedDelegate;

	FOnLoginPollSessionsComplete OnLoginPollSessionsCompleteDelegate;

private:
	URH_SessionView* CreateOrUpdateRHSession(const FRH_APISessionWithETag& Session, const ERHAPI_SessionPlayerStatus& LocalPlayerStatus);

	bool LocalPlayerStatusFromSession(const FRHAPI_Session& Session, ERHAPI_SessionPlayerStatus& Status) const;

	// Note - Remove calls will attempt to remove the session without attempting to leave the RH session.  To leave a session, call the LeaveSession variants
	// uses ID as the primary key rather than the Session object because we may need to remove something that was not fully joined
	void RemoveSessionById(const FString& SessionId);
	virtual void RemoveSession(const URH_SessionView* Session) { RemoveSessionById(Session->GetSessionId()); }

	void OnExpirationComplete(URH_SessionView* Session);

	// returns false if deferred or dropped, true if it can be processed
	bool PreprocessAPISessionImport(const FRHAPI_Session& Session, ERHAPI_SessionPlayerStatus& Status);

	virtual void OnUserChanged() override;
	void InitPropertiesWithDefaultValues();

	void HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams);

	FRH_AutoPollerPtr Poller;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	TMap<FString, FRH_SessionTemplate> Templates;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	TMap<FString, URH_SessionView*> Sessions;			// used to track sessions we are in

	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	TMap<FString, URH_SessionView*> ExpiringSessions;	// used to track sessions objects that may be in the process of cleaning themselves up

	TMap<FString, FRH_APISessionWithETag> DeferredSessionUpdates;	// used to track session updates we could not process for some reason, such as race conditions

	void HandlePollAllSessionsComplete(bool bSuccess, TArray<URH_SessionView*> SessionViews);
};
