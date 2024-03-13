// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Misc/Guid.h"
#include "Templates/SharedPointer.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_GameHostProviderInterface.h"

#include "RH_Common.h"
#include "RH_SessionData.h"

#include "RH_GameInstanceBootstrappers.generated.h"

class URH_GameInstanceSubsystem;
class URH_GameInstanceSessionSubsystem;
class URH_GameInstanceServerBootstrapper;
class URH_GameInstanceClientBootstrapper;

 /** @ingroup GameInstance
  * @brief @brief An enum for the handled bootstrapping modes.
  */
UENUM()
enum class ERH_ServerBootstrapMode : uint8
{
	/** We are in an unknown mode which cannot be handled internally to this subsystem, instead rely on the GameHostProvider to handle the mode */
	GameHostProvider,
	/** Bootstrapping is disabled entirely */
	Disabled,
	/** Bootstrapping is restricted to login only */
	LoginOnly,
	/** Special type of GameHostProvider mode, which has a fallback provider if needed and will allocate itself a session */
	AutoCreate,
};

/** @ingroup GameInstance
 * @brief @brief An enum for the steps in the bootstrapping flow.
 */
UENUM()
enum class ERH_ServerBootstrapFlowStep : uint8
{
	/** Bootstrapping has not been started */
	Unstarted,
	/** Bootstrapping has failed */
	Failed,
	/** Bootstrapping is logging into the RallyHere API */
	LoggingIn,
	/** Bootstrapping is doing an internal recycle of the server state (note: initial boot uses this state to initialize as well) */
	Recycling,
	/** Bootstrapping is registering the server with the provider */
	Registration,
	/** Bootstrapping has received an allocation and is attempting to lookup the corresponding session */
	WaitingForSession,
	/** Bootstrapping has retrieved the session, validated it, and is attempting to synchronize the GameInstanceSessionSubsystem to that session */
	SyncingToSession,
	/** Bootstrapping has completed (though may be recycled in the future) */
	Complete
};

/** @ingroup GameInstance
 * @brief @brief An settings object that contains the settings for the bootstrapping flow.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class URH_BootstrappingSettings : public UObject
{
	GENERATED_BODY()

public:
	/** @brief Default constructor. */
	URH_BootstrappingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** @brief The poll interval for the finalizer that looks up the session based on the allocation info from the provider */
	UPROPERTY(EditAnywhere, Config, Category = "Session|Bootstrapping Finalizer")
	float PollIntervalFinalizer;

	/** @brief How often to log progress on the finalizer poll (number of polls between logs) */
	UPROPERTY(EditAnywhere, Config, Category = "Session|Bootstrapping Finalizer")
	int32 PollLogIntervalFinalizer;

	/** @brief Maximum number of polls on the finalizer before it is determined to be a failure */
	UPROPERTY(EditAnywhere, Config, Category = "Session|Bootstrapping Finalizer")
	int32 MaxPollCountFinalizer;
};

/** @ingroup GameInstance
 * @brief @brief An result object that contains the accumulated results for the bootstrapping flow.
 */
struct FRH_BootstrappingResult
{
	/** @brief Allocation info from the provider */
	FRH_GameHostAllocationInfo AllocationInfo;

	/** @brief Etag for the session */
	TOptional<FString> ETag;
	/** @brief Session data */
	TOptional<FRH_APISessionWithETag> Session;
	/** @brief Session template */
	TOptional<FRHAPI_SessionTemplate> Template;

	/** @brief Default constructor. */
	FRH_BootstrappingResult()
	{

	}

	/** @brief Constructor with Host Allocation Info */
	FRH_BootstrappingResult(const FRH_GameHostAllocationInfo& InAllocationInfo)
		: AllocationInfo(InAllocationInfo)
	{
	}

	/** @brief Whether or not this result is valid (it has the required IDs to be finalized) */
	FORCEINLINE bool IsValid() const
	{
		return AllocationInfo.AllocationId.IsSet() || AllocationInfo.SessionId.IsSet() || Session.IsSet();
	}
	/** @brief Whether or not this result is complete (it has valid and matching session information) */
	FORCEINLINE bool IsComplete() const
	{
		if (Session.IsSet() && Template.IsSet() && Session->Data.Type == Template->SessionType)
		{
			if (AllocationInfo.AllocationId.IsSet())
			{
				// if we had an allocation id, make sure we match
				if (const auto Instance = Session->Data.GetInstanceOrNull())
				{
					if (const auto InstanceAllocationId = Instance->GetAllocationIdOrNull())
					{
						return *InstanceAllocationId == AllocationInfo.AllocationId.GetValue();
					}
				}
			}
			else if (AllocationInfo.SessionId.IsSet())
			{
				// if we only had a session id, make sure we match
				return Session->Data.SessionId == AllocationInfo.SessionId.GetValue();
			}
		}
		return false;
	}
};

namespace RallyHere
{
	namespace TermSignalHandler
	{
		/** @brief Whether or not a soft stop has been requested */
		extern RALLYHEREINTEGRATION_API bool IsSoftStopRequested();
	}
}

/** @ingroup GameInstance
 * @brief Server Bootstrapper for the Game Instance.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceServerBootstrapper : public URH_GameInstanceSubsystemPlugin, public IRH_SessionOwnerInterface, public FTickableGameObject
{
	GENERATED_BODY()
public:
	URH_GameInstanceServerBootstrapper();

	/** @brief Initialize the bootstrapper */
	virtual void Initialize() override;
	/** @brief Deinitialize the bootstrapper */
	virtual void Deinitialize() override;

	/** @brief Get the current bootstrapping step */
	UFUNCTION(BlueprintGetter, Category = "Session|Bootstrapping")
	FORCEINLINE ERH_ServerBootstrapFlowStep GetBootstrapStep() const { return BootstrapStep; }

	/** @brief Get the current bootstrapping mode */
	UFUNCTION(BlueprintGetter, Category = "Session|Bootstrapping")
	FORCEINLINE ERH_ServerBootstrapMode GetBootstrapMode() const { return BootstrapMode; }
	static bool GetCommandlineBootstrapModeOverride(ERH_ServerBootstrapMode& mode);

	/** @brief static helper to determine if bootstrapping is enabled */
	FORCEINLINE static bool IsBootstrapModeEnabled()
	{
		ERH_ServerBootstrapMode TempBootstrapMode = ERH_ServerBootstrapMode::Disabled;
		const URH_GameInstanceServerBootstrapper* Default = GetDefault<URH_GameInstanceServerBootstrapper>();
		if (GetCommandlineBootstrapModeOverride(TempBootstrapMode))
		{
			// should be set by the above call
		}
		else if (Default != nullptr)
		{
			TempBootstrapMode = Default->GetBootstrapMode();
		}

		return TempBootstrapMode != ERH_ServerBootstrapMode::Disabled;
	}

	/**
	* @brief Determines the join parameters to be used for a session that was bootstrapped
	* @param [in] PublicConnStr The public connection string to use
	* @param [in] PrivateConnStr The private connection string to use
	* @return Whether or not the join parameters were successfully determined from the allocation info
	*/
	bool DetermineJoinParameters(FString& PublicConnStr, FString& PrivateConnStr);

protected:

	/** Bootstrap Mode being used */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Bootstrapping", BlueprintGetter = GetBootstrapMode)
	ERH_ServerBootstrapMode BootstrapMode;

	/** Current Bootstrap Step */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session|Bootstrapping", BlueprintGetter = GetBootstrapStep)
	ERH_ServerBootstrapFlowStep BootstrapStep;

	/** The current recycle count (note that the initial boot is considered the first recycle, so this is effectively 1-based) */
	UPROPERTY(VisibleInstanceOnly, Transient, Category = "Session")
	int32 CurrentRecycleCount;

	/** @brief Set the SIGTERM(Unix) handlers that allow intercepting the SIGTERM signal to trigger a soft stop */
	static void SetTerminationSignalHandler();
	/** @brief Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - will defer to game thread if needed */
	virtual void ApplicationTerminationNotify();
	/** @brief Callback binding for the default engine SIGTERM / CTRL - C(Windows) handlers - these are indicating an IMMEDIATE shutdown - runs in the game thread */
	virtual void HandleAppTerminatedGameThread();

	/** @brief Fallback routine that does its best to leave the session we have loaded */
	virtual void BestEffortLeaveSession();

	/**
	* @brief Updates the current bootstrapping step, and handles step change logic
	* @param [in] NewStep The new step to transition to
	*/
	virtual void UpdateBootstrapStep(ERH_ServerBootstrapFlowStep NewStep);

	/**
	* @brief Bootstrapping Flow [Failed] - trigger bootstrapping failure and handles failure logic
	*/
	virtual void OnBootstrappingFailed();
	/**
	* @brief Bootstrapping Flow [Complete] - trigger bootstrapping complete and handles completion logic.  Note that recycling may start a new bootstrapping flow
	*/
	virtual void OnBootstrappingComplete();

	/**
	* @brief Bootstrapping Flow [LoggingIn] - begin the login process to the RallyHere API
	*/
	virtual void BeginServerLogin();
	/**
	* @brief Bootstrapping Flow [Login] - completion callback for RallyHere API login
	* @param [in] bSuccess Whether or not the login was successful
	*/
	virtual void OnServerLoginComplete(bool bSuccess, const FRH_ErrorInfo& ErrorInfo = FRH_ErrorInfo());

	/**
	* @brief Bootstrapping Flow [Recycle] - start a new recycle loop
	*/
	virtual void Recycle();

	/**
	* @brief Bootstrapping Flow [Registration][Allocation][AutoCreate] - start the process of registering with the game host provider
	*/
	virtual void BeginRegistration();

	/**
	* @brief Bootstrapping Flow [Registration][Allocation][AutoCreate] - begin connecting to the provider
	*/
	virtual void BeginConnecting();
	/**
	* @brief Bootstrapping Flow [Registration][Allocation][AutoCreate] - completion callback for connecting to the provider
	* @param [in] bSuccess Whether or not the connection was successful
	*/
	virtual void OnConnectComplete(bool bSuccess);
	/**
	* @brief Bootstrapping Flow [Registration][Allocation] - register with provider and wait for an allocation
	*/
	virtual void BeginRegister();
	/**
	* @brief Bootstrapping Flow [Registration][Allocation] - completion callback for registering with the provider
	* @param [in] bSuccess Whether or not the connection was successful
	*/
	virtual void OnRegisterComplete(bool bSucess);
	/**
	* @brief Bootstrapping Flow [Registration][Allocation] - completion callback for allocation being ready
	* @param [in] Status Whether or not the allocation was successful or had an error
	* @param [in] AllocationInfo The allocation info that was produced
	*/
	virtual void OnAllocationComplete(ERH_AllocationStatus Status, const FRH_GameHostAllocationInfo& AllocationInfo);
	/**
	* @brief Bootstrapping Flow [Registration][AutoCreate] - begin a reservation so that the provider can know about this server
	*/
	virtual void BeginReservation();
	/**
	* @brief Bootstrapping Flow [Registration][AutoCreate] - completion callback for reservation creation
	* @param [in] bSuccess Whether or not the reservation was successful
	*/
	virtual void OnReservationComplete(bool bSuccess);
	/**
	* @brief Bootstrapping Flow [Registration][AutoCreate] - inform the provider that this server is self-allocated
	*/
	virtual void BeginSelfAllocate();
	/**
	* @brief Bootstrapping Flow [Registration][AutoCreate] - completion callback for self allocation
	* @param [in] bSuccess Whether or not the self allocation was successful
	*/
	virtual void OnSelfAllocateComplete(bool bSuccess);

	/**
	* @brief Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result.  Checks the result and then checks for an instance.  Either creates and instance, or forwards on to OnSessionInstanceCreationCompleted()
	* @param [in] bSuccess Whether or not the registration was successful
	* @param [in] Result The bootstrapping result that was produced
	*/
	virtual void OnRegistrationFinalizerComplete(bool bSuccess, const FRH_BootstrappingResult& Result);

	/**
	* @brief Bootstrapping Flow [WaitingForSession] - callback for when registration process has completed and produced a bootstrapping result
	* @param [in] bSuccess Whether or not the instance was successfully created
	* @param [in] CreatedRHSession The session that was created with an instance
	* @param [in] ErrorInfo Error information about the instance creation
	*/
	virtual void OnSessionInstanceCreationCompleted(bool bSuccess, URH_SessionView* CreatedRHSession, const FRH_ErrorInfo& ErrorInfo);

	/**
	* @brief Bootstrapping Flow [SyncingToSession] - begin the process of synchronizing the session state into RH_GameInstanceSessionSubsystem
	*/
	virtual void SyncToSession();
	/**
	* @brief Bootstrapping Flow [SyncingToSession] - completiong callback for session sync
	* @param [in] bSuccess Whether or not the session sync was successful
	*/
	virtual void OnSyncToSessionComplete(URH_JoinedSession* Session, bool bSuccess, const FString& Error);

	/**
	* @brief Notification callback that the session we have synced to was updated
	* @param [in] Session The updated session
	*/
	virtual void OnSessionUpdated(URH_SessionView* Session);
	/**
	* @brief Notification callback that the session we have synced to was not found
	* @param [in] Session The session that was not found
	*/
	virtual void OnSessionNotFound(URH_SessionView* Session);

	/**
	* @brief Utility function to clean up state after an instance removal and attempt to recycle
	*/
	virtual void CleanupAfterInstanceRemoval();
	/**
	* @brief Completion callback for session and instance cleanup
	*/
	virtual void OnCleanupSessionSyncComplete(URH_JoinedSession* Session, bool bSuccess, const FString& Error);
	/**
	* @brief Gets whether we should recycle the state after cleanup
	*/
	virtual bool ShouldRecycleAfterCleanup() const;

	/**
	* @brief Callback for when a refresh token expires
	*/
	virtual void OnRefreshTokenExpired(FSimpleDelegate CompleteCallback);

	// GameHostProvider flow
public:
	/**
	* @brief bound callback triggered to provide stats to the game host provider
	*/
	virtual void OnGameHostProviderStats(FRH_GameHostProviderStats& Stats);
	/**
	* @brief callback triggered to request stats if default implementation is not sufficient
	*/
	FRH_GameHostProviderStatsRequested OnGameHostProviderStatsRequested;
	/**
	* @brief Tick function
	* @param [in] DeltaTime The time since the last tick
	*/
	virtual void Tick(float DeltaTime) override;
	/**
	* @brief Whether or not to tick this object
	*/
	virtual bool IsTickable() const override;
	/**
	* @brief What stat id to use to report for the tick
	*/
	virtual TStatId GetStatId() const override;

public:
	/**
	* @brief Provides the auth context this bootstrapper owns
	*/
	virtual FAuthContextPtr GetAuthContext() const { return AuthContext; };

	/**
	 * @brief Get the Analytics Provider
	 */
	virtual TSharedPtr<class IAnalyticsProvider> GetAnalyticsProvider() const { return AnalyticsProvider; }

	/** @brief Get the current bootstrapping mode */
	UFUNCTION(BlueprintGetter, Category = "Session")
	virtual URH_OnlineSession* GetSession() const { return RHSession; }

	// IRH_SessionOwnerInterface support
	/**
	* Gets the auth context to use for API calls for the session owner.
	*/
	virtual FAuthContextPtr GetSessionAuthContext() const override { return GetAuthContext(); }
	/**
	* @brief Imports a session object from the API into the owner (ex: from polling).
	* @param [in] Session The Session to import.
	*/
	virtual void ImportAPISession(const FRH_APISessionWithETag& Session);
	/**
	* @brief Imports the template into the owner's template list (ex: from polling).
	* @param [in] TemplateWrapper The Template to import.
	*/
	virtual void ImportAPITemplate(const FRHAPI_SessionTemplate& Template);
	/**
	 * @brief Updates the list of sessions to only those that are active.
	 * @param [in] SessionIds The list of sessions that we are reconciling against.
	 * @param [in] ETag The ETag to use for the update.
	*/
	virtual void ReconcileAPISessions(const TArray<FString>& SessionIds, const TOptional<FString>& ETag = TOptional<FString>()) override;
	/**
	 * @brief Updates the list of session templates to those that are active.
	 * @param [in] InTemplates The list of templates that we are reconciling against.
	 * @param [in] ETag The ETag to use for the update.
	*/
	virtual void ReconcileAPITemplates(const TArray<FString>& InTemplates, const TOptional<FString>& ETag = TOptional<FString>()) override;
	/**
	* @brief Gets the PlayerInfo Subsystem.
	*/
	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const;
	/**
	 * @brief Gets the Online Subsystem to use for OSS calls
	 */
	virtual IOnlineSubsystem* GetOSS() const override;
	/**
	 * @brief Gets the Online Subsystem Unique Id to use for OSS calls
	 */
	virtual FUniqueNetIdWrapper GetOSSUniqueId() const override;
	/**
	 * @brief Gets the Online Subsystem PlatformUserId to use for OSS calls (equivalent to controller index)
	 */
	virtual FPlatformUserId GetOSSPlatformUserId() const override;
	/**
	 * @brief Gets the etag to use for a "Get all Templates" type query.
	 */
	virtual TOptional<FString> GetETagForAllTemplatesPoll() const override
	{
		return AllTemplatesETag;
	}
	/**
	 * @brief Gets the etag to use for a "Get all Sessions" type query.
	 */
	// gets the etag to use for a "Get all sessions" type query
	virtual TOptional<FString> GetETagForAllSessionsPoll() const override
	{
		return TOptional<FString>();
	}
	/**
	 * @brief Used to get all sessions, primarily for get all sessions polling where etag matches.
	 */
	virtual TArray<URH_SessionView*> GetAllSessionsForPolling() const override
	{
		TArray<URH_SessionView*> Result;
		if (RHSession != nullptr)
		{
			Result.Add(RHSession);
		}
		return Result;
	}
	/**
	 * @brief Gets a session by its id.
	 * @param [in] SessionId The Session Id to get.
	 * @return The Session with the given Id.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const;
	/**
	 * @brief Gets a session template by type
	 * @param [in] Type the Type of template to get.
	 * @param [out] Template The session template being retrieved.
	 * @return If true, the template was found.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const;
	/**
	 * @brief Gets the platform synchronization object using the rally here session id
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const FString& SessionId) const override { return nullptr; }
	/**
	 * @brief Gets the platform synchronization object using the platform session id
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl& PlatformSessionId) const override { return nullptr; }

	/**
	* @brief Gets the allocation id this session owner is bound to, if any.  Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view
	*/
	virtual TOptional<FString> GetBoundAllocationId() const { return BootstrappingResult.AllocationInfo.AllocationId; }
	/**
	* @brief Gets the instance id this session owner is bound to, if any.  Needed for some specific calls to ensure they are operating on the proper object regardless of our current session view
	*/
	virtual TOptional<FString> GetBoundInstanceId() const
	{
		if (BootstrappingResult.Session.IsSet())
		{
			if (const auto Instance = BootstrappingResult.Session->Data.GetInstanceOrNull())
			{
				return Instance->InstanceId;
			}
		}

		return TOptional<FString>();
	}

protected:
	/** The auth context for this bootstrapper */
	FAuthContextPtr AuthContext;

	/** The analytics provider for this bootstrapper */
	TSharedPtr<class IAnalyticsProvider> AnalyticsProvider;

	/** The start time of the AnalyticsProvider */
	TOptional<FDateTime> AnalyticsStartTime;

	/** The game host provider for this bootstrapper */
	TUniquePtr<IRH_GameHostProviderInterface> GameHostProvider;

	/** The current bootstrapping result */
	FRH_BootstrappingResult BootstrappingResult;

	/** Session templates to use to iniailize the session */
	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, FRHAPI_SessionTemplate> Templates;	// server may have the full list of templates

	/** ETag for the template list */
	TOptional<FString> AllTemplatesETag;

	/** The current session we are using */
	UPROPERTY(VisibleInstanceOnly, Category = "Session", BlueprintGetter=GetSession)
	URH_OnlineSession* RHSession;	// simplying assumption - single session for dedicated server

	/** The default type of session to create when using AutoCreate bootstrapping mode */
	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	FString DefaultAutoCreateSessionType;

	/** The default type of bootstrapping mode (only supports Disabled and LoginOnly, as other session types require commandline injection) */
	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	ERH_ServerBootstrapMode DefaultBootstrapMode;

	/** The maximum number of times to recycle this bootstrapper (if less than one, implies 1), checked during cleanup */
	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	int32 MaxRecycleCount;

	/** Disables some checks that will cause the process to spin down, for use in cases where multiple game instances are running within a single process */
	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	bool bMultiSessionServerMode;

	/** Whether to intercept SIGTERM and prevent passing it to engine handler(which will exit immediately) */
	UPROPERTY(VisibleInstanceOnly, Config, Category = "Session")
	bool bReplaceSIGTERMHandler;
};

//==================================================================

/** @ingroup GameInstance
 * @brief Client Boostrapper for the Game Instance.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig, Within = RH_GameInstanceSubsystem)
class RALLYHEREINTEGRATION_API URH_GameInstanceClientBootstrapper : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	/** @brief Initialize the bootstrapper */
	virtual void Initialize() override;
	/** @brief Deinitialize the bootstrapper */
	virtual void Deinitialize() override;

	/** Utility function to create an offline session */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual void CreateOfflineSession();
};