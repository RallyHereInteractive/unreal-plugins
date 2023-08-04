#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAll.h"
#include "RallyHereAPIHelpers.h"

#include "RH_WebRequests.generated.h"

/** @defgroup WebRequest RallyHere Web Request
 *  @{
 */

/**
 * @brief Web call response data.
 */
struct FRH_WebResponse
{
	/** @brief Headers of the Web Response. */
	TMap<FString, FString> Headers;
	/** @brief Content of the Web Response. */
	FString Content;
	/** @brief Resonse Code of the Web Response. */
	int32 ResponseCode;
	/** @brief Was the response successful from a client perspective. */
	bool ResponseSuccess;
};

/**
 * @brief Web call request data.
 */
struct FRH_WebRequest
{
	/** @brief Metadata for the Web Request. */
	RallyHereAPI::FRequestMetadata Metadata;
	/** @brief Verb for the action type of the Web Request. */
	FString Verb;
	/** @brief URL for the Web Request. */
	FString URL;
	/** @brief Headers for the Web Request. */
	TMap<FString, FString> Headers;
	/** @brief Content for the Web Request. */
	FString Content;
	/** @brief Response for the Web Request. Can contain multiple if the request had to be retried. */
	TArray<FRH_WebResponse> Responses;
};

/**
 * @brief Class to handle executing and tracking low-level Http Web Requests.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_WebRequests: public UObject
{
	GENERATED_BODY()

public:
	/**
	* @brief Initialize the Web Request system.
	* @param [in] InAPIs The APIs the web request system tracks requests from.
	*/
	void Initialize(RallyHereAPI::FRallyHereAPIAll* InAPIs);
	/**
	* @brief Safely tears down the Web Request system.
	*/
	void Uninitialize();
	/**
	* @brief Gets all of the requests that have been tracked.
	*/
	const TArray<TSharedPtr<FRH_WebRequest>> GetTrackedRequests() const;
	/**
	* @brief Gets a specific request that has been tracked.
	* @param [in] id The id of the request to get.
	*/
	const FRH_WebRequest* GetTrackedRequestById(FGuid id) const;
	/**
	 * @brief Clears all tracked requests out.
	 */
	void ClearTrackedRequests()
	{
		TrackedRequestsById.Reset();
		TrackedRequests.Reset();
	}
	/**
	* @brief Gets the list of all APIs able to be tracked.
	*/
	const TArray<FString> GetAPINames() const;
	/**
	* @brief Gets if we are currently logging web requests from all APIs.
	*/
	bool GetLogAllWebRequests() const;
	/**
	* @brief Sets logging web requests for all APIs.
	* @param [in] bValue If true, turn on logging for all APIs, else turn off.
	*/
	void SetLogAllWebRequests(bool bValue);
	/**
	* @brief Gets if we are currently tracking web requests from all APIs.
	*/
	bool GetTrackAllWebRequests() const;
	/**
	* @brief Sets tracking web requests for all APIs.
	* @param [in] bValue If true, turn on tracking for all APIs, else turn off.
	*/
	void SetTrackAllWebRequests(bool bValue);
	/**
	 * @brief Converts a Web Request to a string in JSON format.
	 * @param [in] request The request to format to JSON
	 * @return String of the request in JSON format.
	 */
	FString FormatWebRequestToJsonBlob(const FRH_WebRequest& request) const;
	/**
	 * @brief Logs all tracked request to a specified file.
	 * @param Filename The filename to save the requests to.
	 * @return the full path of the file that was written
	 */
	FString LogTrackedWebRequestsToFile(const FString& Filename) const;
	/**
	 * @brief Gets if a specific API is being logged currently.
	 * @param APIName API name to check.
	 */
	FORCEINLINE bool GetLogWebRequests(const FString& APIName) const { return LoggedAPIs.Contains(APIName); }
	/**
	 * @brief Sets logging for a specific API.
	 * @param APIName API to change logging state of.
	 * @param bValue if true, turn on logging for the API, else turn off.
	 */
	FORCEINLINE void SetLogWebRequests(const FString& APIName, bool bValue) { if (bValue) LoggedAPIs.AddUnique(APIName); else LoggedAPIs.Remove(APIName); }
	/**
	 * @brief Gets if a specific API is being tracked currently.
	 * @param APIName API name to check.
	 */
	FORCEINLINE bool GetTrackWebRequests(const FString& APIName) const { return TrackedAPIs.Contains(APIName); }
	/**
	 * @brief Sets tracking for a specific API.
	 * @param APIName API to change tracking state of.
	 * @param bValue if true, turn on tracking for the API, else turn off.
	 */
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

	TSharedPtr<FJsonObject> CreateJsonObjectFromWebRequest(const FRH_WebRequest& request) const;
};

/** @} */