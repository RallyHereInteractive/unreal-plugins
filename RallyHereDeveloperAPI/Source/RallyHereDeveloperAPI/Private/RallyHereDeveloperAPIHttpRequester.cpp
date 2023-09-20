
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

void FRallyHereDeveloperAPIHttpRequester::Tick(float DeltaTime)
{
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
}

}
