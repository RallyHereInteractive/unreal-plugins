// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <optional>

#include "EntitlementsAPI.h"
#include "InventoryAPI.h"
#include "OnlineError.h"
#include "OnlineSubsystem.h"
#include "TimerManager.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlinePurchaseInterface.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_EntitlementSubsystem.h"
#include "RH_Events.h"

class URH_LocalPlayerSubsystem;

/** @ingroup
 *  @{
 */

/**
 * @brief Processor class used to make entitlment process calls.
 */
class FRH_EntitlementProcessor : public FRH_AsyncTaskHelper
{
public:	
	/**
	 * @brief Main Constructor for Entitlement Processor, used internally by the entitlement process calls.
	 */
	FRH_EntitlementProcessor(
		  FAuthContextPtr InAuthContext
		, URH_EntitlementSubsystem* InEntitlementSubsystem
		, FTimerManager& InTimerManager
		, const FRH_ProcessEntitlementCompletedDelegate& InProcessorCompleteDelegate
		, TOptional<ERHAPI_PlatformRegion> InRegion
		, TOptional<ERHAPI_Platform> InPlatform
		, TOptional<ERHAPI_ClientType> InClientType
		, TSharedPtr<IAnalyticsProvider> InAnalyticsProvider
		)
		: AuthContext(InAuthContext)
		, EntitlementSubsystem(InEntitlementSubsystem)
		, TimerManager(InTimerManager)
		, EntitlementProcessorCompleteDelegate(InProcessorCompleteDelegate)
		, Region(InRegion)
		, Platform(InPlatform)
		, ClientType(InClientType)
		, AnalyticsProvider(InAnalyticsProvider)
	{
	}
	
	/**
	 * @brief Start the Entitlement processing.
	 */
	virtual void Start()
	{
		Started();
		if (!EntitlementSubsystem.IsValid())
		{
			Failed(TEXT("No Entitlement Subsystem"));
			return;
		}
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
		if (!Platform.IsSet())
		{
			Failed(TEXT("No valid platform"));
			return;
		}

		StartProcessor();
	}

protected:

	/** @brief Start the processing workflow from the appropriate step */
	virtual void StartProcessor()
	{
		ProcessPlatformInventory(TEXT(""));
	}
	
	/** @brief Create the RallyHereAPI based request */
	virtual TOptional<RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid> CreateRallyHereAPIEntitlementsRequest(const FString& PlatformAuthToken, const FGuid& PlayerUuid)
	{
		ProcessEntitlementResult.SetStatus("SUBMITTED");
		EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);

		FRHAPI_PlatformEntitlementProcessRequest entitlementRequest;
		entitlementRequest.SetEntitlements(ProcessEntitlementResult.GetClientEntitlements());
		entitlementRequest.SetPlatformId(EnumToString(Platform.GetValue()));

		entitlementRequest.SetPlatformToken(PlatformAuthToken);
		entitlementRequest.SetClientType(ClientType.Get(ERHAPI_ClientType::Unknown));

		entitlementRequest.SetPlatformRegion(Region.Get(ERHAPI_PlatformRegion::Unknown));
		entitlementRequest.SetTransactionId(ProcessEntitlementResult.TransactionId);

		auto Request = RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = PlayerUuid;
		Request.PlatformEntitlementProcessRequest = entitlementRequest;

		return Request;
	}
	
	/**
	 * @brief Processes the platform inventory and stores as cached responses.
	 */
	virtual void ProcessPlatformInventory(const FString& PlatformAuthToken)
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Submitting Process Platform Entitlements to RallyHere"), *GetName());

		if (!EntitlementSubsystem.IsValid())
		{
			Failed(TEXT("No Entitlement Subsystem"));
			return;
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

		auto Request = CreateRallyHereAPIEntitlementsRequest(PlatformAuthToken, PlayerUuid);

		if (!Request.IsSet())
		{
			Failed(TEXT("Could not create RallyHereAPI Entitlements Request"));
			return;
		}
		
		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements()->ProcessPlatformEntitlementsByPlayerUuid(Request.GetValue(),
			RallyHereAPI::FDelegate_ProcessPlatformEntitlementsByPlayerUuid::CreateSP(this, &FRH_EntitlementProcessor::ProcessPlatformInventoryComplete), GetDefault<URH_IntegrationSettings>()->ProcessPlatformEntitlementsPriority);

		if (!HttpPtr)
		{
			Failed(TEXT("Failed to create entitlements processing request"));
		}
	}
	/**
	 * @brief Returns if there are pending entitlement checks being processed in the online subsystem.
	 */
	virtual bool CheckIfWeNeedToPoll()
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
	virtual void ProcessPlatformInventoryComplete(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid& Resp)
	{
		if (Resp.IsSuccessful() && EntitlementSubsystem.IsValid() && Resp.TryGetDefaultContent(ProcessEntitlementResult))
		{
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Successfully Submitted Process Platform Entitlements to RallyHere with returned RequestId: %s"), *GetName(), *ProcessEntitlementResult.GetRequestId());
			
			EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);

			if(CheckIfWeNeedToPoll())
			{
				StartPoll();
			}
			else
			{
				FinalizePurchase();
			}
		}
		else
		{
			ProcessEntitlementResult.SetStatus("FAILED");
			if (EntitlementSubsystem.IsValid())
			{
				EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);
			}
			FRH_ErrorInfo ErrorInfo(Resp);
			Failed(FString::Printf(TEXT("RallyHere Process Platform Entitlement Request failed with %s"), *ErrorInfo.ResponseContent));
		}
	}
	/**
	 * @brief Polls for new entitlements.
	 * @param [in] Delegate Delegate to callback when poll completes.
	 */
	virtual void PollEntitlements(const FRH_PollCompleteFunc& Delegate)
	{
		if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
		{
			Delegate.ExecuteIfBound(false, false); // do not continue polling if we are not logged in
			return;
		}

		ProcessEntitlementResult.SetStatus("POLLING");

		auto Request = RallyHereAPI::FRequest_RetrieveEntitlementRequestByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = AuthContext->GetLoginResult()->GetActivePlayerUuid();
		Request.RequestId = ProcessEntitlementResult.RequestId;

		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements()->RetrieveEntitlementRequestByPlayerUuid(Request,
			RallyHereAPI::FDelegate_RetrieveEntitlementRequestByPlayerUuid::CreateSP(this,
				&FRH_EntitlementProcessor::PollEntitlementComplete, Delegate), GetDefault<URH_IntegrationSettings>()->RetrievePlatformEntitlementsPriority);

		if (!HttpPtr)
		{
			Failed(TEXT("Failed to create entitlements processing request via poll"));
		}
	}
	/**
	* @brief Handles the response to a Poll Entitlements call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void PollEntitlementComplete(const RallyHereAPI::FResponse_RetrieveEntitlementRequestByPlayerUuid& Resp, FRH_PollCompleteFunc Delegate)
	{
		bool bHadContent = Resp.TryGetDefaultContent(ProcessEntitlementResult);

		if(bHadContent && !CheckIfWeNeedToPoll())
		{
			Delegate.ExecuteIfBound(true, false);
			StopPoll();
			FinalizePurchase();
		}
		else
		{
			ProcessEntitlementResult.SetStatus("POLLING");
			Delegate.ExecuteIfBound(true, true);
		}

		if (bHadContent && EntitlementSubsystem.IsValid())
		{
			EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);
		}
	}

	/**
	 * @brief Starts polling of entitlements.
	 */
	virtual void StartPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		static FName PollTimerName(TEXT("Entitlements"));

		EntitlementsPoller = FRH_PollControl::CreateAutoPoller();

		if (EntitlementsPoller.IsValid())
		{
			// poll immediately, as we have have entitlements pending
			EntitlementsPoller->StartPoll(FRH_PollFunc::CreateSP(this, &FRH_EntitlementProcessor::PollEntitlements), PollTimerName, true, false);
		}
	}
	/**
	 * @brief Stops polling of entitlements.
	 */
	virtual void StopPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		if (EntitlementsPoller.IsValid())
		{
			EntitlementsPoller->StopPoll();
			EntitlementsPoller.Reset();
		}
	}

	/**
	 * @brief Finalizes a purchase from an online subsystem.
	 */
	virtual void FinalizePurchase()
	{
		Completed(true);
	}

	/**
	 * @brief Gets the name of the entitlement processor.
	 */
	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_EntitlementProcessor"));
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
	
	/** @brief Auth Context used by the entitlement subsystem. */
	FAuthContextPtr AuthContext;
	/** @brief Pointer back to the entitlement subsystem that owns this processor. */
	TWeakObjectPtr<URH_EntitlementSubsystem> EntitlementSubsystem;
	/** @brief The engines Timer Manager. */
	FTimerManager& TimerManager;
	/** @brief Delegate to fire when completed. */
	FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate;
	/** @brief The platforms region to use */
	TOptional<ERHAPI_PlatformRegion> Region;
	/** @brief Platform the entitlements are for. */
	TOptional<ERHAPI_Platform> Platform;
	/** @brief ClientType the entitlements are for. */
	TOptional<ERHAPI_ClientType> ClientType;
	/** @brief Unique Id for the process task. */
	const FString TaskId = FGuid::NewGuid().ToString();
	/** @brief Result of the entitlement process. */
	FRHAPI_PlatformEntitlementProcessResult ProcessEntitlementResult;
	/** @brief Polling interval for entitlments. */
	float fEntitlementCheckPollInterval;
	/** @brief Handler for the polling timer. */
	FTimerHandle EntitlementCheckPollTimerHandle;
	/** @brief Auto poller for the entitlements. */
	FRH_AutoPollerPtr EntitlementsPoller;
	/** @brief Http Request for processing entitlements with the core. */
	FHttpRequestPtr HttpRequest;
	/** @brief Analytics provider to use for logging. */
	TSharedPtr<IAnalyticsProvider> AnalyticsProvider;
};


/**
 * @brief Processor class used to make entitlment process calls utilizing OSS Receipts.
 */
class FRH_EntitlementProcessorOSSPurchase : public FRH_EntitlementProcessor
{
public:
	// wrapper containing asynchronous safe references to OSS interfaces and elements (since OSS pointer itself is not safe)
	struct FEntitlementOSSData
	{
		FName SubsystemName;
		IOnlineIdentityPtr Identity;
		IOnlinePurchasePtr Purchase;
		FString AppId;
		FUniqueNetIdPtr UniqueNetId;
		int32 LocalUserNum = 0;

		FEntitlementOSSData() = default;
		
		FEntitlementOSSData(const IOnlineSubsystem* OSS, int32 InLocalUserNum) : FEntitlementOSSData()
		{
			if (OSS != nullptr)
			{
				SubsystemName = OSS->GetSubsystemName();
				Identity = OSS->GetIdentityInterface();
				Purchase = OSS->GetPurchaseInterface();
				AppId = OSS->GetAppId();
				UniqueNetId = Identity.IsValid() ? Identity->GetUniquePlayerId(InLocalUserNum) : nullptr;
				LocalUserNum = InLocalUserNum;
			}
		}
	};
	
	/**
	 * @brief Main Constructor for Entitlement Processor, used internally by the entitlement process calls.
	 */
	FRH_EntitlementProcessorOSSPurchase(
		  FAuthContextPtr InAuthContext
		, URH_EntitlementSubsystem* InEntitlementSubsystem
		, const FEntitlementOSSData& InOSSData
		, FTimerManager& InTimerManager
		, const FRH_ProcessEntitlementCompletedDelegate& InProcessorCompleteDelegate
		, TOptional<ERHAPI_PlatformRegion> InRegion
		, TSharedPtr<IAnalyticsProvider> InAnalyticsProvider
		)
		: FRH_EntitlementProcessor(InAuthContext, InEntitlementSubsystem, InTimerManager, InProcessorCompleteDelegate, InRegion, TOptional<ERHAPI_Platform>(), TOptional<ERHAPI_ClientType>(), InAnalyticsProvider)
		, OSSData(InOSSData)
	{
		// set derived optional data from OSS
		Platform = RH_GetPlatformFromOSSName(OSSData.SubsystemName);
		ClientType = RH_GetClientTypeFromOSSName(OSSData.SubsystemName);
		if (EntitlementSubsystem.IsValid())
		{
			AuthContext = EntitlementSubsystem->GetAuthContext();
		}
	}

	/**
	 * @brief Start the Entitlement processing.
	 */
	virtual void Start() override
	{
		// before the call, we cannot call Failed() since Started() has not been called
		// after the call we cannot call anything because StartProcesor() has been called
		FRH_EntitlementProcessor::Start();
	}

protected:
	/** @brief Start the processing workflow from the appropriate step */
	virtual void StartProcessor() override
	{
		// validate these all once.  After this call the shared pointers are assumed valid
		
		if (OSSData.LocalUserNum < 0 || OSSData.LocalUserNum >= MAX_LOCAL_PLAYERS)
		{
			Failed(TEXT("Invalid Local User Num"));
			return;
		}

		if (!OSSData.UniqueNetId.IsValid()) // checks shared pointer
		{
			Failed(TEXT("No Unique Id"));
			return;
		}
		else if (!OSSData.UniqueNetId->IsValid()) // checks the actual unique id
		{
			Failed(TEXT("Invalid Unique Id"));
			return;
		}
		
		if (!OSSData.Identity.IsValid())
		{
			Failed(TEXT("No Purchase Subsystem"));
			return;
		}
		
		if (!OSSData.Purchase.IsValid())
		{
			Failed(TEXT("No Purchase Subsystem"));
			return;
		}
		
		QueryEntitlements();
	}
	
	/**
	 * @brief Queries entitlements from the online subsystem.
	 */
	void QueryEntitlements()
	{
		OSSData.Purchase->QueryReceipts(*OSSData.UniqueNetId, false,
		FOnQueryReceiptsComplete::CreateSP(this, &FRH_EntitlementProcessorOSSPurchase::QueryEntitlementsComplete));
	}
	/**
	 * @brief Response from the online subsystem query entitlements call.
	 * @param [in] Result The result of the query.
	 */
	void QueryEntitlementsComplete(const FOnlineError& Result)
	{
		if (!Result.bSucceeded)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Error Processing Platform Entitlements - Error Code: [%s] - Error Message: [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorCode(), *Result.GetErrorMessage().ToString());
			Failed("Failed to query entitlements.");
			return;
		}

		OSSData.Purchase->GetReceipts(*OSSData.UniqueNetId, Receipts);

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
		if (OSSData.SubsystemName == EOS_SUBSYSTEM || OSSData.SubsystemName == EOSPLUS_SUBSYSTEM)
		{
			bShouldFinalize = false;
		}

		if(bShouldFinalize)
		{
			if (OSSData.UniqueNetId.IsValid() && OSSData.Purchase.IsValid())
			{
				for (FString validationInfo: ValidationInfos)
				{
					OSSData.Purchase->FinalizeReceiptValidationInfo(*OSSData.UniqueNetId,
						validationInfo,
						FOnFinalizeReceiptValidationInfoComplete::CreateSP(this, &FRH_EntitlementProcessorOSSPurchase::OnReceiptValidationComplete));
				}
			}
			else
			{
				Failed(TEXT("OSS Interfaces not valid when validating entitlements"));
			}
		}
		else
		{
			RetrieveOSSAuthToken();
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
			return;
		}

		ReceiptsToValidateCount--;

		if(ReceiptsToValidateCount == 0)
		{
			// PS4 and PS5 pass through auth token as the first token in a colon delimited string in the validation token.  Parse it out and use it as the auth token.
			// this cannot be retrieved later, so we need to do it here
			if (OSSData.SubsystemName == PS4_SUBSYSTEM || OSSData.SubsystemName == PS5_SUBSYSTEM)
			{
				TArray<FString> ValidationTokens;
				ValidationInfo.ParseIntoArray(ValidationTokens, TEXT(":"), false);
				check(ValidationTokens.Num() > 0);
				FString AuthTokenString = ValidationTokens[0];
				FExternalAuthToken AuthToken;
				AuthToken.TokenString = AuthTokenString;

				// additionally, automatically determine region if not specified
				if (!Region.IsSet())
				{
					auto SonyContentId = OSSData.AppId;
					if (SonyContentId.StartsWith(TEXT("EP")))
					{
						Region = ERHAPI_PlatformRegion::Eu;
					}
					else if (SonyContentId.StartsWith(TEXT("UP")))
					{
						Region = ERHAPI_PlatformRegion::Na;
					}
				}

				RetrieveOSSAuthTokenComplete(OSSData.LocalUserNum, AuthToken.IsValid(), AuthToken);
			}
			else
			{
				RetrieveOSSAuthToken();
			}
		}
	}

	void RetrieveOSSAuthToken()
	{
		if (OSSData.Identity.IsValid())
		{
			if (RH_UseGetAuthTokenFallbackFromOSSName(OSSData.SubsystemName))
			{
				FExternalAuthToken AuthToken;
				AuthToken.TokenString = OSSData.Identity->GetAuthToken(OSSData.LocalUserNum);
				RetrieveOSSAuthTokenComplete(OSSData.LocalUserNum, AuthToken.IsValid(), AuthToken);
			}
			else
			{
#if RH_FROM_ENGINE_VERSION(5,2)
				OSSData.Identity->GetLinkedAccountAuthToken(OSSData.LocalUserNum, FString(), IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateSP(this, &FRH_EntitlementProcessorOSSPurchase::RetrieveOSSAuthTokenComplete));
#else
				IdentityInterface->GetLinkedAccountAuthToken(LocalUserNum, IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateSP(this, &FRH_EntitlementProcessor::RetrieveOSSAuthTokenComplete));
#endif
			}
		}
		else
		{
			RetrieveOSSAuthTokenComplete(OSSData.LocalUserNum, false, FExternalAuthToken());
		}
	}

	void RetrieveOSSAuthTokenComplete(int32 InLocalUserNum, bool bWasSuccessful, const FExternalAuthToken& AuthToken)
	{
		if (bWasSuccessful)
		{
			ProcessPlatformInventory(AuthToken.TokenString);
		}
		else
		{
			ProcessPlatformInventory(TEXT(""));
		}
	}

	/** Create the RallyHereAPI based request */
	virtual TOptional<RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid> CreateRallyHereAPIEntitlementsRequest(const FString& PlatformAuthToken, const FGuid& PlayerUuid)
	{
		auto RequestOptional = FRH_EntitlementProcessor::CreateRallyHereAPIEntitlementsRequest(PlatformAuthToken, PlayerUuid);

		if (!RequestOptional.IsSet())
		{
			return RequestOptional;
		}

		auto& Request = RequestOptional.GetValue();

		// inject the OSS receipt data into the request
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

		return RequestOptional;
	}
	
	/**
	 * @brief Finalizes a purchase from an online subsystem.
	 */
	virtual void FinalizePurchase() override
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process Platform Entitlements was success, calling finalize purchase on Transaction Id: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ProcessEntitlementResult.TransactionId);
		if (OSSData.UniqueNetId.IsValid() && OSSData.Purchase.IsValid())
		{
			OSSData.Purchase->FinalizePurchase(*OSSData.UniqueNetId, *ProcessEntitlementResult.GetTransactionId());
		}

		FRH_EntitlementProcessor::FinalizePurchase();
	}

	/**
	 * @brief Gets the name of the entitlement processor.
	 */
	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_EntitlementProcessorOSSPurchase"));
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
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process OSS Based Entitlements completed successfully"), ANSI_TO_TCHAR(__FUNCTION__));
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Failed to Process OSS Based Entitlements"), ANSI_TO_TCHAR(__FUNCTION__));
		}

		EntitlementProcessorCompleteDelegate.ExecuteIfBound(bSuccess, ProcessEntitlementResult);
	}

	/** @brief Online Subsystem this processor is for. */
	FEntitlementOSSData OSSData;
	
	/** @brief Tracks how many reciepts are still needed to be validated. */
	int32 ReceiptsToValidateCount = 0;

	/** @brief Array of reciepts from the online subsystem entitlment check. */
	TArray<FPurchaseReceipt> Receipts = TArray<FPurchaseReceipt>();
};

/** @} */