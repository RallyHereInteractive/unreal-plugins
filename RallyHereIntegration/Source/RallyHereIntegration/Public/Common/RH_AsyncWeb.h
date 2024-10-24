// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakInterfacePtr.h"
#include "RallyHereAPIHelpers.h"
#include "HzApiErrorModel.h"
#include "ValidationError.h"
#include "CustomAPI.h"

#include "Common/RH_Logging.h"
#include "Common/RH_Version.h"

#include "RH_AsyncWeb.generated.h"

/**
 *	@ingroup Common
 *  @addtogroup Common
 *  @{
 */


/**
 * @brief Base helper class for asynchronous RallyHere tasks
 */
class RALLYHEREINTEGRATION_API FRH_AsyncTaskHelper : public TSharedFromThis<FRH_AsyncTaskHelper>
{
protected:
	/** @brief Default constructor. */
	FRH_AsyncTaskHelper()
		: TaskPriority(0)
	{

	}
	/** @brief Constructor with a priority for the task helper. */
	FRH_AsyncTaskHelper(int32 InPriority)
		: TaskPriority(InPriority)
	{
	}
	/** @brief Default destructor. */
	virtual ~FRH_AsyncTaskHelper() = default;

	/** @brief Abstract function called when the asynchronous tasks completes regardless of success or failure. */
	virtual void ExecuteCallback(bool bSuccess) const = 0;

	/** @brief Function called to do cleanup when the asynchronous tasks is about to be deleted. */
	virtual void Cleanup() {}

	/** @brief Function called when the asynchronous task has started. */
	void Started()
	{
		check(bInitialized);

		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("%s started"), *GetName());

		StartedTime = FDateTime::Now();

		OngoingRequests.Add(AsShared());
	}

	/** @brief Function called in the event that the asynchronous task has failed. */
	void Failed(const FString& FailureReason)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("%s failed due to [%s]"), *GetName(), *FailureReason);
		Completed(false);
	}

	/**
	 * @brief Cancels the asynchronous task by failing it out.
	 * @param [in] CancelReason Tracking string pushed to log for debugging purposes.
	 * @note This is intended to be called from external code, not from within the task itself.  It will just immediately fail, but this is virtual in case any locking etc needs to be done for safety.
	 */
	virtual void Cancel(const FString& CancelReason)
	{
		Failed(CancelReason);
	}

	/**
	 * @brief Called when the asynchronous task has completed.
	 * @param [in] bSuccess Whether or not the task completed successfully.
	 */
	void Completed(bool bSuccess)
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("%s completed with status [%d]"), *GetName(), bSuccess ? 1 : 0);
		TSharedRef<FRH_AsyncTaskHelper> SelfRef = AsShared();
		int32 Removed = OngoingRequests.Remove(SelfRef);
		if (Removed != 1)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("%s completed but with mismatch in Started() count [%d]!"), *GetName(), Removed);
		}

		// prevent re-entrancy running cleanup/callbacks multiple times (ex: callback ends up calling Cancel())
		if (Removed > 0)
		{
			if (bInitialized)
			{
				SelfRef->ExecuteCallback(bSuccess);	// only fire callbacks if we are initialized, otherwise we are likely in the middle of shutdown and callback memory may no longer be valid
			}

			SelfRef->EndedTime = FDateTime::Now();

			SelfRef->Cleanup();
		}
	}

public:
	/** @brief Returns whether or not the task is currently executing. */
	FORCEINLINE bool IsRunning() const { return OngoingRequests.Contains(AsShared()); }

	/** @brief Abstract function for fetching the name of the asynchronous task. */
	virtual FString GetName() const = 0;

	/** @brief Gets the TaskPriority */
	FORCEINLINE int32 GetTaskPriority() const { return TaskPriority; }

	/** @brief Gets the Duration the task has been running for */
	FORCEINLINE FTimespan GetDuration() const { return IsRunning() ? (FDateTime::Now() - StartedTime) : StartedTime - EndedTime; }

	static const TArray<TSharedRef<FRH_AsyncTaskHelper>>& GetOngoingRequests() { return OngoingRequests; }

protected:

	static TArray<TSharedRef<FRH_AsyncTaskHelper>> OngoingRequests;
	static bool bInitialized;
	static void Initialize()
	{
		bInitialized = true;
	}

	static void Uninitialize()
	{
		// set uninitialize flag immediately, so we can detect if any callbacks are fired after this point
		bInitialized = false;

		// copy list of requests, so we can iterate over them and cancel them (cancel should remove from the global list)
		TArray<TSharedRef<FRH_AsyncTaskHelper>> Requests = OngoingRequests;
		for (TSharedRef<FRH_AsyncTaskHelper> Request : Requests)
		{
			Request->Cancel(TEXT("Uninitialize"));
		}
		Requests.Empty();

		// validate all requests are now cleaned up
		check(OngoingRequests.Num() == 0);
	}

	int32 TaskPriority;
	FDateTime StartedTime;
	FDateTime EndedTime;

	friend class FRallyHereIntegrationModule; // allow the integration module to call Initialize/Uninitialize
};



/**
 * @brief Templated helper class defining a native and blueprint friendly delegate as a single object
 */
template<typename DelegateType, typename DynamicDelegateType, typename... ParamList>
struct FRH_DelegateBlock
{
	/** @brief Native-only version of the delegate */
	DelegateType Delegate;

	/** @brief Blueprint friendly version of the delegate */
	DynamicDelegateType DynDelegate;

	/** @brief Default constructor leaving both delegates unbound */
	FRH_DelegateBlock()
	{}

	/** @brief Constructor for binding just the native-only version of the delegate */
	FRH_DelegateBlock(const DelegateType& InDelegate)
		: Delegate(InDelegate)
	{}

	/** @brief Constructor for binding just the blueprint friendly version of the delegate */
	FRH_DelegateBlock(const DynamicDelegateType& InDynDelegate)
		: DynDelegate(InDynDelegate)
	{}

	/** @brief Executes both the native-only and blueprint friendly versions of the delegate, if they're bound */
	void ExecuteIfBound(ParamList... params) const
	{
		SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegateBlock, FColor::Purple);
		Delegate.ExecuteIfBound(params...);
		DynDelegate.ExecuteIfBound(params...);
	}

	bool IsBound() const
	{
		return Delegate.IsBound() || DynDelegate.IsBound();
	}
	bool IsBoundToObject(const void* Object) const
	{
		return Delegate.IsBoundToObject(Object) || DynDelegate.IsBoundToObject(Object);
	}
};
/** @brief Helper for declaring FRH_DelegateBlock types */
#define DECLARE_RH_DELEGATE_BLOCK(Type, DelegateType, DynamicDelegateType, ...) typedef FRH_DelegateBlock<DelegateType, DynamicDelegateType,  __VA_ARGS__> Type;

/** @brief Generic blueprint friendly delegate used to report success or failure */
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GenericSuccessDynamicDelegate, bool, bSuccess);
/** @brief Generic native-only delegate used to report success or failure */
DECLARE_DELEGATE_OneParam(FRH_GenericSuccessDelegate, bool);
/** @brief Generic blueprint and native delegate used to report success or failure */
DECLARE_RH_DELEGATE_BLOCK(FRH_GenericSuccessBlock, FRH_GenericSuccessDelegate, FRH_GenericSuccessDynamicDelegate, bool)


/**
 * @brief Generic handler for HTTP request errors.
 */
USTRUCT(BlueprintType)
struct FRH_ErrorInfo
{
	GENERATED_BODY()
	/**
	 * @brief The raw http response
	 */
	FHttpResponsePtr HttpResponse;
	/**
	 * @brief The Error Code of the HTTP request.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	int32 ResponseCode{};
	/**
	 * @brief Content of the HTTP request response.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	FString ResponseContent{};

	/**
	 * @brief Whether the response is a RallyHere common error.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	bool bIsRHCommonError;
	/**
	 * @brief The response as a RallyHere common error.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	FRHAPI_HzApiErrorModel RHCommonError;

	/**
	 * @brief Whether the response is a RallyHere validation error.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	bool bIsRHValidationError;
	/**
	 * @brief The response as a RallyHere validation error.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Error")
	FRHAPI_ValidationError RHValidationError;

	/**
	 * @brief Default constructor.
	 */
	FRH_ErrorInfo()
		: HttpResponse(nullptr)
		, ResponseCode(0)
		, ResponseContent()
		, bIsRHCommonError(false)
		, RHCommonError()
		, bIsRHValidationError(false)
		, RHValidationError()
	{

	}
	/**
	 * @brief Construct from Response Ptr.
	 */
	FRH_ErrorInfo(const RallyHereAPI::FResponse* Response) : FRH_ErrorInfo()
	{
		if (Response != nullptr)
		{
			ImportErrorInfo(*Response);
		}
	}
	/**
	 * @brief Construct from Response Ref.
	 */
	FRH_ErrorInfo(const RallyHereAPI::FResponse& Response) : FRH_ErrorInfo(&Response)
	{
	}
	/**
	 * @brief Default destructor.
	 */
	virtual ~FRH_ErrorInfo() = default;
	/**
	 * @brief Parses The HTTP response into the error info.
	 * @param Response The response to parse.
	 */
	void ImportErrorInfo(const RallyHereAPI::FResponse& Response)
	{
		if (Response.GetHttpResponse().IsValid())
		{
			HttpResponse = Response.GetHttpResponse();

			const auto HttpResp = Response.GetHttpResponse();
			ResponseCode = HttpResp->GetResponseCode();
			ResponseContent = HttpResp->GetContentAsString();

			const auto JsonValuePtr = Response.TryGetPayload<RallyHereAPI::FResponse::JsonPayloadType>();
			if (JsonValuePtr != nullptr)
			{
				bIsRHCommonError = RHCommonError.FromJson(*JsonValuePtr);
				if (!bIsRHCommonError)
				{
					bIsRHValidationError = RHValidationError.FromJson(*JsonValuePtr);
				}
			}
		}
	}
};

/** @brief Generic blueprint friendly delegate used to report success or failure with error info */
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_GenericSuccessWithErrorDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo);
/** @brief Generic native-only delegate used to report success or failure */
DECLARE_DELEGATE_TwoParams(FRH_GenericSuccessWithErrorDelegate, bool, const FRH_ErrorInfo&);
/** @brief Generic blueprint and native delegate used to report success or failure */
DECLARE_RH_DELEGATE_BLOCK(FRH_GenericSuccessWithErrorBlock, FRH_GenericSuccessWithErrorDelegate, FRH_GenericSuccessWithErrorDynamicDelegate, bool, const FRH_ErrorInfo&)

// conversion macro to convert to the with-error type from a success-only type
FORCEINLINE FRH_GenericSuccessWithErrorBlock RH_ConvertGenericSucessDelegateBlock(const FRH_GenericSuccessBlock& InDelegate)
{
	FRH_GenericSuccessWithErrorBlock OutSuccessWithErrorDelegate;

	OutSuccessWithErrorDelegate.Delegate.BindLambda([InDelegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
		{
			InDelegate.ExecuteIfBound(bSuccess);
		});

	return OutSuccessWithErrorDelegate;
}

/**
 * @brief Templated helper class for asynchronously executing basic RallyHere API queries
 */
template<typename BaseType>
class FRH_SimpleQueryHelper : public FRH_AsyncTaskHelper
{
public:
	/**
	 * @brief Constructor allowing for the specification of callback delegates
	 * @param [in] InUpdateDelegate Templated delegate to call with the API's response if query successfully completes
	 * @param [in] InCompleteDelegate Generic completion delegate called regardless of success or failure
	 */
	FRH_SimpleQueryHelper(const typename BaseType::Delegate& InUpdateDelegate = BaseType::Delegate(), const FRH_GenericSuccessWithErrorBlock& InCompleteDelegate = FRH_GenericSuccessWithErrorBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_AsyncTaskHelper(InPriority)
		, UpdateDelegate(InUpdateDelegate)
		, Delegate(InCompleteDelegate)
	{
	}

	/**
	 * @brief Constructor allowing for the specification of callback delegates
	 * @param [in] InUpdateDelegate Templated delegate to call with the API's response if query successfully completes
	 * @param [in] InCompleteDelegate Generic completion delegate called regardless of success or failure
	 */
	UE_DEPRECATED(5.0, "FRH_SimpleQueryHelper has converted to using FRH_GenericSuccessWithErrorBlock for completion callbacks, please convert your code to use the new type")
	FRH_SimpleQueryHelper(const typename BaseType::Delegate& InUpdateDelegate = BaseType::Delegate(), const FRH_GenericSuccessBlock& InCompleteDelegate = FRH_GenericSuccessBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_AsyncTaskHelper(InPriority)
		, UpdateDelegate(InUpdateDelegate)
		, Delegate(RH_ConvertGenericSucessDelegateBlock(InCompleteDelegate))
	{
	}

	/**
	 * @brief Begins the task of asynchronously querying the API
	 * @param [in] API API target for the query (i.e. User, Session, Inventory, etc.)
	 * @param [in] Request Templated request data for the query
	 * @param [in] Priority The Priority of the call, lower is higher priority
	 */
	virtual void Start(TSharedRef<typename BaseType::API> API, const typename BaseType::Request& Request)
	{
		Started();

		HttpRequest = BaseType::DoCall(API, Request, BaseType::Delegate::CreateSP(this, &FRH_SimpleQueryHelper::OnQueryComplete), TaskPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query queues"));
		}
	}

	/**
	 * @brief Called once the asynchronous query has returned a response
	 * @param [in] Resp Templated response data for the query
	 */
	void OnQueryComplete(const typename BaseType::Response& Resp)
	{
		HttpRequest = nullptr;

		ErrorInfo.ImportErrorInfo(Resp);

		if (Resp.IsSuccessful())
		{
			UpdateDelegate.ExecuteIfBound(Resp);
			Completed(true);
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
		{
			Completed(true);
		}
		else
		{
			FString FailureReason = FString::Printf(TEXT("Query Failed with Code: %d"), Resp.GetHttpResponseCode());
			if (ErrorInfo.bIsRHCommonError)
			{
				FailureReason += TEXT(", ") +  FString::Printf(TEXT("Common Error: Code: %s, Desc: %s"), *ErrorInfo.RHCommonError.GetErrorCode(), *ErrorInfo.RHCommonError.GetDesc());
			}
			else if (ErrorInfo.bIsRHValidationError)
			{
				FailureReason += TEXT(", ") +  FString::Printf(TEXT("Validation Error: Type: %s, Msg: %s"), *ErrorInfo.RHValidationError.GetType(), *ErrorInfo.RHValidationError.GetMsg());
			}
			
			Failed(FailureReason);
		}
	}

	/** @brief Gets the templated name for this object */
	virtual FString GetName() const override
	{
		static const FString Name(FString::Printf(TEXT("FRH_SimpleQueryHelper<%s>"), *BaseType::Name));
		return Name;
	}

	/** @brief Executes the generic delegate associated with this asynchronous task forwarding bSuccess */
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, ErrorInfo);
	}

protected:
	/** @brief Templated delegate to call with the API's response if query successfully completes */
	typename BaseType::Delegate UpdateDelegate;
	/** @brief Generic completion delegate called regardless of success or failure */
	FRH_GenericSuccessWithErrorBlock Delegate;

	/** @brief The HTTP request object used to query the API */
	FHttpRequestPtr HttpRequest;

	/** Error Information */
	FRH_ErrorInfo ErrorInfo;
};


/** @brief Indexing for serialized HTTP files */
namespace RH_SerializableHttpFormat
{
	namespace LineIndex
	{
		enum
		{
			// metadata
			ResponseCode = 0,
			URL,
			EffectiveURL,
			ContentLength,
			ContentType,
			Headers,					// base64 with newlines to separate headers
			CompressionFormat,			// for compressed content, None if not compressed
			UncompressedSize,			// for compressed content, generally should match ContentLength
			Content,					//base64, optionally compressed

			

			Max
		};
	}
};

class RALLYHEREINTEGRATION_API FRH_HttpResponseSerializable : public IHttpResponse
{
protected:
	/** @brief The http response code. */
	int32 ResponseCode;
	/** @brief The URL used to send the request. */
	FString URL;
#if RH_FROM_ENGINE_VERSION(5,4)
	/** @brief The effective URL in case of redirected. */
	FString EffectiveURL;
	/** @brief The current status of the request being processed. */
	EHttpRequestStatus::Type Status;
	/** @brief The reason of the failure if GetStatus returns Failed. */
	EHttpFailureReason FailureReason;
#endif
	/** @brief The URL parameters for the request. */
	TMap<FString, FString> URLParameters;
	/** @brief The content length of the response. */
	int64 ContentLength;
	/** @brief The content type of the response. */
	FString ContentType;
	/** @brief The headers of the response. */
	TArray<FString> Headers;
	/** @brief The content of the response. */
	TArray<uint8> Content;
	
public:
	/**
	 * @brief Default constructor.
	 */
	FRH_HttpResponseSerializable()
		: ResponseCode(0)
#if RH_FROM_ENGINE_VERSION(5,4)
		, Status(EHttpRequestStatus::NotStarted)
		, FailureReason(EHttpFailureReason::None)
#endif
		, ContentLength(0)
		, ContentType(TEXT(""))
	{}

	/**
	 * @brief Constructor that takes a response pointer to serialize
	 * @param [in] InHttpResponse The response pointer to use.
	 */
	FRH_HttpResponseSerializable(const FHttpResponsePtr& InHttpResponse) : FRH_HttpResponseSerializable()
	{
		check(InHttpResponse.IsValid());
		ResponseCode = InHttpResponse->GetResponseCode();
		URL = InHttpResponse->GetURL();
#if RH_FROM_ENGINE_VERSION(5,4)
		EffectiveURL = InHttpResponse->GetEffectiveURL();
		Status = InHttpResponse->GetStatus();
		FailureReason = InHttpResponse->GetFailureReason();
#endif
		ContentLength = InHttpResponse->GetContentLength();
		ContentType = InHttpResponse->GetContentType();
		Headers = InHttpResponse->GetAllHeaders();
		Content = InHttpResponse->GetContent();
	}

	/**
	 * @brief Exports the contents of the response to a file.
	 * @param [in] FilePath The file path to export the response to.
	 * @param [in] bCanCompress Whether the content can be compressed.
	 * @return Whether the export was successful. 
	 */
	virtual bool ExportToFile(const FString& FilePath, bool bCanCompress = true) const;

	/**
	 * @brief Imports the contents of the response from a file.
	 * @param [in] FilePath The file path to import the response from.
	 * @return Whether the import was successful. 
	 */
	virtual bool ImportFromFile(const FString& FilePath);
	
	/**
	 * @brief Gets the response code returned by the requested server. See EHttpResponseCodes for known response codes
	 * @return the response code.
	 */
	virtual int32 GetResponseCode() const override { return ResponseCode; }

	/**
	 * @brief Returns the payload as a string, assuming the payload is UTF8.
	 * @return the payload as a string.
	 */
	virtual FString GetContentAsString() const override
	{
		// Content is NOT null-terminated; we need to specify lengths here
		FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(Content.GetData()), Content.Num());
		return FString(TCHARData.Length(), TCHARData.Get());
	}
	
	/**
	 * @brief Get the URL used to send the request.
	 * @return the URL string.
	 */
	virtual FString GetURL() const override { return URL; }

#if RH_FROM_ENGINE_VERSION(5,4)
	/**
	 * Get the effective URL in case of redirected. If not redirected, it's the same as GetURL
	 *
	 * @return the effective URL string.
	 */
	virtual const FString& GetEffectiveURL() const override { return EffectiveURL; }

	/**
	 * Get the current status of the request being processed
	 *
	 * @return the current status
	 */
	virtual EHttpRequestStatus::Type GetStatus() const override { return Status; };

	/**
	 * Get the reason of th failure if GetStatus returns Failed
	 *
	 * @return the reason of the failure
	 */
	virtual EHttpFailureReason GetFailureReason() const override { return FailureReason; };
#endif
	
	/** 
	 * @brief Gets an URL parameter.
	 * expected format is ?Key=Value&Key=Value...
	 * If that format is not used, this function will not work.
	 * @param [in] ParameterName - the parameter to request.
	 * @return the parameter value string.
	 */
	virtual FString GetURLParameter(const FString& ParameterName) const override { return URLParameters.FindRef(ParameterName); };
	
	/** 
	 * @brief Gets the value of a header, or empty string if not found. 
	 * @param HeaderName - name of the header to set.
	 */
	virtual FString GetHeader(const FString& HeaderName) const override
	{
		FString Prefix = HeaderName + ": ";
		const auto HeaderIdx = Headers.FindLastByPredicate([Prefix](const FString& Header) { return Header.StartsWith(Prefix); });
		if (HeaderIdx != INDEX_NONE)
		{
			return Headers[HeaderIdx].RightChop(Prefix.Len());
		}
		return TEXT("");
	}

	/**
	 * @brief Return all headers in an array in "Name: Value" format.
	 * @return the header array of strings
	 */
	virtual TArray<FString> GetAllHeaders() const override { return Headers; }
	
	/**
	 * @brief Shortcut to get the Content-Type header value (if available)
	 * @return the content type.
	 */
	virtual FString GetContentType() const override { return ContentType; }
	
	/**
	 * @brief Shortcut to get the Content-Length header value. Will not always return non-zero.
	 * If you want the real length of the payload, get the payload and check it's length.
	 * @return the content length (if available)
	 */
	virtual uint64 GetContentLength() const override { return ContentLength; }
	
	/**
	 * @brief Get the content payload of the request or response.
	 */
	virtual const TArray<uint8>& GetContent() const override { return Content; }

	/**
	 * @brief Gets the metadata structure to use when processing the serialized response
	 */
	static RallyHereAPI::FRequestMetadata GetSerializableResponseMetadata()
	{
		RallyHereAPI::FRequestMetadata Metadata;
		Metadata.Flags.bDisableAuthRequirement = true;
		Metadata.Flags.bDisableReadRequestContent = true;
		Metadata.Flags.bDisableLoginRetryOnAuthorizationFailure = true;
		return Metadata;
	}
};

/** @brief Wrapper calls for custom endpoint requests */
USTRUCT(BlueprintType)
struct FRH_CustomEndpointRequestWrapper
{
	GENERATED_BODY()

	/** Http Endpoint ID that is mapped to a URL */
	UPROPERTY(EditAnywhere, Category = "RallyHereAPI|CustomEndpoint")
	FString EndpointId;

	/** Call Priority */
	UPROPERTY(EditAnywhere, Category = "RallyHereAPI|CustomEndpoint")
	int32 Priority;

	/** Http Body as Json */
	UPROPERTY(EditAnywhere, Category = "RallyHereAPI|CustomEndpoint")
	FRHAPI_JsonValue Body;

	/** Http Content Type */
	UPROPERTY(EditAnywhere, Category = "RallyHereAPI|CustomEndpoint")
	FString ContentType;

	FRH_CustomEndpointRequestWrapper()
		: Priority(DefaultRallyHereAPIPriority)
		, Body()
	{
	}
};

/** @brief Wrapper calls for custom endpoint responses */
USTRUCT(BlueprintType)
struct FRH_CustomEndpointResponseWrapper
{
	GENERATED_BODY()

	/** Http Response Code */
	UPROPERTY(VisibleInstanceOnly, Category = "RallyHereAPI|CustomEndpoint")
	int32 HttpResponseCode;

	/** Http Headers */
	UPROPERTY(VisibleInstanceOnly, Category = "RallyHereAPI|CustomEndpoint")
	TArray<FString> HttpHeaders;

	/** Http Body as Json */
	UPROPERTY(VisibleInstanceOnly, Category = "RallyHereAPI|CustomEndpoint")
	FRHAPI_JsonValue HttpBody;

	/** Parsed RallyHere error */
	UPROPERTY(VisibleInstanceOnly, Category = "RallyHereAPI|CustomEndpoint")
	FRH_ErrorInfo RHErrorInfo;

	FRH_CustomEndpointResponseWrapper()
		: HttpResponseCode(0)
		, HttpBody()
		, RHErrorInfo()
	{
	}

	FRH_CustomEndpointResponseWrapper(const RallyHereAPI::FResponse_CustomEndpointSend& Resp)
		: HttpResponseCode(Resp.GetHttpResponseCode())
		, RHErrorInfo(Resp)
	{
		Resp.TryGetContent(HttpBody);
		if (Resp.GetHttpResponse().IsValid())
		{
			HttpHeaders = Resp.GetHttpResponse()->GetAllHeaders();
		}
	}
};

/** @brief Dynamic delegate used for custom endpoint calls */
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_CustomEndpointDynamicDelegate, const FRH_CustomEndpointResponseWrapper&, CustomResponseWrapper);
/** @brief Native delegate used for custom endpoint calls */
DECLARE_DELEGATE_OneParam(FRH_CustomEndpointDelegate, const FRH_CustomEndpointResponseWrapper&);
/** @brief Generic blueprint and native delegate used to report success or failure */
DECLARE_RH_DELEGATE_BLOCK(FRH_CustomEndpointDelegateBlock, FRH_CustomEndpointDelegate, FRH_CustomEndpointDynamicDelegate, const FRH_CustomEndpointResponseWrapper&)


/**
 * @brief Helper function to break a fully qualified URL into a base URL, API name, and an array of API parameters
 * @param [in] URL The fully qualified URL that we want to break apart
 * @param [in] BaseURL The base URL of the specified fully qualified URL
 * @param [out] APIName The name of the API the URL is hitting
 * @param [out] APIParams The array of API parameters from the URL
 * @return Semi-unique hash value for the given platform id
 */
static bool RH_BreakApartURL(const FString& URL, const FString& BaseURL, FString& APIName, TArray<FString>& APIParams)
{
	FString Path = URL;

	if (URL.StartsWith(BaseURL))
	{
		int32 Index = BaseURL.Len();

		// handle base url with trailiing slash (base URLs should not have a trailing slash)
		if (!BaseURL.EndsWith(TEXT("/")))
		{
			++Index;
		}
		Path = URL.RightChop(Index);
	}

	// remove leading slash
	if (Path.StartsWith(TEXT("/")))
	{
		Path.RightChopInline(1);
	}

	// extract API name from remainder of URL (go to end of base URL, then extract segment before next /)
	int32 Index = Path.Find(TEXT("/"), ESearchCase::IgnoreCase, ESearchDir::FromStart);
	if (Index == INDEX_NONE)
	{
		// could not find slash that separates the API name from the parameters
		return false;
	}

	APIName = Path.Left(Index);
	const FString APISuffix = Path.RightChop(Index + 1);
	APISuffix.ParseIntoArray(APIParams, TEXT("/"), true);

	return true;
}


/**
 * @brief An helper object that will take in an desired version check behavior and apply it to a request
 */
USTRUCT(BlueprintType)
struct FRH_ObjectVersionCheck
{
	GENERATED_USTRUCT_BODY();

	/** The value to be passed in the IfMatch header */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString IfMatch;
	/** The value to be passed in the IfNoneMatch header */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString IfNoneMatch;
	/** The value to be passed in the IfModifiedSince header, must be in HttpDate format (see FDateTime::ToHttpDate()) */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString IfModifiedSince;
	/** The value to be passed in the IfUnmodifiedSince header, must be in HttpDate format (see FDateTime::ToHttpDate()) */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString IfNotModifiedSince;

	// by default, no checking is done
	FRH_ObjectVersionCheck(const FString& InIfMatch = FString(), const FString& InIfNoneMatch = FString(), const FString& InIfModifiedSince = FString(), const FString& InIfNotModifiedSince = FString())
		: IfMatch(InIfMatch)
		, IfNoneMatch(InIfNoneMatch)
		, IfModifiedSince(InIfModifiedSince)
		, IfNotModifiedSince(InIfNotModifiedSince)
	{
	}

	// This macro creates a pair of function overrides that are conditionally called based on if the Request type has the specified ValueName (and the type matches ValueType)
	// This way this handler does not have to know about each type and its subclasses, as long as the version checking values are consistently defined in the subclasses
#define DECLARE_POTENTIALLY_EXISTING_VALUE_HANDLER(ValueType, ValueName, MUST_BE_EMPTY) \
	template <typename, typename = void> \
	struct has_##ValueName : std::false_type {}; /* this is the default implementation of the template, with a default value of false */ \
	\
	template <typename T> \
	struct has_##ValueName<T, std::void_t<decltype(&T::ValueName)>> : std::is_same<ValueType, decltype(std::declval<T>().ValueName)> {}; /* this is the specialization of the template, that determines if the ValueName exists in the type T */ \
	\
	template <typename T, typename std::enable_if<has_##ValueName<T>::value, T>::type* = nullptr> \
	static void SetRequest##ValueName(T& Request, const FString& InValue) { Request.MUST_BE_EMPTY##ValueName = InValue; }; /* this is the first function override, which is called if the ValueName exists in the type T */ \
	\
	template <typename T, typename std::enable_if<!has_##ValueName<T>::value, T>::type* = nullptr> \
	static void SetRequest##ValueName(T& Request, const FString& InValue) { UE_LOG(LogRallyHereIntegration, Warning, TEXT("Attempted to set header %hs on a request that does not support it"), #ValueName); }; /* this is the second function override, which is called if the ValueName does not exist in the type T */

	/*
	template <typename, typename = void>
	struct has_IfNoneMatch : std::false_type {};
	
	template <typename T>
	struct has_IfNoneMatch<T, std::void_t<decltype(&T::ValueName)>> : std::is_same<TOptional<FString>, decltype(std::declval<T>().ValueName)> {};
	
	template <typename T, typename std::enable_if<has_IfNoneMatch<T>::value, T>::type* = nullptr> 
	static void SetRequestIfNoneMatch(T& Request, const FString& InValue) { Request.ValueName = InValue; };
	
	template <typename T, typename std::enable_if<!has_IfNoneMatch<T>::value, T>::type* = nullptr>
	static void SetRequestIfNoneMatch(T& Request, const FString& InValue) { UE_LOG(LogRallyHereIntegration, Warning, TEXT("Attempted to set header %s on a request that does not support it"), "IfNoneMatch"); };
	*/
	
	DECLARE_POTENTIALLY_EXISTING_VALUE_HANDLER(TOptional<FString>, IfMatch, )
	DECLARE_POTENTIALLY_EXISTING_VALUE_HANDLER(TOptional<FString>, IfNoneMatch, )
	DECLARE_POTENTIALLY_EXISTING_VALUE_HANDLER(TOptional<FString>, IfModifiedSince, )
	DECLARE_POTENTIALLY_EXISTING_VALUE_HANDLER(TOptional<FString>, IfNotModifiedSince, )

	/** @brief Apply the version check behavior to a request */
	template<typename T, typename TEnableIf<TIsDerivedFrom<T, RallyHereAPI::FRequest>::Value, bool>::Type = true>
	void ApplyToRequest(T& InRequest) const
	{
		if (IfMatch.Len() > 0)
		{
			SetRequestIfMatch(InRequest, IfMatch);
		}
		if (IfNoneMatch.Len() > 0)
		{
			SetRequestIfNoneMatch(InRequest, IfNoneMatch);
		}
		if (IfModifiedSince.Len() > 0)
		{
			SetRequestIfModifiedSince(InRequest, IfModifiedSince);
		}
		if (IfNotModifiedSince.Len() > 0)
		{
			SetRequestIfNotModifiedSince(InRequest, IfNotModifiedSince);
		}
	}

	/** @brief Apply the default GET optimization version checking behavior to a request */
	template<typename T>
	static void ApplyDefaultGetBehavior(T& Request, const FString& ExistingETag)
	{
		FRH_ObjectVersionCheck( FString(), ExistingETag).ApplyToRequest(Request);
	}
	/** @brief Apply the default GET optimization version checking behavior to a request */
	template<typename T>
	static void ApplyDefaultGetBehavior(T& Request, const TOptional<FString>& ExistingETag)
	{
		if (ExistingETag.IsSet())
		{
			FRH_ObjectVersionCheck(FString(), ExistingETag.GetValue()).ApplyToRequest(Request);
		}
	}
	
};

/**
 *  @}
 */