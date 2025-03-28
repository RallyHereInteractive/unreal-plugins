// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "LeaderboardSortOrder.h"
#include "LeaderboardSource.h"
#include "PlayerListType.h"
#include "LeaderboardConfig.generated.h"

/** @defgroup RHAPI_LeaderboardConfig RallyHere API Model LeaderboardConfig
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_LeaderboardConfig : public FRHAPI_Model
{
	GENERATED_BODY()

	/**
	* @brief Fills this object with data from the passed in JSON
	*
	* @param [in] JsonValue Data from the API call.
	*
	* @return true if parsing of the JSON data was successful.
	*/
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

	/**
	* @brief Writes the data from this object into the specified JSON Writer stream
	*
	* @param [in] Writer JSON Writer stream to push .
	*/
	virtual void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

	/** @brief Unique ID for this leaderboard */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString LeaderboardId{  };
	/** @brief Gets the value of LeaderboardId */
	FString& GetLeaderboardId() { return LeaderboardId; }
	/** @brief Gets the value of LeaderboardId */
	const FString& GetLeaderboardId() const { return LeaderboardId; }
	/** @brief Sets the value of LeaderboardId */
	void SetLeaderboardId(const FString& NewValue) { LeaderboardId = NewValue;   }
	/** @brief Sets the value of LeaderboardId using move semantics */
	void SetLeaderboardId(FString&& NewValue) { LeaderboardId = NewValue;   }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_PlayerListType PlayerList{  };
	/** @brief Gets the value of PlayerList */
	ERHAPI_PlayerListType& GetPlayerList() { return PlayerList; }
	/** @brief Gets the value of PlayerList */
	const ERHAPI_PlayerListType& GetPlayerList() const { return PlayerList; }
	/** @brief Sets the value of PlayerList */
	void SetPlayerList(const ERHAPI_PlayerListType& NewValue) { PlayerList = NewValue;   }
	/** @brief Sets the value of PlayerList using move semantics */
	void SetPlayerList(ERHAPI_PlayerListType&& NewValue) { PlayerList = NewValue;   }

	/** @brief The maximum size this leaderboard can reach */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 MaxSize{ 0 };
	/** @brief Gets the value of MaxSize */
	int32& GetMaxSize() { return MaxSize; }
	/** @brief Gets the value of MaxSize */
	const int32& GetMaxSize() const { return MaxSize; }
	/** @brief Sets the value of MaxSize */
	void SetMaxSize(const int32& NewValue) { MaxSize = NewValue;   }
	/** @brief Sets the value of MaxSize using move semantics */
	void SetMaxSize(int32&& NewValue) { MaxSize = NewValue;   }
	/** @brief Returns true if MaxSize matches the default value */
	bool IsMaxSizeDefaultValue() const { return MaxSize == 0; }
	/** @brief Sets the value of MaxSize to its default  */
	void SetMaxSizeToDefault() { SetMaxSize(0); }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_LeaderboardSortOrder SortOrder{  };
	/** @brief Gets the value of SortOrder */
	ERHAPI_LeaderboardSortOrder& GetSortOrder() { return SortOrder; }
	/** @brief Gets the value of SortOrder */
	const ERHAPI_LeaderboardSortOrder& GetSortOrder() const { return SortOrder; }
	/** @brief Sets the value of SortOrder */
	void SetSortOrder(const ERHAPI_LeaderboardSortOrder& NewValue) { SortOrder = NewValue;   }
	/** @brief Sets the value of SortOrder using move semantics */
	void SetSortOrder(ERHAPI_LeaderboardSortOrder&& NewValue) { SortOrder = NewValue;   }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_LeaderboardSource Source{  };
	/** @brief Gets the value of Source */
	ERHAPI_LeaderboardSource& GetSource() { return Source; }
	/** @brief Gets the value of Source */
	const ERHAPI_LeaderboardSource& GetSource() const { return Source; }
	/** @brief Sets the value of Source */
	void SetSource(const ERHAPI_LeaderboardSource& NewValue) { Source = NewValue;   }
	/** @brief Sets the value of Source using move semantics */
	void SetSource(ERHAPI_LeaderboardSource&& NewValue) { Source = NewValue;   }

	/** @brief Unique Item or Rank ID for the data source of this leaderboard */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString SourceId{  };
	/** @brief Gets the value of SourceId */
	FString& GetSourceId() { return SourceId; }
	/** @brief Gets the value of SourceId */
	const FString& GetSourceId() const { return SourceId; }
	/** @brief Sets the value of SourceId */
	void SetSourceId(const FString& NewValue) { SourceId = NewValue;   }
	/** @brief Sets the value of SourceId using move semantics */
	void SetSourceId(FString&& NewValue) { SourceId = NewValue;   }

	/** @brief Whether or not restricted accounts (eg banned) should be removed from this leaderboard */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool RemoveRestricted_Optional{ true };
	/** @brief true if RemoveRestricted_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool RemoveRestricted_IsSet{ false };
	/** @brief Gets the value of RemoveRestricted_Optional, regardless of it having been set */
	bool& GetRemoveRestricted() { return RemoveRestricted_Optional; }
	/** @brief Gets the value of RemoveRestricted_Optional, regardless of it having been set */
	const bool& GetRemoveRestricted() const { return RemoveRestricted_Optional; }
	/** @brief Gets the value of RemoveRestricted_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetRemoveRestricted(const bool& DefaultValue) const { if (RemoveRestricted_IsSet) return RemoveRestricted_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of RemoveRestricted_Optional and returns true if it has been set, otherwise returns false */
	bool GetRemoveRestricted(bool& OutValue) const { if (RemoveRestricted_IsSet) OutValue = RemoveRestricted_Optional; return RemoveRestricted_IsSet; }
	/** @brief Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr */
	bool* GetRemoveRestrictedOrNull() { if (RemoveRestricted_IsSet) return (&RemoveRestricted_Optional); return nullptr; }
	/** @brief Returns a pointer to RemoveRestricted_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetRemoveRestrictedOrNull() const { if (RemoveRestricted_IsSet) return (&RemoveRestricted_Optional); return nullptr; }
	/** @brief Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true */
	void SetRemoveRestricted(const bool& NewValue) { RemoveRestricted_Optional = NewValue; RemoveRestricted_IsSet = true;  }
	/** @brief Sets the value of RemoveRestricted_Optional and also sets RemoveRestricted_IsSet to true using move semantics */
	void SetRemoveRestricted(bool&& NewValue) { RemoveRestricted_Optional = NewValue; RemoveRestricted_IsSet = true;  }
	/** @brief Clears the value of RemoveRestricted_Optional and sets RemoveRestricted_IsSet to false */
	void ClearRemoveRestricted() { RemoveRestricted_Optional = true; RemoveRestricted_IsSet = false;  }
	/** @brief Checks whether RemoveRestricted_Optional has been set */
	bool IsRemoveRestrictedSet() const { return RemoveRestricted_IsSet; }
	/** @brief Returns true if RemoveRestricted_Optional is set and matches the default value */
	bool IsRemoveRestrictedDefaultValue() const { return RemoveRestricted_IsSet && RemoveRestricted_Optional == true; }
	/** @brief Sets the value of RemoveRestricted_Optional to its default and also sets RemoveRestricted_IsSet to true */
	void SetRemoveRestrictedToDefault() { SetRemoveRestricted(true); }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 RequiredRecentLoginDays_Optional{ 0 };
	/** @brief true if RequiredRecentLoginDays_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool RequiredRecentLoginDays_IsSet{ false };
	/** @brief true if RequiredRecentLoginDays_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool RequiredRecentLoginDays_IsNull{ false };
	/** @brief Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set */
	int32& GetRequiredRecentLoginDays() { return RequiredRecentLoginDays_Optional; }
	/** @brief Gets the value of RequiredRecentLoginDays_Optional, regardless of it having been set */
	const int32& GetRequiredRecentLoginDays() const { return RequiredRecentLoginDays_Optional; }
	/** @brief Gets the value of RequiredRecentLoginDays_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetRequiredRecentLoginDays(const int32& DefaultValue) const { if (RequiredRecentLoginDays_IsSet) return RequiredRecentLoginDays_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of RequiredRecentLoginDays_Optional and returns true if it has been set, otherwise returns false */
	bool GetRequiredRecentLoginDays(int32& OutValue) const { if (RequiredRecentLoginDays_IsSet && !RequiredRecentLoginDays_IsNull) OutValue = RequiredRecentLoginDays_Optional; return RequiredRecentLoginDays_IsSet; }
	/** @brief Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr */
	int32* GetRequiredRecentLoginDaysOrNull() { if (RequiredRecentLoginDays_IsSet) return (RequiredRecentLoginDays_IsNull ? nullptr : &RequiredRecentLoginDays_Optional); return nullptr; }
	/** @brief Returns a pointer to RequiredRecentLoginDays_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetRequiredRecentLoginDaysOrNull() const { if (RequiredRecentLoginDays_IsSet) return (RequiredRecentLoginDays_IsNull ? nullptr : &RequiredRecentLoginDays_Optional); return nullptr; }
	/** @brief Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true */
	void SetRequiredRecentLoginDays(const int32& NewValue) { RequiredRecentLoginDays_Optional = NewValue; RequiredRecentLoginDays_IsSet = true; RequiredRecentLoginDays_IsNull = false; }
	/** @brief Sets the value of RequiredRecentLoginDays_Optional and also sets RequiredRecentLoginDays_IsSet to true using move semantics */
	void SetRequiredRecentLoginDays(int32&& NewValue) { RequiredRecentLoginDays_Optional = NewValue; RequiredRecentLoginDays_IsSet = true; RequiredRecentLoginDays_IsNull = false; }
	/** @brief Clears the value of RequiredRecentLoginDays_Optional and sets RequiredRecentLoginDays_IsSet to false */
	void ClearRequiredRecentLoginDays() { RequiredRecentLoginDays_Optional = 0; RequiredRecentLoginDays_IsSet = false; RequiredRecentLoginDays_IsNull = false; }
	/** @brief Checks whether RequiredRecentLoginDays_Optional has been set */
	bool IsRequiredRecentLoginDaysSet() const { return RequiredRecentLoginDays_IsSet; }
	/** @brief Returns true if RequiredRecentLoginDays_Optional is set and matches the default value */
	bool IsRequiredRecentLoginDaysDefaultValue() const { return RequiredRecentLoginDays_IsSet && RequiredRecentLoginDays_Optional == 0; }
	/** @brief Sets the value of RequiredRecentLoginDays_Optional to its default and also sets RequiredRecentLoginDays_IsSet to true */
	void SetRequiredRecentLoginDaysToDefault() { SetRequiredRecentLoginDays(0); }
	/** @brief Sets the value explicitly to be treated as null */
	void SetRequiredRecentLoginDaysToNull() { RequiredRecentLoginDays_IsSet = true; RequiredRecentLoginDays_IsNull = true; }
	/** @brief Checks whether RequiredRecentLoginDays_Optional is set to null */
	bool IsRequiredRecentLoginDaysNull() const { return RequiredRecentLoginDays_IsSet && RequiredRecentLoginDays_IsNull; }

	/** @brief How frequently the data for this leaderboard should be requested */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 UpdateFrequencySeconds{ 0 };
	/** @brief Gets the value of UpdateFrequencySeconds */
	int32& GetUpdateFrequencySeconds() { return UpdateFrequencySeconds; }
	/** @brief Gets the value of UpdateFrequencySeconds */
	const int32& GetUpdateFrequencySeconds() const { return UpdateFrequencySeconds; }
	/** @brief Sets the value of UpdateFrequencySeconds */
	void SetUpdateFrequencySeconds(const int32& NewValue) { UpdateFrequencySeconds = NewValue;   }
	/** @brief Sets the value of UpdateFrequencySeconds using move semantics */
	void SetUpdateFrequencySeconds(int32&& NewValue) { UpdateFrequencySeconds = NewValue;   }
	/** @brief Returns true if UpdateFrequencySeconds matches the default value */
	bool IsUpdateFrequencySecondsDefaultValue() const { return UpdateFrequencySeconds == 0; }
	/** @brief Sets the value of UpdateFrequencySeconds to its default  */
	void SetUpdateFrequencySecondsToDefault() { SetUpdateFrequencySeconds(0); }

	/** @brief Whether or not the value of the stat that determines this leaderboard should be exposed when the leaderboard is queried */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ExposeStat_Optional{ false };
	/** @brief true if ExposeStat_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ExposeStat_IsSet{ false };
	/** @brief Gets the value of ExposeStat_Optional, regardless of it having been set */
	bool& GetExposeStat() { return ExposeStat_Optional; }
	/** @brief Gets the value of ExposeStat_Optional, regardless of it having been set */
	const bool& GetExposeStat() const { return ExposeStat_Optional; }
	/** @brief Gets the value of ExposeStat_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetExposeStat(const bool& DefaultValue) const { if (ExposeStat_IsSet) return ExposeStat_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ExposeStat_Optional and returns true if it has been set, otherwise returns false */
	bool GetExposeStat(bool& OutValue) const { if (ExposeStat_IsSet) OutValue = ExposeStat_Optional; return ExposeStat_IsSet; }
	/** @brief Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr */
	bool* GetExposeStatOrNull() { if (ExposeStat_IsSet) return (&ExposeStat_Optional); return nullptr; }
	/** @brief Returns a pointer to ExposeStat_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetExposeStatOrNull() const { if (ExposeStat_IsSet) return (&ExposeStat_Optional); return nullptr; }
	/** @brief Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true */
	void SetExposeStat(const bool& NewValue) { ExposeStat_Optional = NewValue; ExposeStat_IsSet = true;  }
	/** @brief Sets the value of ExposeStat_Optional and also sets ExposeStat_IsSet to true using move semantics */
	void SetExposeStat(bool&& NewValue) { ExposeStat_Optional = NewValue; ExposeStat_IsSet = true;  }
	/** @brief Clears the value of ExposeStat_Optional and sets ExposeStat_IsSet to false */
	void ClearExposeStat() { ExposeStat_Optional = false; ExposeStat_IsSet = false;  }
	/** @brief Checks whether ExposeStat_Optional has been set */
	bool IsExposeStatSet() const { return ExposeStat_IsSet; }
	/** @brief Returns true if ExposeStat_Optional is set and matches the default value */
	bool IsExposeStatDefaultValue() const { return ExposeStat_IsSet && ExposeStat_Optional == false; }
	/** @brief Sets the value of ExposeStat_Optional to its default and also sets ExposeStat_IsSet to true */
	void SetExposeStatToDefault() { SetExposeStat(false); }

	/** @brief Whether or not individual player stats should be saved in the leaderboard, or if only the metadata can be returned */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ExposePlayers_Optional{ true };
	/** @brief true if ExposePlayers_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ExposePlayers_IsSet{ false };
	/** @brief Gets the value of ExposePlayers_Optional, regardless of it having been set */
	bool& GetExposePlayers() { return ExposePlayers_Optional; }
	/** @brief Gets the value of ExposePlayers_Optional, regardless of it having been set */
	const bool& GetExposePlayers() const { return ExposePlayers_Optional; }
	/** @brief Gets the value of ExposePlayers_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetExposePlayers(const bool& DefaultValue) const { if (ExposePlayers_IsSet) return ExposePlayers_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ExposePlayers_Optional and returns true if it has been set, otherwise returns false */
	bool GetExposePlayers(bool& OutValue) const { if (ExposePlayers_IsSet) OutValue = ExposePlayers_Optional; return ExposePlayers_IsSet; }
	/** @brief Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr */
	bool* GetExposePlayersOrNull() { if (ExposePlayers_IsSet) return (&ExposePlayers_Optional); return nullptr; }
	/** @brief Returns a pointer to ExposePlayers_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetExposePlayersOrNull() const { if (ExposePlayers_IsSet) return (&ExposePlayers_Optional); return nullptr; }
	/** @brief Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true */
	void SetExposePlayers(const bool& NewValue) { ExposePlayers_Optional = NewValue; ExposePlayers_IsSet = true;  }
	/** @brief Sets the value of ExposePlayers_Optional and also sets ExposePlayers_IsSet to true using move semantics */
	void SetExposePlayers(bool&& NewValue) { ExposePlayers_Optional = NewValue; ExposePlayers_IsSet = true;  }
	/** @brief Clears the value of ExposePlayers_Optional and sets ExposePlayers_IsSet to false */
	void ClearExposePlayers() { ExposePlayers_Optional = true; ExposePlayers_IsSet = false;  }
	/** @brief Checks whether ExposePlayers_Optional has been set */
	bool IsExposePlayersSet() const { return ExposePlayers_IsSet; }
	/** @brief Returns true if ExposePlayers_Optional is set and matches the default value */
	bool IsExposePlayersDefaultValue() const { return ExposePlayers_IsSet && ExposePlayers_Optional == true; }
	/** @brief Sets the value of ExposePlayers_Optional to its default and also sets ExposePlayers_IsSet to true */
	void SetExposePlayersToDefault() { SetExposePlayers(true); }
};

/** @} */
