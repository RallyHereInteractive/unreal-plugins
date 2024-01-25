// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RallyHereAPIAll.h"
#include "RallyHereAPIHelpers.h"

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
	/** @brief The tiem the response was received. */
	FDateTime ReceivedTime;

	FRH_WebResponse() : ResponseCode(0), ResponseSuccess(false)
	{}
};

/**
 * @brief Web call request data.
 */
struct FRH_WebRequest
{
	/** @brief Metadata for the Web Request. */
	RallyHereAPI::FRequestMetadata Metadata;
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
	TArray<FRH_WebResponse> Responses;

	FRH_WebRequest()
	{}
};

/**
 * @brief Class to handle executing and tracking low-level Http Web Requests.
 */
class RALLYHEREINTEGRATION_API FRH_WebRequests : public TSharedFromThis<FRH_WebRequests>
{
public:

	FRH_WebRequests();

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
	const TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>& GetTrackedRequests() const;
	/**
	* @brief Gets a specific request that has been tracked.
	* @param [in] id The id of the request to get.
	*/
	const FRH_WebRequest* GetTrackedRequestById(const FGuid& id) const;
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
	FString FormatWebRequestToJsonBlob(const FRH_WebRequest& request) const;
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

	/**
	 * @brief Get whether web requests should be cached indefinitely or cleared after reaching the cache limit
	 */
	FORCEINLINE bool GetIsRetainingWebRequests() const { return bRetainWebRequests; }

	/**
	 * @brief Set whether web requests should be cached indefinitely or cleared after reaching the cache limit
	 * @param bValue if true, requests are retained, if not, they are cleared upon reaching the cache limit.
	 */
	FORCEINLINE void SetIsRetainingWebRequests(bool bValue) { bRetainWebRequests = bValue; }

	/**
	 * @brief Get the map that tracks all-time call count for each API
	 */
	const TMap<FName, int32> GetAPINameToCallCountMap() const
	{
		return APINameToCallCountMap;
	};

	/**
	 * @brief Get the map that tracks all-time call count for each generic URL
	 */
	const TMap<FName, int32> GetSimplifiedPathToCallCountMap() const
	{
		return SimplifiedPathToCallCountMap;
	};

	/**
	 * @brief Get the maps that track call counts in the last 60s
	 * @param OutAPIRecentCallCountMap Pointer to output call count map by API names
	 * @param OutURLRecentCallCountMap Pointer to output call count map by Simplified Paths
	 */
	void GetRecentCallCountMaps(TMap<FName, int32>* OutAPIRecentCallCountMap, TMap<FName, int32>* OutURLRecentCallCountMap) const;

	/**
	* @brief Detects bursts in recent call counts (last 60s). The time and count thresholds for burst detection are specified by BurstCountThreshold and BurstTimeThreshold
	* @param OutBurstMapByAPIName Pointer to output burst map by API name (API Name -> <Number of bursts, Largest burst>)
	* @param OutBurstMapByURL Pointer to output burst map by Simplified Path (Simplified Path -> <Number of bursts, Largest burst>)
	*/
	void DetectRecentBursts(TMap<FName, TTuple<int32, int32>>* OutBurstMapByAPIName, TMap<FName, TTuple<int32, int32>>* OutBurstMapByURL) const;

private:
	RallyHereAPI::FRallyHereAPIAll* APIs = nullptr;

	TArray<FName> LoggedAPIs;
	bool bRetainWebRequests;

	TDoubleLinkedList<TSharedPtr<FRH_WebRequest>> TrackedRequests;
	TMap<FGuid, TSharedPtr<FRH_WebRequest>> TrackedRequestsById;

	TMap<FName, int32> APINameToCallCountMap;
	TMap<FName, int32> SimplifiedPathToCallCountMap;

	void OnWebRequestStarted(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);
	void OnWebRequestCompleted(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API);

	void OnWebRequestStarted_Track(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);
	void OnWebRequestCompleted_Track(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API);

	void OnWebRequestStarted_Log(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);
	void OnWebRequestCompleted_Log(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API);

	void OnWebRequestStarted_RecordTimestamp(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API);

	TSharedPtr<FJsonObject> CreateJsonObjectFromWebRequest(const FRH_WebRequest& request) const;
};

/** @} */