#include "CoreMinimal.h"
#include "RallyHereAPIHttpRequester.h"

namespace RallyHereAPI
{

TSharedPtr<FRallyHereAPIHttpRequester> FRallyHereAPIHttpRequester::Singleton = nullptr;

FRallyHereAPIHttpRequester::FRallyHereAPIHttpRequester()
{
	MaxSimultaneousRequests = 15;
	InFlightRequestCount = 0;
}

void FRallyHereAPIHttpRequester::FlushRequestQueue(bool bIsExiting)
{
	// temporarily unlimit requests
	TGuardValue<int32> MaxRequestsGuard(MaxSimultaneousRequests, 0);

	// execute all queued requests
	TryExecuteNextRequest(bIsExiting);
}

void FRallyHereAPIHttpRequester::TryExecuteNextRequest(bool bIsExiting)
{
	// this function is intended only to be run on the main game thread, as it can internally trigger delegates
	ensure(IsInGameThread());

	FScopeLock RequestQueueLock(&RequestQueueLockCS);

	if (HttpRequestQueue.IsEmpty() || (MaxSimultaneousRequests > 0 && InFlightRequestCount > MaxSimultaneousRequests))
	{
		return;
	}

	TArray<int32> Keys;

	if (HttpRequestQueue.GetKeys(Keys) > 0)
	{
		Keys.Sort();
		for (int32& Key : Keys)
		{
			if (auto findItem = HttpRequestQueue.Find(Key))
			{
				while ((*findItem).Num())
				{
					const auto Request = (*findItem).Pop();
					Request->Metadata.HttpQueuedTimestamp = FDateTime::Now();
					
					// last chance to safely access the request before processing it (which may modify it in other threads)
					// do not fire callbacks if exiting
					if (!bIsExiting)
					{
						// bind the main response handler
						Request->HttpRequest->OnProcessRequestComplete().BindSP(AsShared(), &FRallyHereAPIHttpRequester::OnResponse, Request->ResponseDelegate);
					
						// broadcast the started event
						{
							SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestStarted, FColor::Purple);
							Request->API->OnRequestStarted().Broadcast(Request->Metadata, Request->HttpRequest);
						}
					}
					
					if (Request->HttpRequest->ProcessRequest())
					{
						// increment pending request count, so we can keep track of how many requests are currently in-flight
						InFlightRequestCount++;
					}

					if (MaxSimultaneousRequests > 0 && InFlightRequestCount >= MaxSimultaneousRequests)
					{
						break;
					}
				}

				if ((*findItem).Num() == 0)
				{
					HttpRequestQueue.Remove(Key);
				}
			}

			if (MaxSimultaneousRequests > 0 && InFlightRequestCount >= MaxSimultaneousRequests)
			{
				return;
			}
		}
	}
}

void FRallyHereAPIHttpRequester::OnResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FHttpRequestCompleteDelegate ResponseDelegate)
{
	// execute the response delegate
	ResponseDelegate.Execute(HttpRequest, HttpResponse, bSucceeded);

	// decrement pending request count
	FScopeLock RequestQueueLock(&RequestQueueLockCS);
	InFlightRequestCount--;
}

void FRallyHereAPIHttpRequester::EnqueueHttpRequest(TSharedPtr<struct FRallyHereAPIHttpRequestData> RequestData)
{
	RequestData->Metadata.QueuedTimestamp = FDateTime::Now();

	FScopeLock RequestQueueLock(&RequestQueueLockCS);

	if (auto findItem = HttpRequestQueue.Find(RequestData->Priority))
	{
		(*findItem).Insert(RequestData, 0);
	}
	else
	{
		HttpRequestQueue.Add(RequestData->Priority, {RequestData});
	}
}

void FRallyHereAPIHttpRequester::Tick(float DeltaTime)
{
	TryExecuteNextRequest();
}

}
