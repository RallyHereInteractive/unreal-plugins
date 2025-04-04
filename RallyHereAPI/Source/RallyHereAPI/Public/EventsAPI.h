// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "EventList.h"
#include "EventParamsSchemaResponse.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "PostGameEventsResponse.h"
#include "RallyHereEvent.h"
#include "ValidateEventResponse.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

// forward declaration
class FEventsAPI;

/**
 * @brief Get All Event Schema
 * get all rh standard event and custom event params schema
*/
struct RALLYHEREAPI_API FRequest_GetAllEventSchema : public FRequest
{
	FRequest_GetAllEventSchema();
	virtual ~FRequest_GetAllEventSchema() = default;
	
	/** @brief Given a http request, apply data and settings from this request object to it */
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	/** @brief Compute the URL path for this request instance */
	FString ComputePath() const override;
	/** @brief Get the simplified URL path for this request, not including the verb */
	FName GetSimplifiedPath() const override;
	/** @brief Get the simplified URL path for this request, including the verb */
	FName GetSimplifiedPathWithVerb() const override;

};

/** The response type for FRequest_GetAllEventSchema */
struct RALLYHEREAPI_API FResponse_GetAllEventSchema : public FResponseAccessorTemplate<FRHAPI_EventParamsSchemaResponse>
{
	typedef FResponseAccessorTemplate<FRHAPI_EventParamsSchemaResponse> Super;

	FResponse_GetAllEventSchema(FRequestMetadata InRequestMetadata);
	//virtual ~FResponse_GetAllEventSchema() = default;
	
	/** @brief Parse out response content into local storage from a given JsonValue */
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	/** @brief Parse out header information for later usage */
	virtual bool ParseHeaders() override;
	/** @brief Gets the description of the response code */
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

#if ALLOW_LEGACY_RESPONSE_CONTENT
	/** Default Response Content */
	UE_DEPRECATED(5.0, "Direct use of Content is deprecated, please use TryGetDefaultContent(), TryGetContent(), TryGetResponse<>(), or TryGetContentFor<>() instead.")
	FRHAPI_EventParamsSchemaResponse Content;
#endif //ALLOW_LEGACY_RESPONSE_CONTENT

	// Default Response Helpers
	/** @brief Attempt to retrieve the content in the default response */
	bool TryGetDefaultContent(FRHAPI_EventParamsSchemaResponse& OutContent) const { return TryGetContent<FRHAPI_EventParamsSchemaResponse>(OutContent); }
	/** @brief Attempt to retrieve the content in the default response */
	bool TryGetDefaultContent(TOptional<FRHAPI_EventParamsSchemaResponse>& OutContent) const { return TryGetContent<FRHAPI_EventParamsSchemaResponse>(OutContent); }
	/** @brief Attempt to retrieve the content in the default response */
	const FRHAPI_EventParamsSchemaResponse* TryGetDefaultContentAsPointer() const { return TryGetContentAsPointer<FRHAPI_EventParamsSchemaResponse>(); }
	/** @brief Attempt to retrieve the content in the default response */
	TOptional<FRHAPI_EventParamsSchemaResponse> TryGetDefaultContentAsOptional() const { return TryGetContentAsOptional<FRHAPI_EventParamsSchemaResponse>(); }

	// Individual Response Helpers	
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_EventParamsSchemaResponse& OutContent) const;

};

/** The delegate class for FRequest_GetAllEventSchema */
DECLARE_DELEGATE_OneParam(FDelegate_GetAllEventSchema, const FResponse_GetAllEventSchema&);

/** @brief A helper metadata object for GetAllEventSchema that defines the relationship between Request, Delegate, API, etc.  Intended for use with templating */
struct RALLYHEREAPI_API Traits_GetAllEventSchema
{
	/** The request type */
	typedef FRequest_GetAllEventSchema Request;
	/** The response type */
	typedef FResponse_GetAllEventSchema Response;
	/** The delegate type, triggered by the response */
	typedef FDelegate_GetAllEventSchema Delegate;
	/** The API object that supports this API call */
	typedef FEventsAPI API;
	/** A human readable name for this API call */
	static FString Name;

	/**
	 * @brief A helper that uses all of the above types to initiate an API call, with a specified priority.
	 * @param [in] InAPI The API object the call will be made with
	 * @param [in] InRequest The request to submit to the API call
	 * @param [in] InDelegate An optional delegate to call when the API call completes, containing the response information
	 * @param [in] InPriority An optional priority override for the API call, for use when API calls are being throttled
	 * @return A http request object, if the call was successfully queued.
	 */
	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 InPriority = DefaultRallyHereAPIPriority);
};

/**
 * @brief Receive Events V1
 * Post game events, return number of events being posted to Event Hub
*/
struct RALLYHEREAPI_API FRequest_ReceiveEventsV1 : public FRequest
{
	FRequest_ReceiveEventsV1();
	virtual ~FRequest_ReceiveEventsV1() = default;
	
	/** @brief Given a http request, apply data and settings from this request object to it */
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	/** @brief Compute the URL path for this request instance */
	FString ComputePath() const override;
	/** @brief Get the simplified URL path for this request, not including the verb */
	FName GetSimplifiedPath() const override;
	/** @brief Get the simplified URL path for this request, including the verb */
	FName GetSimplifiedPathWithVerb() const override;

	FRHAPI_EventList EventList;
	/* IP Address hint */
	TOptional<FString> XRhClientAddr;
};

/** The response type for FRequest_ReceiveEventsV1 */
struct RALLYHEREAPI_API FResponse_ReceiveEventsV1 : public FResponseAccessorTemplate<FRHAPI_PostGameEventsResponse, FRHAPI_HzApiErrorModel, FRHAPI_HTTPValidationError>
{
	typedef FResponseAccessorTemplate<FRHAPI_PostGameEventsResponse, FRHAPI_HzApiErrorModel, FRHAPI_HTTPValidationError> Super;

	FResponse_ReceiveEventsV1(FRequestMetadata InRequestMetadata);
	//virtual ~FResponse_ReceiveEventsV1() = default;
	
	/** @brief Parse out response content into local storage from a given JsonValue */
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	/** @brief Parse out header information for later usage */
	virtual bool ParseHeaders() override;
	/** @brief Gets the description of the response code */
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

#if ALLOW_LEGACY_RESPONSE_CONTENT
	/** Default Response Content */
	UE_DEPRECATED(5.0, "Direct use of Content is deprecated, please use TryGetDefaultContent(), TryGetContent(), TryGetResponse<>(), or TryGetContentFor<>() instead.")
	FRHAPI_PostGameEventsResponse Content;
#endif //ALLOW_LEGACY_RESPONSE_CONTENT

	// Default Response Helpers
	/** @brief Attempt to retrieve the content in the default response */
	bool TryGetDefaultContent(FRHAPI_PostGameEventsResponse& OutContent) const { return TryGetContent<FRHAPI_PostGameEventsResponse>(OutContent); }
	/** @brief Attempt to retrieve the content in the default response */
	bool TryGetDefaultContent(TOptional<FRHAPI_PostGameEventsResponse>& OutContent) const { return TryGetContent<FRHAPI_PostGameEventsResponse>(OutContent); }
	/** @brief Attempt to retrieve the content in the default response */
	const FRHAPI_PostGameEventsResponse* TryGetDefaultContentAsPointer() const { return TryGetContentAsPointer<FRHAPI_PostGameEventsResponse>(); }
	/** @brief Attempt to retrieve the content in the default response */
	TOptional<FRHAPI_PostGameEventsResponse> TryGetDefaultContentAsOptional() const { return TryGetContentAsOptional<FRHAPI_PostGameEventsResponse>(); }

	// Individual Response Helpers	
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PostGameEventsResponse& OutContent) const;

	/* Response 207
	 Error Codes: - `events_multi_results` - Some of the events from the request failed to process, and uploaded to deadletter blob storage 
	*/
	bool TryGetContentFor207(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 400
	 Error Codes: - `event_denied` - Events of that name are currently denied - `event_duplicated` - Event has the same event_uuid as an event already received - `event_lists_invalid` - The input eventLists is invalid, failed pydantic validation - `event_params_invalid` - The event_params failed validation against the jsonschema defined for the type/version.  See response description for more details.  - `event_unsupported` - Event name is not known - `events_all_failed` - All of events from the request failed to process, and uploaded to deadletter blob storage 
	*/
	bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 404
	 Error Codes: - `event_schema_invalid` - event_params jsonschema is empty, failed to load from developer-api - `event_schema_not_found` - The jsonschema is invalid and could not be used to validate the event_params value.  See response description for more details. 
	*/
	bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

/** The delegate class for FRequest_ReceiveEventsV1 */
DECLARE_DELEGATE_OneParam(FDelegate_ReceiveEventsV1, const FResponse_ReceiveEventsV1&);

/** @brief A helper metadata object for ReceiveEventsV1 that defines the relationship between Request, Delegate, API, etc.  Intended for use with templating */
struct RALLYHEREAPI_API Traits_ReceiveEventsV1
{
	/** The request type */
	typedef FRequest_ReceiveEventsV1 Request;
	/** The response type */
	typedef FResponse_ReceiveEventsV1 Response;
	/** The delegate type, triggered by the response */
	typedef FDelegate_ReceiveEventsV1 Delegate;
	/** The API object that supports this API call */
	typedef FEventsAPI API;
	/** A human readable name for this API call */
	static FString Name;

	/**
	 * @brief A helper that uses all of the above types to initiate an API call, with a specified priority.
	 * @param [in] InAPI The API object the call will be made with
	 * @param [in] InRequest The request to submit to the API call
	 * @param [in] InDelegate An optional delegate to call when the API call completes, containing the response information
	 * @param [in] InPriority An optional priority override for the API call, for use when API calls are being throttled
	 * @return A http request object, if the call was successfully queued.
	 */
	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 InPriority = DefaultRallyHereAPIPriority);
};

/**
 * @brief Validate Event V1
 * Validate a single event, return validation result and the event json will be posted to Kafka
*/
struct RALLYHEREAPI_API FRequest_ValidateEventV1 : public FRequest
{
	FRequest_ValidateEventV1();
	virtual ~FRequest_ValidateEventV1() = default;
	
	/** @brief Given a http request, apply data and settings from this request object to it */
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	/** @brief Compute the URL path for this request instance */
	FString ComputePath() const override;
	/** @brief Get the simplified URL path for this request, not including the verb */
	FName GetSimplifiedPath() const override;
	/** @brief Get the simplified URL path for this request, including the verb */
	FName GetSimplifiedPathWithVerb() const override;

	FRHAPI_RallyHereEvent RallyHereEvent;
	/* IP Address hint */
	TOptional<FString> XRhClientAddr;
};

/** The response type for FRequest_ValidateEventV1 */
struct RALLYHEREAPI_API FResponse_ValidateEventV1 : public FResponseAccessorTemplate<FRHAPI_ValidateEventResponse, FRHAPI_HTTPValidationError>
{
	typedef FResponseAccessorTemplate<FRHAPI_ValidateEventResponse, FRHAPI_HTTPValidationError> Super;

	FResponse_ValidateEventV1(FRequestMetadata InRequestMetadata);
	//virtual ~FResponse_ValidateEventV1() = default;
	
	/** @brief Parse out response content into local storage from a given JsonValue */
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	/** @brief Parse out header information for later usage */
	virtual bool ParseHeaders() override;
	/** @brief Gets the description of the response code */
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

#if ALLOW_LEGACY_RESPONSE_CONTENT
	/** Default Response Content */
	UE_DEPRECATED(5.0, "Direct use of Content is deprecated, please use TryGetDefaultContent(), TryGetContent(), TryGetResponse<>(), or TryGetContentFor<>() instead.")
	FRHAPI_ValidateEventResponse Content;
#endif //ALLOW_LEGACY_RESPONSE_CONTENT

	// Default Response Helpers
	/** @brief Attempt to retrieve the content in the default response */
	bool TryGetDefaultContent(FRHAPI_ValidateEventResponse& OutContent) const { return TryGetContent<FRHAPI_ValidateEventResponse>(OutContent); }
	/** @brief Attempt to retrieve the content in the default response */
	bool TryGetDefaultContent(TOptional<FRHAPI_ValidateEventResponse>& OutContent) const { return TryGetContent<FRHAPI_ValidateEventResponse>(OutContent); }
	/** @brief Attempt to retrieve the content in the default response */
	const FRHAPI_ValidateEventResponse* TryGetDefaultContentAsPointer() const { return TryGetContentAsPointer<FRHAPI_ValidateEventResponse>(); }
	/** @brief Attempt to retrieve the content in the default response */
	TOptional<FRHAPI_ValidateEventResponse> TryGetDefaultContentAsOptional() const { return TryGetContentAsOptional<FRHAPI_ValidateEventResponse>(); }

	// Individual Response Helpers	
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_ValidateEventResponse& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

/** The delegate class for FRequest_ValidateEventV1 */
DECLARE_DELEGATE_OneParam(FDelegate_ValidateEventV1, const FResponse_ValidateEventV1&);

/** @brief A helper metadata object for ValidateEventV1 that defines the relationship between Request, Delegate, API, etc.  Intended for use with templating */
struct RALLYHEREAPI_API Traits_ValidateEventV1
{
	/** The request type */
	typedef FRequest_ValidateEventV1 Request;
	/** The response type */
	typedef FResponse_ValidateEventV1 Response;
	/** The delegate type, triggered by the response */
	typedef FDelegate_ValidateEventV1 Delegate;
	/** The API object that supports this API call */
	typedef FEventsAPI API;
	/** A human readable name for this API call */
	static FString Name;

	/**
	 * @brief A helper that uses all of the above types to initiate an API call, with a specified priority.
	 * @param [in] InAPI The API object the call will be made with
	 * @param [in] InRequest The request to submit to the API call
	 * @param [in] InDelegate An optional delegate to call when the API call completes, containing the response information
	 * @param [in] InPriority An optional priority override for the API call, for use when API calls are being throttled
	 * @return A http request object, if the call was successfully queued.
	 */
	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 InPriority = DefaultRallyHereAPIPriority);
};


/** The API class itself, which will handle calls to */
class RALLYHEREAPI_API FEventsAPI : public FAPI
{
public:
	FEventsAPI();
	virtual ~FEventsAPI();

	FHttpRequestPtr GetAllEventSchema(const FRequest_GetAllEventSchema& Request, const FDelegate_GetAllEventSchema& Delegate = FDelegate_GetAllEventSchema(), int32 Priority = DefaultRallyHereAPIPriority);
	void OnGetAllEventSchemaResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllEventSchema Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	FHttpRequestPtr ReceiveEventsV1(const FRequest_ReceiveEventsV1& Request, const FDelegate_ReceiveEventsV1& Delegate = FDelegate_ReceiveEventsV1(), int32 Priority = DefaultRallyHereAPIPriority);
	void OnReceiveEventsV1Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ReceiveEventsV1 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	FHttpRequestPtr ValidateEventV1(const FRequest_ValidateEventV1& Request, const FDelegate_ValidateEventV1& Delegate = FDelegate_ValidateEventV1(), int32 Priority = DefaultRallyHereAPIPriority);
	void OnValidateEventV1Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ValidateEventV1 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};



}
