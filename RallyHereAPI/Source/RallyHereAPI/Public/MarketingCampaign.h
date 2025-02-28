// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "KeyType.h"
#include "Portal.h"
#include "MarketingCampaign.generated.h"

/** @defgroup RHAPI_MarketingCampaign RallyHere API Model MarketingCampaign
 *  @{
 */

/**
 * @brief A Marketing Campaign is a set of external keys that can be claimed by players.The key claims are assigned to the player based on
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MarketingCampaign : public FRHAPI_Model
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

	/** @brief The unique identifier for the Marketing Campaign */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid Uuid{  };
	/** @brief Gets the value of Uuid */
	FGuid& GetUuid() { return Uuid; }
	/** @brief Gets the value of Uuid */
	const FGuid& GetUuid() const { return Uuid; }
	/** @brief Sets the value of Uuid */
	void SetUuid(const FGuid& NewValue) { Uuid = NewValue;   }
	/** @brief Sets the value of Uuid using move semantics */
	void SetUuid(FGuid&& NewValue) { Uuid = NewValue;   }

	/** @brief The name of the Marketing Campaign */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Name{  };
	/** @brief Gets the value of Name */
	FString& GetName() { return Name; }
	/** @brief Gets the value of Name */
	const FString& GetName() const { return Name; }
	/** @brief Sets the value of Name */
	void SetName(const FString& NewValue) { Name = NewValue;   }
	/** @brief Sets the value of Name using move semantics */
	void SetName(FString&& NewValue) { Name = NewValue;   }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Portal PortalId_Optional{  };
	/** @brief true if PortalId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PortalId_IsSet{ false };
	/** @brief true if PortalId_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PortalId_IsNull{ false };
	/** @brief Gets the value of PortalId_Optional, regardless of it having been set */
	ERHAPI_Portal& GetPortalId() { return PortalId_Optional; }
	/** @brief Gets the value of PortalId_Optional, regardless of it having been set */
	const ERHAPI_Portal& GetPortalId() const { return PortalId_Optional; }
	/** @brief Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_Portal& GetPortalId(const ERHAPI_Portal& DefaultValue) const { if (PortalId_IsSet) return PortalId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false */
	bool GetPortalId(ERHAPI_Portal& OutValue) const { if (PortalId_IsSet && !PortalId_IsNull) OutValue = PortalId_Optional; return PortalId_IsSet; }
	/** @brief Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_Portal* GetPortalIdOrNull() { if (PortalId_IsSet) return (PortalId_IsNull ? nullptr : &PortalId_Optional); return nullptr; }
	/** @brief Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_Portal* GetPortalIdOrNull() const { if (PortalId_IsSet) return (PortalId_IsNull ? nullptr : &PortalId_Optional); return nullptr; }
	/** @brief Sets the value of PortalId_Optional and also sets PortalId_IsSet to true */
	void SetPortalId(const ERHAPI_Portal& NewValue) { PortalId_Optional = NewValue; PortalId_IsSet = true; PortalId_IsNull = false; }
	/** @brief Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics */
	void SetPortalId(ERHAPI_Portal&& NewValue) { PortalId_Optional = NewValue; PortalId_IsSet = true; PortalId_IsNull = false; }
	/** @brief Clears the value of PortalId_Optional and sets PortalId_IsSet to false */
	void ClearPortalId() { PortalId_IsSet = false; PortalId_IsNull = false; }
	/** @brief Checks whether PortalId_Optional has been set */
	bool IsPortalIdSet() const { return PortalId_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetPortalIdToNull() { PortalId_IsSet = true; PortalId_IsNull = true; }
	/** @brief Checks whether PortalId_Optional is set to null */
	bool IsPortalIdNull() const { return PortalId_IsSet && PortalId_IsNull; }

	/** @brief The types of keys that can be claimed from this campaign */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_KeyType> KeyTypes{  };
	/** @brief Gets the value of KeyTypes */
	TArray<FRHAPI_KeyType>& GetKeyTypes() { return KeyTypes; }
	/** @brief Gets the value of KeyTypes */
	const TArray<FRHAPI_KeyType>& GetKeyTypes() const { return KeyTypes; }
	/** @brief Sets the value of KeyTypes */
	void SetKeyTypes(const TArray<FRHAPI_KeyType>& NewValue) { KeyTypes = NewValue;   }
	/** @brief Sets the value of KeyTypes using move semantics */
	void SetKeyTypes(TArray<FRHAPI_KeyType>&& NewValue) { KeyTypes = NewValue;   }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString CreatedOn_Optional{  };
	/** @brief true if CreatedOn_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CreatedOn_IsSet{ false };
	/** @brief true if CreatedOn_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CreatedOn_IsNull{ false };
	/** @brief Gets the value of CreatedOn_Optional, regardless of it having been set */
	FString& GetCreatedOn() { return CreatedOn_Optional; }
	/** @brief Gets the value of CreatedOn_Optional, regardless of it having been set */
	const FString& GetCreatedOn() const { return CreatedOn_Optional; }
	/** @brief Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetCreatedOn(const FString& DefaultValue) const { if (CreatedOn_IsSet) return CreatedOn_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false */
	bool GetCreatedOn(FString& OutValue) const { if (CreatedOn_IsSet && !CreatedOn_IsNull) OutValue = CreatedOn_Optional; return CreatedOn_IsSet; }
	/** @brief Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr */
	FString* GetCreatedOnOrNull() { if (CreatedOn_IsSet) return (CreatedOn_IsNull ? nullptr : &CreatedOn_Optional); return nullptr; }
	/** @brief Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetCreatedOnOrNull() const { if (CreatedOn_IsSet) return (CreatedOn_IsNull ? nullptr : &CreatedOn_Optional); return nullptr; }
	/** @brief Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true */
	void SetCreatedOn(const FString& NewValue) { CreatedOn_Optional = NewValue; CreatedOn_IsSet = true; CreatedOn_IsNull = false; }
	/** @brief Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true using move semantics */
	void SetCreatedOn(FString&& NewValue) { CreatedOn_Optional = NewValue; CreatedOn_IsSet = true; CreatedOn_IsNull = false; }
	/** @brief Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false */
	void ClearCreatedOn() { CreatedOn_IsSet = false; CreatedOn_IsNull = false; }
	/** @brief Checks whether CreatedOn_Optional has been set */
	bool IsCreatedOnSet() const { return CreatedOn_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetCreatedOnToNull() { CreatedOn_IsSet = true; CreatedOn_IsNull = true; }
	/** @brief Checks whether CreatedOn_Optional is set to null */
	bool IsCreatedOnNull() const { return CreatedOn_IsSet && CreatedOn_IsNull; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString LastModifiedOn_Optional{  };
	/** @brief true if LastModifiedOn_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LastModifiedOn_IsSet{ false };
	/** @brief true if LastModifiedOn_Optional has been explicitly set to null */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LastModifiedOn_IsNull{ false };
	/** @brief Gets the value of LastModifiedOn_Optional, regardless of it having been set */
	FString& GetLastModifiedOn() { return LastModifiedOn_Optional; }
	/** @brief Gets the value of LastModifiedOn_Optional, regardless of it having been set */
	const FString& GetLastModifiedOn() const { return LastModifiedOn_Optional; }
	/** @brief Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetLastModifiedOn(const FString& DefaultValue) const { if (LastModifiedOn_IsSet) return LastModifiedOn_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false */
	bool GetLastModifiedOn(FString& OutValue) const { if (LastModifiedOn_IsSet && !LastModifiedOn_IsNull) OutValue = LastModifiedOn_Optional; return LastModifiedOn_IsSet; }
	/** @brief Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr */
	FString* GetLastModifiedOnOrNull() { if (LastModifiedOn_IsSet) return (LastModifiedOn_IsNull ? nullptr : &LastModifiedOn_Optional); return nullptr; }
	/** @brief Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetLastModifiedOnOrNull() const { if (LastModifiedOn_IsSet) return (LastModifiedOn_IsNull ? nullptr : &LastModifiedOn_Optional); return nullptr; }
	/** @brief Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true */
	void SetLastModifiedOn(const FString& NewValue) { LastModifiedOn_Optional = NewValue; LastModifiedOn_IsSet = true; LastModifiedOn_IsNull = false; }
	/** @brief Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true using move semantics */
	void SetLastModifiedOn(FString&& NewValue) { LastModifiedOn_Optional = NewValue; LastModifiedOn_IsSet = true; LastModifiedOn_IsNull = false; }
	/** @brief Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false */
	void ClearLastModifiedOn() { LastModifiedOn_IsSet = false; LastModifiedOn_IsNull = false; }
	/** @brief Checks whether LastModifiedOn_Optional has been set */
	bool IsLastModifiedOnSet() const { return LastModifiedOn_IsSet; }
	/** @brief Sets the value explicitly to be treated as null */
	void SetLastModifiedOnToNull() { LastModifiedOn_IsSet = true; LastModifiedOn_IsNull = true; }
	/** @brief Checks whether LastModifiedOn_Optional is set to null */
	bool IsLastModifiedOnNull() const { return LastModifiedOn_IsSet && LastModifiedOn_IsNull; }
};

/** @} */
