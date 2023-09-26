#pragma once

#include <optional>

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
#include "RH_OnlineSubsystemNames.h"
#include "RH_EntitlementSubsystem.generated.h"

class URH_LocalPlayerSubsystem;

DECLARE_DELEGATE_TwoParams(FRH_ProcessEntitlementCompletedDelegate, bool /*Success*/, FRHAPI_PlatformEntitlementProcessResult) 
DECLARE_DELEGATE_RetVal(ERHAPI_PlatformRegion, FRH_GetPlatformRegionDelegate)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_QueryStoreOffersDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_QueryStoreOffersDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_QueryStoreOffersBlock, FRH_QueryStoreOffersDelegate, FRH_QueryStoreOffersDynamicDelegate, bool)


/** @defgroup Entitlement RallyHere Entitlement
 *  @{
 */

/**
 * @brief Subsystem for handling requesting and processing entitlements from the online subsystem.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_EntitlementSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()
public:
	/**
	* @brief Initialize the subsystem.
	*/
	virtual void Initialize();
	/**
	* @brief Safely tears down the subsystem.
	*/
	virtual void Deinitialize();
	/**
	* @brief Notification that the user changed for the owning local player subsystem
	*/
	virtual void OnUserChanged(const FGuid& OldPlayerUuid, class URH_PlayerInfo* OldLocalPlayerInfo) override;
	/**
	* @brief Handle a notification from the inventory API
	* @param [in] Notification The notification to handle
	* @param [in] APIName The name of the API that sent the notification
	* @param [in] APIParams The parameters for the API that sent the notification
	*/
	void HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams);
	/**
	 * @brief Start Async Task to Process Entitlements for the users connected OSS.
	 * @param [in] EntitlementProcessorCompleteDelegate Delegate callback for when the entitlement process is complete.
	 * @param [in] PlatformRegionDelegate Delegate callback for getting the platform region.
	 */
	void SubmitEntitlementsForLoggedInOSS(FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate = FRH_ProcessEntitlementCompletedDelegate(),
	                                      FRH_GetPlatformRegionDelegate PlatformRegionDelegate = FRH_GetPlatformRegionDelegate());
	/**
	 * @brief Start Async Task to Process Entitlements for a specific OSS.
	 * @param [in] platform The OSS to process entitlements for.
	 * @param [in] EntitlementProcessorCompleteDelegate Delegate callback for when the entitlement process is complete.
	 * @param [in] PlatformRegionDelegate Delegate callback for getting the platform region.
	 */
	void SubmitEntitlementsForOSS(ERHAPI_Platform platform, FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate = FRH_ProcessEntitlementCompletedDelegate(),
	                              FRH_GetPlatformRegionDelegate PlatformRegionDelegate = FRH_GetPlatformRegionDelegate());
	/**
	* @brief Queries the OSS to get the store offers for the given offer ids.
	* @param [in] OfferIds List of SKUs to request offers for.
	* @param [in] Delegate callback for getting offers.
	*/
	void QueryStoreOffersById(const TArray<FString>& OfferIds, const FRH_QueryStoreOffersBlock& Delegate = FRH_QueryStoreOffersBlock());
	/**
	* @brief Response from OSS for Store Offer By Id Query.
	* @param [in] bSuccess If the call to the OSS was successful.
	* @param [in] Offers Offers returned by the OSS.
	* @param [in] Error The error if the call was not successful.
	* @param [in] Delegate callback for getting offers.
	*/
	void OnQueryStoreOffersById(bool bSuccess, const TArray<FUniqueOfferId>& Offers, const FString& Error, const FRH_QueryStoreOffersBlock Delegate);
	/**
	* @brief Helper function to get the cached store offers from the OSS.
	* @param [out] OutOffers The offers cached in the store OSS.
	*/
	void GetCachedStoreOffers(TArray<FOnlineStoreOfferRef>& OutOffers);
	/**
	 * @brief Gets the map of all processed entitlement results.
	 */
	TMap<FString, FRHAPI_PlatformEntitlementProcessResult>* GetEntitlementResults();
	/**
	 * @brief Sets the entitlement OSS Name.
	 * @param [in] InEntitlementOSSName The OSS name to use for entitlements.
	 */
	void SetEntitlementOSSName(const FName& InEntitlementOSSName);
	/**
	 * @brief Gets the set entitlement OSS Name.
	 */
	FName GetEntitlementOSSName();

	/** @brief Helper to the store subsystem subsystem. */
	IOnlineStoreV2Ptr GetStoreSubsystem() const;
protected:
	/** @brief Helper to get the engines Timer Manager. */
	FTimerManager& GetTimerManager();
	/** @brief Helper to the local player subsystem. */
	URH_LocalPlayerSubsystem* GetRH_LocalPlayerSubsystem() const;
	/** @brief Map of results from Entitlement Process calls. */
	TMap<FString, FRHAPI_PlatformEntitlementProcessResult> EntitlementProcessResultMap;
	/** @brief Helper to the online subsystem. */
	IOnlineSubsystem* GetOSS() const;
	/** @brief Helper to the online purchase subsystem. */
	IOnlinePurchasePtr GetPurchaseSubsystem() const;
	
	/** @brief Online Subsystem to use for entitlements.  If not provided, will use the default OSS */
	UPROPERTY(Config)
	FName EntitlementOSSName;
};

/**
 * @brief Processor class used to make entitlment process calls.
 */
class FRH_EntitlementProcessor : public FRH_AsyncTaskHelper
{
public:
	/**
	 * @brief Main Constructor for Entitlement Processor, used internally by the entitlement process calls.
	 */
	FRH_EntitlementProcessor(URH_EntitlementSubsystem* InEntitlementSubsystem,
		IOnlineSubsystem* InOSS,
		const IOnlinePurchasePtr &InPurchaseSubsystem,
		int32 InLocalUserNum,
		FUniqueNetIdWrapper InPlatformUserId,
		FTimerManager &InTimerManager,
		FRH_ProcessEntitlementCompletedDelegate InProcessorCompleteDelegate,
		FRH_GetPlatformRegionDelegate InGetPlatformRegionDelegate,
		std::optional<ERHAPI_Platform> InOverridePlatform)
		: EntitlementSubsystem(InEntitlementSubsystem)
		, OSS(InOSS)
		, PurchaseSubsystem(InPurchaseSubsystem)
		, LocalUserNum(InLocalUserNum)
		, PlatformUserId(InPlatformUserId)
		, TimerManager(InTimerManager)
		, EntitlementProcessorCompleteDelegate(InProcessorCompleteDelegate)
		, GetPlatformRegionDelegate(InGetPlatformRegionDelegate)
	{
		if (InOverridePlatform.has_value())
		{
			IsOverride = true;
			Platform = InOverridePlatform.value();
		}
		else
		{
			Platform = RH_GetPlatformFromOSSName(OSS->GetSubsystemName()).Get(ERHAPI_Platform::Anon);
		}
		AuthContext = EntitlementSubsystem->GetAuthContext();
	}
	/**
	 * @brief Start the Entitlement processing.
	 */
	virtual void Start()
	{
		Started();
		if (!AuthContext.IsValid())
		{
			Failed(TEXT("No AuthContext provided"));
			return;
		}
		if (!AuthContext->IsLoggedIn())
		{
			Failed(TEXT("Not Logged In"));
			return;
		}
		QueryEntitlements();
	}

protected:
	/**
	 * @brief Queries entitlements from the online subsystem.
	 */
	void QueryEntitlements()
	{
		if(PurchaseSubsystem != nullptr && !IsOverride)
		{
			PurchaseSubsystem->QueryReceipts(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum), false,
			FOnQueryReceiptsComplete::CreateSP(this, &FRH_EntitlementProcessor::QueryEntitlementsComplete, OSS));
		}
		else
		{
			ProcessPlatformInventory();
		}
	}
	/**
	 * @brief Response from the online subsystem query entitlements call.
	 * @param [in] Result The result of the query.
	 * @param [in] ProvidedOSS The OSS that provided the result.
	 */
	void QueryEntitlementsComplete(const FOnlineError& Result, IOnlineSubsystem* ProvidedOSS)
	{
		if (!Result.bSucceeded)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Error Processing Platform Entitlements - Error Code: [%s] - Error Message: [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorCode(), *Result.GetErrorMessage().ToString());
			Failed("Failed to query entitlements.");
		}
		
		PurchaseSubsystem->GetReceipts(*PlatformUserId, Receipts);

		ValidateEntitlementReceipts();
	}
	/**
	 * @brief Validates the entitlement receipts if needed by the platform.
	 */
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

		bool bShouldFinalize = ValidationInfos.Num() > 0;

		// EOS subsystems redeem purchases inside of the FinalizeReceiptValidationInfo, which does not conform to the other subsystems.
		// Skip that step for Epic, and proceed directly to processing the inventory so it can be redeemed on the RHAPI side
		if (OSS != nullptr && (OSS->GetSubsystemName() == EOS_SUBSYSTEM || OSS->GetSubsystemName() == EOSPLUS_SUBSYSTEM))
		{
			bShouldFinalize = false;
		}

		if(bShouldFinalize)
		{
			for (FString validationInfo: ValidationInfos)
			{
				PurchaseSubsystem->FinalizeReceiptValidationInfo(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum),
					validationInfo,
					FOnFinalizeReceiptValidationInfoComplete::CreateSP(this, &FRH_EntitlementProcessor::OnReceiptValidationComplete));
			}
		}
		else
		{
			ProcessPlatformInventory();
		}
	}
	/**
	 * @brief Response from the online subsystem validate entitlements call.
	 * @param [in] Result The result of the query.
	 * @param [in] ValidationInfo The validation info of the receipt.
	 */
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
	/**
	 * @brief Processes the platform inventory and stores as cached responses.
	 */
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

						UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Ading Client Entitlement to Request - SKU: %s - Entitlement ID: %s - Quantity: %i"), *GetName(), *Entitlement.PlatformSku, *Entitlement.PlatformEntitlementId, Entitlement.GetQuantity(0));
				
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
		entitlementRequest.PlatformRegion = GetRegionFromTitleSettings();
		entitlementRequest.TransactionId = ProcessEntitlementResult.TransactionId;

		if (!IsOverride)
		{
			entitlementRequest.PlatformToken = OSS->GetIdentityInterface()->GetAuthToken(LocalUserNum);
		}
		
		FGuid PlayerUuid;
		if (AuthContext->GetLoginResult().IsSet())
		{
			PlayerUuid = AuthContext->GetLoginResult()->GetActivePlayerUuid();
		}
		if (!PlayerUuid.IsValid())
		{
			Failed(TEXT("No valid player uuid"));
			return;
		}

		auto Request = RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = PlayerUuid;
		Request.PlatformEntitlementProcessRequest = entitlementRequest;

		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements().ProcessPlatformEntitlementsByPlayerUuid(Request,
			RallyHereAPI::FDelegate_ProcessPlatformEntitlementsByPlayerUuid::CreateSP(this, &FRH_EntitlementProcessor::ProcessPlatformInventoryComplete), GetDefault<URH_IntegrationSettings>()->ProcessPlatformEntitlementsPriority);
		
		if (!HttpPtr)
		{
			Failed(TEXT("Failed to create login request"));
		}
	}
	/**
	 * @brief Returns if there are pending entitlement checks being processed in the online subsystem.
	 */
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
	/**
	 * @brief Callback when the processing of platform inventory complets on the core.
	 * @param [in] Resp The repsonse from the core.
	 */
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
			ProcessEntitlementResult.SetStatus("FAILED");
			EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);
			Failed(FString::Printf(TEXT("RallyHere Process Platform Entitlement Request failed with %s"), *Resp.GetResponseString()));
		}
	}
	/**
	 * @brief Polls for new entitlements.
	 * @param [in] Delegate Delegate to callback when poll completes.
	 */
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
				&FRH_EntitlementProcessor::PollEntitlementComplete, Delegate), GetDefault<URH_IntegrationSettings>()->RetrievePlatformEntitlementsPriority);
	}
	/**
	* @brief Handles the response to a Poll Entitlements call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
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
	/**
	 * @brief Finalizes a purchase from an online subsystem.
	 */
	void FinalizePurchase()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process Platform Entitlements was success, calling finalize purchase on Transaction Id: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ProcessEntitlementResult.TransactionId);
		PurchaseSubsystem->FinalizePurchase(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum), *ProcessEntitlementResult.GetTransactionId());
	}
	/**
	 * @brief Starts polling of entitlements.
	 */
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
	/**
	 * @brief Stops polling of entitlements.
	 */
	void StopPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		if (EntitlementsPoller.IsValid())
		{
			EntitlementsPoller->StopPoll();
			EntitlementsPoller.Reset();
		}
	}
	/**
	 * @brief Gets the name of the entitlement processor.
	 */
	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_EntitlementProcessor"));
		return Name;
	}
	/**
	 * @brief Triggers the callback of the Entitlements Processor.
	 * @param [in] bSuccess If true, the entitlement process was successful.
	 */
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
	/**
	 * @brief Gets the region for the platform.
	*/
	ERHAPI_PlatformRegion GetRegionFromTitleSettings()
	{
		auto PlatformRegion = ERHAPI_PlatformRegion::Unknown;
		if(GetPlatformRegionDelegate.IsBound())
		{
			PlatformRegion = GetPlatformRegionDelegate.Execute();
		}
	
		return PlatformRegion;
	}
	/** @brief Auth Context used by the entitlement subsystem. */
	FAuthContextPtr AuthContext;
	/** @brief Pointer back to the entitlement subsystem that owns this processor. */
	TWeakObjectPtr<URH_EntitlementSubsystem> EntitlementSubsystem;
	/** @brief Online Subsystem this processor is for. */
	IOnlineSubsystem* OSS;
	/** @brief Online Purchase Subsystem this processor is for. */
	IOnlinePurchasePtr PurchaseSubsystem;
	/** @brief Contorller Id of the user. */
	int32 LocalUserNum;
	/** @brief Platform User Id of the user. */
	FUniqueNetIdWrapper PlatformUserId;
	/** @brief The engines Timer Manager. */
	FTimerManager& TimerManager;
	/** @brief Delegate to fire when completed. */
	FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate;
	/** @brief Delegate that fires when getting the platforms region. */
	FRH_GetPlatformRegionDelegate GetPlatformRegionDelegate;
	/** @brief Platform the entitlements are for. */
	ERHAPI_Platform Platform;
	/** @brief If set, the platform is an override of the main connection platform. */
	bool IsOverride = false;
	/** @brief Unique Id for the process task. */
	const FString TaskId = FGuid::NewGuid().ToString();
	/** @brief Result of the entitlement process. */
	FRHAPI_PlatformEntitlementProcessResult ProcessEntitlementResult;
	/** @brief Tracks how many reciepts are still needed to be validated. */
	int32 ReceiptsToValidateCount = 0;
	/** @brief Polling interval for entitlments. */
	float fEntitlementCheckPollInterval;
	/** @brief Handler for the polling timer. */
	FTimerHandle EntitlementCheckPollTimerHandle;
	/** @brief Auto poller for the entitlements. */
	FRH_AutoPollerPtr EntitlementsPoller;
	/** @brief Array of reciepts from the online subsystem entitlment check. */
	TArray<FPurchaseReceipt> Receipts = TArray<FPurchaseReceipt>();
	/** @brief Http Request for processing entitlements with the core. */
	FHttpRequestPtr HttpRequest;
};

/** @} */