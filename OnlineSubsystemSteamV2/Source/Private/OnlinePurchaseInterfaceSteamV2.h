#pragma once

#include "OnlineAsyncTaskManagerSteamV2.h"
#include "Interfaces/OnlinePurchaseInterface.h"
#include "OnlineSubsystemSteamV2Package.h"
#include "OnlineError.h"

class FOnlineSubsystemSteamV2;

FString FromSteamItemDefId(SteamItemDef_t itemDefId);
SteamItemDef_t ToSteamItemDefId(const FString& offerId);
FString FromSteamItemInstanceId(SteamItemInstanceID_t itemInstanceId);
SteamItemInstanceID_t ToSteamItemInstanceId(const FString& entitlementId);

class FOnlinePurchaseSteam
	: public IOnlinePurchase
	, public TSharedFromThis<FOnlinePurchaseSteam, ESPMode::ThreadSafe>
{
PACKAGE_SCOPE:
	FOnlinePurchaseSteam(FOnlineSubsystemSteamV2* InSubsystem);

	struct FPendingPurchase
	{
		TSharedRef<const FUniqueNetId> UserId;
		FPurchaseCheckoutRequest CheckoutRequest;
		FOnPurchaseCheckoutComplete Delegate;
		TSharedRef<FPurchaseReceipt> Receipt;
		float Expiration;

		FPendingPurchase(TSharedRef<const FUniqueNetId> InUserId, FPurchaseCheckoutRequest InCheckoutRequest, FOnPurchaseCheckoutComplete InDelegate);

		EOnlineErrorResult GetResult() const;
		void TriggerDelegate();
	};

	void AddPendingPurchase(TUniquePtr<FPendingPurchase> InPendingPurchase);
	void MarkPurchasesAsSuccessful();
	void MarkPurchasesAsClosed();
	void Tick(float DeltaTime);

public:
	virtual ~FOnlinePurchaseSteam();

	//~ Begin IOnlinePurchase Interface
	virtual bool IsAllowedToPurchase(const FUniqueNetId& UserId) override;
	virtual void Checkout(const FUniqueNetId& UserId, const FPurchaseCheckoutRequest& CheckoutRequest, const FOnPurchaseCheckoutComplete& Delegate) override;
	virtual void Checkout(const FUniqueNetId& UserId, const FPurchaseCheckoutRequest& CheckoutRequest, const FOnPurchaseReceiptlessCheckoutComplete& Delegate) override;
	virtual void FinalizePurchase(const FUniqueNetId& UserId, const FString& ReceiptId) override;
	virtual void RedeemCode(const FUniqueNetId& UserId, const FRedeemCodeRequest& RedeemCodeRequest, const FOnPurchaseRedeemCodeComplete& Delegate) override;
	virtual void QueryReceipts(const FUniqueNetId& UserId, bool bRestoreReceipts, const FOnQueryReceiptsComplete& Delegate) override;
	virtual void GetReceipts(const FUniqueNetId& UserId, TArray<FPurchaseReceipt>& OutReceipts) const override;
	virtual void FinalizeReceiptValidationInfo(const FUniqueNetId& UserId, FString& InReceiptValidationInfo, const FOnFinalizeReceiptValidationInfoComplete& Delegate) override;
	//~ End IOnlinePurchase Interface

	// /** Cached receipts/inventory per user */
	TUniqueNetIdMap<TArray<FPurchaseReceipt> > UserCachedReceipts;

private:
	FOnlineSubsystemSteamV2* Subsystem;
	TArray<TUniquePtr<FPendingPurchase>> PendingPurchases;
	void ClearCachedReceipts(const TSharedRef<const FUniqueNetId>& UserId);
};

typedef TSharedPtr<FOnlinePurchaseSteam, ESPMode::ThreadSafe> FOnlinePurchaseSteamPtr;
