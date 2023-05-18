
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Tickable.h"
#include "Templates/SharedPointer.h"

#include "RH_Polling.generated.h"

struct FRH_AutoPoller;
struct FRH_PollControl;

USTRUCT()
struct FRH_PollTimerSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	FName TimerName;

	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	float Interval;

	FRH_PollTimerSetting()
	{
		TimerName = NAME_None;
		Interval = 60;
	}
};

UCLASS(Config = RallyHereIntegration, DefaultConfig, AutoExpandCategories = Timers, meta = (DisplayName = "Rally Here Polling Settings"))
class URH_PollingSettings : public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	TArray<FRH_PollTimerSetting> PollingIntervals;

	UPROPERTY(EditAnywhere, Config, Category = "Timers")
	float DefaultPollingInterval;

	UFUNCTION(Category = "Timers", meta=(ShowOnlyInnerProperties))
	float GetPollingInterval(const FName& TimerName) const;
};

DECLARE_DELEGATE_TwoParams(FRH_PollCompleteFunc, bool, bool);
DECLARE_DELEGATE_OneParam(FRH_PollFunc, const FRH_PollCompleteFunc&);

typedef TSharedPtr<FRH_AutoPoller> FRH_AutoPollerPtr;
typedef TWeakPtr<FRH_AutoPoller> FRH_AutoPollerWeakPtr;

struct FRH_PollControl : public FTickableGameObject
{
protected:
	// Register (Inactive) -> Start (Waiting) -> Timer (Executing) -> Complete (Inactive/Waiting) -> Loop -> Unregister
	TArray<FRH_AutoPollerWeakPtr> InactivePolls; // polls that are registered but not active
	TArray<FRH_AutoPollerWeakPtr> WaitingPolls; // polls waiting on their timer to complete, checked each tick
	TArray<FRH_AutoPollerWeakPtr> ExecutingPolls; // polls with their poll function executing

	static FRH_PollControl* Singleton;
	void SortWaitingPolls();
public:
	FRH_PollControl();

	static void Initialize()
	{
		if (Singleton == nullptr)
		{
			Singleton = new FRH_PollControl();
		}
	}
	static void Uninitialize()
	{
		if (Singleton != nullptr)
		{
			delete Singleton;
		}
	}

	static FRH_PollControl* Get()
	{
		return Singleton;
	}

	static TSharedRef<FRH_AutoPoller> CreateAutoPoller();

	void Register(FRH_AutoPollerPtr Ptr);
	void Unregister(FRH_AutoPollerPtr Ptr);
	void Unregister(const FRH_AutoPoller* Ptr); // this is used as a final unregister in the destructor, which cannot use a shared pointer

	FORCEINLINE bool IsRegistered(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return InactivePolls.Contains(Ptr) || WaitingPolls.Contains(Ptr) || ExecutingPolls.Contains(Ptr);
	}
	FORCEINLINE bool IsActive(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return WaitingPolls.Contains(Ptr) || ExecutingPolls.Contains(Ptr);
	}
	FORCEINLINE bool IsInactive(const TSharedPtr<const FRH_AutoPoller>& Ptr) const
	{
		return !IsActive(Ptr);
	}

	void SetPollInactive(FRH_AutoPollerPtr Ptr);
	void SetPollWaiting(FRH_AutoPollerPtr Ptr);
	void SetPollExecuting(FRH_AutoPollerPtr Ptr);

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime); // scan Waiting list to determine if any need to be kicked off
	virtual bool IsTickable() const { return true; }
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_PollControl, STATGROUP_TaskGraphTasks); }
};

struct FRH_AutoPoller : public TSharedFromThis<FRH_AutoPoller>
{
protected:
	FDateTime NextPollTime; // when the next poll should run
	FRH_PollFunc PollFunc; // function to call when the poll timer fires
	FName TimerName; // name of the timer to use for polling

	void OnPollFinished(bool bSuccess, bool bResetTimer);
	void RestartTimer();

	void Register(); // registers with poll control (does not start timer)
	void Unregister(); // unregisters with poll control

public:
	// these are exposed for the shared pointer interface, please use CreateAutoPoller for construction
	FRH_AutoPoller();
	virtual ~FRH_AutoPoller();

	void StartPoll(const FRH_PollFunc& InDelegate, const FName InTimerName, bool bImmediate = false); // only store timer name, restart will always query settings for that timer name
	void StopPoll();
	void DeferPollTimer(); // manually defer the poll timer (ex: out of band update).  Safe to call at all times as it does not change state, only increments NextPollTime
	void ExecutePoll();

	FORCEINLINE bool IsRegistered() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsRegistered(AsShared());
		}
		return false;
	}
	FORCEINLINE bool IsActive() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsActive(AsShared());
		}
		return false;
	}
	FORCEINLINE bool IsInactive() const
	{
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			return PollControl->IsInactive(AsShared());
		}
		return false;
	}
	FORCEINLINE const FDateTime& GetNextPollTime() const { return NextPollTime; }

	friend FRH_PollControl; // to allow poll control to register a poller
};

