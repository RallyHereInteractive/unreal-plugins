// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PexStat.generated.h"

/** @defgroup RHAPI_PexStat RallyHere API Model PexStat
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PexStat : public FRHAPI_Model
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

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Min_Optional{  };
	/** @brief true if Min_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Min_IsSet{ false };
	/** @brief true if Min_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Min_IsNull{ false };
	/** @brief Gets the value of Min_Optional, regardless of it having been set */
	float& GetMin() { return Min_Optional; }
	/** @brief Gets the value of Min_Optional, regardless of it having been set */
	const float& GetMin() const { return Min_Optional; }
	/** @brief Gets the value of Min_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetMin(const float& DefaultValue) const { if (Min_IsSet) return Min_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Min_Optional and returns true if it has been set, otherwise returns false */
	bool GetMin(float& OutValue) const { if (Min_IsSet && !Min_IsNull) OutValue = Min_Optional; return Min_IsSet; }
	/** @brief Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr */
	float* GetMinOrNull() { if (Min_IsSet) return (Min_IsNull ? nullptr : &Min_Optional); return nullptr; }
	/** @brief Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr */
	const float* GetMinOrNull() const { if (Min_IsSet) return (Min_IsNull ? nullptr : &Min_Optional); return nullptr; }
	/** @brief Sets the value of Min_Optional and also sets Min_IsSet to true */
	void SetMin(const float& NewValue) { Min_Optional = NewValue; Min_IsSet = true; Min_IsNull = false; }
	/** @brief Sets the value of Min_Optional and also sets Min_IsSet to true using move semantics */
	void SetMin(float&& NewValue) { Min_Optional = NewValue; Min_IsSet = true; Min_IsNull = false; }
	/** @brief Clears the value of Min_Optional and sets Min_IsSet to false */
	void ClearMin() { Min_IsSet = false; Min_IsNull = false; }
	/** @brief Checks whether Min_Optional has been set */
	bool IsMinSet() const { return Min_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetMinToNull() { Min_IsSet = true; Min_IsNull = true; }
	/** @brief Checks whether Min_Optional is set to null */
	bool IsMinNull() const { return Min_IsSet && Min_IsNull; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Max_Optional{  };
	/** @brief true if Max_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Max_IsSet{ false };
	/** @brief true if Max_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Max_IsNull{ false };
	/** @brief Gets the value of Max_Optional, regardless of it having been set */
	float& GetMax() { return Max_Optional; }
	/** @brief Gets the value of Max_Optional, regardless of it having been set */
	const float& GetMax() const { return Max_Optional; }
	/** @brief Gets the value of Max_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetMax(const float& DefaultValue) const { if (Max_IsSet) return Max_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Max_Optional and returns true if it has been set, otherwise returns false */
	bool GetMax(float& OutValue) const { if (Max_IsSet && !Max_IsNull) OutValue = Max_Optional; return Max_IsSet; }
	/** @brief Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr */
	float* GetMaxOrNull() { if (Max_IsSet) return (Max_IsNull ? nullptr : &Max_Optional); return nullptr; }
	/** @brief Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr */
	const float* GetMaxOrNull() const { if (Max_IsSet) return (Max_IsNull ? nullptr : &Max_Optional); return nullptr; }
	/** @brief Sets the value of Max_Optional and also sets Max_IsSet to true */
	void SetMax(const float& NewValue) { Max_Optional = NewValue; Max_IsSet = true; Max_IsNull = false; }
	/** @brief Sets the value of Max_Optional and also sets Max_IsSet to true using move semantics */
	void SetMax(float&& NewValue) { Max_Optional = NewValue; Max_IsSet = true; Max_IsNull = false; }
	/** @brief Clears the value of Max_Optional and sets Max_IsSet to false */
	void ClearMax() { Max_IsSet = false; Max_IsNull = false; }
	/** @brief Checks whether Max_Optional has been set */
	bool IsMaxSet() const { return Max_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetMaxToNull() { Max_IsSet = true; Max_IsNull = true; }
	/** @brief Checks whether Max_Optional is set to null */
	bool IsMaxNull() const { return Max_IsSet && Max_IsNull; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Avg_Optional{  };
	/** @brief true if Avg_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Avg_IsSet{ false };
	/** @brief true if Avg_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Avg_IsNull{ false };
	/** @brief Gets the value of Avg_Optional, regardless of it having been set */
	float& GetAvg() { return Avg_Optional; }
	/** @brief Gets the value of Avg_Optional, regardless of it having been set */
	const float& GetAvg() const { return Avg_Optional; }
	/** @brief Gets the value of Avg_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetAvg(const float& DefaultValue) const { if (Avg_IsSet) return Avg_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Avg_Optional and returns true if it has been set, otherwise returns false */
	bool GetAvg(float& OutValue) const { if (Avg_IsSet && !Avg_IsNull) OutValue = Avg_Optional; return Avg_IsSet; }
	/** @brief Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr */
	float* GetAvgOrNull() { if (Avg_IsSet) return (Avg_IsNull ? nullptr : &Avg_Optional); return nullptr; }
	/** @brief Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr */
	const float* GetAvgOrNull() const { if (Avg_IsSet) return (Avg_IsNull ? nullptr : &Avg_Optional); return nullptr; }
	/** @brief Sets the value of Avg_Optional and also sets Avg_IsSet to true */
	void SetAvg(const float& NewValue) { Avg_Optional = NewValue; Avg_IsSet = true; Avg_IsNull = false; }
	/** @brief Sets the value of Avg_Optional and also sets Avg_IsSet to true using move semantics */
	void SetAvg(float&& NewValue) { Avg_Optional = NewValue; Avg_IsSet = true; Avg_IsNull = false; }
	/** @brief Clears the value of Avg_Optional and sets Avg_IsSet to false */
	void ClearAvg() { Avg_IsSet = false; Avg_IsNull = false; }
	/** @brief Checks whether Avg_Optional has been set */
	bool IsAvgSet() const { return Avg_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetAvgToNull() { Avg_IsSet = true; Avg_IsNull = true; }
	/** @brief Checks whether Avg_Optional is set to null */
	bool IsAvgNull() const { return Avg_IsSet && Avg_IsNull; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Stddev_Optional{  };
	/** @brief true if Stddev_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Stddev_IsSet{ false };
	/** @brief true if Stddev_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Stddev_IsNull{ false };
	/** @brief Gets the value of Stddev_Optional, regardless of it having been set */
	float& GetStddev() { return Stddev_Optional; }
	/** @brief Gets the value of Stddev_Optional, regardless of it having been set */
	const float& GetStddev() const { return Stddev_Optional; }
	/** @brief Gets the value of Stddev_Optional, if it has been set, otherwise it returns DefaultValue */
	const float& GetStddev(const float& DefaultValue) const { if (Stddev_IsSet) return Stddev_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Stddev_Optional and returns true if it has been set, otherwise returns false */
	bool GetStddev(float& OutValue) const { if (Stddev_IsSet && !Stddev_IsNull) OutValue = Stddev_Optional; return Stddev_IsSet; }
	/** @brief Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr */
	float* GetStddevOrNull() { if (Stddev_IsSet) return (Stddev_IsNull ? nullptr : &Stddev_Optional); return nullptr; }
	/** @brief Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr */
	const float* GetStddevOrNull() const { if (Stddev_IsSet) return (Stddev_IsNull ? nullptr : &Stddev_Optional); return nullptr; }
	/** @brief Sets the value of Stddev_Optional and also sets Stddev_IsSet to true */
	void SetStddev(const float& NewValue) { Stddev_Optional = NewValue; Stddev_IsSet = true; Stddev_IsNull = false; }
	/** @brief Sets the value of Stddev_Optional and also sets Stddev_IsSet to true using move semantics */
	void SetStddev(float&& NewValue) { Stddev_Optional = NewValue; Stddev_IsSet = true; Stddev_IsNull = false; }
	/** @brief Clears the value of Stddev_Optional and sets Stddev_IsSet to false */
	void ClearStddev() { Stddev_IsSet = false; Stddev_IsNull = false; }
	/** @brief Checks whether Stddev_Optional has been set */
	bool IsStddevSet() const { return Stddev_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetStddevToNull() { Stddev_IsSet = true; Stddev_IsNull = true; }
	/** @brief Checks whether Stddev_Optional is set to null */
	bool IsStddevNull() const { return Stddev_IsSet && Stddev_IsNull; }
};

/** @} */
