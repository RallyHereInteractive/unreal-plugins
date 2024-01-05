// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_WebRequests.h"
#include "RallyHereIntegrationModule.h"
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
	static bool bSantizeWebRequests = true;
	FAutoConsoleVariableRef CvarSanitizeWebRequests(
		TEXT("rh.SanitizeWebRequests"),
		bSantizeWebRequests,
		TEXT("When true, causes web requests to sanitize data before recording")
	);

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
		static TArray<FString> StandardFields = { TEXT("platform_token") };
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
		if (!bSantizeWebRequests)
		{
			return Headers;
		}

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

	FString SanitizeContent(const FString& Content, const TArray<FString>& SensitiveFields)
	{
		// if there are no sensitive fields to check, just return input
		if (SensitiveFields.Num() <= 0 || Content.Len() <= 0 || !bSantizeWebRequests)
		{
			return Content;
		}

		auto Reader = TJsonReaderFactory<>::Create(Content);
		TSharedPtr<FJsonValue> JsonValue;
		const TSharedPtr<FJsonObject>* JsonObject;
		if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid() && JsonValue->TryGetObject(JsonObject) && JsonObject && JsonObject->IsValid())
		{
			for (const FString& Field : SensitiveFields)
			{
				if ((*JsonObject)->HasField(Field))
				{
					(*JsonObject)->SetStringField(Field, TEXT("****** Hidden sensitive info ******"));
				}
			}
			FString JsonResult;
			auto Writer = TJsonWriterFactory<>::Create(&JsonResult);
			FJsonSerializer::Serialize(JsonValue, TEXT(""), Writer);
			Writer->Close();
			return JsonResult;
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
		for (const FString& Header : Headers)
		{
			UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Header: %s"), *Prefix, *Header);
		}

		const FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(HttpBase.GetContent().GetData()), HttpBase.GetContent().Num());
		const FString ContentTemp{ TCHARData.Length(), TCHARData.Get() };
		const FString Content = SanitizeContent(ContentTemp, SensitiveFields);

		LogContent(Content, Prefix);
	}
}

void URH_WebRequests::Initialize(RallyHereAPI::FRallyHereAPIAll* InAPIs)
{
	APIs = InAPIs;
	if (APIs)
	{
		for (auto& API : APIs->GetAllAPIs())
		{
			API->OnRequestStarted().AddUObject(this, &URH_WebRequests::OnWebRequestStarted, API);
			API->OnRequestCompleted().AddUObject(this, &URH_WebRequests::OnWebRequestCompleted, API);
		}

		// enable logging by default
		SetLogAllWebRequests(true);
	}
}

void URH_WebRequests::Uninitialize()
{
	APIs = nullptr;
}

const TArray<FName> URH_WebRequests::GetAPINames() const
{
	TArray<FName> Results;
	if (APIs != nullptr)
	{
		for (const auto* API : APIs->GetAllAPIs())
		{
			if (API != nullptr) Results.Add(API->GetName());
		}
	}

	return Results;
}

bool URH_WebRequests::GetLogAllWebRequests() const
{
	if (APIs != nullptr)
	{
		for (const auto* API : APIs->GetAllAPIs())
		{
			if (API != nullptr)
			{
				if (!GetLogWebRequests(API->GetName()))
				{
					return false;
				}
			}
		}
	}

	return true;
}
void URH_WebRequests::SetLogAllWebRequests(bool bValue)
{
	if (APIs != nullptr)
	{
		for (const auto* API : APIs->GetAllAPIs())
		{
			if (API != nullptr)
			{
				SetLogWebRequests(API->GetName(), bValue);
			}
		}
	}
}

const TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>& URH_WebRequests::GetTrackedRequests() const
{
	return TrackedRequests;
}

const FRH_WebRequest* URH_WebRequests::GetTrackedRequestById(const FGuid& id) const
{
	if (auto req = TrackedRequestsById.Find(id))
	{
		return req->Get();
	}
	return nullptr;
}

void URH_WebRequests::OnWebRequestStarted(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API)
{
	OnWebRequestStarted_Log(RequestMetadata, HttpRequest, API);
	OnWebRequestStarted_Track(RequestMetadata, HttpRequest, API);
	OnWebRequestStarted_RecordTimestamp(RequestMetadata, HttpRequest, API);
}

void URH_WebRequests::OnWebRequestStarted_Track(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API)
{
	if (API == nullptr)
	{
		return;
	}

	auto Request = MakeShared<FRH_WebRequest>();
	Request->APIName = API->GetName();
	Request->Timestamp = FDateTime::Now();
	Request->Metadata = RequestMetadata;
	Request->Verb = HttpRequest->GetVerb();
	Request->URL = HttpRequest->GetURL();

	FString TempContent;
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
			Request->Headers.Emplace(name, value);
		}
	}

	TrackedRequests.AddTail(Request);
	TrackedRequestsById.Emplace(Request->Metadata.Identifier, Request);

	if (!bRetainWebRequests)
	{
		int numElementsToBeRemoved = TrackedRequests.Num() - TrackedRequestsCountLimit;
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

void URH_WebRequests::OnWebRequestStarted_Log(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API)
{
	bool bShouldLog = API != nullptr && GetLogWebRequests(API->GetName());
	if (!bShouldLog || !UE_LOG_ACTIVE(LogRallyHereIntegration, VeryVerbose))
	{
		return;
	}

	const FString Prefix = FString::Printf(TEXT("Req [%s]:"), *RequestMetadata.Identifier.ToString().Left(6));
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Verb=%s URL=%s"), *Prefix, *HttpRequest->GetVerb(), *HttpRequest->GetURL());
	LogHttpBase(*HttpRequest, Prefix, GetSensitiveHeadersForRequest(RequestMetadata), GetSensitiveFieldsForRequest(RequestMetadata));
}

void URH_WebRequests::OnWebRequestStarted_RecordTimestamp(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API)
{
	if (API == nullptr)
	{
		return;
	}
	APINameToCallCountMap.FindOrAdd(API->GetName())++;
	SimplifiedPathToCallCountMap.FindOrAdd(RequestMetadata.SimplifiedPath)++;
}

void URH_WebRequests::OnWebRequestCompleted(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API)
{
	OnWebRequestCompleted_Log(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
	OnWebRequestCompleted_Track(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
}

void URH_WebRequests::OnWebRequestCompleted_Track(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API)
{
	if (API == nullptr)
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
	if (HttpResponse)
	{
		TrackedResponse.Content = SanitizeContent(HttpResponse->GetContentAsString(), GetSensitiveFieldsForResponse(Response.GetRequestMetadata()));
		TArray<FString> Headers = SanitizeHeaders(HttpResponse->GetAllHeaders(), GetSensitiveHeadersForResponse(Response.GetRequestMetadata()));
		for (const auto& headerStr : Headers)
		{
			int32 index;
			if (headerStr.FindChar(TEXT(':'), index))
			{
				const FString name = headerStr.Mid(0, index);
				const FString value = headerStr.Mid(index + 2); // skip the space after the colon as well
				TrackedResponse.Headers.Emplace(name, value);
			}
		}
	}
}

void URH_WebRequests::OnWebRequestCompleted_Log(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API)
{
	bool bShouldLog = API != nullptr && GetLogWebRequests(API->GetName());
	if (!bShouldLog || !UE_LOG_ACTIVE(LogRallyHereIntegration, VeryVerbose))
	{
		return;
	}

	const FString Prefix = FString::Printf(TEXT("Resp [%s]:"), *Response.GetRequestMetadata().Identifier.ToString().Left(6));
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Code=%d"), *Prefix, static_cast<int32>(Response.GetHttpResponseCode()));

	if (HttpResponse)
	{
		LogHttpBase(*HttpResponse, Prefix, GetSensitiveHeadersForResponse(Response.GetRequestMetadata()), GetSensitiveFieldsForResponse(Response.GetRequestMetadata()));
	}
}

TSharedPtr<FJsonObject> URH_WebRequests::LogTrackedWebRequestsToJSON() const
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

FString URH_WebRequests::FormatWebRequestToJsonBlob(const FRH_WebRequest& request) const
{
	TSharedPtr<FJsonObject> WebRequestJson = CreateJsonObjectFromWebRequest(request);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(WebRequestJson.ToSharedRef(), Writer);

	return OutputString;
}

TSharedPtr<FJsonObject> URH_WebRequests::CreateJsonObjectFromWebRequest(const FRH_WebRequest& request) const
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
		Response->SetNumberField(TEXT("Duration-Time"), (request.Responses[x].ReceivedTime - request.Timestamp).GetTotalSeconds());

		Reader = TJsonReaderFactory<>::Create(request.Responses[x].Content);
		if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
		{
			Response->SetField(TEXT("Content"), JsonValue);
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

void URH_WebRequests::GetRecentCallCountMaps(TMap<FName, int32>* OutAPIRecentCallCountMap, TMap<FName, int32>* OutURLRecentCallCountMap) const
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
				OutURLRecentCallCountMap->FindOrAdd(request->Metadata.SimplifiedPath)++;
			}
		}
	}
}

void URH_WebRequests::DetectRecentBursts(TMap<FName, TTuple<int32, int32>>* OutBurstMapByAPIName, TMap<FName, TTuple<int32, int32>>* OutBurstMapByURL) const
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

	FTimespan burstTimeThreshold = FTimespan(0, 0, BurstTimeThresholdInSeconds);
	auto DetectBurstsAndPopulateMap = [this, burstTimeThreshold](TDoubleLinkedListIterator<TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>::TDoubleLinkedListNode, TSharedPtr<FRH_WebRequest>>& RequestsIterator,
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
		if (currentIntervalCallCount >= BurstCountThreshold) // this is a burst
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
		return Request1->Metadata.SimplifiedPath == Request2->Metadata.SimplifiedPath;
	};
	// For URL map
	auto GetURLFromRequest = [](FRH_WebRequest* Request) -> FName
	{
		return Request->Metadata.SimplifiedPath;
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