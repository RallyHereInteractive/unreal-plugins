// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "HostType.h"
#include "InstanceStartupParams.h"
#include "InstanceRequest.generated.h"

/** @defgroup RHAPI_InstanceRequest RallyHere API Model InstanceRequest
 *  @{
 */

/**
 * @brief A request body to create an instance resource in a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceRequest : public FRHAPI_Model
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

	/** @brief Unique ID for the instance, a new one will be generated if not provided */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString InstanceId_Optional{  };
	/** @brief true if InstanceId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InstanceId_IsSet{ false };
	/** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
	FString& GetInstanceId() { return InstanceId_Optional; }
	/** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
	const FString& GetInstanceId() const { return InstanceId_Optional; }
	/** @brief Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetInstanceId(const FString& DefaultValue) const { if (InstanceId_IsSet) return InstanceId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false */
	bool GetInstanceId(FString& OutValue) const { if (InstanceId_IsSet) OutValue = InstanceId_Optional; return InstanceId_IsSet; }
	/** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetInstanceIdOrNull() { if (InstanceId_IsSet) return (&InstanceId_Optional); return nullptr; }
	/** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetInstanceIdOrNull() const { if (InstanceId_IsSet) return (&InstanceId_Optional); return nullptr; }
	/** @brief Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true */
	void SetInstanceId(const FString& NewValue) { InstanceId_Optional = NewValue; InstanceId_IsSet = true;  }
	/** @brief Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics */
	void SetInstanceId(FString&& NewValue) { InstanceId_Optional = NewValue; InstanceId_IsSet = true;  }
	/** @brief Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false */
	void ClearInstanceId() { InstanceId_IsSet = false;  }
	/** @brief Checks whether InstanceId_Optional has been set */
	bool IsInstanceIdSet() const { return InstanceId_IsSet; }

	/** @brief Parameters used by the host to startup. For UE5 this will contain the map and gamemode */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_InstanceStartupParams InstanceStartupParams_Optional{  };
	/** @brief true if InstanceStartupParams_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InstanceStartupParams_IsSet{ false };
	/** @brief Gets the value of InstanceStartupParams_Optional, regardless of it having been set */
	FRHAPI_InstanceStartupParams& GetInstanceStartupParams() { return InstanceStartupParams_Optional; }
	/** @brief Gets the value of InstanceStartupParams_Optional, regardless of it having been set */
	const FRHAPI_InstanceStartupParams& GetInstanceStartupParams() const { return InstanceStartupParams_Optional; }
	/** @brief Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_InstanceStartupParams& GetInstanceStartupParams(const FRHAPI_InstanceStartupParams& DefaultValue) const { if (InstanceStartupParams_IsSet) return InstanceStartupParams_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false */
	bool GetInstanceStartupParams(FRHAPI_InstanceStartupParams& OutValue) const { if (InstanceStartupParams_IsSet) OutValue = InstanceStartupParams_Optional; return InstanceStartupParams_IsSet; }
	/** @brief Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_InstanceStartupParams* GetInstanceStartupParamsOrNull() { if (InstanceStartupParams_IsSet) return (&InstanceStartupParams_Optional); return nullptr; }
	/** @brief Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_InstanceStartupParams* GetInstanceStartupParamsOrNull() const { if (InstanceStartupParams_IsSet) return (&InstanceStartupParams_Optional); return nullptr; }
	/** @brief Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true */
	void SetInstanceStartupParams(const FRHAPI_InstanceStartupParams& NewValue) { InstanceStartupParams_Optional = NewValue; InstanceStartupParams_IsSet = true;  }
	/** @brief Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics */
	void SetInstanceStartupParams(FRHAPI_InstanceStartupParams&& NewValue) { InstanceStartupParams_Optional = NewValue; InstanceStartupParams_IsSet = true;  }
	/** @brief Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false */
	void ClearInstanceStartupParams() { InstanceStartupParams_IsSet = false;  }
	/** @brief Checks whether InstanceStartupParams_Optional has been set */
	bool IsInstanceStartupParamsSet() const { return InstanceStartupParams_IsSet; }

	/** @brief Type of the host */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_HostType HostType_Optional{  };
	/** @brief true if HostType_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool HostType_IsSet{ false };
	/** @brief Gets the value of HostType_Optional, regardless of it having been set */
	ERHAPI_HostType& GetHostType() { return HostType_Optional; }
	/** @brief Gets the value of HostType_Optional, regardless of it having been set */
	const ERHAPI_HostType& GetHostType() const { return HostType_Optional; }
	/** @brief Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_HostType& GetHostType(const ERHAPI_HostType& DefaultValue) const { if (HostType_IsSet) return HostType_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false */
	bool GetHostType(ERHAPI_HostType& OutValue) const { if (HostType_IsSet) OutValue = HostType_Optional; return HostType_IsSet; }
	/** @brief Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_HostType* GetHostTypeOrNull() { if (HostType_IsSet) return (&HostType_Optional); return nullptr; }
	/** @brief Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_HostType* GetHostTypeOrNull() const { if (HostType_IsSet) return (&HostType_Optional); return nullptr; }
	/** @brief Sets the value of HostType_Optional and also sets HostType_IsSet to true */
	void SetHostType(const ERHAPI_HostType& NewValue) { HostType_Optional = NewValue; HostType_IsSet = true;  }
	/** @brief Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics */
	void SetHostType(ERHAPI_HostType&& NewValue) { HostType_Optional = NewValue; HostType_IsSet = true;  }
	/** @brief Clears the value of HostType_Optional and sets HostType_IsSet to false */
	void ClearHostType() { HostType_IsSet = false;  }
	/** @brief Checks whether HostType_Optional has been set */
	bool IsHostTypeSet() const { return HostType_IsSet; }

	/** @brief Which instance request template should be used to request this instance. Takes priority over instance_startup_params and host_type */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid InstanceRequestTemplateId_Optional{  };
	/** @brief true if InstanceRequestTemplateId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InstanceRequestTemplateId_IsSet{ false };
	/** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
	FGuid& GetInstanceRequestTemplateId() { return InstanceRequestTemplateId_Optional; }
	/** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
	const FGuid& GetInstanceRequestTemplateId() const { return InstanceRequestTemplateId_Optional; }
	/** @brief Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetInstanceRequestTemplateId(const FGuid& DefaultValue) const { if (InstanceRequestTemplateId_IsSet) return InstanceRequestTemplateId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false */
	bool GetInstanceRequestTemplateId(FGuid& OutValue) const { if (InstanceRequestTemplateId_IsSet) OutValue = InstanceRequestTemplateId_Optional; return InstanceRequestTemplateId_IsSet; }
	/** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetInstanceRequestTemplateIdOrNull() { if (InstanceRequestTemplateId_IsSet) return (&InstanceRequestTemplateId_Optional); return nullptr; }
	/** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetInstanceRequestTemplateIdOrNull() const { if (InstanceRequestTemplateId_IsSet) return (&InstanceRequestTemplateId_Optional); return nullptr; }
	/** @brief Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true */
	void SetInstanceRequestTemplateId(const FGuid& NewValue) { InstanceRequestTemplateId_Optional = NewValue; InstanceRequestTemplateId_IsSet = true;  }
	/** @brief Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics */
	void SetInstanceRequestTemplateId(FGuid&& NewValue) { InstanceRequestTemplateId_Optional = NewValue; InstanceRequestTemplateId_IsSet = true;  }
	/** @brief Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false */
	void ClearInstanceRequestTemplateId() { InstanceRequestTemplateId_IsSet = false;  }
	/** @brief Checks whether InstanceRequestTemplateId_Optional has been set */
	bool IsInstanceRequestTemplateIdSet() const { return InstanceRequestTemplateId_IsSet; }

	/** @brief Player UUID of the host, if the host type is player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid HostPlayerUuid_Optional{  };
	/** @brief true if HostPlayerUuid_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool HostPlayerUuid_IsSet{ false };
	/** @brief Gets the value of HostPlayerUuid_Optional, regardless of it having been set */
	FGuid& GetHostPlayerUuid() { return HostPlayerUuid_Optional; }
	/** @brief Gets the value of HostPlayerUuid_Optional, regardless of it having been set */
	const FGuid& GetHostPlayerUuid() const { return HostPlayerUuid_Optional; }
	/** @brief Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetHostPlayerUuid(const FGuid& DefaultValue) const { if (HostPlayerUuid_IsSet) return HostPlayerUuid_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false */
	bool GetHostPlayerUuid(FGuid& OutValue) const { if (HostPlayerUuid_IsSet) OutValue = HostPlayerUuid_Optional; return HostPlayerUuid_IsSet; }
	/** @brief Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetHostPlayerUuidOrNull() { if (HostPlayerUuid_IsSet) return (&HostPlayerUuid_Optional); return nullptr; }
	/** @brief Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetHostPlayerUuidOrNull() const { if (HostPlayerUuid_IsSet) return (&HostPlayerUuid_Optional); return nullptr; }
	/** @brief Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true */
	void SetHostPlayerUuid(const FGuid& NewValue) { HostPlayerUuid_Optional = NewValue; HostPlayerUuid_IsSet = true;  }
	/** @brief Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics */
	void SetHostPlayerUuid(FGuid&& NewValue) { HostPlayerUuid_Optional = NewValue; HostPlayerUuid_IsSet = true;  }
	/** @brief Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false */
	void ClearHostPlayerUuid() { HostPlayerUuid_IsSet = false;  }
	/** @brief Checks whether HostPlayerUuid_Optional has been set */
	bool IsHostPlayerUuidSet() const { return HostPlayerUuid_IsSet; }

	/** @brief instance-defined custom data */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> CustomData_Optional{  };
	/** @brief true if CustomData_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CustomData_IsSet{ false };
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
	bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return (&CustomData_Optional); return nullptr; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return (&CustomData_Optional); return nullptr; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
	void SetCustomData(const TMap<FString, FString>& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true;  }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics */
	void SetCustomData(TMap<FString, FString>&& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true;  }
	/** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false;  }
	/** @brief Checks whether CustomData_Optional has been set */
	bool IsCustomDataSet() const { return CustomData_IsSet; }
};

/** @} */
