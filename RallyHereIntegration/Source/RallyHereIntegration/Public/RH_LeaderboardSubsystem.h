#pragma once

#include "Async/TaskGraphInterfaces.h"
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RH_Common.h"
#include "RH_Properties.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RallyHereIntegrationModule.h"
#include "RH_SubsystemPluginBase.h"
#include "Tickable.h"
#include "LeaderboardConfig.h"
#include "LeaderboardPage.h"
#include "LeaderboardAPI.h"
#include "LeaderboardMetaData.h"

#include "RH_LeaderboardSubsystem.generated.h"


struct FRHAPI_LeaderboardConfig;
struct FRHAPI_LeaderboardPage;
struct FRHAPI_LeaderboardMetaData;
/** @defgroup LeaderboardSubsystem RallyHere Leaderboard Subsystem/
 * @{
 */

typedef TMap<FString, FRHAPI_LeaderboardConfig> ConfigMap;

/**
 * @brief Struct to hold cached information about a leaderboard
*/
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_LeaderboardCache
{
	GENERATED_BODY()

	/** @brief Metadata about this leaderboard */
	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	FRHAPI_LeaderboardMetaData MetaData;

	/** @brief List of leaderboard pages */
	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TArray<FRHAPI_LeaderboardPage> LeaderboardPages;

};

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_LeaderboardConfigCallDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FRHAPI_LeaderboardConfigList&, ConfigList);
DECLARE_DELEGATE_ThreeParams(FRH_LeaderboardConfigCallDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardConfigList&);
DECLARE_RH_DELEGATE_BLOCK(FRH_LeaderboardConfigCallBlock, FRH_LeaderboardConfigCallDelegate, FRH_LeaderboardConfigCallDynamicDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardConfigList&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_LeaderboardPageDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FRHAPI_LeaderboardPage&, LeaderboardPage);
DECLARE_DELEGATE_ThreeParams(FRH_LeaderboardPageDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardPage&);
DECLARE_RH_DELEGATE_BLOCK(FRH_LeaderboardPageBlock, FRH_LeaderboardPageDelegate, FRH_LeaderboardPageDynamicDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardPage&);

/**
 * @brief Class used to view Leaderboard data and config
*/
UCLASS(Config = RallyHereIntegration, BlueprintType)
class RALLYHEREINTEGRATION_API URH_LeaderboardSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()

public:
	/** @brief Type Define for API Calls. */
	typedef RallyHereAPI::Traits_GetAllLeaderboardConfig TGetAllLeaderboardConfig;
	typedef RallyHereAPI::Traits_GetFriendLeaderboard TGetFriendLeaderboard;
	typedef RallyHereAPI::Traits_GetLeaderboard TGetLeaderboard;
	typedef RallyHereAPI::Traits_GetLeaderboardConfig TGetLeaderboardConfig;
	typedef RallyHereAPI::Traits_GetLeaderboardMetaData TGetLeaderboardMetaData;
	typedef RallyHereAPI::Traits_GetLeaderboardPositionEntry TGetLeaderboardPositionEntry;

	/**
	 * @brief Initialize the subsystem.
	 */
	virtual void Initialize() override;
	/**
	 * @brief Safely tears down the subsystem.
	 */
	virtual void Deinitialize() override;

	/**
	 * @brief Get all leaderboards' configs that have been requested 
	 */
	const ConfigMap& GetCachedLeaderboardConfigs() const { return LeaderboardConfigs; }

	/**
	 * @brief Get a single leaderboard's config
	 */
	const FRHAPI_LeaderboardConfig* GetCachedLeaderboardConfig(const FString& LeaderboardID) const { return LeaderboardConfigs.Find(LeaderboardID); }

	/** @brief Get latest successfully requested leaderboard page */
	const FRHAPI_LeaderboardPage* GetCachedLeaderboardPage(const FString& LeaderboardID) const { return CachedPages.Find(LeaderboardID); }

	/**
	 * @brief Request All Leaderboard Config.
	*/
	virtual void GetAllConfigAsync(const FRH_LeaderboardConfigCallBlock& Delegate = FRH_LeaderboardConfigCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get All Leaderboard Config (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetAllConfig(const FRH_LeaderboardConfigCallDynamicDelegate& Delegate) { return GetAllConfigAsync(Delegate); }

	/**
	 * @brief Request a page specific leaderboard
	*/
	virtual void GetLeaderboardPageAsync(const FString& LeaderboardID, const FString& Cursor, int32 PageSize = 50, const FRH_LeaderboardPageBlock& Delegate = FRH_LeaderboardPageBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get Specific Leaderboard (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLeaderboardPage(const FString& LeaderboardID, const FString& Cursor, const FRH_LeaderboardPageDynamicDelegate& Delegate, int32 PageSize = 50) { return GetLeaderboardPageAsync(LeaderboardID, Cursor, PageSize, Delegate); }

	/**
	 * @brief Request a full leaderboard
	*/
	virtual void GetFullLeaderboardAsync(const FString& LeaderboardID, const FString& Cursor = "0", const FRH_LeaderboardPageBlock& Delegate = FRH_LeaderboardPageBlock(), int32 PageSize = 50);
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get Specific Leaderboard (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetFullLeaderboard(const FString& LeaderboardID, const FRH_LeaderboardPageDynamicDelegate& Delegate, const FString& Cursor = "0", int32 PageSize = 50) { return GetFullLeaderboardAsync(LeaderboardID, Cursor, Delegate, PageSize); }

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TMap<FString, FRHAPI_LeaderboardConfig> LeaderboardConfigs;

	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TMap<FString, FRH_LeaderboardCache> Leaderboards;

	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TMap<FString, FRHAPI_LeaderboardPage> CachedPages;

	/** @brief Initializes the subsystem with defaults for its cached data. */
	void InitPropertiesWithDefaultValues();

	/** @brief Default behavior for handling a page response */
	void HandleNewPage(const FRHAPI_LeaderboardPage& Page);
};
