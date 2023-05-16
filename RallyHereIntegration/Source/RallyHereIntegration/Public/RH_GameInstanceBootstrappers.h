
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_Common.h"
#include "RH_SessionData.h"

#include "RH_GameInstanceBootstrappers.generated.h"

class URH_GameInstanceSubsystem;
class URH_GameInstanceSessionSubsystem;
class URH_GameInstanceServerBootstrapper;
class URH_GameInstanceClientBootstrapper;

//==================================================================

UENUM()
enum class ERHAPI_ServerBootstrapMode : uint8
{
	Disabled,
	LoginOnly,
	Scripted,
	AutoCreate,
	SIC,
	Multiplay
};

UENUM()
enum class ERHAPI_ServerBootstrapFlowStep : uint8
{
	Unstarted,
	Failed,
	LoggingIn,
	Recycling,
	QueryingTemplates,
	RunningSidecar,
	WaitingForSession,
	SyncingToSession,
	Complete
};

UCLASS(Config=RallyHereIntegration, DefaultConfig)
class URH_SidecarSettings : public UObject
{
	GENERATED_BODY()

public:
	URH_SidecarSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, Config, Category = "Session|Sidecar")
	float PollIntervalSidecar;
	UPROPERTY(EditAnywhere, Config, Category = "Session|Sidecar")
	int32 PollLogIntervalSidecar;

	UPROPERTY(EditAnywhere, Config, Category = "Session|SidecarFinalizer")
	float PollIntervalFinalizer;
	UPROPERTY(EditAnywhere, Config, Category = "Session|SidecarFinalizer")
	int32 PollLogIntervalFinalizer;
	UPROPERTY(EditAnywhere, Config, Category = "Session|SidecarFinalizer")
	int32 MaxPollCountFinalizer;
};

struct FRH_SidecarResult
{
	TOptional<FString> SessionId;
	TOptional<FString> AllocationId;

	TOptional<FString> ETag;
	TOptional<FRH_APISessionWithETag> Session;
	TOptional<FRH_APISessionTemplateWithETag> Template;

	FORCEINLINE bool IsValid() const
	{
		return AllocationId.IsSet() || SessionId.IsSet() || Session.IsSet();
	}
	FORCEINLINE bool IsComplete() const
	{
		if (Session.IsSet() && Template.IsSet() && Session->Data.Type == Template->Data.SessionType)
		{
			if (AllocationId.IsSet())
			{
				// if we had an allocation id, make sure we match
				if (const auto Instance = Session->Data.GetInstanceOrNull())
				{
					if (const auto InstanceAllocationId = Instance->GetAllocationIdOrNull())
					{
						return *InstanceAllocationId == AllocationId;
					}
				}
			}
			else if (SessionId.IsSet())
			{
				// if we only had a session id, make sure we match
				return Session->Data.SessionId == SessionId;
			}
		}
		return false;
	}
};

namespace RallyHere
{
	namespace TermSignalHandler
	{
		extern RALLYHEREINTEGRATION_API bool HasReceivedTermSignal();
	}
}

UCLASS(Config = RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceServerBootstrapper : public URH_GameInstanceSubsystemPlugin, public IRH_SessionOwnerInterface
{
	GENERATED_BODY()
public:
	URH_GameInstanceServerBootstrapper();

	virtual void Initialize() override;
	virtual void Deinitialize() override;

	void BestEffortLeaveSession();

	UFUNCTION(BlueprintGetter, Category = "Session|Bootstrapping")
	FORCEINLINE ERHAPI_ServerBootstrapFlowStep GetBootstrapStep() const { return BootstrapStep; }

	UFUNCTION(BlueprintGetter, Category = "Session|Bootstrapping")
	FORCEINLINE ERHAPI_ServerBootstrapMode GetBootstrapMode() const { return BootstrapMode; }
	static bool GetCommandlineBootstrapModeOverride(ERHAPI_ServerBootstrapMode& mode);

	// for use on default object
	FORCEINLINE static bool IsBootstrapModeEnabled()
	{
		ERHAPI_ServerBootstrapMode TempBootstrapMode = ERHAPI_ServerBootstrapMode::Disabled;
		const URH_GameInstanceServerBootstrapper* Default = GetDefault<URH_GameInstanceServerBootstrapper>();
		if (GetCommandlineBootstrapModeOverride(TempBootstrapMode))
		{
			// should be set by the above call
		}
		else if (Default != nullptr)
		{
			TempBootstrapMode = Default->GetBootstrapMode();
		}

		return TempBootstrapMode != ERHAPI_ServerBootstrapMode::Disabled;
	}

	// bootstrap flow
protected:

	UPROPERTY(VisibleInstanceOnly, Category = "Session|Bootstrapping", BlueprintGetter = GetBootstrapMode)
	ERHAPI_ServerBootstrapMode BootstrapMode;

	UPROPERTY(VisibleInstanceOnly, Category = "Session|Bootstrapping", BlueprintGetter = GetBootstrapStep)
	ERHAPI_ServerBootstrapFlowStep BootstrapStep;

	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	int32 CurrentRecycleCount;

	// SIGTERM (Unix) handlers - these do not immediately shutdown, but rather prevent recycling
	static void SetTerminationSignalHandler();
	// default engine SIGTERM / CTRL-C (Windows) handlers - these are indicating an IMMEDIATE shutdown
	void ApplicationTerminationNotify();
	void HandleAppTerminatedGameThread();

	void UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep NewStep);
	void OnBootstrappingFailed();
	void OnBootstrappingComplete();

	void BeginServerLogin();
	void OnServerLoginComplete(bool bSuccess);

	void Recycle();

	void BeginRegistration();
	void OnRegistrationSidecarComplete(bool bSuccess, FRH_SidecarResult Result);
	void OnSessionInstanceCreationCompleted(bool bSuccess, URH_JoinedSession* RHSession);

	void SyncToSession();
	void OnSyncToSessionComplete(bool bSuccess);

	void OnSessionUpdated(URH_SessionView* Session);
	void OnSessionNotFound(URH_SessionView* Session);

	void CleanupAfterInstanceRemoval();
	void OnCleanupSessionSyncComplete(bool bSuccess);
	bool ShouldRecycleAfterCleanup() const;

	void InitServerMetrics();
	void OnServerMetricsInitComplete(bool bSuccess);

	// IRH_SessionOwnerInterface support
public:
	virtual FAuthContextPtr GetAuthContext() const { return AuthContext; };

	virtual void ImportAPISession(const FRH_APISessionWithETag& Session);
	virtual void ImportAPITemplate(const FRH_APISessionTemplateWithETag& Template);

	virtual void ReconcileAPISessions(const TArray<FRH_APISessionWithETag>& SessionsModified, const TArray<FString>& SessionsNotModified, bool bOnlineOnly = true) override;
	virtual void ReconcileAPITemplates(const TArray<FRH_APISessionTemplateWithETag>& TemplatesModified, const TArray<FString>& TemplatesNotModified, bool bOnlineOnly = true) override;

	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;
	
	virtual IOnlineSubsystem* GetOSS() const { return nullptr; }

	virtual FAuthContextPtr GetSessionAuthContext() const override { return GetAuthContext(); }

	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const;

	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRH_SessionTemplate& Template) const;

private:
	FAuthContextPtr AuthContext;

	FRH_SidecarResult SidecarResult;

	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, FRH_SessionTemplate> Templates;	// server may have the full list of templates

	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	URH_OnlineSession* RHSession;	// simplying assumption - single session for dedicated server

	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	FString DefaultAutoCreateSessionType;

	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	ERHAPI_ServerBootstrapMode DefaultBootstrapMode;

	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	int32 MaxRecycleCount;

	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	bool bMultiSessionServerMode;

	// Whether to intercept SIGTERM and prevent passing it to engine handler (which will exit immediately)
	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	bool bReplaceSIGTERMHandler;
};

//==================================================================

UCLASS(Config = RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceClientBootstrapper : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	virtual void Initialize() override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Session")
	void CreateOfflineSession();

};