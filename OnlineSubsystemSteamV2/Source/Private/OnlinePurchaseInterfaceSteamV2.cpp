// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "OnlinePurchaseInterfaceSteamV2.h"
#include "OnlineStoreInterfaceSteamV2.h"
#include "OnlineSubsystemSteamV2.h"
#include "OnlineError.h"
#include "OnlineAsyncTaskManagerSteamV2.h"
#include "OnlineEntitlementsInterfaceSteamV2.h"
#include "Interfaces/OnlineIdentityInterface.h"

namespace
{

	class FOnlinePurchaseAsyncTaskSteamGetAllUserInventory : public FOnlineAsyncTaskSteam
	{
	public:
		enum EGetAllUserInventoryState
		{
			Startup,
			GrantPromoItems,
			GetAllInventory,
		};

	private:

		/** Has this task been initialized yet */
		EGetAllUserInventoryState State;
		/** Returned results from Steam */
		SteamInventoryResult_t CallbackResults;
		TSharedRef<const FUniqueNetId> UserId;

		TArray<FPurchaseReceipt> ReceiptData;
		FOnlineError ErrorResponse;

		const FOnQueryReceiptsComplete QueryReceiptsDelegate;
		const FOnPurchaseCheckoutComplete PurchaseCheckoutDelegate;

	public:
		FOnlinePurchaseAsyncTaskSteamGetAllUserInventory(FOnlineSubsystemSteamV2* InSteamSubsystem, TSharedRef<const FUniqueNetId> InUserId, const FOnQueryReceiptsComplete& InQueryReceiptsDelegate):
			FOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
			State{ EGetAllUserInventoryState::Startup },
			CallbackResults{ k_SteamInventoryResultInvalid },
			UserId{ InUserId },
			ErrorResponse(true),
			QueryReceiptsDelegate(InQueryReceiptsDelegate)
		{
		}

		/**
		 *	Get a human readable description of task
		 */
		FString ToString() const override
		{
			return FString::Printf(TEXT("FOnlineAsyncTaskSteamGetAllUserInventory bWasSuccessful: %d"), WasSuccessful());
		}

		FString GetStateName()
		{
			switch (State)
			{
			case EGetAllUserInventoryState::Startup:
				return TEXT("Startup");
			case EGetAllUserInventoryState::GrantPromoItems:
				return TEXT("GrantPromoItems");
			case EGetAllUserInventoryState::GetAllInventory:
				return TEXT("GetAllInventory");
			default:
				return TEXT("Unknown");
			}
		}

		/**
		 * Give the async task time to do its work
		 * Can only be called on the async task manager thread
		 */
		virtual void Tick() override
		{
			const auto resultStatus = CallbackResults != k_SteamInventoryResultInvalid ? SteamInventory()->GetResultStatus(CallbackResults) : k_EResultOK;
			switch (resultStatus)
			{
			case k_EResultPending:  // Still in progress
				return;
			case k_EResultExpired: // Done, result ready, maybe out of date(see DeserializeResult)
				UE_LOG_ONLINE_PURCHASE(Log, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - %s Complete - results may be out of date."), *GetStateName());
				CompleteState();
				break;
			case k_EResultOK: // Done, the request has completed successfully and the result is ready.
				UE_LOG_ONLINE_PURCHASE(Log, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - %s Complete"), *GetStateName());
				CompleteState();
				break;
			case k_EResultInvalidParam: // ERROR: Invalid API call parameters.
			case k_EResultServiceUnavailable: // ERROR: Service temporarily down, you may retry later.
			case k_EResultLimitExceeded: // ERROR: Operation would exceed per - user inventory limits.
			case k_EResultFail:
			default:
				UE_LOG_ONLINE_PURCHASE(Log, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - %s error %d."), *GetStateName(), resultStatus);
				bWasSuccessful = false;
				bIsComplete = true;
				break;
			}
		}

		void CompleteState()
		{
			switch (State)
			{
			case EGetAllUserInventoryState::Startup:
				if (SteamInventory()->GrantPromoItems(&CallbackResults))
				{
					State = EGetAllUserInventoryState::GrantPromoItems;
				}
				else
				{
					bWasSuccessful = false;
					bIsComplete = true;
				}
				break;
			case EGetAllUserInventoryState::GrantPromoItems:
				SteamInventory()->DestroyResult(CallbackResults); // Cleanup leftover data from the grant promo items call

				if (SteamInventory()->GetAllItems(&CallbackResults))
				{
					State = EGetAllUserInventoryState::GetAllInventory;
				}
				else
				{
					bWasSuccessful = false;
					bIsComplete = true;
				}
				break;
			case EGetAllUserInventoryState::GetAllInventory:
				bWasSuccessful = BuildUserReceiptFromCallbackResults();
				SteamInventory()->DestroyResult(CallbackResults);
				bIsComplete = true;
				break;
			}
		}

		bool BuildUserReceiptFromCallbackResults()
		{
			FPurchaseReceipt PurchaseReceipt;
			TArray<SteamItemDetails_t> steamInventoryItems;
			uint32 count = 0;
			if (!SteamInventory()->GetResultItems(CallbackResults, nullptr, &count))
			{
				return false;
			}

			if (count == 0)
			{
				return true;
			}

			steamInventoryItems.SetNumUninitialized(count);
			if (!SteamInventory()->GetResultItems(CallbackResults, steamInventoryItems.GetData(), &count))
			{
				return false;
			}

			for (const auto& steamEnt : steamInventoryItems)
			{
				// See how many items are left
				const int32 ItemCount = steamEnt.m_unQuantity;

				const FString ItemId = FromSteamItemInstanceId(steamEnt.m_itemId);

				FPurchaseReceipt::FReceiptOfferEntry OfferEntry(FString(), ItemId, ItemCount);
				for (int32 quantity = 1; quantity <= ItemCount; ++quantity)
				{
					FPurchaseReceipt::FLineItemInfo LineItem;
					LineItem.ItemName = FromSteamItemDefId(steamEnt.m_iDefinition);
					LineItem.UniqueId = ItemId;
					OfferEntry.LineItems.Emplace(MoveTemp(LineItem));
				}
				UE_LOG_ONLINE_PURCHASE(Verbose, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - ReceiptItem Steam Item ID: %s"), *ItemId);
				UE_LOG_ONLINE_PURCHASE(Verbose, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - ReceiptItem SKU: %s"), *FromSteamItemDefId(steamEnt.m_iDefinition));
				UE_LOG_ONLINE_PURCHASE(Verbose, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - ReceiptItem Count: %s"), ItemCount);
				UE_LOG_ONLINE_PURCHASE(Verbose, TEXT("FOnlineAsyncTaskSteamGetAllUserInventory - ReceiptItem SteamItemFlags: %s"), steamEnt.m_unFlags);

				PurchaseReceipt.ReceiptOffers.Emplace(MoveTemp(OfferEntry));
			}

			ReceiptData.Add(MoveTemp(PurchaseReceipt));
			bWasSuccessful = ErrorResponse.bSucceeded;
			return true;
		}

		/**
		 * Give the async task a chance to marshal its data back to the game thread
		 * Can only be called on the game thread by the async task manager
		 */
		virtual void Finalize() override
		{
			if (ErrorResponse.bSucceeded)
			{
				FOnlinePurchaseSteamV2Ptr PurchaseInt = StaticCastSharedPtr<FOnlinePurchaseSteamV2>(Subsystem->GetPurchaseInterface());
				if (PurchaseInt.IsValid())
				{
					PurchaseInt->UserCachedReceipts.Emplace(MoveTemp(UserId), ReceiptData);
				}
			}
		}

		/**
		 *	Async task is given a chance to trigger its delegates
		 */
		virtual void TriggerDelegates() override
		{
			// We support multiple delegate types for code-reuse reasons, so execute whichever are bound
			if (QueryReceiptsDelegate.IsBound())
			{
				QueryReceiptsDelegate.ExecuteIfBound(ErrorResponse);
			}

			if (PurchaseCheckoutDelegate.IsBound())
			{
				if (ReceiptData.IsValidIndex(0) && ErrorResponse.bSucceeded)
				{
					PurchaseCheckoutDelegate.ExecuteIfBound(ErrorResponse, MakeShared<FPurchaseReceipt>(ReceiptData[0]));
				}
				else
				{
					PurchaseCheckoutDelegate.ExecuteIfBound(ErrorResponse, MakeShared<FPurchaseReceipt>());
				}
			}
		};
	};
}

namespace
{
	/**
	 *	Async task to handle a steam wallet purchase.
	 */
	class FOnlineAsyncTaskSteamInventoryPurchase : public FOnlineAsyncTaskSteam
	{
	public:

	private:

		/** Has this task been initialized yet */
		bool bInit;
		/** Returned results from Steam */
		SteamInventoryStartPurchaseResult_t CallbackResults;
		TUniquePtr<FOnlinePurchaseSteamV2::FPendingPurchase> PendingPurchase;

	public:
		FOnlineAsyncTaskSteamInventoryPurchase(FOnlineSubsystemSteamV2* InSteamSubsystem,
			TUniquePtr<FOnlinePurchaseSteamV2::FPendingPurchase> InPendingPurchase) :
			FOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
			bInit{},
			CallbackResults{},
			PendingPurchase{ std::move(InPendingPurchase) }
		{
		}

		/**
		 *	Get a human readable description of task
		 */
		FString ToString() const override
		{
			return FString::Printf(TEXT("FOnlineAsyncTaskSteamInventoryPurchase bWasSuccessful: %d Result: %d"), WasSuccessful(), static_cast<uint32>(CallbackResults.m_result));
		}

		/**
		 * Give the async task time to do its work
		 * Can only be called on the async task manager thread
		 */
		virtual void Tick() override
		{
			if (!bInit)
			{
				PendingPurchase->Receipt->TransactionState = EPurchaseTransactionState::Processing;

				// Triggers a Steam event async to let us know when the prices are available
				TArray<SteamItemDef_t> itemDefs;
				TArray<uint32> itemQuantities;
				for (const auto& offer : PendingPurchase->CheckoutRequest.PurchaseOffers)
				{
					itemDefs.Add(ToSteamItemDefId(offer.OfferId));
					itemQuantities.Add(static_cast<uint32>(offer.Quantity));
				}
				CallbackHandle = SteamInventory()->StartPurchase(itemDefs.GetData(), itemQuantities.GetData(), itemDefs.Num());
				bInit = true;
			}

			if (CallbackHandle != k_uAPICallInvalid)
			{
				ISteamUtils* SteamUtilsPtr = SteamUtils();
				bool bFailedCall = false;

				// Poll for completion status
				bIsComplete = SteamUtilsPtr->IsAPICallCompleted(CallbackHandle, &bFailedCall) ? true : false;
				if (bIsComplete)
				{
					bool bFailedResult;
					// Retrieve the callback data from the request
					bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(CallbackHandle, &CallbackResults, sizeof(CallbackResults), CallbackResults.k_iCallback, &bFailedResult);
					bWasSuccessful = (bSuccessCallResult ? true : false) &&
						(!bFailedCall ? true : false) &&
						(!bFailedResult ? true : false) &&
						CallbackResults.m_result == k_EResultOK;
				}
			}
			else
			{
				bWasSuccessful = false;
				bIsComplete = true;
			}
		}

		/**
		 * Give the async task a chance to marshal its data back to the game thread
		 * Can only be called on the game thread by the async task manager
		 */
		virtual void Finalize() override
		{
			FOnlineAsyncTaskSteam::Finalize();
			PendingPurchase->Receipt->TransactionId = FString::Printf(TEXT("%llu"), CallbackResults.m_ulTransID);
			if (WasSuccessful())
			{
				// Unfortunately, this event only tells us that the user OPENED the purchase UI, not when they close it.
				// We're going to set this purchase aside, and handle it after we receive another event telling us more info about it.
				if (auto Purchase = StaticCastSharedPtr<FOnlinePurchaseSteamV2>(Subsystem->GetPurchaseInterface()))
				{
					Purchase->AddPendingPurchase(std::move(PendingPurchase));
				}
			}
			else
			{
				PendingPurchase->Receipt->TransactionState = EPurchaseTransactionState::Failed;
			}
		}

		/**
		 *	Async task is given a chance to trigger its delegates
		 */
		virtual void TriggerDelegates() override
		{
			FOnlineAsyncTaskSteam::TriggerDelegates();
			if (PendingPurchase)
			{
				PendingPurchase->TriggerDelegate();
			}
		}
	};
}

FOnlinePurchaseSteamV2::FPendingPurchase::FPendingPurchase(TSharedRef<const FUniqueNetId> InUserId,
	FPurchaseCheckoutRequest InCheckoutRequest,
	FOnPurchaseCheckoutComplete InDelegate) :
	UserId{ InUserId },
	CheckoutRequest{ InCheckoutRequest },
	Delegate{ InDelegate },
	Receipt{ MakeShared<FPurchaseReceipt>() },
	Expiration{}
{
}

EOnlineErrorResult FOnlinePurchaseSteamV2::FPendingPurchase::GetResult() const
{
	switch (Receipt->TransactionState)
	{
	case EPurchaseTransactionState::Purchased:
		return EOnlineErrorResult::Success;
	case EPurchaseTransactionState::Canceled:
		return EOnlineErrorResult::Canceled;
	default:
		return EOnlineErrorResult::RequestFailure;
	}
}

void FOnlinePurchaseSteamV2::FPendingPurchase::TriggerDelegate()
{
	Delegate.ExecuteIfBound(FOnlineError(GetResult()), Receipt);
}

FOnlinePurchaseSteamV2::FOnlinePurchaseSteamV2(FOnlineSubsystemSteamV2* InSteamSubsystem)
	: Subsystem(InSteamSubsystem)
{
	check(Subsystem);
}

FOnlinePurchaseSteamV2::~FOnlinePurchaseSteamV2()
{
}

bool FOnlinePurchaseSteamV2::IsAllowedToPurchase(const FUniqueNetId& UserId)
{
	auto identity = Subsystem->GetIdentityInterface();
	if (!identity)
	{
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("IsAllowedToPurchase failed - No Identity Interface"));
		return false;
	}

	if (identity->GetLoginStatus(UserId) != ELoginStatus::LoggedIn)
	{
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("IsAllowedToPurchase failed - user not logged in %s"), *UserId.ToDebugString());
		return false;
	}

	return true;
}

void FOnlinePurchaseSteamV2::Checkout(const FUniqueNetId& UserId, const FPurchaseCheckoutRequest& CheckoutRequest, const FOnPurchaseReceiptlessCheckoutComplete& Delegate)
{

}

void FOnlinePurchaseSteamV2::Checkout(const FUniqueNetId& UserId, const FPurchaseCheckoutRequest& CheckoutRequest, const FOnPurchaseCheckoutComplete& Delegate)
{
	if (!UserId.IsValid())
	{
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("Checkout failed - User Id is not valid"));
		Subsystem->ExecuteNextTick([Delegate]() {
			Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::InvalidParams), MakeShared<FPurchaseReceipt>());
			});
		return;
	}

	auto LocalPlayerId = Subsystem->GetIdentityInterface()->GetUniquePlayerId(0);
	if (UserId != *LocalPlayerId)
	{
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("Checkout failed - User Id is not the local user"));
		Subsystem->ExecuteNextTick([Delegate]() {
			Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::InvalidParams), MakeShared<FPurchaseReceipt>());
			});
		return;
	}

	if (UserId.GetType() != LocalPlayerId->GetType())
	{
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("Checkout failed - User Id type is not supported by Steam"));
		Subsystem->ExecuteNextTick([Delegate]() {
			Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::InvalidParams), MakeShared<FPurchaseReceipt>());
			});
		return;
	}

	if (CheckoutRequest.PurchaseOffers.Num() == 0)
	{
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("Checkout failed - No Purchases"));
		Subsystem->ExecuteNextTick([Delegate]() {
			Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::InvalidParams), MakeShared<FPurchaseReceipt>());
			});
		return;
	}

	if (CheckoutRequest.PurchaseOffers.Num() > 1)
	{
		FString Namespace = CheckoutRequest.PurchaseOffers[0].OfferNamespace;
		for (int x = 1; x < CheckoutRequest.PurchaseOffers.Num(); ++x)
		{
			if (CheckoutRequest.PurchaseOffers[x].OfferNamespace != Namespace)
			{
				UE_LOG_ONLINE_PURCHASE(Warning, TEXT("Checkout failed - All purchases must be from the same namespace"));
				Subsystem->ExecuteNextTick([Delegate]() {
					Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::InvalidParams), MakeShared<FPurchaseReceipt>());
					});
				return;
			}
		}
	}

	Subsystem->QueueAsyncTask(
		new FOnlineAsyncTaskSteamInventoryPurchase(
			Subsystem,
			MakeUnique<FOnlinePurchaseSteamV2::FPendingPurchase>(UserId.AsShared(), CheckoutRequest, Delegate)
		)
	);
}

void FOnlinePurchaseSteamV2::FinalizePurchase(const FUniqueNetId& UserId, const FString& ReceiptId)
{
}

void FOnlinePurchaseSteamV2::RedeemCode(const FUniqueNetId& UserId, const FRedeemCodeRequest& RedeemCodeRequest, const FOnPurchaseRedeemCodeComplete& Delegate)
{
	Subsystem->ExecuteNextTick([Delegate]()
		{
			Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::NotImplemented), MakeShared<FPurchaseReceipt>());
		});
}

void FOnlinePurchaseSteamV2::QueryReceipts(const FUniqueNetId& UserId, bool bRestoreReceipts, const FOnQueryReceiptsComplete& Delegate)
{
	if (!UserId.IsValid())
	{
		Delegate.ExecuteIfBound(FOnlineError(EOnlineErrorResult::InvalidUser));
	}

	auto sharedUserId = UserId.AsShared();
	ClearCachedReceipts(sharedUserId);
	Subsystem->QueueAsyncTask(new FOnlinePurchaseAsyncTaskSteamGetAllUserInventory(Subsystem, sharedUserId, Delegate));
}

void FOnlinePurchaseSteamV2::GetReceipts(const FUniqueNetId& UserId, TArray<FPurchaseReceipt>& OutReceipts) const
{
	const auto SteamUserId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(UserId.ToString());
	auto SteamUserIdRef = SteamUserId.ToSharedRef();

	const TArray<FPurchaseReceipt>* FoundReceipts = UserCachedReceipts.Find(SteamUserIdRef);
	if (FoundReceipts == nullptr)
	{
		// The user is getting receipts when we haven't queried for this user (or the query hasn't finished yet)
		UE_LOG_ONLINE_PURCHASE(Warning, TEXT("No cached receipts found for User %s"), *SteamUserIdRef->ToDebugString());
		OutReceipts.Empty();
	}
	else
	{
		OutReceipts = *FoundReceipts;
	}
}

void FOnlinePurchaseSteamV2::FinalizeReceiptValidationInfo(const FUniqueNetId& UserId, FString& InReceiptValidationInfo, const FOnFinalizeReceiptValidationInfoComplete& Delegate)
{
	Subsystem->ExecuteNextTick([InReceiptValidationInfo, Delegate]()
		{
			Delegate.ExecuteIfBound(FOnlineError(true), InReceiptValidationInfo);
		});
}

void FOnlinePurchaseSteamV2::AddPendingPurchase(TUniquePtr<FPendingPurchase> PendingPurchase)
{
	if (PendingPurchase)
	{
		PendingPurchases.Add(std::move(PendingPurchase));
	}
}

void FOnlinePurchaseSteamV2::MarkPurchasesAsSuccessful()
{
	for (auto It = PendingPurchases.CreateIterator(); It; ++It)
	{
		auto& Purch = *It;
		UE_LOG_ONLINE_PURCHASE(Log, TEXT("Transaction %s success"), *Purch->Receipt->TransactionId);
		Purch->Receipt->TransactionState = EPurchaseTransactionState::Purchased;
		Purch->TriggerDelegate();
		It.RemoveCurrent();
	}
}

void FOnlinePurchaseSteamV2::MarkPurchasesAsClosed()
{
	for (auto& Purch : PendingPurchases)
	{
		if (Purch->Receipt->TransactionState == EPurchaseTransactionState::Processing && Purch->Expiration == 0.f)
		{
			// We don't have an event for "user declined the transaction".
			// The event for "user accepted the transaction" comes in *after* the window closes, so we have to wait for a bit to see if that appears
			Purch->Receipt->TransactionState = EPurchaseTransactionState::Canceled;
			Purch->Expiration = 2.0f;
			UE_LOG_ONLINE_PURCHASE(Log, TEXT("Transaction %s UI closed, waiting %d seconds for possible success"), *Purch->Receipt->TransactionId, Purch->Expiration);
		}
	}
}

void FOnlinePurchaseSteamV2::Tick(float DeltaTime)
{
	for (auto It = PendingPurchases.CreateIterator(); It; ++It)
	{
		auto& Purch = *It;
		if (Purch->Receipt->TransactionState == EPurchaseTransactionState::Canceled)
		{
			Purch->Expiration -= DeltaTime;
			if (Purch->Expiration <= 0.f)
			{
				UE_LOG_ONLINE_PURCHASE(Log, TEXT("Transaction %s canceled"), *Purch->Receipt->TransactionId);
				Purch->TriggerDelegate();
				It.RemoveCurrent();
			}
		}
	}
}

void FOnlinePurchaseSteamV2::ClearCachedReceipts(const TSharedRef<const FUniqueNetId>& UserId)
{
	if (auto FoundUserReceipts = UserCachedReceipts.Find(UserId))
	{
		if (FoundUserReceipts->Num() == 0)
		{
			UserCachedReceipts.Remove(UserId);
		}
	}
}