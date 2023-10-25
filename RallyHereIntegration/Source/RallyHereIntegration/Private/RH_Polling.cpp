
#include "RH_Polling.h"
#include "RH_Common.h"


URH_PollingSettings::URH_PollingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("RallyHere Polling");
}


/////////////////////////////////////////////////////////////

FRH_PollControl* FRH_PollControl::Singleton = nullptr;

FRH_PollControl::FRH_PollControl()
{
}

TSharedRef<FRH_AutoPoller> FRH_PollControl::CreateAutoPoller()
{
	TSharedRef<FRH_AutoPoller> Poller = MakeShared<FRH_AutoPoller>();
	Poller->Register();
	return Poller;
}

void FRH_PollControl::Register(FRH_AutoPollerPtr Ptr)
{
	Unregister(Ptr);
	InactivePolls.Add(Ptr);
}

void FRH_PollControl::Unregister(FRH_AutoPollerPtr Ptr)
{
	Unregister(Ptr.Get());
}

void FRH_PollControl::Unregister(const FRH_AutoPoller* Ptr)
{
	InactivePolls.RemoveAll(
		[Ptr](const FRH_AutoPollerWeakPtr& In) { return !In.IsValid() || In.HasSameObject(Ptr); }
	);
	WaitingPolls.RemoveAll(
		[Ptr](const FRH_AutoPollerWeakPtr& In) { return !In.IsValid() || In.HasSameObject(Ptr); }
	);
	ExecutingPolls.RemoveAll(
		[Ptr](const FRH_AutoPollerWeakPtr& In) { return !In.IsValid() || In.HasSameObject(Ptr); }
	);
}

void FRH_PollControl::SortWaitingPolls()
{
	WaitingPolls.Sort([](const FRH_AutoPollerWeakPtr& A, const FRH_AutoPollerWeakPtr& B)
	{
		FRH_AutoPollerPtr APtr = A.Pin();
		FRH_AutoPollerPtr BPtr = B.Pin();
		if (APtr.IsValid() && BPtr.IsValid())
		{
			return APtr->GetNextPollTime() > BPtr->GetNextPollTime();
		}
		else if (APtr.IsValid())
		{
			return false;
		}
		else if (BPtr.IsValid())
		{
			return true;
		}
		else
		{
			return false;
		}
	});
}

void FRH_PollControl::SetPollInactive(FRH_AutoPollerPtr Ptr)
{
	check(IsRegistered(Ptr));
	InactivePolls.AddUnique(Ptr);
	WaitingPolls.Remove(Ptr);
	ExecutingPolls.Remove(Ptr);
}
void FRH_PollControl::SetPollWaiting(FRH_AutoPollerPtr Ptr)
{
	check(IsRegistered(Ptr));
	InactivePolls.Remove(Ptr);
	WaitingPolls.AddUnique(Ptr);
	ExecutingPolls.Remove(Ptr);

	SortWaitingPolls();
}
void FRH_PollControl::SetPollExecuting(FRH_AutoPollerPtr Ptr)
{
	check(IsRegistered(Ptr));
	InactivePolls.Remove(Ptr);
	WaitingPolls.Remove(Ptr);
	ExecutingPolls.AddUnique(Ptr);
}

void FRH_PollControl::Tick(float DeltaTime)
{
	// list is sorted so that the next poll is at the end
	TArray<FRH_AutoPollerPtr, TInlineAllocator<10>> PollsToExecute;
	FDateTime Now = FDateTime::Now();
	for (int32 i = WaitingPolls.Num() - 1; i >= 0; --i)
	{
		auto Poll = WaitingPolls[i].Pin();
		if (Poll.IsValid() && Poll->GetNextPollTime() < Now)
		{
			PollsToExecute.Add(Poll);
		}
	}

	for (auto Poll : PollsToExecute)
	{
		Poll->ExecutePoll();
	}
}

const FRH_PollTimerSetting& FRH_PollControl::GetPollTimerSetting(const FName& TimerName) const
{
	// first check for override
	const auto* TimerSettingOverride = PollingIntervalOverrides.FindByPredicate(
		[TimerName](const FRH_PollTimerSetting& TimerSetting)
		{
			return TimerSetting.TimerName == TimerName;
		});

	if (TimerSettingOverride != nullptr)
	{
		return *TimerSettingOverride;
	}

	const auto* PollingSettings = GetDefault<URH_PollingSettings>();

	const auto* TimerSetting = PollingSettings->PollingIntervals.FindByPredicate(
		[TimerName](const FRH_PollTimerSetting& TimerSetting)
		{
			return TimerSetting.TimerName == TimerName;
		});

	if (TimerSetting != nullptr)
	{
		return *TimerSetting;
	}

	return PollingSettings->DefaultPollingTimer;
}

void FRH_PollControl::SetPollingIntervalOverride(const FRH_PollTimerSetting& Override)
{
	// remove old entry if it exists
	ClearPollingIntervalOverride(Override.TimerName);

	PollingIntervalOverrides.Add(Override);
}

void FRH_PollControl::ClearPollingIntervalOverride(const FName& TimerName)
{
	PollingIntervalOverrides.RemoveAll(
		[TimerName](const FRH_PollTimerSetting& TimerSetting)
		{
			return TimerSetting.TimerName == TimerName;
		});
}

/////////////////////////////////////////////////////////////

FRH_AutoPoller::FRH_AutoPoller()
{
	NextPollTime = FDateTime::MinValue();
}

FRH_AutoPoller::~FRH_AutoPoller()
{
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		PollControl->Unregister(this);
	}
}

void FRH_AutoPoller::Register()
{
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		PollControl->Register(AsShared());
	}
}

void FRH_AutoPoller::Unregister()
{
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		PollControl->Unregister(AsShared());
	}
}

void FRH_AutoPoller::StartPoll(const FRH_PollFunc& InDelegate, FName InTimerName, bool bImmediate)
{
	// make sure state is cleared out
	StopPoll();

	PollFunc = InDelegate;
	TimerName = InTimerName;

	// if requested, execute immediately
	if (bImmediate)
	{
		ExecutePoll(); 
	}
	else
	{
		RestartTimer();
	}
}

void FRH_AutoPoller::StopPoll()
{
	NextPollTime = FDateTime::MinValue();
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		PollControl->SetPollInactive(AsShared());
	}
}

void FRH_AutoPoller::RestartTimer()
{
	// defer until next threshold
	DeferPollTimer();

	// move into the waiting state
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		PollControl->SetPollWaiting(AsShared());
	}
}

void FRH_AutoPoller::DeferPollTimer()
{
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		NextPollTime = FDateTime::Now() + FTimespan::FromSeconds(PollControl->GetPollingIntervalWithJitter(TimerName));
	}
	else
	{
		// if no controller instance, just pull raw from settings
		const auto* PollingSettings = GetDefault<URH_PollingSettings>();

		NextPollTime = FDateTime::Now() + FTimespan::FromSeconds(PollingSettings->DefaultPollingTimer.Interval);
	}
}

void FRH_AutoPoller::ExecutePoll()
{
	auto* PollControl = FRH_PollControl::Get();
	if (PollControl)
	{
		PollControl->SetPollExecuting(AsShared());
	}
	if (PollFunc.IsBound())
	{
		PollFunc.ExecuteIfBound(FRH_PollCompleteFunc::CreateSP(AsShared(), &FRH_AutoPoller::OnPollFinished));
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("PollFunc not bound for %s"), *TimerName.ToString());
		OnPollFinished(false, false);
	}
}



void FRH_AutoPoller::OnPollFinished(bool bSuccess, bool bResetTimer)
{
	if (bResetTimer)
	{
		RestartTimer();
	}
	else
	{
		StopPoll();
	}
}
