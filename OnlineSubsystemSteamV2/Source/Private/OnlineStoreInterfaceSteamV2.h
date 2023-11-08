// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "OnlineAsyncTaskManagerSteamV2.h"
#include "Interfaces/OnlineStoreInterfaceV2.h"
#include "OnlineSubsystemSteamV2Package.h"

class FOnlineSubsystemSteamV2;

struct FOnlineStoreOfferSteam : public FOnlineStoreOffer
{
	FString GetItemDefinitionProperty(const FString& propertyName) const;
	SteamItemDef_t GetItemDefinitionID() const;

	TMap<FString, FString> Properties;
};

using FOnlineStoreOfferSteamRef = TSharedRef<FOnlineStoreOfferSteam>;

class FOnlineStoreSteam
	: public IOnlineStoreV2
	, public TSharedFromThis<FOnlineStoreSteam, ESPMode::ThreadSafe>
{
PACKAGE_SCOPE:
	FOnlineStoreSteam(FOnlineSubsystemSteamV2* InSubsystem);

	void UpdateInventoryDefinitions();
	void UpdateInventoryPrices();
	void OnPriceUpdate(const FString& CurrencyCode, bool bSuccess);

public:
	virtual ~FOnlineStoreSteam();

	//~ Begin IOnlineStoreV2 Interface
	virtual void QueryCategories(const FUniqueNetId& UserId, const FOnQueryOnlineStoreCategoriesComplete& Delegate = FOnQueryOnlineStoreCategoriesComplete()) override;
	virtual void GetCategories(TArray<FOnlineStoreCategory>& OutCategories) const override;
	virtual void QueryOffersByFilter(const FUniqueNetId& UserId, const FOnlineStoreFilter& Filter, const FOnQueryOnlineStoreOffersComplete& Delegate = FOnQueryOnlineStoreOffersComplete()) override;
	virtual void QueryOffersById(const FUniqueNetId& UserId, const TArray<FUniqueOfferId>& OfferIds, const FOnQueryOnlineStoreOffersComplete& Delegate = FOnQueryOnlineStoreOffersComplete()) override;
	virtual void GetOffers(TArray<FOnlineStoreOfferRef>& OutOffers) const override;
	virtual TSharedPtr<FOnlineStoreOffer> GetOffer(const FUniqueOfferId& OfferId) const override;
	//~ End IOnlineStoreV2 Interface

private:
	FOnlineSubsystemSteamV2* Subsystem;
	TArray<FOnlineStoreOfferSteamRef> ItemDefinitions;
	TArray<FOnQueryOnlineStoreOffersComplete> PendingQueryStoreOfferDelegates;
	FString LastKnownCurrencyCode;
	FDateTime LastInventoryDefinitionUpdate;

	void TriggerAllPendingQueryStoreOfferDelegates(bool success, FString error);
	void GetOfferIds(TArray<FUniqueOfferId>& OutOfferIds) const;
};

typedef TSharedPtr<FOnlineStoreSteam, ESPMode::ThreadSafe> FOnlineStoreSteamPtr;
