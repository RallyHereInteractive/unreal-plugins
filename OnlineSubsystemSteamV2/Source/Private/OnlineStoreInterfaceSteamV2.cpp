#include "OnlineStoreInterfaceSteamV2.h"
#include "OnlineSubsystemSteamV2.h"
#include "OnlineError.h"
#include "OnlineAsyncTaskManagerSteamV2.h"
#include "OnlinePurchaseInterfaceSteamV2.h"

namespace
{
	FString SteamGetItemDefinitionProperty(SteamItemDef_t itemDefId, const char* propertyName)
	{
		uint32 bufferLength = 0;
		if (!SteamInventory()->GetItemDefinitionProperty(itemDefId, propertyName, nullptr, &bufferLength) || bufferLength == 0)
		{
			return FString();
		}

		TArray<char> buffer;
		buffer.SetNumUninitialized(bufferLength);
		if (!SteamInventory()->GetItemDefinitionProperty(itemDefId, propertyName, buffer.GetData(), &bufferLength))
		{
			return FString();
		}

		buffer.Add(0);
		return FString(UTF8_TO_TCHAR(buffer.GetData()));
	}


	/**
	 *	Async task to load inventory item prices in the local user's currency.
	 */
	class FOnlineAsyncTaskSteamRequestPrices : public FOnlineAsyncTaskSteam
	{
	public:

	private:

		/** Has this task been initialized yet */
		bool bInit;
		/** Returned results from Steam */
		SteamInventoryRequestPricesResult_t CallbackResults;

		/** Hidden on purpose */
		FOnlineAsyncTaskSteamRequestPrices() :
			FOnlineAsyncTaskSteam(NULL, k_uAPICallInvalid),
			bInit{},
			CallbackResults{}
		{
		}

	public:
		FOnlineAsyncTaskSteamRequestPrices(FOnlineSubsystemSteamV2* InSteamSubsystem) :
			FOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
			bInit{},
			CallbackResults{}
		{
		}

		/**
		 *	Get a human readable description of task
		 */
		FString ToString() const override
		{
			return FString::Printf(TEXT("FOnlineAsyncTaskSteamRequestPrices bWasSuccessful: %d"), WasSuccessful());
		}

		/**
		 * Give the async task time to do its work
		 * Can only be called on the async task manager thread
		 */
		virtual void Tick() override
		{
			if (!bInit)
			{
				// Triggers a Steam event async to let us know when the prices are available
				CallbackHandle = SteamInventory()->RequestPrices();
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

			auto Interface = StaticCastSharedPtr<FOnlineStoreSteam>(Subsystem->GetStoreV2Interface());
			Interface->OnPriceUpdate(bWasSuccessful ? FString{ UTF8_TO_TCHAR(CallbackResults.m_rgchCurrency) } : FString{}, bWasSuccessful);
		}
	};
}

FString FOnlineStoreOfferSteam::GetItemDefinitionProperty(const FString& propertyName) const
{
	return SteamGetItemDefinitionProperty(GetItemDefinitionID(), TCHAR_TO_UTF8(*propertyName));
}

SteamItemDef_t FOnlineStoreOfferSteam::GetItemDefinitionID() const
{
	return ToSteamItemDefId(OfferId);
}

FOnlineStoreSteam::FOnlineStoreSteam(FOnlineSubsystemSteamV2* InSubsystem) :
	Subsystem{ InSubsystem },
	LastInventoryDefinitionUpdate{ 0 }
{
	check(Subsystem);
}

FOnlineStoreSteam::~FOnlineStoreSteam()
{
}

void FOnlineStoreSteam::QueryCategories(const FUniqueNetId& UserId, const FOnQueryOnlineStoreCategoriesComplete& Delegate /*= FOnQueryOnlineStoreCategoriesComplete()*/)
{
	Subsystem->ExecuteNextTick([Delegate]()
		{
			Delegate.ExecuteIfBound(false, TEXT("FOnlineStoreSteam::QueryCategories Not Implemented"));
		});
}

void FOnlineStoreSteam::GetCategories(TArray<FOnlineStoreCategory>& OutCategories) const
{
	OutCategories.Empty();
}

void FOnlineStoreSteam::QueryOffersByFilter(const FUniqueNetId& UserId, const FOnlineStoreFilter& Filter, const FOnQueryOnlineStoreOffersComplete& Delegate /*= FOnQueryOnlineStoreOffersComplete()*/)
{
	Subsystem->ExecuteNextTick([Delegate]()
		{
			Delegate.ExecuteIfBound(false, TArray<FUniqueOfferId>(), FString(TEXT("QueryOffersByFilter not implemented")));
		});
}

void FOnlineStoreSteam::QueryOffersById(const FUniqueNetId& UserId, const TArray<FUniqueOfferId>& OfferIds, const FOnQueryOnlineStoreOffersComplete& Delegate /*= FOnQueryOnlineStoreOffersComplete()*/)
{
	// Steam doesn't have a per-id query, so this is where we do the "global" query of offers for a player
	if (!SteamInventory())
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("QueryOffersById - SteamInventory not available"));
		Delegate.ExecuteIfBound(false, TArray<FUniqueOfferId>(), TEXT("SteamInventory not available"));
		return;
	}

	const double MIN_TIME_BETWEEN_LOADING_STEAM_ITEM_DEFINITIONS = 300;
	if (FDateTime::UtcNow() - LastInventoryDefinitionUpdate <= FTimespan::FromSeconds(MIN_TIME_BETWEEN_LOADING_STEAM_ITEM_DEFINITIONS))
	{
		UE_LOG_ONLINE_STOREV2(Log, TEXT("QueryOffersById - skipping LoadItemDefinitions because we recently loaded item definitions. CurrencyCode:%s"), *LastKnownCurrencyCode);
		if (LastKnownCurrencyCode.IsEmpty())
		{
			PendingQueryStoreOfferDelegates.Add(Delegate);
		}
		else
		{
			TArray<FUniqueOfferId> CachedOfferIds;
			GetOfferIds(CachedOfferIds);
			Delegate.ExecuteIfBound(true, CachedOfferIds, FString());
		}

		return;
	}

	const int32 DelegateIndex = PendingQueryStoreOfferDelegates.Add(Delegate);

	UE_LOG_ONLINE_STOREV2(Log, TEXT("QueryOffersById - calling LoadItemDefinitions"));
	if (!SteamInventory()->LoadItemDefinitions())
	{
		PendingQueryStoreOfferDelegates.RemoveAt(DelegateIndex);

		UE_LOG_ONLINE_STOREV2(Error, TEXT("QueryOffersById - Failed to request LoadItemDefinitions - this should never happen"));
		Delegate.ExecuteIfBound(false, TArray<FUniqueOfferId>(), TEXT("Failed to request LoadItemDefinitions - this should never happen"));
		return;
	}
}

void FOnlineStoreSteam::UpdateInventoryDefinitions()
{
	if (!SteamInventory())
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("UpdateInventoryDefinitions - SteamInventory not available"));
		TriggerAllPendingQueryStoreOfferDelegates(false, TEXT("SteamInventory not available"));
		return;
	}

	uint32 itemDefCount = 0;
	if (!SteamInventory()->GetItemDefinitionIDs(nullptr, &itemDefCount))
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("UpdateInventoryDefinitions - failed to get item definition count"));
		TriggerAllPendingQueryStoreOfferDelegates(false, TEXT("failed to get item definition count"));
		return;
	}

	TArray<SteamItemDef_t> itemDefIds;
	itemDefIds.SetNumUninitialized(itemDefCount);
	if (!SteamInventory()->GetItemDefinitionIDs(itemDefIds.GetData(), &itemDefCount))
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("UpdateInventoryDefinitions - failed to get item definitions"));
		TriggerAllPendingQueryStoreOfferDelegates(false, TEXT("failed to get item definitions"));
		return;
	}

	if (static_cast<uint32>(itemDefIds.Num()) < itemDefCount)
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("UpdateInventoryDefinitions - Some item def ids were missed"));
	}
	else if (static_cast<uint32>(itemDefIds.Num()) > itemDefCount)
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("UpdateInventoryDefinitions - Too many item def ids found"));
		itemDefIds.RemoveAt(itemDefCount, itemDefIds.Num() - itemDefCount);
	}

	TArray<FOnlineStoreOfferSteamRef> newItemDefs;
	for (const auto& itemDefId : itemDefIds)
	{
		auto offerRef = MakeShared<FOnlineStoreOfferSteam>();
		offerRef->OfferId = FromSteamItemDefId(itemDefId);
		UE_LOG_ONLINE_STOREV2(Verbose, TEXT("UpdateInventoryDefinitions - %s"), *offerRef->OfferId);

		{
			TArray<FString> propNames;
			SteamGetItemDefinitionProperty(itemDefId, nullptr).ParseIntoArray(propNames, TEXT(","));
			for (const auto& propName : propNames)
			{
				auto propValue = SteamGetItemDefinitionProperty(itemDefId, TCHAR_TO_UTF8(*propName));
				UE_LOG_ONLINE_STOREV2(Verbose, TEXT("\t%s = %s"), *propName, *propValue);
				offerRef->Properties.Add(propName, propValue);
			}
		}

		if (const auto name = offerRef->Properties.Find(TEXT("name")))
		{
			offerRef->Title = FText::FromString(*name);
		}

		if (const auto description = offerRef->Properties.Find(TEXT("description")))
		{
			offerRef->Description = FText::FromString(*description);
			offerRef->LongDescription = offerRef->Description;
		}

		newItemDefs.Add(std::move(offerRef));
	}

	ItemDefinitions = std::move(newItemDefs);
	UpdateInventoryPrices();
	UE_LOG_ONLINE_STOREV2(Log, TEXT("UpdateInventoryDefinitions from SteamInventoryDefinitionUpdate_t"));
	Subsystem->QueueAsyncTask(new FOnlineAsyncTaskSteamRequestPrices(Subsystem));

	LastInventoryDefinitionUpdate = FDateTime::UtcNow();
}

void FOnlineStoreSteam::UpdateInventoryPrices()
{
	if (LastKnownCurrencyCode.IsEmpty())
	{
		UE_LOG_ONLINE_STOREV2(Warning, TEXT("UpdateInventoryPrices - no known currency code"));
		return;
	}

	if (!SteamInventory())
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("UpdateInventoryPrices - SteamInventory not available"));
		return;
	}

	// Used for currencies that come down in cents that need to be in dollar formats for formatting.
	bool bRequiresPriceInDollars = false;

	// The Japanese Prices from steam come down as SEN, but the FText Currency Code Formatting expects YEN.
	if (LastKnownCurrencyCode == "JPY")
	{
		bRequiresPriceInDollars = true;
	}

	for (auto& Offer : ItemDefinitions)
	{
		uint64 currentPrice, basePrice;
		if (SteamInventory()->GetItemPrice(Offer->GetItemDefinitionID(), &currentPrice, &basePrice))
		{
			Offer->NumericPrice = bRequiresPriceInDollars ? currentPrice / 100 : currentPrice;
			Offer->RegularPrice = bRequiresPriceInDollars ? basePrice / 100 : basePrice;
			Offer->CurrencyCode = LastKnownCurrencyCode;
			Offer->DiscountType = currentPrice == basePrice ? EOnlineStoreOfferDiscountType::NotOnSale : EOnlineStoreOfferDiscountType::PayAmount;
		}
		else
		{
			Offer->NumericPrice = -1;
			Offer->RegularPrice = -1;
			Offer->CurrencyCode = {};
			Offer->DiscountType = EOnlineStoreOfferDiscountType::NotOnSale;
		}
		UE_LOG_ONLINE_STOREV2(Verbose, TEXT("UpdateInventoryPrices - %s - Current=%d Base=%d - DisplayCurrent=%s DisplayBase=%s"), *Offer->OfferId, Offer->NumericPrice, Offer->RegularPrice, *Offer->GetDisplayPrice().ToString(), *Offer->GetDisplayRegularPrice().ToString());
	}
}

void FOnlineStoreSteam::OnPriceUpdate(const FString& CurrencyCode, bool bSuccess)
{
	if (bSuccess)
	{
		LastKnownCurrencyCode = CurrencyCode;
		UE_LOG_ONLINE_STOREV2(Log, TEXT("OnPriceUpdate - Currency Code is now %s"), *LastKnownCurrencyCode);

		UpdateInventoryPrices();
	}
	else
	{
		UE_LOG_ONLINE_STOREV2(Error, TEXT("OnPriceUpdate failed to get prices for local currency"));
	}
	TriggerAllPendingQueryStoreOfferDelegates(true, FString());
}

void FOnlineStoreSteam::TriggerAllPendingQueryStoreOfferDelegates(bool success, FString error)
{
	TArray<FUniqueOfferId> OfferIds;
	if (success)
	{
		GetOfferIds(OfferIds);
	}

	for (const auto& del : PendingQueryStoreOfferDelegates)
	{
		del.ExecuteIfBound(success, OfferIds, error);
	}
	PendingQueryStoreOfferDelegates.Empty();
}

void FOnlineStoreSteam::GetOfferIds(TArray<FUniqueOfferId>& OutOfferIds) const
{
	for (const auto& offer : ItemDefinitions)
	{
		OutOfferIds.Add(offer->OfferId);
	}
}

void FOnlineStoreSteam::GetOffers(TArray<FOnlineStoreOfferRef>& OutOffers) const
{
	for (const auto& offer : ItemDefinitions)
	{
		OutOffers.Add(offer);
	}
}

TSharedPtr<FOnlineStoreOffer> FOnlineStoreSteam::GetOffer(const FUniqueOfferId& OfferId) const
{
	for (const auto& offer : ItemDefinitions)
	{
		if (offer->OfferId == OfferId)
		{
			return offer;
		}
	}
	return nullptr;
}
