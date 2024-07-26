// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

//////////////////////////////////////////////////////////////////////////////////
// Automation tests - General Automation Tests, not associated with any specific subsystem
//////////////////////////////////////////////////////////////////////////////////

#if WITH_DEV_AUTOMATION_TESTS

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "RH_Common.h"
#include "RH_Integration.h"
#include "TimerManager.h"
#include "Async/AsyncWork.h"

#include "RH_AutomationTests.h"
#include "RH_IntegrationSettings.h"

#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "TimeAPI.h"

BEGIN_DEFINE_SPEC(FRH_RequesterThreading, "RHAutomation.HttpRequester.Threading", EAutomationTestFlags::ClientContext | EAutomationTestFlags::ServerContext | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::MediumPriority)

END_DEFINE_SPEC(FRH_RequesterThreading)

void FRH_RequesterThreading::Define()
{
	Describe("Http Requester Threading", [this]()
		{
			LatentIt("should create a bunch of time requests in worker threads, then run them in parallel", [this](const FDoneDelegate& Done)
				{					
					const int32 NumTasks = 256;

					struct FRunningTasksTracker
					{
						TAtomic<int32> RunningTasks, TasksStarted, SuccessfulTasks;

						FAutomationTestBase* Test = nullptr;
						FDoneDelegate AsyncDone;

						void TaskStarted()
						{
							++RunningTasks;
							++TasksStarted;
						}

						void TaskEnded(bool bSucesss)
						{
							auto NewTaskCount = --RunningTasks;
							if (bSucesss)
							{
								++SuccessfulTasks;
							}

							if (NewTaskCount == 0)
							{
								Test->TestEqual(TEXT("All Tasks Successful"), SuccessfulTasks.Load(), TasksStarted.Load());

								AsyncDone.Execute();
							}
						}

						FRunningTasksTracker(FAutomationTestBase* InTest, const FDoneDelegate& InDoneDelegate)
							: RunningTasks(0), TasksStarted(0), SuccessfulTasks(0)
							, Test(InTest)
							, AsyncDone(InDoneDelegate)
						{
						}
					};

					struct FTimeRequestTask : public FNonAbandonableTask
					{
						FTimeRequestTask(TSharedRef<FRunningTasksTracker> InTasksTracker)
							: TasksTracker(InTasksTracker)
						{
						}

						/** Returns the stat id for this task */
						FORCEINLINE TStatId GetStatId() const
						{
							RETURN_QUICK_DECLARE_CYCLE_STAT(FTimeRequestTask, STATGROUP_ThreadPoolAsyncTasks);
						}

						void DoWork()
						{
							TasksTracker->TaskStarted();

							typedef RallyHereAPI::Traits_GetUtcTime BaseType;

							BaseType::Request Request;

							auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
								BaseType::Delegate(),
								FRH_GenericSuccessWithErrorDelegate::CreateLambda([this](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
									{
										TasksTracker->TaskEnded(bSuccess);
									}),
								GetDefault<URH_IntegrationSettings>()->FetchAppSettingsPriority);

							Helper->Start(RH_APIs::GetAPIs().GetTime(), Request);
						}

						TSharedRef<FRunningTasksTracker> TasksTracker;
					};

					// Create a bunch of tasks
					TSharedRef<FRunningTasksTracker> RunningTasksTracker = MakeShared<FRunningTasksTracker>(this, Done);
					TArray<FAsyncTask<FTimeRequestTask>*> Tasks;
					Tasks.Reserve(NumTasks);

					for (int32 i = 0; i < NumTasks; ++i)
					{
						Tasks.Add(new FAsyncTask<FTimeRequestTask>(RunningTasksTracker));
					}

					// Start all the tasks
					for (auto Task : Tasks)
					{
						Task->StartBackgroundTask();
					}
				});
		});
}

#endif



