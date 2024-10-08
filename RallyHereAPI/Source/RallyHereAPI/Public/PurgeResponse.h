// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PurgeResponse.generated.h"

/** @defgroup RHAPI_PurgeResponse RallyHere API Model PurgeResponse
 *  @{
 */

/**
 * @brief Purge response from a purge request
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PurgeResponse : public FRHAPI_Model
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

	/** @brief Person ID that will be purged */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PersonId{  };
	/** @brief Gets the value of PersonId */
	FGuid& GetPersonId() { return PersonId; }
	/** @brief Gets the value of PersonId */
	const FGuid& GetPersonId() const { return PersonId; }
	/** @brief Sets the value of PersonId */
	void SetPersonId(const FGuid& NewValue) { PersonId = NewValue;   }
	/** @brief Sets the value of PersonId using move semantics */
	void SetPersonId(FGuid&& NewValue) { PersonId = NewValue;   }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime PurgeOn{  };
	/** @brief Gets the value of PurgeOn */
	FDateTime& GetPurgeOn() { return PurgeOn; }
	/** @brief Gets the value of PurgeOn */
	const FDateTime& GetPurgeOn() const { return PurgeOn; }
	/** @brief Sets the value of PurgeOn */
	void SetPurgeOn(const FDateTime& NewValue) { PurgeOn = NewValue;   }
	/** @brief Sets the value of PurgeOn using move semantics */
	void SetPurgeOn(FDateTime&& NewValue) { PurgeOn = NewValue;   }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime CreatedOn{  };
	/** @brief Gets the value of CreatedOn */
	FDateTime& GetCreatedOn() { return CreatedOn; }
	/** @brief Gets the value of CreatedOn */
	const FDateTime& GetCreatedOn() const { return CreatedOn; }
	/** @brief Sets the value of CreatedOn */
	void SetCreatedOn(const FDateTime& NewValue) { CreatedOn = NewValue;   }
	/** @brief Sets the value of CreatedOn using move semantics */
	void SetCreatedOn(FDateTime&& NewValue) { CreatedOn = NewValue;   }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime LastModifiedOn{  };
	/** @brief Gets the value of LastModifiedOn */
	FDateTime& GetLastModifiedOn() { return LastModifiedOn; }
	/** @brief Gets the value of LastModifiedOn */
	const FDateTime& GetLastModifiedOn() const { return LastModifiedOn; }
	/** @brief Sets the value of LastModifiedOn */
	void SetLastModifiedOn(const FDateTime& NewValue) { LastModifiedOn = NewValue;   }
	/** @brief Sets the value of LastModifiedOn using move semantics */
	void SetLastModifiedOn(FDateTime&& NewValue) { LastModifiedOn = NewValue;   }

	/** @brief Status of the purge request */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Status{  };
	/** @brief Gets the value of Status */
	FString& GetStatus() { return Status; }
	/** @brief Gets the value of Status */
	const FString& GetStatus() const { return Status; }
	/** @brief Sets the value of Status */
	void SetStatus(const FString& NewValue) { Status = NewValue;   }
	/** @brief Sets the value of Status using move semantics */
	void SetStatus(FString&& NewValue) { Status = NewValue;   }
};

/** @} */
