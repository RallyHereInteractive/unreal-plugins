
#include "RH_WebRequests.h"
#include "RallyHereIntegrationModule.h"

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

	void LogHttpBase(IHttpBase& HttpBase, const FString& Prefix, const TArray<FString>& SensitiveFields = {})
	{
		const TArray<FString> Headers = HttpBase.GetAllHeaders();
		for (const FString& Header : Headers)
		{
			if (Header.Contains(TEXT("Authorization")))
			{
				UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Skipped Header with Authorization data"), *Prefix);
			}
			else
			{
				UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Header: %s"), *Prefix, *Header);
			}
		}

		const FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(HttpBase.GetContent().GetData()), HttpBase.GetContent().Num());
		FString Content{ TCHARData.Length(), TCHARData.Get() };

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
			LogContent(JsonResult, Prefix);
		}
		else if (SensitiveFields.Num() > 0) // We wanted to clear some fields, but failed to parse the contents, do not risk exposing a token and just print nothing
		{
			UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("%s Skipped content - Failed to parse content as json to clear sensitive fields. The body will not be logged, to avoid exposing any sensitive information"), *Prefix);
		}
		else
		{
			LogContent(Content, Prefix);
		}
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

const TArray<FString> URH_WebRequests::GetAPINames() const
{
	TArray<FString> Results;
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

bool URH_WebRequests::GetTrackAllWebRequests() const
{
	if (APIs != nullptr)
	{
		for (const auto* API : APIs->GetAllAPIs())
		{
			if (API != nullptr)
			{
				if (!GetTrackWebRequests(API->GetName()))
				{
					return false;
				}
			}
		}
	}

	return true;
}
void URH_WebRequests::SetTrackAllWebRequests(bool bValue)
{
	if (APIs != nullptr)
	{
		for (const auto* API : APIs->GetAllAPIs())
		{
			if (API != nullptr)
			{
				SetTrackWebRequests(API->GetName(), bValue);
			}
		}
	}
}

const TArray<TSharedPtr<FRH_WebRequest>> URH_WebRequests::GetTrackedRequests() const
{
	return TrackedRequests;
}

const FRH_WebRequest* URH_WebRequests::GetTrackedRequestById(FGuid id) const
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
}

void URH_WebRequests::OnWebRequestStarted_Track(const RallyHereAPI::FRequestMetadata& RequestMetadata, FHttpRequestRef HttpRequest, RallyHereAPI::FAPI* API)
{
	bool bShouldTrack = API != nullptr && GetTrackWebRequests(API->GetName());
	if (!bShouldTrack)
	{
		return;
	}

	auto Request = MakeShared<FRH_WebRequest>();
	Request->Metadata = RequestMetadata;
	Request->Verb = HttpRequest->GetVerb();
	Request->URL = HttpRequest->GetURL();
	for (auto b : HttpRequest->GetContent())
	{
		Request->Content.AppendChar(static_cast<char>(b));
	}
	for (const auto& headerStr : HttpRequest->GetAllHeaders())
	{
		int32 index;
		if (headerStr.FindChar(TEXT(':'), index))
		{
			FString name = headerStr.Mid(0, index);
			FString value = headerStr.Mid(index + 1);
			Request->Headers.Emplace(MoveTemp(name), MoveTemp(value));
		}
	}
	TrackedRequests.Add(Request);
	TrackedRequestsById.Emplace(Request->Metadata.Identifier, Request);
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
	TArray<FString> SensitiveFields;
	if (RequestMetadata.SimplifiedPath.Contains(TEXT("/login")))
	{
		SensitiveFields.Add(TEXT("portal_access_token"));
		SensitiveFields.Add(TEXT("portal_parent_access_token"));
	}
	LogHttpBase(*HttpRequest, Prefix, SensitiveFields);
}

void URH_WebRequests::OnWebRequestCompleted(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API)
{
	OnWebRequestCompleted_Log(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
	OnWebRequestCompleted_Track(Response, HttpRequest, HttpResponse, bSuccess, bWillRetryWithAuth, API);
}

void URH_WebRequests::OnWebRequestCompleted_Track(const RallyHereAPI::FResponse& Response, FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess, bool bWillRetryWithAuth, RallyHereAPI::FAPI* API)
{
	bool bShouldTrack = API != nullptr && GetTrackWebRequests(API->GetName());
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
	if (HttpResponse)
	{
		TrackedResponse.Content = HttpResponse->GetContentAsString();
		for (const auto& headerStr : HttpRequest->GetAllHeaders())
		{
			int32 index;
			if (headerStr.FindChar(TEXT(':'), index))
			{
				FString name = headerStr.Mid(0, index);
				FString value = headerStr.Mid(index + 1);
				TrackedResponse.Headers.Emplace(MoveTemp(name), MoveTemp(value));
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
	TArray<FString> SensitiveFields;
	if (Response.GetRequestMetadata().SimplifiedPath.Contains(TEXT("/login")) && Response.IsSuccessful())
	{
		SensitiveFields.Add(TEXT("access_token"));
		SensitiveFields.Add(TEXT("refresh_token"));
	}

	if (HttpResponse)
	{
		LogHttpBase(*HttpResponse, Prefix, SensitiveFields);
	}
}
