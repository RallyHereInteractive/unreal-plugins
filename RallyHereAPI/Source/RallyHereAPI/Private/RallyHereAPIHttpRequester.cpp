#include "CoreMinimal.h"
#include "RallyHereAPIHttpRequester.h"

namespace RallyHereAPI
{

TSharedPtr<FRallyHereAPIHttpRequester> FRallyHereAPIHttpRequester::Singleton = nullptr;

FRallyHereAPIHttpRequester::FRallyHereAPIHttpRequester()
{
	MaxSimultaneousRequests = 15;
	PendingRequestCount = 0;
}

void FRallyHereAPIHttpRequester::FlushRequestQueue()
{
	// temporarily unlimit requests
	TGuardValue<int32> MaxRequestsGuard(MaxSimultaneousRequests, 0);

	// execute all queued requests
	TryExecuteNextRequest();
}

void FRallyHereAPIHttpRequester::TryExecuteNextRequest()
{
	if (!CanExecuteRequest())
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
					Request->HttpRequest->OnProcessRequestComplete().BindSP(AsShared(), &FRallyHereAPIHttpRequester::OnResponse, Request->ResponseDelegate);
					if (Request->HttpRequest->ProcessRequest())
					{
						PendingRequestCount++;
					}

					{
						SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestStarted, FColor::Purple);
						Request->API.OnRequestStarted().Broadcast(Request->Metadata, Request->HttpRequest);
					}

					if (MaxSimultaneousRequests > 0 && PendingRequestCount >= MaxSimultaneousRequests)
					{
						break;
					}
				}

				if ((*findItem).Num() == 0)
				{
					HttpRequestQueue.Remove(Key);
				}
			}

			if (MaxSimultaneousRequests > 0 && PendingRequestCount >= MaxSimultaneousRequests)
			{
				return;
			}
		}
	}
}

void FRallyHereAPIHttpRequester::OnResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FHttpRequestCompleteDelegate ResponseDelegate)
{
	PendingRequestCount--;
	ResponseDelegate.Execute(HttpRequest, HttpResponse, bSucceeded);
	// Whenever we get a request response try to execute new requests if we have any.
	QueueNextRequestCall();
}

void FRallyHereAPIHttpRequester::EnqueueHttpRequest(TSharedPtr<struct FRallyHereAPIHttpRequestData> RequestData)
{
	if (auto findItem = HttpRequestQueue.Find(RequestData->Priority))
	{
		(*findItem).Insert(RequestData, 0);
	}
	else
	{
		HttpRequestQueue.Add(RequestData->Priority, {RequestData});
	}
	// Whenever we get a new request, try to execute requests
	QueueNextRequestCall();
}

void FRallyHereAPIHttpRequester::QueueNextRequestCall()
{
	if (GIsEditor && !GIsPlayInEditorWorld)
	{
		TryExecuteNextRequest();
	}
	else
	{
		// Delay until next frame
		FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateLambda([](float dts)
		{
			auto* Requester = FRallyHereAPIHttpRequester::Get();
			if (Requester != nullptr)
			{
				Requester->TryExecuteNextRequest();
			}
			return false;
		}), 0.0f);
	}
}

}
