
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAll.h"
#include "RallyHereAPIHelpers.h"

#include "RH_WebRequests.generated.h"

struct FRH_WebResponse
{
	TMap<FString, FString> Headers;
	FString Content;
	int32 ResponseCode;
	bool ResponseSuccess; // Was the response successful from a client perspective?
};

struct FRH_WebRequest
{
	RallyHereAPI::FRequestMetadata Metadata;
	FString Verb;
	FString URL;
	TMap<FString, FString> Headers;
	FString Content;
	TArray<FRH_WebResponse> Responses; // Can contain multiple if the request had to be retried
};

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_WebRequests: public UObject
{
	GENERATED_BODY()

public:
	void Initialize(RallyHereAPI::FRallyHereAPIAll* InAPIs);
	void Uninitialize();

	const TArray<TSharedPtr<FRH_WebRequest>> GetTrackedRequests() const;
	const FRH_WebRequest* GetTrackedRequestById(FGuid id) const;
	void ClearTrackedRequests()
	{
		TrackedRequestsById.Reset();
		TrackedRequests.Reset();
	}

	const TArray<FString> GetAPINames() const;

	bool GetLogAllWebRequests() const;
	void SetLogAllWebRequests(bool bValue);

	bool GetTrackAllWebRequests() const;
	void SetTrackAllWebRequests(bool bValue);

	FORCEINLINE bool GetLogWebRequests(const FString& APIName) const { return LoggedAPIs.Contains(APIName); }
	FORCEINLINE void SetLogWebRequests(const FString& APIName, bool bValue) { if (bValue) LoggedAPIs.AddUnique(APIName); else LoggedAPIs.Remove(APIName); }

	FORCEINLINE bool GetTrackWebRequests(const FString& APIName) const { return TrackedAPIs.Contains(APIName); }
	FORCEINLINE void SetTrackWebRequests(const FString& APIName, bool bValue) { if (bValue) TrackedAPIs.AddUnique(APIName); else TrackedAPIs.Remove(APIName); }

private:
	RallyHereAPI::FRallyHereAPIAll* APIs = nullptr;

	UPROPERTY(Config)
	TArray<FString> LoggedAPIs;

	UPROPERTY(Config)
	TArray<FString> TrackedAPIs;

	TArray<TSharedPtr<FRH_WebRequest>> TrackedRequests;
	TMap<FGuid, TSharedPtr<FRH_WebRequest>> TrackedRequestsById;

	void OnWebRequestStarted(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);
	void OnWebRequestCompleted(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API);

	void OnWebRequestStarted_Track(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);
	void OnWebRequestCompleted_Track(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API);

	void OnWebRequestStarted_Log(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);
	void OnWebRequestCompleted_Log(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API);
};
