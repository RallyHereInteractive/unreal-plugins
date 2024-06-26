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
#include "EntitlementEvent.h"
#include "EntitlementEventList.h"
#include "EntitlementEventRequest.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "PlatformEntitlementProcessRequest.h"
#include "PlatformEntitlementProcessResult.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GenerateEntitlementEvent;
struct FResponse_GenerateEntitlementEvent;
struct FRequest_GetEntitlementEvents;
struct FResponse_GetEntitlementEvents;
struct FRequest_ProcessPlatformEntitlementForMe;
struct FResponse_ProcessPlatformEntitlementForMe;
struct FRequest_ProcessPlatformEntitlementsByPlayerUuid;
struct FResponse_ProcessPlatformEntitlementsByPlayerUuid;
struct FRequest_RetrieveEntitlementRequestByPlayerUuid;
struct FResponse_RetrieveEntitlementRequestByPlayerUuid;
struct FRequest_RetrieveEntitlementRequestForMe;
struct FResponse_RetrieveEntitlementRequestForMe;

DECLARE_DELEGATE_OneParam(FDelegate_GenerateEntitlementEvent, const FResponse_GenerateEntitlementEvent&);
DECLARE_DELEGATE_OneParam(FDelegate_GetEntitlementEvents, const FResponse_GetEntitlementEvents&);
DECLARE_DELEGATE_OneParam(FDelegate_ProcessPlatformEntitlementForMe, const FResponse_ProcessPlatformEntitlementForMe&);
DECLARE_DELEGATE_OneParam(FDelegate_ProcessPlatformEntitlementsByPlayerUuid, const FResponse_ProcessPlatformEntitlementsByPlayerUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_RetrieveEntitlementRequestByPlayerUuid, const FResponse_RetrieveEntitlementRequestByPlayerUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_RetrieveEntitlementRequestForMe, const FResponse_RetrieveEntitlementRequestForMe&);

class RALLYHEREAPI_API FEntitlementsAPI : public FAPI
{
public:
	FEntitlementsAPI();
	virtual ~FEntitlementsAPI();

	FHttpRequestPtr GenerateEntitlementEvent(const FRequest_GenerateEntitlementEvent& Request, const FDelegate_GenerateEntitlementEvent& Delegate = FDelegate_GenerateEntitlementEvent(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetEntitlementEvents(const FRequest_GetEntitlementEvents& Request, const FDelegate_GetEntitlementEvents& Delegate = FDelegate_GetEntitlementEvents(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ProcessPlatformEntitlementForMe(const FRequest_ProcessPlatformEntitlementForMe& Request, const FDelegate_ProcessPlatformEntitlementForMe& Delegate = FDelegate_ProcessPlatformEntitlementForMe(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ProcessPlatformEntitlementsByPlayerUuid(const FRequest_ProcessPlatformEntitlementsByPlayerUuid& Request, const FDelegate_ProcessPlatformEntitlementsByPlayerUuid& Delegate = FDelegate_ProcessPlatformEntitlementsByPlayerUuid(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr RetrieveEntitlementRequestByPlayerUuid(const FRequest_RetrieveEntitlementRequestByPlayerUuid& Request, const FDelegate_RetrieveEntitlementRequestByPlayerUuid& Delegate = FDelegate_RetrieveEntitlementRequestByPlayerUuid(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr RetrieveEntitlementRequestForMe(const FRequest_RetrieveEntitlementRequestForMe& Request, const FDelegate_RetrieveEntitlementRequestForMe& Delegate = FDelegate_RetrieveEntitlementRequestForMe(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnGenerateEntitlementEventResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GenerateEntitlementEvent Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetEntitlementEventsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetEntitlementEvents Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnProcessPlatformEntitlementForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessPlatformEntitlementForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnProcessPlatformEntitlementsByPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessPlatformEntitlementsByPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnRetrieveEntitlementRequestByPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_RetrieveEntitlementRequestByPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnRetrieveEntitlementRequestForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_RetrieveEntitlementRequestForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Generate Entitlement Event
 *
 * Create an entitlement event - this is used to bypass platform providers and grant entitlement events directly. 
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `inv:*`, `inv:entitlement_event:write`
*/
struct RALLYHEREAPI_API FRequest_GenerateEntitlementEvent : public FRequest
{
	FRequest_GenerateEntitlementEvent();
	virtual ~FRequest_GenerateEntitlementEvent() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FRHAPI_EntitlementEventRequest EntitlementEventRequest;
};

struct RALLYHEREAPI_API FResponse_GenerateEntitlementEvent : public FResponse
{
	FResponse_GenerateEntitlementEvent(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GenerateEntitlementEvent() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_EntitlementEvent Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_EntitlementEvent& OutContent) const;

	/* Response 403
	 Error Codes: - `auth_invalid_key_id` - Invalid Authorization - Invalid Key ID in Access Token - `auth_invalid_version` - Invalid Authorization - version - `auth_malformed_access` - Invalid Authorization - malformed access token - `auth_not_jwt` - Invalid Authorization - `auth_token_expired` - Token is expired - `auth_token_format` - Invalid Authorization - {} - `auth_token_invalid_claim` - Token contained invalid claim value: {} - `auth_token_sig_invalid` - Token Signature is invalid - `auth_token_unknown` - Failed to parse token - `insufficient_permissions` - Insufficient Permissions 
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 404
	 Error Codes:  
	*/
	bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	 Error Codes:  
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GenerateEntitlementEvent
{
	typedef FRequest_GenerateEntitlementEvent Request;
	typedef FResponse_GenerateEntitlementEvent Response;
	typedef FDelegate_GenerateEntitlementEvent Delegate;
	typedef FEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GenerateEntitlementEvent(InRequest, InDelegate, Priority); }
};

/* Get Entitlement Events
 *
 * Get entitlement events for a player.  If no player is provided, all events will be returned.
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `inv:*`, `inv:entitlement_event:read`
*/
struct RALLYHEREAPI_API FRequest_GetEntitlementEvents : public FRequest
{
	FRequest_GetEntitlementEvents();
	virtual ~FRequest_GetEntitlementEvents() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	/* Player to get entitlement events for */
	TOptional<FGuid> PlayerUuid;
	/* Player to get entitlement events for.  Will be ignored if player_uuid is provided */
	TOptional<int32> PlayerId;
	/* Cursor for pagination */
	TOptional<FString> Cursor;
};

struct RALLYHEREAPI_API FResponse_GetEntitlementEvents : public FResponse
{
	FResponse_GetEntitlementEvents(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetEntitlementEvents() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_EntitlementEventList Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_EntitlementEventList& OutContent) const;

	/* Response 403
	 Error Codes: - `auth_invalid_key_id` - Invalid Authorization - Invalid Key ID in Access Token - `auth_invalid_version` - Invalid Authorization - version - `auth_malformed_access` - Invalid Authorization - malformed access token - `auth_not_jwt` - Invalid Authorization - `auth_token_expired` - Token is expired - `auth_token_format` - Invalid Authorization - {} - `auth_token_invalid_claim` - Token contained invalid claim value: {} - `auth_token_sig_invalid` - Token Signature is invalid - `auth_token_unknown` - Failed to parse token - `insufficient_permissions` - Insufficient Permissions 
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetEntitlementEvents
{
	typedef FRequest_GetEntitlementEvents Request;
	typedef FResponse_GetEntitlementEvents Response;
	typedef FDelegate_GetEntitlementEvents Delegate;
	typedef FEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetEntitlementEvents(InRequest, InDelegate, Priority); }
};

/* Process Platform Entitlement For Me
 *
 * Process platform entitlements, consuming from the platform inventory where possible and generating orders.  
 * 
 * Note that some orders may not be fulfilled at the completion of this request and need to be polled separately for results
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `inv:*`, `inv:platform_entitlements:any`
 * 
 * - For the player themselves : `inv:platform_entitlements:self`
*/
struct RALLYHEREAPI_API FRequest_ProcessPlatformEntitlementForMe : public FRequest
{
	FRequest_ProcessPlatformEntitlementForMe();
	virtual ~FRequest_ProcessPlatformEntitlementForMe() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FRHAPI_PlatformEntitlementProcessRequest PlatformEntitlementProcessRequest;
};

struct RALLYHEREAPI_API FResponse_ProcessPlatformEntitlementForMe : public FResponse
{
	FResponse_ProcessPlatformEntitlementForMe(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ProcessPlatformEntitlementForMe() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_PlatformEntitlementProcessResult Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ProcessPlatformEntitlementForMe
{
	typedef FRequest_ProcessPlatformEntitlementForMe Request;
	typedef FResponse_ProcessPlatformEntitlementForMe Response;
	typedef FDelegate_ProcessPlatformEntitlementForMe Delegate;
	typedef FEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ProcessPlatformEntitlementForMe(InRequest, InDelegate, Priority); }
};

/* Process Platform Entitlements By Player Uuid
 *
 * Process platform entitlements, consuming from the platform inventory where possible and generating orders.  
 * 
 * Note that some orders may not be fulfilled at the completion of this request and need to be polled separately for results
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `inv:*`, `inv:platform_entitlements:any`
 * 
 * - For the player themselves : `inv:platform_entitlements:self`
*/
struct RALLYHEREAPI_API FRequest_ProcessPlatformEntitlementsByPlayerUuid : public FRequest
{
	FRequest_ProcessPlatformEntitlementsByPlayerUuid();
	virtual ~FRequest_ProcessPlatformEntitlementsByPlayerUuid() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FRHAPI_PlatformEntitlementProcessRequest PlatformEntitlementProcessRequest;
};

struct RALLYHEREAPI_API FResponse_ProcessPlatformEntitlementsByPlayerUuid : public FResponse
{
	FResponse_ProcessPlatformEntitlementsByPlayerUuid(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ProcessPlatformEntitlementsByPlayerUuid() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_PlatformEntitlementProcessResult Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ProcessPlatformEntitlementsByPlayerUuid
{
	typedef FRequest_ProcessPlatformEntitlementsByPlayerUuid Request;
	typedef FResponse_ProcessPlatformEntitlementsByPlayerUuid Response;
	typedef FDelegate_ProcessPlatformEntitlementsByPlayerUuid Delegate;
	typedef FEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ProcessPlatformEntitlementsByPlayerUuid(InRequest, InDelegate, Priority); }
};

/* Retrieve Entitlement Request By Player Uuid
 *
 * Get the status of a platform entitlement request by request id.
 *     
 *     Required Permissions:
 * 
 * - For any player (including themselves) any of: `inv:*`, `inv:platform_entitlements:any`
 * 
 * - For the player themselves : `inv:platform_entitlements:self`
*/
struct RALLYHEREAPI_API FRequest_RetrieveEntitlementRequestByPlayerUuid : public FRequest
{
	FRequest_RetrieveEntitlementRequestByPlayerUuid();
	virtual ~FRequest_RetrieveEntitlementRequestByPlayerUuid() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FString RequestId;
};

struct RALLYHEREAPI_API FResponse_RetrieveEntitlementRequestByPlayerUuid : public FResponse
{
	FResponse_RetrieveEntitlementRequestByPlayerUuid(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_RetrieveEntitlementRequestByPlayerUuid() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_PlatformEntitlementProcessResult Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_RetrieveEntitlementRequestByPlayerUuid
{
	typedef FRequest_RetrieveEntitlementRequestByPlayerUuid Request;
	typedef FResponse_RetrieveEntitlementRequestByPlayerUuid Response;
	typedef FDelegate_RetrieveEntitlementRequestByPlayerUuid Delegate;
	typedef FEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->RetrieveEntitlementRequestByPlayerUuid(InRequest, InDelegate, Priority); }
};

/* Retrieve Entitlement Request For Me
 *
 * Get the status of a platform entitlement request by request id.
 *     
 *     Required Permissions:
 * 
 * - For any player (including themselves) any of: `inv:*`, `inv:platform_entitlements:any`
 * 
 * - For the player themselves : `inv:platform_entitlements:self`
*/
struct RALLYHEREAPI_API FRequest_RetrieveEntitlementRequestForMe : public FRequest
{
	FRequest_RetrieveEntitlementRequestForMe();
	virtual ~FRequest_RetrieveEntitlementRequestForMe() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FString RequestId;
};

struct RALLYHEREAPI_API FResponse_RetrieveEntitlementRequestForMe : public FResponse
{
	FResponse_RetrieveEntitlementRequestForMe(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_RetrieveEntitlementRequestForMe() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_PlatformEntitlementProcessResult Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_RetrieveEntitlementRequestForMe
{
	typedef FRequest_RetrieveEntitlementRequestForMe Request;
	typedef FResponse_RetrieveEntitlementRequestForMe Response;
	typedef FDelegate_RetrieveEntitlementRequestForMe Delegate;
	typedef FEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->RetrieveEntitlementRequestForMe(InRequest, InDelegate, Priority); }
};


}
