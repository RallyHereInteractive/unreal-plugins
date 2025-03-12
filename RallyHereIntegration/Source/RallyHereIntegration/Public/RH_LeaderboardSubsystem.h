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
#include "LeaderboardAPI.h"

#include "RH_LeaderboardSubsystem.generated.h"


/** @defgroup LeaderboardSubsystem RallyHere Leaderboard Subsystem/
 * @{
 */

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_LeaderboardConfigCallDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FRHAPI_LeaderboardConfigList&, ConfigList);
DECLARE_DELEGATE_ThreeParams(FRH_LeaderboardConfigCallDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardConfigList&);
DECLARE_RH_DELEGATE_BLOCK(FRH_LeaderboardConfigCallBlock, FRH_LeaderboardConfigCallDelegate, FRH_LeaderboardConfigCallDynamicDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardConfigList&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_LeaderboardPageDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FRHAPI_LeaderboardPage&, LeaderboardPage);
DECLARE_DELEGATE_ThreeParams(FRH_LeaderboardPageDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardPage&);
DECLARE_RH_DELEGATE_BLOCK(FRH_LeaderboardPageBlock, FRH_LeaderboardPageDelegate, FRH_LeaderboardPageDynamicDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardPage&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_LeaderboardPositionDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FRHAPI_LeaderboardEntry&, LeaderboardEntry);
DECLARE_DELEGATE_ThreeParams(FRH_LeaderboardPositionDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardEntry&);
DECLARE_RH_DELEGATE_BLOCK(FRH_LeaderboardPositionBlock, FRH_LeaderboardPositionDelegate, FRH_LeaderboardPositionDynamicDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardEntry&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_LeaderboardMetaDataDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FRHAPI_LeaderboardMetaData&, LeaderboardMetaData);
DECLARE_DELEGATE_ThreeParams(FRH_LeaderboardMetaDataDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardMetaData&);
DECLARE_RH_DELEGATE_BLOCK(FRH_LeaderboardMetaDataBlock, FRH_LeaderboardMetaDataDelegate, FRH_LeaderboardMetaDataDynamicDelegate, bool, const FRH_ErrorInfo&, FRHAPI_LeaderboardMetaData&);

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

	typedef TMap<FString, FRHAPI_LeaderboardConfig> ConfigMap;

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
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem")
	bool GetCachedLeaderboardConfigs(TMap<FString, FRHAPI_LeaderboardConfig>& OutConfigMap) const;

	/**
	 * @brief Get a single leaderboard's config
	 */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem")
	bool GetCachedLeaderboardConfig(const FString& LeaderboardID, FRHAPI_LeaderboardConfig& CachedConfig) const;

	/** @brief Get latest successfully requested leaderboard page */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem")
	bool GetCachedLeaderboardPage(const FString& LeaderboardID, FRHAPI_LeaderboardPage& CachedPage) const;

	/**
	 * @brief Get a single leaderboard's meta data
	 */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem")
	bool GetCachedLeaderboardMetaData(const FString& LeaderboardID, FRHAPI_LeaderboardMetaData& OutMetaData) const;

	/** @brief Get latest successfully requested position */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem")
	bool GetCachedLeaderboardPosition(FRHAPI_LeaderboardEntry& OutEntry) const;

	/**
	 * @brief Request All Leaderboard Config.
	*/
	virtual void GetAllConfigAsync(const FRH_LeaderboardConfigCallBlock& Delegate = FRH_LeaderboardConfigCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get All Leaderboard Config (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetAllConfigAsync(const FRH_LeaderboardConfigCallDynamicDelegate& Delegate) { return GetAllConfigAsync(Delegate); }

	/**
	 * @brief Request a page specific leaderboard
	*/
	virtual void GetLeaderboardPageAsync(const FString& LeaderboardID, const FString& Cursor, int32 PageSize = 50, const FRH_LeaderboardPageBlock& Delegate = FRH_LeaderboardPageBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get Specific Leaderboard (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLeaderboardPageAsync(const FString& LeaderboardID, const FString& Cursor, const FRH_LeaderboardPageDynamicDelegate& Delegate, int32 PageSize = 50) { return GetLeaderboardPageAsync(LeaderboardID, Cursor, PageSize, Delegate); }

	/**
	 * @brief Request a specific position in the leaderboard. Useful for determining thresholds
	*/
	virtual void GetLeaderboardPositionAsync(const FString& LeaderboardID, int32 position, const FRH_LeaderboardPositionBlock& Delegate = FRH_LeaderboardPositionBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get Specific Leaderboard (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLeaderboardPositionAsync(const FString& LeaderboardID, int32 position, const FRH_LeaderboardPositionDynamicDelegate& Delegate) { return GetLeaderboardPositionAsync(LeaderboardID, position, Delegate); }

	/**
	 * @brief Request metadata about a specific leaderboard
	*/
	virtual void GetLeaderboardMetaDataAsync(const FString& LeaderboardID, const FRH_LeaderboardMetaDataBlock& Delegate = FRH_LeaderboardMetaDataBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Leaderboard Subsystem", meta = (DisplayName = "Get Specific Leaderboard (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetLeaderboardMetaDataAsync(const FString& LeaderboardID, const FRH_LeaderboardMetaDataDynamicDelegate& Delegate) { return GetLeaderboardMetaDataAsync(LeaderboardID, Delegate); }

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TMap<FString, FRHAPI_LeaderboardConfig> LeaderboardConfigs;

	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TMap<FString, FRHAPI_LeaderboardPage> CachedPages;

	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	TMap<FString, FRHAPI_LeaderboardMetaData> CachedMetaData;

	UPROPERTY(BlueprintReadOnly, Category = "Leaderboard Subsystem")
	FRHAPI_LeaderboardEntry CachedPositionEntry;

	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();
};
