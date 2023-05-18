
#pragma once

#include "CoreMinimal.h"
#include "ClientType.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPI/Public/PlatformID.h"
#include "RallyHereAPI/Public/Platform.h"
#include "UObject/WeakInterfacePtr.h"

#include "InventoryPortal.h"
#include "InventoryBucket.h"

#include "Logging/LogMacros.h"
#include "Misc/EngineVersionComparison.h"

#include "RH_Common.generated.h"

#ifndef WITH_HIREZ_ENGINE
#define WITH_HIREZ_ENGINE 0
#endif

DECLARE_LOG_CATEGORY_EXTERN(LogRallyHereIntegration, Log, All);
extern FString GRallyHereIntegrationIni;

#define RH_BELOW_ENGINE_VERSION(Major, Minor)  (ENGINE_MAJOR_VERSION < (Major) || (ENGINE_MAJOR_VERSION == (Major) && ENGINE_MINOR_VERSION < (Minor)))
#define RH_FROM_ENGINE_VERSION(Major, Minor)   !RH_BELOW_ENGINE_VERSION(Major, Minor)

#ifndef RH_GETENUMSTRING
#if RH_FROM_ENGINE_VERSION(5, 1)
#define RH_GETENUMSTRING(package, etype, evalue) ( (FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true) != nullptr) ? FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString("Invalid - are you sure enum uses UENUM() macro?") )
#define RH_GETENUMFROMSTRING(package, etype, evalue) ( (FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true) != nullptr) ? FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true)->GetValueByNameString(evalue) : INDEX_NONE )
#else
#define RH_GETENUMSTRING(package, etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString("Invalid - are you sure enum uses UENUM() macro?") )
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

bool RH_GetPlayerIdFromLocalPlayer(const class ULocalPlayer* pLocalPlayer, FGuid* outUuid);

TOptional<ERHAPI_PlatformID> RALLYHEREINTEGRATION_API RH_GetPlatformIdFromOSSName(FName OSSName);
TOptional<ERHAPI_Platform> RALLYHEREINTEGRATION_API RH_GetPlatformFromOSSName(FName OSSName);
ERHAPI_ClientType RALLYHEREINTEGRATION_API RH_GetClientTypeFromOSSName(FName OSSName);
ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromInventoryPortal(ERHAPI_InventoryPortal InventoryPlatform);
ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromPlatformType(ERHAPI_PlatformTypes PlatformType);

class RALLYHEREINTEGRATION_API FRH_AsyncTaskHelper : public TSharedFromThis<FRH_AsyncTaskHelper>
{
protected:
	FRH_AsyncTaskHelper() = default;
	virtual ~FRH_AsyncTaskHelper() = default;

	virtual FString GetName() const = 0;
	virtual void ExecuteCallback(bool bSuccess) const = 0;
	virtual void Cleanup() {}

	void Started()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("%s started"), *GetName());
		OngoingRequests.Add(AsShared());
	}

	void Failed(const FString& FailureReason)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("%s failed due to [%s]"), *GetName(), *FailureReason);
		Completed(false);
	}

	// this is intended to be called from external code, not from within the task itself.  It will just immediately fail, but this is virtual in case any locking etc needs to be done for safety
	virtual void Cancel(const FString& CancelReason)
	{
		Failed(CancelReason);
	}

	void Completed(bool bSuccess)
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("%s completed with status [%d]"), *GetName(), bSuccess ? 1 : 0);
		ExecuteCallback(bSuccess);
		TSharedRef<FRH_AsyncTaskHelper> SelfRef = AsShared();
		int32 Removed = OngoingRequests.Remove(SelfRef);
		if (Removed != 1)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("%s completed but with mismatch in Started() count [%d]!"), *GetName(), Removed);
		}
		SelfRef->Cleanup();
	}

	FORCEINLINE bool IsRunning() const { return OngoingRequests.Contains(AsShared()); }

	static TArray<TSharedRef<FRH_AsyncTaskHelper>> OngoingRequests;
};

template<typename DelegateType, typename DynamicDelegateType, typename... ParamList>
struct FRH_DelegateBlock
{
	DelegateType Delegate;
	DynamicDelegateType DynDelegate;

	FRH_DelegateBlock()
	{}

	FRH_DelegateBlock(const DelegateType& InDelegate)
		: Delegate(InDelegate)
	{}

	FRH_DelegateBlock(const DynamicDelegateType& InDynDelegate)
		: DynDelegate(InDynDelegate)
	{}

	void ExecuteIfBound(ParamList... params) const
	{
		Delegate.ExecuteIfBound(params...);
		DynDelegate.ExecuteIfBound(params...);
	}
};
#define DECLARE_RH_DELEGATE_BLOCK(Type, DelegateType, DynamicDelegateType, ...) typedef FRH_DelegateBlock<DelegateType, DynamicDelegateType,  __VA_ARGS__> Type;

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GenericSuccessDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_GenericSuccessDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_GenericSuccessBlock, FRH_GenericSuccessDelegate, FRH_GenericSuccessDynamicDelegate, bool)

template<typename BaseType>
class FRH_SimpleQueryHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_SimpleQueryHelper(typename BaseType::Delegate InUpdateDelegate = BaseType::Delegate(), FRH_GenericSuccessBlock InCompleteDelegate = FRH_GenericSuccessBlock())
		: FRH_AsyncTaskHelper()
		, UpdateDelegate(InUpdateDelegate)
		, Delegate(InCompleteDelegate)
	{
	}

	virtual void Start(typename BaseType::API& API, const typename BaseType::Request& Request)
	{
		Started();

		HttpRequest = BaseType::DoCall(API, Request, BaseType::Delegate::CreateSP(this, &FRH_SimpleQueryHelper::OnQueryComplete));
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query queues"));
		}
	}

	void OnQueryComplete(const typename BaseType::Response& Resp)
	{
		HttpRequest = nullptr;
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

	virtual FString GetName() const override
	{
		static FString Name(FString::Printf(TEXT("FRH_SimpleQueryHelper<%s>"), *BaseType::Name));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess);
	}

	typename BaseType::Delegate UpdateDelegate;
	FRH_GenericSuccessBlock Delegate;

	FHttpRequestPtr HttpRequest;
};


UENUM(BlueprintType)
enum class ERHAPI_PlatformTypes : uint8
{
	PT_UNKNOWN = 0,
	PT_STANDARD = 1,
	PT_ANON = 2,
	PT_KONGREPT_E = 3,
	PT_AMAZON = 4,
	PT_STEAM = 5,
	PT_TCLS = 6,
	PT_LEVELUP_LATAM = 7,
	PT_LEVELUP_BRA = 8,
	PT_PSN = 9,
	PT_XBOX_LIVE = 10,
	PT_BASIC = 11,
	PT_FACEBOOK = 12,
	PT_GOOGLE = 13,
	PT_UNUSED_14 = 14,
	PT_RIVALS_MOBILE = 15,
	PT_TWITCH = 16,
	PT_PALADINS_STRIKE = 17,
	PT_SMITE_BLITZ = 18,
	PT_FACEBOOK_SMITE = 19,
	PT_FACEBOOK_PALADINS = 20,
	PT_FACEBOOK_HOTG = 21,
	PT_NINTENDO_SWITCH = 22,
	PT_TUNE = 23,
	PT_APPLE = 24,
	PT_DISCORD = 25,
	PT_NINTENDO = 26,
	PT_UNUSED_1 = 27,
	PT_EPIC = 28,
	PT_FORTE = 29,
	PT_SIMULMEDIA = 30,
	PT_LUNA = 31,
	PT_GOOGLE_PLAY = 32,
	PT_NINTENDO_PPID = 33,
	PT_MAX_COUNT
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_PlayerPlatformId
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY()
	FString UserId;

	UPROPERTY()
	ERHAPI_PlatformTypes PlatformType;

	FORCEINLINE bool IsValid() const
	{
		return UserId.Len() > 0 && PlatformType != ERHAPI_PlatformTypes::PT_UNKNOWN;
	}

	bool operator==(const FRH_PlayerPlatformId& Other) const { return UserId == Other.UserId && PlatformType == Other.PlatformType; }

	FRH_PlayerPlatformId()
		: PlatformType(ERHAPI_PlatformTypes::PT_UNKNOWN)
	{}

	FRH_PlayerPlatformId(FString InUserId, ERHAPI_PlatformTypes InPlatformType)
		: UserId(InUserId)
		, PlatformType(InPlatformType)
	{}

};

FORCEINLINE uint32 GetTypeHash(const FRH_PlayerPlatformId& PlatformId)
{
	return HashCombine(GetTypeHash(PlatformId.UserId), (uint32)PlatformId.PlatformType);
}

namespace PlatformStrings
{
	const FName Sweat = FName(TEXT("Sweat"));
	const FName Free = FName(TEXT("Free"));
	const FName Unknown = FName(TEXT("Unknown"));
	const FName Anon = FName(TEXT("Anon"));
	const FName Xbox = FName(TEXT("Xbox"));
	const FName Playstation = FName(TEXT("PSN"));
	const FName Nintendo = FName(TEXT("Nintendo"));
	const FName Google = FName(TEXT("Google"));
	const FName Apple = FName(TEXT("Apple"));
	const FName Epic = FName(TEXT("Epic"));
	const FName Steam = FName(TEXT("Steam"));
	const FName Amazon = FName(TEXT("Amazon"));
	const FName Twitch = FName(TEXT("Twitch"));

	static FName GetPlatformStringFromEInventoryId(ERHAPI_InventoryPortal InventoryPortal)
	{
		switch (InventoryPortal)
		{
		case ERHAPI_InventoryPortal::Free: 
			return Free;
		case ERHAPI_InventoryPortal::Sweat: 
			return Sweat;
		case ERHAPI_InventoryPortal::Anon: 
			return Anon;
		case ERHAPI_InventoryPortal::Amazon:
			return Amazon;
		case ERHAPI_InventoryPortal::Steam: 
			return Steam;
		case ERHAPI_InventoryPortal::Psn: 
			return Playstation;
		case ERHAPI_InventoryPortal::XboxLive: 
			return Xbox;
		case ERHAPI_InventoryPortal::Google: 
		case ERHAPI_InventoryPortal::GooglePlay:
			return Google;
		case ERHAPI_InventoryPortal::Twitch: 
			return Twitch;
		case ERHAPI_InventoryPortal::NintendoSwitch: 
		case ERHAPI_InventoryPortal::Nintendo:
			return Nintendo;
		case ERHAPI_InventoryPortal::Apple: 
			return Apple;
		case ERHAPI_InventoryPortal::Epic: 
			return Epic;
		}

		return Unknown;
	}
}

static bool RH_BreakApartURL(const FString& URL, const FString& BaseURL, FString& APIName, TArray<FString>& APIParams)
{
	if (!URL.StartsWith(BaseURL))
	{
		return false;
	}

	int32 Index = BaseURL.Len();

	if (!BaseURL.EndsWith(TEXT("/")))
	{
		++Index;
	}
	const FString Remainder = URL.RightChop(Index);

	// extract API name from remainder of URL (go to end of base URL, then extract segment before next /)
	APIName = Remainder.Left(Remainder.Find(TEXT("/"), ESearchCase::IgnoreCase, ESearchDir::FromStart));
	const FString APISuffix = Remainder.RightChop(APIName.Len() + 1);
	APISuffix.ParseIntoArray(APIParams, TEXT("/"), true);

	return true;
}