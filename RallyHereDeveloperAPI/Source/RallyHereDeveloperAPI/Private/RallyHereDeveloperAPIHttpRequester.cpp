#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIHttpRequester.h"

namespace RallyHereDeveloperAPI
{

FRallyHereDeveloperAPIHttpRequester* FRallyHereDeveloperAPIHttpRequester::Singleton = nullptr;

FRallyHereDeveloperAPIHttpRequester::FRallyHereDeveloperAPIHttpRequester()
{
    MaxSimultaneousRequests = 15;
    PendingRequestCount = 0;
}

void FRallyHereDeveloperAPIHttpRequester::TryExecuteNextRequest()
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
                    Request->HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRallyHereDeveloperAPIHttpRequester::OnResponse, Request->ResponseDelegate);
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

void FRallyHereDeveloperAPIHttpRequester::OnResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FHttpRequestCompleteDelegate ResponseDelegate)
{
    PendingRequestCount--;
    ResponseDelegate.Execute(HttpRequest, HttpResponse, bSucceeded);
    // Whenever we get a request response try to execute new requests if we have any.
    QueueNextRequestCall();
}

void FRallyHereDeveloperAPIHttpRequester::EnqueueHttpRequest(TSharedPtr<struct FRallyHereDeveloperAPIHttpRequestData> RequestData)
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

void FRallyHereDeveloperAPIHttpRequester::QueueNextRequestCall()
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
            auto* Requester = FRallyHereDeveloperAPIHttpRequester::Get();
            if (Requester != nullptr)
            {
                Requester->TryExecuteNextRequest();
            }
            return false;
        }), 0.0f);
    }
}

}
