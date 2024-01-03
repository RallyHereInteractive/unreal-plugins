// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "ClientType.h"
#include "RallyHereAPIAuthContext.h"
#include "Platform.h"
#include "UObject/WeakInterfacePtr.h"

#include "CustomAPI.h"

#include "InventoryPortal.h"
#include "InventoryBucket.h"
#include "GrantType.h"

#include "Logging/LogMacros.h"
#include "Misc/EngineVersionComparison.h"

#include "RH_Common.generated.h"

#ifndef WITH_HIREZ_ENGINE
#define WITH_HIREZ_ENGINE 0
#endif

RALLYHEREINTEGRATION_API DECLARE_LOG_CATEGORY_EXTERN(LogRallyHereIntegration, Log, All);
extern FString GRallyHereIntegrationIni;

#define RH_BELOW_ENGINE_VERSION(Major, Minor)  (ENGINE_MAJOR_VERSION < (Major) || (ENGINE_MAJOR_VERSION == (Major) && ENGINE_MINOR_VERSION < (Minor)))
#define RH_FROM_ENGINE_VERSION(Major, Minor)   !RH_BELOW_ENGINE_VERSION(Major, Minor)

#ifndef RH_GETENUMSTRING
#if RH_FROM_ENGINE_VERSION(5, 1)
#define RH_GETENUMSTRING(package, etype, evalue) ( (FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true) != nullptr) ? FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString(TEXT("Invalid - are you sure enum uses UENUM() macro?")) )
#define RH_GETENUMFROMSTRING(package, etype, evalue) ( (FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true) != nullptr) ? FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true)->GetValueByNameString(evalue) : INDEX_NONE )
#else
#define RH_GETENUMSTRING(package, etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString(TEXT("Invalid - are you sure enum uses UENUM() macro?")) )
#define RH_GETENUMFROMSTRING(package, etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetValueByNameString(evalue) : INDEX_NONE )
#endif
#endif

// TWeakInterfacePtr was changed from requiring a reference, to deprecating that in favor of passing a pointer to the interface type
#if RH_FROM_ENGINE_VERSION(4, 27)
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterfaceFromPtr(InterfaceType* Interface) { return TWeakInterfacePtr<InterfaceType>(Interface); }
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterface(TScriptInterface<InterfaceType> Interface) { return TWeakInterfacePtr<InterfaceType>(&(*Interface)); }
#else
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterfaceFromPtr(InterfaceType* Interface) { return TWeakInterfacePtr<InterfaceType>(*Interface); }
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterface(TScriptInterface<InterfaceType> Interface) { return TWeakInterfacePtr<InterfaceType>(*Interface); }
#endif

typedef TSharedPtr<RallyHereAPI::FAuthContext> FAuthContextPtr;

#if RH_FROM_ENGINE_VERSION(5, 1)
// Utility functions to mimic TOptional::GetPtrOrNull(), which only exists in newer versions of UE5
template<typename OptionalType>
FORCEINLINE OptionalType* GetPtrOrNull(TOptional<OptionalType>& Opt) { return Opt.GetPtrOrNull(); }
template<typename OptionalType>
FORCEINLINE const OptionalType* GetPtrOrNull(const TOptional<OptionalType>& Opt) { return Opt.GetPtrOrNull(); }
#else
// Utility functions to mimic TOptional::GetPtrOrNull(), which only exists in newer versions of UE5
template<typename OptionalType>
FORCEINLINE OptionalType* GetPtrOrNull(TOptional<OptionalType>& Opt) { return Opt.IsSet() ? &Opt.GetValue() : nullptr; }
template<typename OptionalType>
FORCEINLINE const OptionalType* GetPtrOrNull(const TOptional<OptionalType>& Opt) { return Opt.IsSet() ? &Opt.GetValue() : nullptr; }
#endif

bool RALLYHEREINTEGRATION_API RH_GetPlayerIdFromLocalPlayer(const class ULocalPlayer* pLocalPlayer, FGuid* outUuid);

TOptional<ERHAPI_Platform> RALLYHEREINTEGRATION_API RH_GetPlatformFromOSSName(FName OSSName);
ERHAPI_ClientType RALLYHEREINTEGRATION_API RH_GetClientTypeFromOSSName(FName OSSName);
TOptional<ERHAPI_GrantType> RALLYHEREINTEGRATION_API RH_GetGrantTypeFromOSSName(FName OSSName);
bool RALLYHEREINTEGRATION_API RH_UseGetAuthTokenFallbackFromOSSName(FName OSSName);
bool RALLYHEREINTEGRATION_API RH_PlatformSessionsTypeIsCaseInsensitive(FName SessionType);
ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromInventoryPortal(ERHAPI_InventoryPortal InventoryPlatform);
ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromPlatform(ERHAPI_Platform PlatformType);

/** @defgroup Common RallyHere Common
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
	 * @brief Default constructor.
	 */
	FRH_ErrorInfo() = default;
	/**
	 * @brief Construct from Response Ptr.
	 */
	FRH_ErrorInfo(const RallyHereAPI::FResponse* Response)
	{
		if (Response)
		{
			if (Response->GetHttpResponse().IsValid())
			{
				const auto HttpResp = Response->GetHttpResponse();
				ResponseCode = HttpResp->GetResponseCode();
				ResponseContent = HttpResp->GetContentAsString();
			}
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
			const auto HttpResp = Response.GetHttpResponse();
			ResponseCode = HttpResp->GetResponseCode();
			ResponseContent = HttpResp->GetContentAsString();
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
	virtual void Start(typename BaseType::API& API, const typename BaseType::Request& Request)
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
			Failed(TEXT("Query Failed"));
		}
	}

	/** @brief Gets the templated name for this object */
	virtual FString GetName() const override
	{
		static FString Name(FString::Printf(TEXT("FRH_SimpleQueryHelper<%s>"), *BaseType::Name));
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
		, HttpBody(Resp.Content)
		, RHErrorInfo(Resp)
	{
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
 * @brief All known platforms (some no longer supported), deprecated
 */
UENUM(BlueprintType)
enum class ERHAPI_PlatformTypes_DEPRECATED : uint8
{
	/** Platform not specified */
	PT_UNKNOWN = 0,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_1 = 1,
	/** RallyHere "anonymous" account platform */
	PT_ANON = 2,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_3 = 3,
	/** Amazon Prime */
	PT_AMAZON = 4,
	/** Steam */
	PT_STEAM = 5,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_6 = 6,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_7 = 7,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_8 = 8,
	/** Sony PlayStation */
	PT_PSN = 9,
	/** Microsoft Xbox */
	PT_XBOX_LIVE = 10,
	/** Username and Password login */
	PT_BASIC = 11,
	/** Facebook */
	PT_FACEBOOK = 12,
	/** Google (not Google Play) */
	PT_GOOGLE = 13,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_14 = 14,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_15 = 15,
	/** Twitch */
	PT_TWITCH = 16,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_17 = 17,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_18 = 18,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_19 = 19,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_20 = 20,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_21 = 21,
	/** Nintendo Service Account ID (NSAID) */
	PT_NINTENDO_SWITCH = 22,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_23 = 23,
	/** Apple */
	PT_APPLE = 24,
	/** Discord */
	PT_DISCORD = 25,
	/** Nintendo Legacy Account ID (NAID) */
	PT_NINTENDO = 26,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_27 = 27,
	/** Epic Online Services */
	PT_EPIC = 28,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_29 = 29,
	/** Simulmedia Ad System */
	PT_SIMULMEDIA = 30,
	/** Unused platform [DEPRECATED] */
	PT_UNUSED_31 = 31,
	/** Google Play */
	PT_GOOGLE_PLAY = 32,
	/** Nintendo Pairwise Pseudonymous ID (PPID) */
	PT_NINTENDO_PPID = 33,
	/** Total number of support platforms */
	PT_MAX_COUNT
};

/**
 * @brief Common structure for identifying players on any known platform
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_PlayerPlatformId
{
	GENERATED_USTRUCT_BODY()
public:
	/** @brief Player identifier for the given platform type */
	UPROPERTY()
	FString UserId;

	/** @brief Platform type of this identifier */
	UPROPERTY()
	ERHAPI_Platform PlatformType;

	/** @brief Returns whether or not this player platform ID has been filled with sensible data */
	FORCEINLINE bool IsValid() const
	{
		return UserId.Len() > 0;
	}

	/** @brief Returns whether or not this player platform ID exactly matches the given player platform ID */
	bool operator==(const FRH_PlayerPlatformId& Other) const { return UserId == Other.UserId && PlatformType == Other.PlatformType; }

	/** @brief Default constructor that leaves the user ID empty and sets the platform type to "unknown" */
	FRH_PlayerPlatformId()
		: PlatformType(ERHAPI_Platform::Anon)
	{}

	/** @brief Constructor for specifying user ID and platform type */
	FRH_PlayerPlatformId(const FString& InUserId, ERHAPI_Platform InPlatformType)
		: UserId(InUserId)
		, PlatformType(InPlatformType)
	{}
};

/**
 * @brief Helper function to convert an FRH_PlayerPlatformId into a hash value
 * @param [in] PlatformId The platform id to generate a hash for
 * @return Semi-unique hash value for the given platform id
 */
FORCEINLINE uint32 GetTypeHash(const FRH_PlayerPlatformId& PlatformId)
{
	return HashCombine(GetTypeHash(PlatformId.UserId), (uint32)PlatformId.PlatformType);
}

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

/** @} */