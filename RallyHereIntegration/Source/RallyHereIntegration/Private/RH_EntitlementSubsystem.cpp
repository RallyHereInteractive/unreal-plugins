#include "RH_EntitlementSubsystem.h"

#include "OnlineSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "Interfaces/OnlinePurchaseInterface.h"


void URH_EntitlementSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	EntitlementsPoller = FRH_PollControl::CreateAutoPoller();

	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		PlatformUserId = LPSS->GetOSSUniqueId();
	}
}

void URH_EntitlementSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	StopEntitlementCheckPoll();
	EntitlementsPoller.Reset();
}

void URH_EntitlementSubsystem::QueryEntitlements()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), "Query OSS Receipts");

	if (IOnlinePurchasePtr PurchaseOSS = GetPurchaseSubsystem())
	{
		PurchaseOSS->QueryReceipts(*PlatformUserId.GetUniqueNetId(), false,
			FOnQueryReceiptsComplete::CreateUObject(this, &URH_EntitlementSubsystem::QueryEntitlementsComplete, GetOSS(), GetAuthContext()->GetLoginResult()->GetAccessToken()));
	}
}

void URH_EntitlementSubsystem::PollEntitlements(const FRH_PollCompleteFunc& Delegate)
{
	auto AuthContext = GetAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, false); // do not continue polling if we are not logged in
		return;
	}

	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Polling Inventory API for entitlement completion"), ANSI_TO_TCHAR(__FUNCTION__));

	// RH_TODO: Add logic to call a inventory-api endpoint that doesn't exist yet to poll for
	// if a previous submitted entitlement is complete

	// Update TArray to only continue polling for still incomplete results

	// If the TArray of polling items is empty, stop the polling
	//	StopEntitlementCheckPoll();
	
	EntitlementStatusMapUpdatedDelegate.Broadcast(EntitlementStatusMapStruct{EntitlementStatusMap});

	bool bContinuePolling = true;
	// todo - add defer logic to the missing inventory call mentioned above
	Delegate.ExecuteIfBound(true, bContinuePolling);
}

void URH_EntitlementSubsystem::SubmitEntitlementsToInventory(IOnlineSubsystem* OSS)
{
	TArray<FRHAPI_PlatformEntitlement> entitlementsToSubmit;
	
	EntitlementStatusMap.Empty();
	for (FPurchaseReceipt receipt: CachedEntitlements)
	{
		for (FPurchaseReceipt::FReceiptOfferEntry offerEntry: receipt.ReceiptOffers)
		{
			for (FPurchaseReceipt::FLineItemInfo lineItem: offerEntry.LineItems)
			{
				EntitlementStatusMap.Emplace(lineItem.UniqueId, EntitlementStatus::SUBMITTED);

				FRHAPI_PlatformEntitlement Entitlement;
				Entitlement.SetQuantity(1);
				Entitlement.SetPlatformEntitlementId(lineItem.UniqueId);
				Entitlement.SetPlatformSku(lineItem.ItemName);
				
				entitlementsToSubmit.Emplace(Entitlement);
			}
		}
	}

	FRHAPI_PlatformEntitlementProcessRequest entitlementRequest;
	entitlementRequest.SetEntitlements(entitlementsToSubmit);
	entitlementRequest.PlatformId = EnumToString(RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_Platform::Anon));
	entitlementRequest.ClientType = ERHAPI_ClientType::Win;
	entitlementRequest.PlatformToken = GetAuthContext()->GetAccessToken();
	entitlementRequest.PlatformRegion = ERHAPI_PlatformRegion::Na;
	entitlementRequest.TransactionId = "0000";
		
	auto Request = RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid();
	Request.AuthContext = GetAuthContext();
	Request.PlayerUuid = GetAuthContext()->GetLoginResult()->GetActivePlayerUuid();
	Request.PlatformEntitlementProcessRequest = entitlementRequest;

	const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements().ProcessPlatformEntitlementsByPlayerUuid(Request,
		RallyHereAPI::FDelegate_ProcessPlatformEntitlementsByPlayerUuid::CreateUObject(this, &URH_EntitlementSubsystem::OnProcessPlatformEntitlementsResponse));
}

TArray<FPurchaseReceipt> URH_EntitlementSubsystem::GetEntitlements()
{
	ClearEntitlementsReceipts();
	GetPurchaseSubsystem()->GetReceipts(*PlatformUserId.GetUniqueNetId(), CachedEntitlements);
	CachedEntitlementsUpdatedDelegate.Broadcast(CachedEntitlements);
	return CachedEntitlements;
}

IOnlineSubsystem* URH_EntitlementSubsystem::GetOSS() const
{
	if (URH_LocalPlayerSubsystem* LPSS = GetLocalPlayerSubsystem())
	{
		if (LPSS->GetLocalPlayer() == nullptr)
		{
			return nullptr;
		}
		
		IOnlineSubsystem* oss = LPSS->GetOSS();
		if (oss == nullptr)
		{
			return nullptr;
		}

		return oss;
	}

	return nullptr;
}

IOnlinePurchasePtr URH_EntitlementSubsystem::GetPurchaseSubsystem() const
{
	if (IOnlineSubsystem* OSS = GetOSS())
	{
		IOnlinePurchasePtr purchase = OSS->GetPurchaseInterface();
		return purchase;
	}

	return nullptr;
}

void URH_EntitlementSubsystem::ClearEntitlementsReceipts()
{
	CachedEntitlements.Empty();
}

void URH_EntitlementSubsystem::UpdateEntitlementStatusMap()
{
	for (FPurchaseReceipt receipt: CachedEntitlements)
	{
		for (FPurchaseReceipt::FReceiptOfferEntry offerEntry: receipt.ReceiptOffers)
		{
			for (FPurchaseReceipt::FLineItemInfo lineItem: offerEntry.LineItems)
			{
				EntitlementStatusMap.Emplace(lineItem.UniqueId, EntitlementStatus::UNSUBMITTED);
			}
		}
	}

	EntitlementStatusMapUpdatedDelegate.Broadcast(EntitlementStatusMapStruct{EntitlementStatusMap});
}

void URH_EntitlementSubsystem::QueryEntitlementsComplete(const FOnlineError& Result, IOnlineSubsystem* OSS, FString AuthToken)
{
	// Stop any previous polling
	StopEntitlementCheckPoll();
		
	ClearEntitlementsReceipts();
	GetPurchaseSubsystem()->GetReceipts(*PlatformUserId.GetUniqueNetId(), CachedEntitlements);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - FOnlineError - %x"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorMessage().ToString());
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Num of Receipts - %x"), ANSI_TO_TCHAR(__FUNCTION__), CachedEntitlements.Num());

	// Create/Update Entitlement Status Map
	UpdateEntitlementStatusMap();

	// Send Entitlements to the Core
	SubmitEntitlementsToInventory(OSS);

	CachedEntitlementsUpdatedDelegate.Broadcast(CachedEntitlements);
}

void URH_EntitlementSubsystem::OnProcessPlatformEntitlementsResponse(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid& Resp)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	
	if (Resp.IsSuccessful())
	{
		// RHTODO: Iterate over results
			// Store inprogress results in a TArray to poll against at a interval
			// Trigger finalize logic for completed results

		// Broadcast that our list of entitlements has been updated with new status (mostly used by debug tool right now)
		EntitlementStatusMapUpdatedDelegate.Broadcast(EntitlementStatusMapStruct{EntitlementStatusMap});

		// Poll incomplete results
		StartEntitlementCheckPoll();
	}
}

void URH_EntitlementSubsystem::StartEntitlementCheckPoll()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	static FName PollTimerName(TEXT("Entitlements"));

	if (EntitlementsPoller.IsValid())
	{
		// poll immediately, as we have have entitlements pending
		EntitlementsPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_EntitlementSubsystem::PollEntitlements), PollTimerName, true);
	}
}

void URH_EntitlementSubsystem::StopEntitlementCheckPoll()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (EntitlementsPoller.IsValid())
	{
		EntitlementsPoller->StopPoll();
	}
}

TMap<FUniqueEntitlementId, EntitlementStatus> URH_EntitlementSubsystem::GetEntitlementStatusMap()
{
	return EntitlementStatusMap;
}
