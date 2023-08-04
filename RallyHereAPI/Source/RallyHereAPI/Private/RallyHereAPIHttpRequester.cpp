
#include "CoreMinimal.h"
#include "RallyHereAPIHttpRequester.h"

namespace RallyHereAPI
{

FRallyHereAPIHttpRequester* FRallyHereAPIHttpRequester::Singleton = nullptr;

FRallyHereAPIHttpRequester::FRallyHereAPIHttpRequester()
{
    MaxSimultaneousRequests = 15;
    PendingRequestCount = 0;
}

void FRallyHereAPIHttpRequester::Tick(float DeltaTime)
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
                    Request->HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRallyHereAPIHttpRequester::OnResponse, Request->ResponseDelegate);
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
}

}
