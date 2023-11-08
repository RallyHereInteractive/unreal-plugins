// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "OnlineSubsystemSteamV2Private.h"
#include "Interfaces/OnlineStoreInterfaceV2.h"
#include "Interfaces/OnlineEntitlementsInterface.h"
#include "OnlineSubsystemSteamV2Package.h"

class FOnlineSubsystemSteamV2;

FString FromSteamItemDefId(SteamItemDef_t itemDefId);
SteamItemDef_t ToSteamItemDefId(const FString& offerId);
FString FromSteamItemInstanceId(SteamItemInstanceID_t itemInstanceId);
SteamItemInstanceID_t ToSteamItemInstanceId(const FString& entitlementId);

struct FOnlineEntitlementSteam : public FOnlineEntitlement
{
	uint16 SteamItemFlags;

	SteamItemDef_t GetItemDefinitionID() const;
	SteamItemInstanceID_t GetItemInstanceID() const;
	bool IsNoTrade() const;
	bool IsRemoved() const;
	bool IsConsumed() const;
};

class FOnlineEntitlementsSteam
	: public IOnlineEntitlements
	, public TSharedFromThis<FOnlineEntitlementsSteam, ESPMode::ThreadSafe>
{
PACKAGE_SCOPE:
	using EntitlementRefArray = TArray<TSharedRef<FOnlineEntitlementSteam>>;
	using NamespacedEntitlementsMap = TMap<FString, EntitlementRefArray>;
	using UserEntitlementsMap = TMap<TSharedRef<const FUniqueNetId>, NamespacedEntitlementsMap>;

	FOnlineEntitlementsSteam(FOnlineSubsystemSteamV2* InSubsystem);

	void OnUserEntitlementUpdate(bool bSuccess, TSharedRef<const FUniqueNetId> UserId, const FString& Namespace, TArray<TSharedRef<FOnlineEntitlementSteam>> NewEnts);
	void ClearCachedEntitlements(const TSharedRef<const FUniqueNetId>& UserId, const FString& Namespace);

public:
	virtual ~FOnlineEntitlementsSteam();

	//~ Begin IOnlineEntitlements Interface
	virtual TSharedPtr<FOnlineEntitlement> GetEntitlement(const FUniqueNetId& UserId, const FUniqueEntitlementId& EntitlementId) override;
	virtual TSharedPtr<FOnlineEntitlement> GetItemEntitlement(const FUniqueNetId& UserId, const FString& ItemId) override;
	virtual void GetAllEntitlements(const FUniqueNetId& UserId, const FString& Namespace, TArray<TSharedRef<FOnlineEntitlement>>& OutUserEntitlements) override;
	virtual bool QueryEntitlements(const FUniqueNetId& UserId, const FString& Namespace, const FPagedQuery& Page = FPagedQuery()) override;
	//~ End IOnlineEntitlements Interface

private:
	FOnlineSubsystemSteamV2* Subsystem;
	UserEntitlementsMap CachedEntitlements;
};

typedef TSharedPtr<FOnlineEntitlementsSteam, ESPMode::ThreadSafe> FOnlineEntitlementsSteamPtr;
