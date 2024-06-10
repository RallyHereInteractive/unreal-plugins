// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_WebRequests.h"
#include "RallyHereIntegrationModule.h"
#include "RH_IntegrationSettings.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_ConfigSubsystem.h"
#include "RH_Diagnostics.h"

#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Engine/Engine.h"
#include "Misc/DateTime.h"
#include "HAL/FileManager.h"

namespace
{
	void LogContent(const FString& Content, const FString& Prefix)
	{
		TArray<FString> Arr;
		if (Content.ParseIntoArrayLines(Arr) > 0)
		{
			for (const FString& Line : Arr)
			{
				const int32 LOG_MAX_LENGTH = 750;
				int32 x = 0;
				FString SubStr = Line.Mid(x * LOG_MAX_LENGTH, LOG_MAX_LENGTH);
				while (SubStr.Len() > 0)
				{
					UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Content: %s"), *Prefix, *SubStr);
					++x;
					SubStr = Line.Mid(x * LOG_MAX_LENGTH, LOG_MAX_LENGTH);
				}
			}
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s No content"), *Prefix);
		}
	}

	void LogHeaders(const TArray<FString>& Headers)
	{
		for (const FString& Header : Headers)
		{
			UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("Header: %s"), *Header);
		}
	}

	const TArray<FString>& GetSensitiveHeadersForRequest(const RallyHereAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields = { TEXT("Authorization") };
		static TArray<FString> LoginFields = StandardFields;
		if (RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/login")) || RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/token")))
		{
			return LoginFields;
		}
		return StandardFields;
	}

	const TArray<FString>& GetSensitiveFieldsForRequest(const RallyHereAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields = { TEXT("platform_token"), TEXT("token")};
		static TArray<FString> LoginFields = { TEXT("portal_access_token"), TEXT("portal_parent_access_token"), TEXT("access_token"), TEXT("refresh_token") };
		if (RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/login")) || RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/token")))
		{
			return LoginFields;
		}
		return StandardFields;
	}

	const TArray<FString>& GetSensitiveHeadersForResponse(const RallyHereAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields;
		static TArray<FString> LoginFields = {TEXT("set-cookie")};
		if (RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/login")) || RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/token")))
		{
			return LoginFields;
		}
		return StandardFields;
	}

	const TArray<FString>& GetSensitiveFieldsForResponse(const RallyHereAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields;
		static TArray<FString> LoginFields = { TEXT("portal_access_token"), TEXT("portal_parent_access_token"), TEXT("access_token"), TEXT("refresh_token") };
		if (RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/login")) || RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/token")))
		{
			return LoginFields;
		}
		return StandardFields;
	}

	TArray<FString> SanitizeHeaders(const TArray<FString>& Headers, const TArray<FString>& SensitiveHeaders)
	{
		TArray<FString> OutHeaders;
		OutHeaders.Reserve(Headers.Num());
		for (const FString& Header : Headers)
		{
			int index = INDEX_NONE;
			if (Header.FindChar(TEXT(':'), index))
			{
				const FString Name = Header.Mid(0, index);

				if (SensitiveHeaders.Contains(Name))
				{
					OutHeaders.Add(FString::Printf(TEXT("%s: ****** Hidden sensitive info ******"), *Name));
				}
				else
				{
					OutHeaders.Add(Header);
				}
			}
			else
			{
				OutHeaders.Add(Header);
			}
		}

		return OutHeaders;
	}

	// Sanitize the content of a json value, hiding sensitive fields, and modify the input
	void SanitizeJsonContentMutable(TSharedPtr<FJsonValue> JsonValue, const TArray<FString>& SensitiveFields, FString* OutString = nullptr)
	{
		// if there are no sensitive fields to check, just return input
		if (SensitiveFields.Num() > 0)
		{
			const TSharedPtr<FJsonObject>* JsonObject;
			if (JsonValue->TryGetObject(JsonObject) && JsonObject && JsonObject->IsValid())
			{
				for (const FString& Field : SensitiveFields)
				{
					if ((*JsonObject)->HasField(Field))
					{
						(*JsonObject)->SetStringField(Field, TEXT("****** Hidden sensitive info ******"));
					}
				}
			}
		}

		// if an output string was requested, write to it
		if (OutString != nullptr)
		{
			auto Writer = TJsonWriterFactory<>::Create(OutString);
			FJsonSerializer::Serialize(JsonValue, TEXT(""), Writer);
			Writer->Close();
		}
	}

	// Sanitize the content of a json value, hiding sensitive fields, and do not modify the input, returns sanitized value as a string
	FString SanitizeJsonContent(const TSharedPtr<FJsonValue>& JsonValue, const TArray<FString>& SensitiveFields)
	{
		FString OutputString;
		auto JsonValueCopy = RHJsonUtilities::Duplicate(JsonValue);
		SanitizeJsonContentMutable(JsonValueCopy, SensitiveFields, &OutputString);
		return OutputString;
	}

	FString SanitizeContent(const FString& Content, const TArray<FString>& SensitiveFields)
	{
		// if there are no sensitive fields to check, just return input
		if (SensitiveFields.Num() <= 0 || Content.Len() <= 0)
		{
			return Content;
		}

		auto Reader = TJsonReaderFactory<>::Create(Content);
		TSharedPtr<FJsonValue> JsonValue;
		if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
		{
			return SanitizeJsonContent(JsonValue, SensitiveFields);
		}
		else // We wanted to clear some fields, but failed to parse the contents, do not risk exposing a token and just print nothing
		{
			static FString SensitiveFieldsBlanked(TEXT("****** Could not parse as json to hide sensitive fields, hiding all content ******"));
			return SensitiveFieldsBlanked;
		}
	}

	void LogHttpBase(IHttpBase& HttpBase, const FString& Prefix, const TArray<FString>& SensitiveHeaders = {}, const TArray<FString>& SensitiveFields = {})
	{
		const TArray<FString> Headers = SanitizeHeaders(HttpBase.GetAllHeaders(), SensitiveHeaders);
		LogHeaders(Headers);

		const FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(HttpBase.GetContent().GetData()), HttpBase.GetContent().Num());
		const FString ContentTemp{ TCHARData.Length(), TCHARData.Get() };
		const FString Content = SanitizeContent(ContentTemp, SensitiveFields);

		LogContent(Content, Prefix);
	}
}

FRH_WebRequests::FRH_WebRequests()
	: bRetainWebRequests(false)
{
}

void FRH_WebRequests::Initialize(RallyHereAPI::FRallyHereAPIAll* InAPIs)
{
	if (FParse::Param(FCommandLine::Get(), TEXT("rh.RetainWebRequests")))
	{
		SetIsRetainingWebRequests(true);
	}

	APIs = InAPIs;
	if (APIs)
	{
		for (auto& API : APIs->GetAllAPIs())
		{
			API->OnRequestStarted().AddSP(this, &FRH_WebRequests::OnWebRequestStarted, API);
			API->OnRequestCompleted().AddSP(this, &FRH_WebRequests::OnWebRequestCompleted, API);
		}

		// enable logging by default
		SetLogAllWebRequests(true);
	}
}

void FRH_WebRequests::Uninitialize()
{
	for (auto& API : APIs->GetAllAPIs())
	{
		API->OnRequestStarted().RemoveAll(this);
		API->OnRequestCompleted().RemoveAll(this);
	}

	APIs = nullptr;
}

const TArray<FName> FRH_WebRequests::GetAPINames() const
{
	TArray<FName> Results;
	if (APIs != nullptr)
	{
		for (const auto& API : APIs->GetAllAPIs())
		{
			Results.Add(API->GetName());
		}
	}

	return Results;
}

bool FRH_WebRequests::GetLogAllWebRequests() const
{
	if (APIs != nullptr)
	{
		for (const auto& API : APIs->GetAllAPIs())
		{
			if (!GetLogWebRequests(API->GetName()))
			{
				return false;
			}
		}
	}

	return true;
}
void FRH_WebRequests::SetLogAllWebRequests(bool bValue)
{
	if (APIs != nullptr)
	{
		for (const auto& API : APIs->GetAllAPIs())
		{
			SetLogWebRequests(API->GetName(), bValue);
		}
	}
}

const TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>& FRH_WebRequests::GetTrackedRequests() const
{
	return TrackedRequests;
}

const FRH_WebRequest* FRH_WebRequests::GetTrackedRequestById(const FGuid& id) const
{
	if (auto req = TrackedRequestsById.Find(id))
	{
		return req->Get();
	}
	return nullptr;
}

void FRH_WebRequests::OnWebRequestStarted(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, TSharedRef<RallyHereAPI::FAPI> API)
{
	OnWebRequestStarted_Log(RequestMetadata, HttpRequest, API);
	OnWebRequestStarted_Track(RequestMetadata, HttpRequest, API);
	OnWebRequestStarted_RecordTimestamp(RequestMetadata, HttpRequest, API);
}

void FRH_WebRequests::OnWebRequestStarted_Track(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, TSharedRef<RallyHereAPI::FAPI> API)
{
	const auto WebRequestTrackLimit = GetDefault<URH_IntegrationSettings>()->WebRequestsTrackedRequestsCountLimit
	bool bShouldTrack = bRetainWebRequests || WebRequestTrackLimit > 0;
	if (!bShouldTrack)
	{
		return;
	}
	
	auto Request = MakeShared<FRH_WebRequest>();
	Request->APIName = API->GetName();
	Request->Timestamp = FDateTime::Now();
	Request->Metadata = RequestMetadata;
	Request->Verb = HttpRequest->GetVerb();
	Request->URL = HttpRequest->GetURL();

	// Requests do not allow GetContentAsString(), so parse it out manually
	FString TempContent;
	TempContent.Reserve(HttpRequest->GetContent().Num());
	for (auto b : HttpRequest->GetContent())
	{
		TempContent.AppendChar(static_cast<char>(b));
	}
	Request->Content = SanitizeContent(TempContent, GetSensitiveFieldsForRequest(RequestMetadata));
	TArray<FString> Headers = SanitizeHeaders(HttpRequest->GetAllHeaders(), GetSensitiveHeadersForRequest(RequestMetadata));
	Request->Headers.Reserve(Headers.Num());
	for (const auto& headerStr : Headers)
	{
		int32 index;
		if (headerStr.FindChar(TEXT(':'), index))
		{
			const FString name = headerStr.Mid(0, index);
			const FString value = headerStr.Mid(index + 2); // skip the space after the colon as well
			Request->Headers.Add(name, value);
		}
	}

	TrackedRequests.AddTail(Request);
	TrackedRequestsById.Add(Request->Metadata.Identifier, Request);

	if (!bRetainWebRequests)
	{
		int numElementsToBeRemoved = TrackedRequests.Num() - WebRequestTrackLimit;
		if (numElementsToBeRemoved > 0)
		{
			// clean up the tracked request by id map
			const auto NodeToRemove = TrackedRequests.GetHead();
			if (NodeToRemove->GetValue().IsValid())
			{
				TrackedRequestsById.Remove(NodeToRemove->GetValue()->Metadata.Identifier);
			}

			// remove the node from the list
			TrackedRequests.RemoveNode(NodeToRemove);
			--numElementsToBeRemoved;
		}
	}
}

void FRH_WebRequests::OnWebRequestStarted_Log(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, TSharedRef<RallyHereAPI::FAPI> API)
{
	bool bShouldLog = GetLogWebRequests(API->GetName());
	if (!bShouldLog || !UE_LOG_ACTIVE(LogRallyHereIntegration, VeryVerbose))
	{
		return;
	}

	const FString Prefix = FString::Printf(TEXT("Req [%s]:"), *RequestMetadata.Identifier.ToString().Left(6));
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Verb=%s URL=%s"), *Prefix, *HttpRequest->GetVerb(), *HttpRequest->GetURL());
	LogHttpBase(*HttpRequest, Prefix, GetSensitiveHeadersForRequest(RequestMetadata), GetSensitiveFieldsForRequest(RequestMetadata));
}

void FRH_WebRequests::OnWebRequestStarted_RecordTimestamp(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, TSharedRef<RallyHereAPI::FAPI> API)
{
	APINameToCallCountMap.FindOrAdd(API->GetName())++;
	SimplifiedPathToCallCountMap.FindOrAdd(RequestMetadata.SimplifiedPathWithVerb)++;
}

void FRH_WebRequests::OnWebRequestCompleted(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, TSharedRef<RallyHereAPI::FAPI> API)
{
	OnWebRequestCompleted_Log(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
	OnWebRequestCompleted_Track(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
}

void FRH_WebRequests::OnWebRequestCompleted_Track(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, TSharedRef<RallyHereAPI::FAPI> API)
{
	const auto WebRequestTrackLimit = GetDefault<URH_IntegrationSettings>()->WebRequestsTrackedRequestsCountLimit
	bool bShouldTrack = bRetainWebRequests || WebRequestTrackLimit > 0;
	if (!bShouldTrack)
	{
		return;
	}
	
	auto TrackedRequest = TrackedRequestsById.Find(Response.GetRequestMetadata().Identifier);
	if (!TrackedRequest)
	{
		UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("Failed to track response from request %s"), *Response.GetRequestMetadata().Identifier.ToString());
		return;
	}

	auto& TrackedResponse = (*TrackedRequest)->Responses.Emplace_GetRef();
	TrackedResponse.ResponseSuccess = bSuccess;
	TrackedResponse.ResponseCode = Response.GetHttpResponseCode();
	TrackedResponse.ReceivedTime = FDateTime::Now();

	const auto& Payload = Response.GetPayload();
	if (Payload.IsType<RallyHereAPI::FResponse::BinaryPayloadType>())
	{
		const auto BinaryPayload = Payload.Get<RallyHereAPI::FResponse::BinaryPayloadType>();
		// do not parse out binary content unless it is very small
		if (BinaryPayload.Num() < 1024)
		{
			TrackedResponse.Content = FBase64::Encode(BinaryPayload.GetData(), BinaryPayload.Num());
		}
		else
		{
			TrackedResponse.Content = TEXT("****** Hidden Binary Data ******");
		}
	}
	else if (Payload.IsType<RallyHereAPI::FResponse::StringPayloadType>())
	{
		TrackedResponse.Content = SanitizeContent(Payload.Get<RallyHereAPI::FResponse::StringPayloadType>(), GetSensitiveFieldsForResponse(Response.GetRequestMetadata()));
	}
	else if (Payload.IsType<RallyHereAPI::FResponse::JsonPayloadType>())
	{
		const auto JsonContent = Payload.Get<RallyHereAPI::FResponse::JsonPayloadType>();
		TrackedResponse.Content = SanitizeJsonContent(JsonContent, GetSensitiveFieldsForResponse(Response.GetRequestMetadata()));
	}
	else if (Payload.IsType<RallyHereAPI::FResponse::EmptyPayloadType>())
	{
		// no content, leave empty
	}
	else
	{
		TrackedResponse.Content = TEXT("****** Hidden Unknown Data ******");
	}

	if (HttpResponse != nullptr)
	{
		TArray<FString> Headers = SanitizeHeaders(HttpResponse->GetAllHeaders(), GetSensitiveHeadersForResponse(Response.GetRequestMetadata()));
		TrackedResponse.Headers.Reserve(Headers.Num());
		for (const auto& headerStr : Headers)
		{
			int32 index;
			if (headerStr.FindChar(TEXT(':'), index))
			{
				const FString name = headerStr.Mid(0, index);
				const FString value = headerStr.Mid(index + 2); // skip the space after the colon as well
				TrackedResponse.Headers.Add(name, value);
			}
		}
	}
}

void FRH_WebRequests::OnWebRequestCompleted_Log(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, TSharedRef<RallyHereAPI::FAPI> API)
{
	bool bShouldLog = GetLogWebRequests(API->GetName());
	if (!bShouldLog || !UE_LOG_ACTIVE(LogRallyHereIntegration, VeryVerbose))
	{
		return;
	}

	const FString Prefix = FString::Printf(TEXT("Resp [%s]:"), *Response.GetRequestMetadata().Identifier.ToString().Left(6));
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Code=%d"), *Prefix, static_cast<int32>(Response.GetHttpResponseCode()));

	FString ResponseContent;
	const auto Payload = Response.GetPayload();

	if (Payload.IsType<RallyHereAPI::FResponse::BinaryPayloadType>())
	{
		const auto BinaryPayload = Payload.Get<RallyHereAPI::FResponse::BinaryPayloadType>();
		// do not parse out binary content unless it is very small
		if (BinaryPayload.Num() < 1024)
		{
			ResponseContent = FBase64::Encode(BinaryPayload.GetData(), BinaryPayload.Num());
		}
		else
		{
			ResponseContent = TEXT("****** Hidden Binary Data ******");
		}
	}
	else if (Payload.IsType<RallyHereAPI::FResponse::StringPayloadType>())
	{
		ResponseContent = SanitizeContent(Payload.Get<RallyHereAPI::FResponse::StringPayloadType>(), GetSensitiveFieldsForResponse(Response.GetRequestMetadata()));
	}
	else if (Payload.IsType<RallyHereAPI::FResponse::JsonPayloadType>())
	{
		const auto JsonContent = Payload.Get<RallyHereAPI::FResponse::JsonPayloadType>();
		ResponseContent = SanitizeJsonContent(JsonContent, GetSensitiveFieldsForResponse(Response.GetRequestMetadata()));
	}
	else if (Payload.IsType<RallyHereAPI::FResponse::EmptyPayloadType>())
	{
		// no content, leave empty
	}
	else
	{
		ResponseContent = TEXT("****** Hidden Unknown Data ******");
	}

	if (HttpResponse != nullptr)
	{
		LogHeaders(SanitizeHeaders(HttpResponse->GetAllHeaders(), GetSensitiveHeadersForResponse(Response.GetRequestMetadata())));
	}

	LogContent(ResponseContent, Prefix);
}

TSharedPtr<FJsonObject> FRH_WebRequests::LogTrackedWebRequestsToJSON() const
{
	TArray<TSharedPtr<FJsonValue>> RequestsArray;
	for (const auto& Request : TrackedRequests)
	{
		TSharedPtr<FJsonObject> RequestJson = CreateJsonObjectFromWebRequest(*Request);
		TSharedRef<FJsonValueObject> RequestJsonValue = MakeShareable(new FJsonValueObject(RequestJson));
		RequestsArray.Add(RequestJsonValue);
	}
	TSharedPtr<FJsonObject> WebRequestsObject = MakeShareable(new FJsonObject);
	WebRequestsObject->SetArrayField(TEXT("Web-Requests"), RequestsArray);

	return WebRequestsObject;
}

FString FRH_WebRequests::FormatWebRequestToJsonBlob(const FRH_WebRequest& request) const
{
	TSharedPtr<FJsonObject> WebRequestJson = CreateJsonObjectFromWebRequest(request);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(WebRequestJson.ToSharedRef(), Writer);

	return OutputString;
}

TSharedPtr<FJsonObject> FRH_WebRequests::CreateJsonObjectFromWebRequest(const FRH_WebRequest& request) const
{
	TSharedPtr<FJsonObject> WebRequestJson = MakeShareable(new FJsonObject);

	// Request
	TSharedPtr<FJsonObject> Request = MakeShareable(new FJsonObject);
	Request->SetStringField(TEXT("Verb"), request.Verb);
	Request->SetStringField(TEXT("URL"), request.URL);
	Request->SetNumberField(TEXT("RetryCount"), request.Metadata.RetryCount);
	Request->SetStringField(TEXT("Send-Time"), request.Timestamp.ToIso8601());

	auto Reader = TJsonReaderFactory<>::Create(request.Content);
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
	{
		Request->SetField(TEXT("Content"), JsonValue);
	}
	else
	{
		Request->SetStringField(TEXT("Content"), request.Content);
	}

	TSharedPtr<FJsonObject> RequestHeader = MakeShareable(new FJsonObject);
	for (const auto& pair : request.Headers)
	{
		RequestHeader->SetStringField(pair.Key, pair.Value);
	}
	Request->SetObjectField(TEXT("Headers"), RequestHeader);

	WebRequestJson->SetObjectField(TEXT("Request"), Request);

	// Metadata
	TSharedPtr<FJsonObject> Metadata = MakeShareable(new FJsonObject);
	Metadata->SetStringField(TEXT("Identifier"), request.Metadata.Identifier.ToString(EGuidFormats::DigitsWithHyphens));
	Metadata->SetStringField(TEXT("Simplified Path"), request.Metadata.SimplifiedPath.ToString());
	Metadata->SetNumberField(TEXT("Retry Count"), request.Metadata.RetryCount);
	Metadata->SetStringField(TEXT("Create-Time"), request.Metadata.CreateTimestamp.ToIso8601());
	Metadata->SetStringField(TEXT("Queued-Time"), request.Metadata.QueuedTimestamp.ToIso8601());
	Metadata->SetStringField(TEXT("Http-Queued-Time"), request.Metadata.HttpQueuedTimestamp.ToIso8601());
	
	// calculate durations
	if (request.Metadata.QueuedTimestamp.GetTicks() > 0 && request.Metadata.HttpQueuedTimestamp.GetTicks() > 0)
	{
		Metadata->SetStringField(TEXT("Requester-Queue-Duration-Time"), (request.Metadata.HttpQueuedTimestamp - request.Metadata.QueuedTimestamp).ToString());
		Metadata->SetStringField(TEXT("Http-Queue-Duration-Time"), (request.Timestamp - request.Metadata.HttpQueuedTimestamp).ToString());
	}
	
	WebRequestJson->SetObjectField(TEXT("Metadata"), Metadata);

	// Responses
	TArray<TSharedPtr<FJsonValue>> ResponsesArray;
	for (int32 x = 0; x < request.Responses.Num(); ++x)
	{
		TSharedPtr<FJsonObject> Response = MakeShareable(new FJsonObject);
		Response->SetNumberField(TEXT("Response-Index"), x);
		Response->SetBoolField(TEXT("Http-Success"), request.Responses[x].ResponseSuccess);
		Response->SetNumberField(TEXT("Response-Code"), request.Responses[x].ResponseCode);
		Response->SetStringField(TEXT("Received-Time"), request.Responses[x].ReceivedTime.ToIso8601());
		Response->SetStringField(TEXT("Http-Duration-Time"), (request.Responses[x].ReceivedTime - request.Metadata.HttpQueuedTimestamp).ToString());

		Reader = TJsonReaderFactory<>::Create(request.Responses[x].Content);
		if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
		{
			Response->SetField(TEXT("Content"), JsonValue);
		}
		else
		{
			Response->SetStringField(TEXT("Content"), request.Responses[x].Content);
		}

		TSharedPtr<FJsonObject> ResponseHeader = MakeShareable(new FJsonObject);
		for (const auto& pair : request.Responses[x].Headers)
		{
			ResponseHeader->SetStringField(pair.Key, pair.Value);
		}
		Response->SetObjectField(TEXT("Headers"), ResponseHeader);

		TSharedRef<FJsonValueObject> ResponseJsonValue = MakeShareable(new FJsonValueObject(Response));
		ResponsesArray.Add(ResponseJsonValue);
	}
	WebRequestJson->SetArrayField(TEXT("Responses"), ResponsesArray);

	return WebRequestJson;
}

void FRH_WebRequests::GetRecentCallCountMaps(TMap<FName, int32>* OutAPIRecentCallCountMap, TMap<FName, int32>* OutURLRecentCallCountMap) const
{
	if (OutAPIRecentCallCountMap == nullptr && OutURLRecentCallCountMap == nullptr)
	{
		return;
	}
	if (OutAPIRecentCallCountMap)
	{
		OutAPIRecentCallCountMap->Reset();
	}
	if (OutURLRecentCallCountMap)
	{
		OutURLRecentCallCountMap->Reset();
	}

	FDateTime TimeLimit = FDateTime::Now() - FTimespan(0, 1, 0);
	for (auto WebRequestPtr : GetTrackedRequests())
	{
		if (FRH_WebRequest* request = WebRequestPtr.Get())
		{
			if (request->Timestamp < TimeLimit)
			{
				continue;
			}
			if (OutAPIRecentCallCountMap)
			{
				OutAPIRecentCallCountMap->FindOrAdd(request->APIName)++;
			}
			if (OutURLRecentCallCountMap)
			{
				OutURLRecentCallCountMap->FindOrAdd(request->Metadata.SimplifiedPathWithVerb)++;
			}
		}
	}
}

void FRH_WebRequests::DetectRecentBursts(TMap<FName, TTuple<int32, int32>>* OutBurstMapByAPIName, TMap<FName, TTuple<int32, int32>>* OutBurstMapByURL) const
{
	if (OutBurstMapByAPIName == nullptr && OutBurstMapByURL == nullptr)
	{
		return;
	}
	if (OutBurstMapByAPIName != nullptr)
	{
		OutBurstMapByAPIName->Reset();
	}
	if (OutBurstMapByURL != nullptr)
	{
		OutBurstMapByURL->Reset();
	}

	const auto* IntegrationSettings = GetDefault<URH_IntegrationSettings>();

	FTimespan burstTimeThreshold = FTimespan(0, 0, IntegrationSettings->WebRequestsBurstTimeThresholdInSeconds);
	auto burstCountThreshold = IntegrationSettings->WebRequestsBurstCountThreshold;

	auto DetectBurstsAndPopulateMap = [this, burstTimeThreshold, burstCountThreshold](TDoubleLinkedListIterator<TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>::TDoubleLinkedListNode, TSharedPtr<FRH_WebRequest>>& RequestsIterator,
																FRH_WebRequest* StartingRequest,
																auto& IsMatch,
																auto& GetKeyFromRequest,
																TMap<FName, TSet<TSharedPtr<FRH_WebRequest>>>& CurrentBurstRequestsMap,
																TMap<FName, TTuple<int32, int32>>* OutBurstMap)
	{
		int currentIntervalCallCount = 1;
		auto listNode = RequestsIterator.GetNode();
		TSet<TSharedPtr<FRH_WebRequest>> currentBurstRequests;
		currentBurstRequests.Add(listNode->GetValue());

		while (listNode->GetNextNode() != nullptr) // Check 5s interval from startingRequest
		{
			listNode = listNode->GetNextNode();
			auto nodeRequest = listNode->GetValue().Get();
			if (nodeRequest == nullptr || !IsMatch(nodeRequest, StartingRequest))
			{
				continue;
			}
			if (nodeRequest->Timestamp > StartingRequest->Timestamp + burstTimeThreshold)
			{
				break;
			}
			++currentIntervalCallCount;
			currentBurstRequests.Add(listNode->GetValue());
		}

		FName key = GetKeyFromRequest(StartingRequest);
		if (currentIntervalCallCount >= burstCountThreshold) // this is a burst
		{
			CurrentBurstRequestsMap.FindOrAdd(key).Append(currentBurstRequests);
		}
		else // not a burst, end the set and increment count
		{
			if (CurrentBurstRequestsMap.Contains(key) && CurrentBurstRequestsMap[key].Num() > 0)
			{
				const int32 burstSize = CurrentBurstRequestsMap[key].Num();
				OutBurstMap->FindOrAdd(key).Key++;
				OutBurstMap->FindOrAdd(key).Value = FMath::Max(OutBurstMap->FindOrAdd(key).Value, burstSize);
				CurrentBurstRequestsMap[key].Reset();
			}
		}
	};

	// For API Name map
	auto IsMatchByAPIName = [](FRH_WebRequest* Request1, FRH_WebRequest* Request2) -> bool
	{
		return Request1->APIName == Request2->APIName;
	};
	// For API Name map
	auto GetAPINameFromRequest = [](FRH_WebRequest* Request) -> FName
	{
		return Request->APIName;
	};
	// For URL map
	auto IsMatchByURL = [](FRH_WebRequest* Request1, FRH_WebRequest* Request2) -> bool
	{
		return Request1->Metadata.SimplifiedPathWithVerb == Request2->Metadata.SimplifiedPathWithVerb;
	};
	// For URL map
	auto GetURLFromRequest = [](FRH_WebRequest* Request) -> FName
	{
		return Request->Metadata.SimplifiedPathWithVerb;
	};

	FDateTime TimeLimit = FDateTime::Now() - FTimespan(0, 1, 0);
	TMap<FName, TSet<TSharedPtr<FRH_WebRequest>>> APINameToCurrentBurstRequests;
	TMap<FName, TSet<TSharedPtr<FRH_WebRequest>>> URLToCurrentBurstRequests;

	for (auto requestsIterator = TDoubleLinkedListIterator<TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>::TDoubleLinkedListNode, TSharedPtr<FRH_WebRequest>>(GetTrackedRequests().GetHead()); requestsIterator.GetNode() != nullptr; requestsIterator++)
	{
		auto startingRequest = requestsIterator.GetNode()->GetValue().Get();
		if (startingRequest == nullptr || startingRequest->Timestamp < TimeLimit) // not within last 60s
		{
			continue;
		}
		if (OutBurstMapByAPIName != nullptr)
		{
			DetectBurstsAndPopulateMap(requestsIterator, startingRequest, IsMatchByAPIName, GetAPINameFromRequest, APINameToCurrentBurstRequests, OutBurstMapByAPIName);
		}
		if (OutBurstMapByURL != nullptr)
		{
			DetectBurstsAndPopulateMap(requestsIterator, startingRequest, IsMatchByURL, GetURLFromRequest, URLToCurrentBurstRequests, OutBurstMapByURL);
		}
	}
}