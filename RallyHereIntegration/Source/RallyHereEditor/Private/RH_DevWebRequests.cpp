
#include "RH_DevWebRequests.h"
#include "RallyHereEditor.h"

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
					UE_LOG(LogRallyHereEditor, VeryVerbose, TEXT("%s Content: %s"), *Prefix, *SubStr);
					++x;
					SubStr = Line.Mid(x * LOG_MAX_LENGTH, LOG_MAX_LENGTH);
				}
			}
		}
		else
		{
			UE_LOG(LogRallyHereEditor, VeryVerbose, TEXT("%s No content"), *Prefix);
		}
	}

	const TArray<FString>& GetSensitiveHeadersForRequest(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields = { TEXT("Authorization") };
		static TArray<FString> LoginFields = StandardFields;
		if (RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/login")))
		{
			return LoginFields;
		}
		return StandardFields;
	}

	const TArray<FString>& GetSensitiveFieldsForRequest(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields;
		static TArray<FString> LoginFields = { TEXT("portal_access_token"), TEXT("portal_parent_access_token"), TEXT("access_token"), TEXT("refresh_token") };
		if (RequestMetadata.SimplifiedPath.ToString().Contains(TEXT("/login")))
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

	FString SanitizeContent(const FString& Content, const TArray<FString>& SensitiveFields)
	{
		// if there are no sensitive fields to check, just return input
		if (SensitiveFields.Num() <= 0)
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
			UE_LOG(LogRallyHereEditor, VeryVerbose, TEXT("%s Header: %s"), *Prefix, *Header);
		}

		const FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(HttpBase.GetContent().GetData()), HttpBase.GetContent().Num());
		const FString ContentTemp{ TCHARData.Length(), TCHARData.Get() };
		const FString Content = SanitizeContent(ContentTemp, SensitiveFields);

		LogContent(Content, Prefix);
	}
}

void URH_DevWebRequests::Initialize(RallyHereDeveloperAPI::FRallyHereDeveloperAPIAll* InAPIs)
{
	APIs = InAPIs;
	if (APIs)
	{
		for (auto& API : APIs->GetAllAPIs())
		{
			API->OnRequestStarted().AddUObject(this, &URH_DevWebRequests::OnWebRequestStarted, API);
			API->OnRequestCompleted().AddUObject(this, &URH_DevWebRequests::OnWebRequestCompleted, API);
		}

		// enable logging by default
		SetLogAllWebRequests(true);
	}
}

void URH_DevWebRequests::Uninitialize()
{
	APIs = nullptr;
}

const TArray<FName> URH_DevWebRequests::GetAPINames() const
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

bool URH_DevWebRequests::GetLogAllWebRequests() const
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
void URH_DevWebRequests::SetLogAllWebRequests(bool bValue)
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

const TDoubleLinkedList<TSharedPtr<FRH_DevWebRequest>>& URH_DevWebRequests::GetTrackedRequests() const
{
	return TrackedRequests;
}

const FRH_DevWebRequest* URH_DevWebRequests::GetTrackedRequestById(FGuid id) const
{
	if (auto req = TrackedRequestsById.Find(id))
	{
		return req->Get();
	}
	return nullptr;
}

void URH_DevWebRequests::OnWebRequestStarted(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereDeveloperAPI::FAPI* API)
{
	OnWebRequestStarted_Log(RequestMetadata, HttpRequest, API);
	OnWebRequestStarted_Track(RequestMetadata, HttpRequest, API);
}

void URH_DevWebRequests::OnWebRequestStarted_Track(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereDeveloperAPI::FAPI* API)
{
	if (API == nullptr)
	{
		return;
	}

	auto Request = MakeShared<FRH_DevWebRequest>();
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
			const FString value = headerStr.Mid(index + 1);
			Request->Headers.Emplace(name, value);
		}
	}

	TrackedRequests.AddTail(Request);
	TrackedRequestsById.Emplace(Request->Metadata.Identifier, Request);
	TrackedRequestsUpdatedDelegate.Broadcast();
}

void URH_DevWebRequests::OnWebRequestStarted_Log(const RallyHereDeveloperAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereDeveloperAPI::FAPI* API)
{
	bool bShouldLog = API != nullptr && GetLogWebRequests(API->GetName());
	if (!bShouldLog || !UE_LOG_ACTIVE(LogRallyHereEditor, VeryVerbose))
	{
		return;
	}

	const FString Prefix = FString::Printf(TEXT("Req [%s]:"), *RequestMetadata.Identifier.ToString().Left(6));
	UE_LOG(LogRallyHereEditor, VeryVerbose, TEXT("%s Verb=%s URL=%s"), *Prefix, *HttpRequest->GetVerb(), *HttpRequest->GetURL());
	LogHttpBase(*HttpRequest, Prefix, GetSensitiveHeadersForRequest(RequestMetadata), GetSensitiveFieldsForRequest(RequestMetadata));
}

void URH_DevWebRequests::OnWebRequestCompleted(const RallyHereDeveloperAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereDeveloperAPI::FAPI* API)
{
	OnWebRequestCompleted_Log(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
	OnWebRequestCompleted_Track(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
}

void URH_DevWebRequests::OnWebRequestCompleted_Track(const RallyHereDeveloperAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereDeveloperAPI::FAPI* API)
{
	if (API == nullptr)
	{
		return;
	}

	auto TrackedRequest = TrackedRequestsById.Find(Response.GetRequestMetadata().Identifier);
	if (!TrackedRequest)
	{
		UE_LOG(LogRallyHereEditor, VeryVerbose, TEXT("Failed to track response from request %s"), *Response.GetRequestMetadata().Identifier.ToString());
		return;
	}

	auto& TrackedResponse = (*TrackedRequest)->Responses.Emplace_GetRef();
	TrackedResponse.ResponseSuccess = bSuccess;
	TrackedResponse.ResponseCode = Response.GetHttpResponseCode();
	if (HttpResponse)
	{
		TrackedResponse.Content = SanitizeContent(HttpResponse->GetContentAsString(), GetSensitiveFieldsForRequest(Response.GetRequestMetadata()));
		TArray<FString> Headers = SanitizeHeaders(HttpResponse->GetAllHeaders(), GetSensitiveHeadersForRequest(Response.GetRequestMetadata()));
		for (const auto& headerStr : Headers)
		{
			int32 index;
			if (headerStr.FindChar(TEXT(':'), index))
			{
				const FString name = headerStr.Mid(0, index);
				const FString value = headerStr.Mid(index + 1);
				TrackedResponse.Headers.Emplace(name, value);
			}
		}
	}
}

void URH_DevWebRequests::OnWebRequestCompleted_Log(const RallyHereDeveloperAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereDeveloperAPI::FAPI* API)
{
	bool bShouldLog = API != nullptr && GetLogWebRequests(API->GetName());
	if (!bShouldLog || !UE_LOG_ACTIVE(LogRallyHereEditor, VeryVerbose))
	{
		return;
	}

	const FString Prefix = FString::Printf(TEXT("Resp [%s]:"), *Response.GetRequestMetadata().Identifier.ToString().Left(6));
	UE_LOG(LogRallyHereEditor, VeryVerbose, TEXT("%s Code=%d"), *Prefix, static_cast<int32>(Response.GetHttpResponseCode()));

	if (HttpResponse)
	{
		LogHttpBase(*HttpResponse, Prefix, GetSensitiveHeadersForRequest(Response.GetRequestMetadata()), GetSensitiveFieldsForRequest(Response.GetRequestMetadata()));
	}
}

TSharedPtr<FJsonObject> URH_DevWebRequests::LogTrackedWebRequestsToJSON() const
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

FString URH_DevWebRequests::FormatWebRequestToJsonBlob(const FRH_DevWebRequest& request) const
{
	TSharedPtr<FJsonObject> WebRequestJson = CreateJsonObjectFromWebRequest(request);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(WebRequestJson.ToSharedRef(), Writer);

	return OutputString;
}

TSharedPtr<FJsonObject> URH_DevWebRequests::CreateJsonObjectFromWebRequest(const FRH_DevWebRequest& request) const
{
	TSharedPtr<FJsonObject> WebRequestJson = MakeShareable(new FJsonObject);

	// Request
	TSharedPtr<FJsonObject> Request = MakeShareable(new FJsonObject);
	Request->SetStringField("Verb", request.Verb);
	Request->SetStringField("URL", request.URL);
	Request->SetNumberField("RetryCount", request.Metadata.RetryCount);

	auto Reader = TJsonReaderFactory<>::Create(request.Content);
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
	{
		Request->SetField("Content", JsonValue);
	}

	TSharedPtr<FJsonObject> RequestHeader = MakeShareable(new FJsonObject);
	for (const auto& pair : request.Headers)
	{
		RequestHeader->SetStringField(pair.Key, pair.Value);
	}
	Request->SetObjectField("Header", RequestHeader);

	WebRequestJson->SetObjectField("Request", Request);

	// Metadata
	TSharedPtr<FJsonObject> Metadata = MakeShareable(new FJsonObject);
	Metadata->SetStringField("Identifier", request.Metadata.Identifier.ToString(EGuidFormats::DigitsWithHyphens));
	Metadata->SetStringField("Simplified Path", request.Metadata.SimplifiedPath.ToString());
	Metadata->SetNumberField("Retry Count", request.Metadata.RetryCount);
	WebRequestJson->SetObjectField("Metadata", Metadata);

	// Responses
	TArray<TSharedPtr<FJsonValue>> ResponsesArray;
	for (int32 x = 0; x < request.Responses.Num(); ++x)
	{
		TSharedPtr<FJsonObject> Response = MakeShareable(new FJsonObject);
		Response->SetNumberField("Response-Index", x);
		Response->SetBoolField("Http-Success", request.Responses[x].ResponseSuccess);
		Response->SetNumberField("Response-Code", request.Responses[x].ResponseCode);

		Reader = TJsonReaderFactory<>::Create(request.Responses[x].Content);
		if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
		{
			Response->SetField("Content", JsonValue);
		}

		TSharedPtr<FJsonObject> ResponseHeader = MakeShareable(new FJsonObject);
		for (const auto& pair : request.Responses[x].Headers)
		{
			ResponseHeader->SetStringField(pair.Key, pair.Value);
		}
		Response->SetObjectField("Header", ResponseHeader);

		TSharedRef<FJsonValueObject> ResponseJsonValue = MakeShareable(new FJsonValueObject(Response));
		ResponsesArray.Add(ResponseJsonValue);
	}
	WebRequestJson->SetArrayField("Responses", ResponsesArray);

	return WebRequestJson;
}