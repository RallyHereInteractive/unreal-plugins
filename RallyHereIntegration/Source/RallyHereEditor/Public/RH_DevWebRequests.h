#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereDeveloperAPIAll.h"
#include "RallyHereDeveloperAPIHelpers.h"

#include "RH_DevWebRequests.generated.h"

DECLARE_MULTICAST_DELEGATE(FTrackedRequestsUpdated);

/** @defgroup WebRequest RallyHere Web Request
 *  @{
 */

/**
 * @brief Web call response data.
 */
struct FRH_DevWebResponse
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
struct FRH_DevWebRequest
{
	/** @brief Metadata for the Web Request. */
	RallyHereDeveloperAPI::FRequestMetadata Metadata;
	/** @brief The API name of the Web Request. */
	FName APIName;
	/** @brief The local timestamp when the request was made. */
	FDateTime Timestamp;
	/** @brief Verb for the action type of the Web Request. */
	FString Verb;
	/** @brief URL for the Web Request. */
	FString URL;
	/** @brief Headers for the Web Request. */
	TMap<FString, FString> Headers;
	/** @brief Content for the Web Request. */
	FString Content;
	/** @brief Response for the Web Request. Can contain multiple if the request had to be retried. */
	TArray<FRH_DevWebResponse> Responses;
};

/**
 * @brief Class to handle executing and tracking low-level Http Web Requests.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREEDITOR_API URH_DevWebRequests: public UObject
{
	GENERATED_BODY()

public:
	/**
	* @brief Initialize the Web Request system.
	* @param [in] InAPIs The APIs the web request system tracks requests from.
	*/
	void Initialize(RallyHereDeveloperAPI::FRallyHereDeveloperAPIAll* InAPIs);
	/**
	* @brief Safely tears down the Web Request system.
	*/
	void Uninitialize();
	/**
	* @brief Gets all of the requests that have been tracked.
	*/
	const TDoubleLinkedList<TSharedPtr<FRH_DevWebRequest>>& GetTrackedRequests() const;
	/**
	* @brief Gets a specific request that has been tracked.
	* @param [in] id The id of the request to get.
	*/
	const FRH_DevWebRequest* GetTrackedRequestById(FGuid id) const;
	/**
	 * @brief Clears all tracked requests out.
	 */
	void ClearTrackedRequests()
	{
		TrackedRequestsById.Reset();
		TrackedRequests.Empty();
	}
	/**
	* @brief Gets the list of all APIs able to be tracked.
	*/
	const TArray<FName> GetAPINames() const;
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
	 * @brief Converts a Web Request to a string in JSON format.
	 * @param [in] request The request to format to JSON
	 * @return String of the request in JSON format.
	 */
	FString FormatWebRequestToJsonBlob(const FRH_DevWebRequest& request) const;
	/**
	 * @brief Logs all tracked request to a specified file.
	 * @param World The context world object.
	 * @return the full path of the file that was written
	 */
	TSharedPtr<FJsonObject> LogTrackedWebRequestsToJSON() const;
	/**
	 * @brief Gets if a specific API is being logged currently.
	 * @param APIName API name to check.
	 */
	FORCEINLINE bool GetLogWebRequests(const FName& APIName) const { return LoggedAPIs.Contains(APIName); }
	/**
	 * @brief Sets logging for a specific API.
	 * @param APIName API to change logging state of.
	 * @param bValue if true, turn on logging for the API, else turn off.
	 */
	FORCEINLINE void SetLogWebRequests(const FName& APIName, bool bValue) { if (bValue) LoggedAPIs.AddUnique(APIName); else LoggedAPIs.Remove(APIName); }

	FTrackedRequestsUpdated& OnTrackedRequestsUpdated() { return TrackedRequestsUpdatedDelegate; }

private:
	RallyHereDeveloperAPI::FRallyHereDeveloperAPIAll* APIs = nullptr;

	UPROPERTY(Config)
	TArray<FName> LoggedAPIs;

	FTrackedRequestsUpdated TrackedRequestsUpdatedDelegate;

	TDoubleLinkedList<TSharedPtr<FRH_DevWebRequest>> TrackedRequests;
	TMap<FGuid, TSharedPtr<FRH_DevWebRequest>> TrackedRequestsById;

	void OnWebRequestStarted(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereDeveloperAPI::FAPI* API);
	void OnWebRequestCompleted(const RallyHereDeveloperAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereDeveloperAPI::FAPI* API);

	void OnWebRequestStarted_Track(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereDeveloperAPI::FAPI* API);
	void OnWebRequestCompleted_Track(const RallyHereDeveloperAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereDeveloperAPI::FAPI* API);

	void OnWebRequestStarted_Log(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereDeveloperAPI::FAPI* API);
	void OnWebRequestCompleted_Log(const RallyHereDeveloperAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereDeveloperAPI::FAPI* API);

	TSharedPtr<FJsonObject> CreateJsonObjectFromWebRequest(const FRH_DevWebRequest& request) const;
};

/** @} */