
#pragma once

#include "CoreMinimal.h"
#include "Async/TaskGraphInterfaces.h"
#include "Engine/DeveloperSettings.h"
#include "UObject/Object.h"
#include "Stats/Stats2.h"
#include "Tickable.h"
#include "Templates/SharedPointer.h"

#include "RH_Polling.generated.h"

struct FRH_AutoPoller;
struct FRH_PollControl;

/** 
 * @brief delegate to notify that a poll is complete
 * @param [in] bSuccess If the poll was successful.
 * @param [in] bResetTimer If the timer should be reset.
 */
DECLARE_DELEGATE_TwoParams(FRH_PollCompleteFunc, bool, bool);
/**
 * @brief delegate to notify that a poll should execute
 * @param [in] PollCompleteFunc Delegate to call when the poll is complete.
 */
DECLARE_DELEGATE_OneParam(FRH_PollFunc, const FRH_PollCompleteFunc&);

typedef TSharedPtr<FRH_AutoPoller> FRH_AutoPollerPtr;
typedef TWeakPtr<FRH_AutoPoller> FRH_AutoPollerWeakPtr;

/** @defgroup Polling RallyHere Polling
 *  @{
 */

/**
 * @brief Settings for polling timers.
 */
USTRUCT()
struct FRH_PollTimerSetting
{
	GENERATED_BODY()
	/** @brief Name of the timer. */
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	FName TimerName;
	/** @brief Poll interval of the timer. */
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	float Interval;
	/** @brief How much jitter to add to the timer. */
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	float JitterPct;
	/** @brief How much jitter to add to the timer when started. */
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	float JitterPctInitial;
	/** @brief Default constructor, 60 seconds timer. */
	FRH_PollTimerSetting()
		: TimerName(NAME_None)
		, Interval(60.f)
		, JitterPct(0.1f)
		, JitterPctInitial(0.4f) // by default use a large initial jitter to desync timers
	{
	}
};

/**
 * @brief Settings for polling.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig, AutoExpandCategories = Timers, meta = (DisplayName = "Rally Here Polling Settings"))
class URH_PollingSettings : public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()

public:
	/**
	 * @brief Array of all polling timers.
	 */
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	TArray<FRH_PollTimerSetting> PollingIntervals;
	/**
	 * @brief Default polling time.
	 */
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	float DefaultPollingInterval;
	/**
	 * @brief Gets a polling interval by name, or falls back to default if not found.
	 * @param [in] TimerName Name of Timer to get interval for.
	 */
	UFUNCTION(Category = "Timers", meta=(ShowOnlyInnerProperties))
	float GetPollingInterval(const FName& TimerName) const;
	/**
	 * @brief Gets a polling interval by name, or falls back to default if not found.  Adds configured jitter
	 * @param [in] TimerName Name of Timer to get interval for.
	 */
	UFUNCTION(Category = "Timers", meta = (ShowOnlyInnerProperties))
	float GetPollingIntervalWithJitter(const FName& TimerName, bool bInitial = false) const
	{
		const float JitterAmout = bInitial ? PollingIntervals[0].JitterPctInitial : PollingIntervals[0].JitterPct;
		const float Jitter = JitterAmout * FMath::FRandRange(-1.0, 1.0);
		const float TimerInterval = GetPollingInterval(TimerName);
		return TimerInterval * (1.f + Jitter);
	}
};

/**
 * @brief Controller for the polling.
 */
struct FRH_PollControl : public FTickableGameObject
{
protected:
	// Register (Inactive) -> Start (Waiting) -> Timer (Executing) -> Complete (Inactive/Waiting) -> Loop -> Unregister
	/** @brief Polls that are registered but not active. */
	TArray<FRH_AutoPollerWeakPtr> InactivePolls;
	/** @brief Polls waiting on their timer to complete, checked each tick. */
	TArray<FRH_AutoPollerWeakPtr> WaitingPolls;
	/** @brief Polls with their poll function executing. */
	TArray<FRH_AutoPollerWeakPtr> ExecutingPolls;
	/** @brief Singleton for the poll controller. */
	static FRH_PollControl* Singleton;
	/** @brief Sorts the waiting pollers for by their next poll time. */
	void SortWaitingPolls();
public:
	/** @brief Default controller. */
	FRH_PollControl();
	/** @brief Initalize the poll controller singleton. */
	static void Initialize()
	{
		if (Singleton == nullptr)
		{
			Singleton = new FRH_PollControl();
		}
	}
	/** @brief Uninitalize the poll controller singleton. */
	static void Uninitialize()
	{
		if (Singleton != nullptr)
		{
			delete Singleton;
		}
	}
	/** @brief Get the poll controller singleton. */
	static FRH_PollControl* Get()
	{
		return Singleton;
	}
	/** @brief Create an auto poller and return it. */
	static TSharedRef<FRH_AutoPoller> CreateAutoPoller();
	/**
	 * @brief Register an auto poller with the Poll Controller.
	 * @param Ptr Auto poller to register.
	 */
	void Register(FRH_AutoPollerPtr Ptr);
	/**
	 * @brief Unregister an auto poller with the Poll Controller.
	 * @param Ptr Auto poller to unregister.
	 */
	void Unregister(FRH_AutoPollerPtr Ptr);
	/**
	 * @brief Used as a final unregister in the destructor, which cannot use a shared pointer
	 * @param Ptr Auto poller to unregister.
	 */
	void Unregister(const FRH_AutoPoller* Ptr);
	/**
	 * @brief Gets if a given auto poller is registered.
	 * @param Ptr Auto poller to check.
	 */
	FORCEINLINE bool IsRegistered(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return InactivePolls.Contains(Ptr) || WaitingPolls.Contains(Ptr) || ExecutingPolls.Contains(Ptr);
	}
	/**
	 * @brief Gets if a given auto poller is active.
	 * @param Ptr Auto poller to check.
	 */
	FORCEINLINE bool IsActive(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return WaitingPolls.Contains(Ptr) || ExecutingPolls.Contains(Ptr);
	}
	/**
	 * @brief Gets if a given auto poller is waiting.
	 * @param Ptr Auto poller to check.
	 */
	FORCEINLINE bool IsWaiting(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return WaitingPolls.Contains(Ptr);
	}
	/**
	 * @brief Gets if a given auto poller is inactive.
	 * @param Ptr Auto poller to check.
	 */
	FORCEINLINE bool IsInactive(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return !IsActive(Ptr);
	}
	/**
	 * @brief Gets if a given auto poller is executing.
	 * @param Ptr Auto poller to check.
	 */
	FORCEINLINE bool IsExecuting(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return ExecutingPolls.Contains(Ptr);
	}
	/**
	 * @brief Sets an auto poller to inactive.
	 * @param Ptr Auto poller to update.
	 */
	void SetPollInactive(FRH_AutoPollerPtr Ptr);
	/**
	 * @brief Sets an auto poller to waiting.
	 * @param Ptr Auto poller to update.
	 */
	void SetPollWaiting(FRH_AutoPollerPtr Ptr);
	/**
	 * @brief Sets an auto poller to executing.
	 * @param Ptr Auto poller to update.
	 */
	void SetPollExecuting(FRH_AutoPollerPtr Ptr);

	// FTickableGameObject interface
	/** @brief Scan Waiting list to determine if any need to be kicked off. */
	virtual void Tick(float DeltaTime); // scan Waiting list to determine if any need to be kicked off
	/** @brief Poll controller is always tickable. */
	virtual bool IsTickable() const { return true; }
	/** Gets the poll controller stat Id. */
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_PollControl, STATGROUP_TaskGraphTasks); }
};

/**
 * @brief Auto Poller to poll at a given interval for updates.
 */
struct FRH_AutoPoller : public TSharedFromThis<FRH_AutoPoller>
{
protected:
	/** @brief When the next poll should run. */
	FDateTime NextPollTime;
	/** @brief Call when the poll timer fires. */
	FRH_PollFunc PollFunc;
	/** @brief Name of the timer to use for polling. */
	FName TimerName;
	/**
	 * @brief Called when a poll finishes.
	 * @param bSuccess If the poll was successful.
	 * @param bResetTimer If the timer should be reset.
	 */
	void OnPollFinished(bool bSuccess, bool bResetTimer);
	void RestartTimer();
	/** @brief Registers with poll control (does not start timer). */
	void Register();
	/** @brief Unregisters with poll control. */
	void Unregister();

public:
	/**
	 * @brief Exposed for the shared pointer interface, please use CreateAutoPoller for construction
	 */
	FRH_AutoPoller();
	/**
	 * @brief Default descrutor.
	 */
	virtual ~FRH_AutoPoller();
	/**
	 * @brief Starts a poll, only stores timer name, restart will always query settings for that timer name.
	 * @param [in] InDelegate Delegate to call when the poll timer fires.
	 * @param [in] InTimerName Name of Timer to get interval from.
	 * @param [in] bImmediate If the poll should start immediately.
	 */
	void StartPoll(const FRH_PollFunc& InDelegate, const FName InTimerName, bool bImmediate = false);
	/** @brief Stops the poller. */
	void StopPoll();
	/** @brief Manually defer the poll timer (ex: out of band update).  Safe to call at all times as it does not change state, only increments NextPollTime. */
	void DeferPollTimer();
	/** @brief Executes the poller. */
	void ExecutePoll();
	/** @brief Gets if the poller is registered with poll control. */
	FORCEINLINE bool IsRegistered() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsRegistered(AsShared());
		}
		return false;
	}
	/** @brief Gets if the poller is active with poll control. */
	FORCEINLINE bool IsActive() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsActive(AsShared());
		}
		return false;
	}
	/** @brief Gets if the poller is waiting with poll control. */
	FORCEINLINE bool IsWaiting() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsWaiting(AsShared());
		}
		return false;
	}
	/** @brief Gets if the poller is inactive with poll control. */
	FORCEINLINE bool IsInactive() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsInactive(AsShared());
		}
		return false;
	}
	/** @brief Gets if the poller is executing with poll control. */
	FORCEINLINE bool IsExecuting() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsExecuting(AsShared());
		}
		return false;
	}
	/** @brief Gets the next poll time. */
	FORCEINLINE const FDateTime& GetNextPollTime() const { return NextPollTime; }
	/** @brief Gets the poll time remaining in seconds.  Returns -1.f if the poll is inactive or executing. */
	FORCEINLINE float GetTimeRemaining()
	{
		if (IsWaiting())
		{
			return FMath::Max(0.f, (NextPollTime - FDateTime::Now()).GetTotalSeconds());
		}
		return -1.f;
	}

	friend FRH_PollControl; // to allow poll control to register a poller
};

/** @} */