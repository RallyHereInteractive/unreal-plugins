#pragma once
#include <map>

#include "EntitlementsAPI.h"
#include "InventoryAPI.h"
#include "OnlineError.h"
#include "OnlineSubsystem.h"
#include "RH_Common.h"
#include "Interfaces/OnlinePurchaseInterface.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"
#include "RH_EntitlementSubsystem.generated.h"

UENUM(BlueprintType)
enum class EntitlementStatus : uint8
{
	UNSUBMITTED UMETA(DisplayName = "Unsubmitted"),
	SUBMITTED UMETA(DisplayName = "Submitted"),
	POLLING UMETA(DisplayName = "Polling"),
	COMPLETED UMETA(DisplayName = "Completed")
};

// class Entitlement
// {
// 	FString TransactionId;
// 	FString UniqueId;
// 	FString SKU;
// 	EntitlementStatus status;
//  Timestamp CompletedTime;
// };

struct EntitlementStatusMapStruct
{
	TMap<FUniqueEntitlementId,EntitlementStatus> EntitlementStatusMap;
};
DECLARE_MULTICAST_DELEGATE_OneParam(CachedEntitlementsUpdatedDelegate, const TArray<FPurchaseReceipt>&);
DECLARE_MULTICAST_DELEGATE_OneParam(EntitlementStatusMapUpdatedDelegate, EntitlementStatusMapStruct);

UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_EntitlementSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()
public:
	virtual void Initialize();
	virtual void Deinitialize();

	// Call out to the OSS to retrieve entitlements. Should be called at login, after a purchase, or after a suspended state
	UFUNCTION(BlueprintCallable, Category = "Entitlements", meta = (DisplayName = "Query the OSS for Entitlements"))
	void QueryEntitlements();

	// Submit entitlements to the API
	// UFUNCTION(BlueprintCallable, Category = "Entitlements", meta = (DisplayName = "Submit Entitlements to the API"))
	void SubmitEntitlementsToInventory(IOnlineSubsystem* OSS);

	// Get current entitlements returned by the OSS, consumables will only be present here until they are redeemed by the API
	TArray<FPurchaseReceipt> GetEntitlements();

	// Delegate that is fired when the list of entitlements are updated
	CachedEntitlementsUpdatedDelegate CachedEntitlementsUpdatedDelegate;

	// Delegate that is fired when the map of entitlements and their statuses are updated
	EntitlementStatusMapUpdatedDelegate EntitlementStatusMapUpdatedDelegate;
private:
	TMap<FUniqueEntitlementId,EntitlementStatus> EntitlementStatusMap = TMap<FUniqueEntitlementId, EntitlementStatus>();
	TArray<FPurchaseReceipt> CachedEntitlements = TArray<FPurchaseReceipt>();
	FUniqueNetIdWrapper PlatformUserId;
	
	IOnlineSubsystem* GetOSS() const;
	IOnlinePurchasePtr GetPurchaseSubsystem() const;
	TMap<FUniqueEntitlementId, EntitlementStatus> GetEntitlementStatusMap();
	void PollEntitlements(const FRH_PollCompleteFunc& Delegate);
	void ClearEntitlementsReceipts();
	void UpdateEntitlementStatusMap();
	void QueryEntitlementsComplete(const FOnlineError& Result, IOnlineSubsystem* OSS, FString AuthToken);
	void OnProcessPlatformEntitlementsResponse(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid& Resp);
	void StartEntitlementCheckPoll();
	void StopEntitlementCheckPoll();

	FRH_AutoPollerPtr EntitlementsPoller;
};