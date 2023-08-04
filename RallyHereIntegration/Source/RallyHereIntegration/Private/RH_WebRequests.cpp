
#include "RH_WebRequests.h"
#include "RallyHereIntegrationModule.h"

#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Engine/Engine.h"
#include "Misc/DateTime.h"
#include "HAL/FileManager.h"

static FAutoConsoleCommandWithWorldArgsAndOutputDevice ConsoleRHLogWebRequests(
	TEXT("rh.logWebRequests"),
	TEXT("Logs Web Requests to a file, uses WebRequests.json if no file is provided"),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!FRallyHereIntegrationModule::IsAvailable())
			{
				Ar.Logf(TEXT("%s is not available"), *FRallyHereIntegrationModule::GetModuleName().ToString());
				return;
			}

			FString File = (Args.Num() > 0) ? Args[0] :"WebRequests.json";
			FRallyHereIntegrationModule::Get().GetWebRequestTracker()->LogTrackedWebRequestsToFile(File);
		}));

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

	const TArray<FString>& GetSensitiveHeadersForRequest(const RallyHereAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields = { TEXT("Authorization") };
		static TArray<FString> LoginFields = StandardFields;
		if (RequestMetadata.SimplifiedPath.Contains(TEXT("/login")))
		{
			return LoginFields;
		}
		return StandardFields;
	}

	const TArray<FString>& GetSensitiveFieldsForRequest(const RallyHereAPI::FRequestMetadata& RequestMetadata)
	{
		static TArray<FString> StandardFields;
		static TArray<FString> LoginFields = { TEXT("portal_access_token"), TEXT("portal_parent_access_token"), TEXT("access_token"), TEXT("refresh_token") };
		if (RequestMetadata.SimplifiedPath.Contains(TEXT("/login")))
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
	LogHttpBase(*HttpRequest, Prefix, GetSensitiveHeadersForRequest(RequestMetadata), GetSensitiveFieldsForRequest(RequestMetadata));
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
		LogHttpBase(*HttpResponse, Prefix, GetSensitiveHeadersForRequest(Response.GetRequestMetadata()), GetSensitiveFieldsForRequest(Response.GetRequestMetadata()));
	}
}

FString URH_WebRequests::LogTrackedWebRequestsToFile(const FString& Filename) const
{
	TSharedPtr<FJsonObject> AllWebRequestsJson = MakeShareable(new FJsonObject);

	AllWebRequestsJson->SetStringField("Application-Name", FApp::GetName());
	AllWebRequestsJson->SetStringField("Project-Name", FApp::HasProjectName() ? FApp::GetProjectName() : FString(""));
	AllWebRequestsJson->SetStringField("Build-Version", FApp::GetBuildVersion());

	bool isInEditor = GEngine != nullptr ? GEngine->IsEditor() : false;
	AllWebRequestsJson->SetBoolField("Is-In-Editor", isInEditor);

	FString Mode;
	if (IsRunningDedicatedServer())
	{
		Mode = "Dedicated-Server";
	}
	else if (IsRunningClientOnly())
	{
		Mode = "Client-Only";
	}
	else if (IsRunningGame())
	{
		Mode = "Game";
	}
	else
	{
		Mode = "Unknown";
	}
	AllWebRequestsJson->SetStringField("Mode", Mode);

	AllWebRequestsJson->SetStringField("Timestamp", FDateTime::Now().ToString());

	TArray<TSharedPtr<FJsonValue>> RequestsArray;
	for (const auto& Request : TrackedRequests)
	{
		TSharedPtr<FJsonObject> RequestJson = CreateJsonObjectFromWebRequest(*Request);
		TSharedRef<FJsonValueObject> RequestJsonValue = MakeShareable(new FJsonValueObject(RequestJson));
		RequestsArray.Add(RequestJsonValue);
	}
	AllWebRequestsJson->SetArrayField("Web-Requests", RequestsArray);

	FString FileOutput;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&FileOutput);
	FJsonSerializer::Serialize(AllWebRequestsJson.ToSharedRef(), Writer);

	// Make dir
	FString ProjectLogDir = FPaths::ProjectLogDir();
	if (FPaths::IsRelative(ProjectLogDir))
	{
		ProjectLogDir = FPaths::ConvertRelativePathToFull(ProjectLogDir);
	}
	IFileManager::Get().MakeDirectory(*ProjectLogDir, true);

	FString FullFilename = Filename;
	if (FullFilename == FPaths::GetCleanFilename(FullFilename))
	{
		FullFilename = FPaths::Combine(ProjectLogDir, FullFilename);
	}

	if (FFileHelper::SaveStringToFile(FileOutput, *FullFilename, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Saved web requests to %s"), *FullFilename);
		return FullFilename;
	}

	return FString();
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