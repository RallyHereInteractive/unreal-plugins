#pragma once

#include "EntitlementsAPI.h"
#include "InventoryAPI.h"
#include "OnlineError.h"
#include "OnlineSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlinePurchaseInterface.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"
#include "RH_EntitlementSubsystem.generated.h"

class URH_LocalPlayerSubsystem;

struct EntitlementStatusMapStruct
{
	TMap<FUniqueEntitlementId,ERHAPI_EntitlementStatus> EntitlementStatusMap;
};

struct EntitlementProcessResultMapStruct
{
	TMap<FString, FRHAPI_PlatformEntitlementProcessResult> EntitlmentProcessResultMap;
};

DECLARE_DELEGATE_TwoParams(FRH_ProcessEntitlementCompletedDelegate, bool /*Success*/, FRHAPI_PlatformEntitlementProcessResult) 
DECLARE_DELEGATE_RetVal(ERHAPI_PlatformRegion, FRH_GetPlatformRegionDelegate)

UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_EntitlementSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()
public:
	virtual void Initialize();
	virtual void Deinitialize();

	void OnEntitlementAsyncTaskComplete(bool bSuccess, FRHAPI_PlatformEntitlementProcessResult result);

	FRH_ProcessEntitlementCompletedDelegate ProcessEntitlementCompletedDelegate;
	
	// Start Async Task to Process Entitlements
	void SubmitEntitlements(
		FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate = FRH_ProcessEntitlementCompletedDelegate(),
		FRH_GetPlatformRegionDelegate PlatformRegionDelegate = FRH_GetPlatformRegionDelegate());

	void EntitlementProcessTaskComplete(bool success);

	TMap<FString, FRHAPI_PlatformEntitlementProcessResult>* GetEntitlementResults();
	FTimerManager& GetTimerManager();

	URH_LocalPlayerSubsystem* GetRH_LocalPlayerSubsystem() const;
	
	void SetEntitlementOSSName(const FName& InEntitlementOSSName);
	FName GetEntitlementOSSName();

private:

	TMap<FString, FRHAPI_PlatformEntitlementProcessResult> EntitlementProcessResultMap;
	IOnlineSubsystem* GetOSS() const;
	IOnlinePurchasePtr GetPurchaseSubsystem() const;
	
	/** Online Subsystem to use for entitlements.  If not provided, will use the default OSS */
	UPROPERTY(Config)
	FName EntitlementOSSName;
};

class FRH_EntitlementProcessor : public FRH_AsyncTaskHelper
{
public:
	FRH_EntitlementProcessor(URH_EntitlementSubsystem* InEntitlementSubsystem,
		IOnlineSubsystem* InOSS,
		const IOnlinePurchasePtr &InPurchaseSubsystem,
		int32 InLocalUserNum,
		FUniqueNetIdWrapper InPlatformUserId,
		FTimerManager &InTimerManager,
		FRH_ProcessEntitlementCompletedDelegate InProcessorCompleteDelegate,
		FRH_GetPlatformRegionDelegate InGetPlatformRegionDelegate)
		: EntitlementSubsystem(InEntitlementSubsystem)
		, OSS(InOSS)
		, PurchaseSubsystem(InPurchaseSubsystem)
		, LocalUserNum(InLocalUserNum)
		, PlatformUserId(InPlatformUserId)
		, TimerManager(InTimerManager)
		, EntitlementProcessorCompleteDelegate(InProcessorCompleteDelegate)
		, GetPlatformRegionDelegate(InGetPlatformRegionDelegate)
	{
		Platform = RH_GetPlatformFromOSSName(OSS->GetSubsystemName()).Get(ERHAPI_Platform::Anon);
		AuthContext = EntitlementSubsystem->GetAuthContext();
	}

	virtual void Start()
	{
		Started();
		if (!AuthContext.IsValid())
		{
			Failed(TEXT("No AuthContext provided"));
			return;
		}
		QueryEntitlements();
	}
protected:

	void QueryEntitlements()
	{
		PurchaseSubsystem->QueryReceipts(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum), false,
			FOnQueryReceiptsComplete::CreateSP(this, &FRH_EntitlementProcessor::QueryEntitlementsComplete, OSS, EntitlementSubsystem->GetAuthContext()->GetLoginResult()->GetAccessToken()));
	}
	
	void QueryEntitlementsComplete(const FOnlineError& Result, IOnlineSubsystem* ProvidedOSS, FString AuthToken)
	{
		if (!Result.bSucceeded)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Error Processing Platform Entitlements - Error Code: [%s] - Error Message: [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorCode(), *Result.GetErrorMessage().ToString());
			Failed("Failed to query entitlements.");
		}
		
		PurchaseSubsystem->GetReceipts(*PlatformUserId, Receipts);

		ValidateEntitlementReceipts();
	}

	void ValidateEntitlementReceipts()
	{
		TArray<FString> ValidationInfos;

		for (FPurchaseReceipt receipt: Receipts)
		{
			for (FPurchaseReceipt::FReceiptOfferEntry offerEntry: receipt.ReceiptOffers)
			{
				for (FPurchaseReceipt::FLineItemInfo lineItem: offerEntry.LineItems)
				{
					ValidationInfos.Add(lineItem.ValidationInfo);
				}
			}
		}

		ReceiptsToValidateCount = ValidationInfos.Num();

		if(ValidationInfos.Num())
		{
			for (FString validationInfo: ValidationInfos)
			{
				PurchaseSubsystem->FinalizeReceiptValidationInfo(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum),
					validationInfo,
					FOnFinalizeReceiptValidationInfoComplete::CreateSP(this, &FRH_EntitlementProcessor::OnReceiptValidationComplete));
			}
		}
	}

	void OnReceiptValidationComplete(const FOnlineError& Result, const FString& ValidationInfo)
	{
		if (!Result.bSucceeded)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Error Validating Entitlement Receipts - Error Code: [%s] - Error Message: [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorCode(), *Result.GetErrorMessage().ToString());
			Failed("Failed validate receipts.");
		}
		
		ReceiptsToValidateCount--;

		if(ReceiptsToValidateCount == 0)
		{
			ProcessPlatformInventory();
		}
	}
	
	void ProcessPlatformInventory()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Submitting Process Platform Entitlements to RallyHere"), *GetName());

		for (FPurchaseReceipt receipt: Receipts)
		{
			ProcessEntitlementResult.TransactionId = receipt.TransactionId;
			
			for (FPurchaseReceipt::FReceiptOfferEntry offerEntry: receipt.ReceiptOffers)
			{
				if (offerEntry.Quantity > 0)
				{
					for (FPurchaseReceipt::FLineItemInfo lineItem: offerEntry.LineItems)
					{
						FRHAPI_PlatformEntitlement Entitlement;
						Entitlement.SetQuantity(offerEntry.Quantity);
						Entitlement.SetPlatformEntitlementId(lineItem.UniqueId);
						Entitlement.SetPlatformSku(lineItem.ItemName);

						UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Ading Client Entitlement to Request - SKU: %s - Entitlement ID: %s - Quantity: %s"), *GetName(), *Entitlement.PlatformSku, *Entitlement.PlatformEntitlementId, Entitlement.Quantity_Optional);
				
						ProcessEntitlementResult.GetClientEntitlements().Emplace(Entitlement);
					}
				}
			}
		}

		ProcessEntitlementResult.SetStatus("SUBMITTED");
		EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);			

		FRHAPI_PlatformEntitlementProcessRequest entitlementRequest;
		entitlementRequest.SetEntitlements(ProcessEntitlementResult.GetClientEntitlements());
		entitlementRequest.PlatformId = EnumToString(Platform);
		entitlementRequest.ClientType = RH_GetClientTypeFromOSSName(EntitlementSubsystem->GetEntitlementOSSName());
		entitlementRequest.PlatformToken = OSS->GetIdentityInterface()->GetAuthToken(LocalUserNum);
		entitlementRequest.PlatformRegion = GetRegionFromTitleSettings();
		entitlementRequest.TransactionId = ProcessEntitlementResult.TransactionId;
		
		auto Request = RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = AuthContext->GetLoginResult()->GetActivePlayerUuid();
		Request.PlatformEntitlementProcessRequest = entitlementRequest;

		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements().ProcessPlatformEntitlementsByPlayerUuid(Request,
			RallyHereAPI::FDelegate_ProcessPlatformEntitlementsByPlayerUuid::CreateSP(this, &FRH_EntitlementProcessor::ProcessPlatformInventoryComplete));
		
		if (!HttpPtr)
		{
			Failed(TEXT("Failed to create login request"));
		}
	}

	bool CheckIfWeNeedToPoll()
	{
		for (FRHAPI_PlatformEntitlement client_entitlement : ProcessEntitlementResult.GetClientEntitlements())
		{
			ERHAPI_EntitlementStatus status = client_entitlement.GetStatus();
			if (status == ERHAPI_EntitlementStatus::Submitted || status == ERHAPI_EntitlementStatus::Unknown)
			{
				return true;
			}
		}
	
		for (FRHAPI_PlatformEntitlement server_entitlement : ProcessEntitlementResult.GetServerEntitlements())
		{
			ERHAPI_EntitlementStatus status = server_entitlement.GetStatus();
			if (status == ERHAPI_EntitlementStatus::Submitted || status == ERHAPI_EntitlementStatus::Unknown)
			{
				return true;
			}
		}

		return false;
	}

	void ProcessPlatformInventoryComplete(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid& Resp)
	{
		if (Resp.IsSuccessful())
		{
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Successfully Submitted Process Platform Entitlements to RallyHere with returned RequestId: %s"), *GetName(), *Resp.Content.GetRequestId());

			ProcessEntitlementResult = Resp.Content;
			EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);

			if(CheckIfWeNeedToPoll())
			{
				StartPoll();
			} else
			{
				FinalizePurchase();
				Completed(true);
			}
		}
		else
		{
			Failed(FString::Printf(TEXT("RallyHere Process Platform Entitlement Request failed with %s"), *Resp.GetResponseString()));
		}
	}

	void PollEntitlements(const FRH_PollCompleteFunc& Delegate)
	{
		if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
		{
			Delegate.ExecuteIfBound(false, false); // do not continue polling if we are not logged in
			return;
		}

		ProcessEntitlementResult.SetStatus("POLLING");
		
		auto Request = RallyHereAPI::FRequest_RetrieveEntitlementsByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = AuthContext->GetLoginResult()->GetActivePlayerUuid();
		Request.RequestId = ProcessEntitlementResult.RequestId;
		 	
		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements().RetrieveEntitlementsByPlayerUuid(Request,
			RallyHereAPI::FDelegate_RetrieveEntitlementsByPlayerUuid::CreateSP(this,
				&FRH_EntitlementProcessor::PollEntitlementComplete, Delegate));
	}

	void PollEntitlementComplete(const RallyHereAPI::FResponse_RetrieveEntitlementsByPlayerUuid& Resp, FRH_PollCompleteFunc Delegate)
	{
		ProcessEntitlementResult = Resp.Content;

		if(!CheckIfWeNeedToPoll())
		{
			Delegate.ExecuteIfBound(true, false);
			StopPoll();
			FinalizePurchase();
			Completed(true);
		}
		else
		{
			ProcessEntitlementResult.SetStatus("POLLING");
			Delegate.ExecuteIfBound(true, true);
		}
		EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);
	}

	void FinalizePurchase()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process Platform Entitlements was success, calling finalize purchase on Transaction Id: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ProcessEntitlementResult.TransactionId);
		PurchaseSubsystem->FinalizePurchase(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum), *ProcessEntitlementResult.GetTransactionId());
	}
	
	void StartPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		static FName PollTimerName(TEXT("Entitlements"));

		EntitlementsPoller = FRH_PollControl::CreateAutoPoller();
		
		if (EntitlementsPoller.IsValid())
		{
			// poll immediately, as we have have entitlements pending
			EntitlementsPoller->StartPoll(FRH_PollFunc::CreateSP(this, &FRH_EntitlementProcessor::PollEntitlements), PollTimerName, true);
		}
	}
	
	void StopPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		if (EntitlementsPoller.IsValid())
		{
			EntitlementsPoller->StopPoll();
			EntitlementsPoller.Reset();
		}
	}
	
	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_EntitlementProcessor"));
		return Name;
	}

	virtual void ExecuteCallback(bool bSuccess) const override
	{
		if(bSuccess)
		{
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process Entitlements completed successfully"), ANSI_TO_TCHAR(__FUNCTION__));
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Failed to Process Entitlements"), ANSI_TO_TCHAR(__FUNCTION__));
		}
		
		EntitlementProcessorCompleteDelegate.ExecuteIfBound(bSuccess, ProcessEntitlementResult);
	}

	ERHAPI_PlatformRegion GetRegionFromTitleSettings()
	{
		auto PlatformRegion = ERHAPI_PlatformRegion::Unknown;
#if ENGINE_MAJOR_VERSION < 5
		TSharedPtr<const FJsonObject> Settings = IPlatformFeaturesModule::Get().GetTitleSettings();
		if (Settings.IsValid())
		{
			region = static_cast<PORTAL_REGION>(Settings->GetIntegerField(PORTAL_REGION_PROPERTY_NAME));
		}

		switch(region)
		{
			case 0:
				PlatformRegion = ERHAPI_PlatformRegion::Unknown;
				break;
			case 1:
				PlatformRegion = ERHAPI_PlatformRegion::Na;
				break;
			case 2:
				PlatformRegion = ERHAPI_PlatformRegion::Eu;
				break;
			default:
				PlatformRegion = ERHAPI_PlatformRegion::Unknown;
		}
#endif
		if(GetPlatformRegionDelegate.IsBound())
		{
			PlatformRegion = GetPlatformRegionDelegate.Execute();
		}
	
		return PlatformRegion;
	}

	FAuthContextPtr AuthContext;
	TWeakObjectPtr<URH_EntitlementSubsystem> EntitlementSubsystem;
	IOnlineSubsystem* OSS;
	IOnlinePurchasePtr PurchaseSubsystem;
	int32 LocalUserNum;
	FUniqueNetIdWrapper PlatformUserId;
	FTimerManager& TimerManager;
	FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate;
	FRH_GetPlatformRegionDelegate GetPlatformRegionDelegate;

	ERHAPI_Platform Platform;
	
	const FString TaskId = FGuid::NewGuid().ToString();
	FRHAPI_PlatformEntitlementProcessResult ProcessEntitlementResult;

	int32 ReceiptsToValidateCount = 0;
	
	float fEntitlementCheckPollInterval;
	FTimerHandle EntitlementCheckPollTimerHandle;
	FRH_AutoPollerPtr EntitlementsPoller;
	
	TArray<FPurchaseReceipt> Receipts = TArray<FPurchaseReceipt>();

	FHttpRequestPtr HttpRequest;
};