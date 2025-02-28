// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "DeviceType.h"
#include "Input.h"
#include "Platform.h"
#include "PlatformID.h"
#include "ClientSettings.generated.h"

/** @defgroup RHAPI_ClientSettings RallyHere API Model ClientSettings
 *  @{
 */

/**
 * @brief A player&#39;s platform and input settings
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ClientSettings : public FRHAPI_Model
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

	/** @brief DEPRECATED. Use 'platform' instead. Id for which platform this client is on. ID will be ignored if 'platform' is given. At least one of the two is required */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_PlatformID PlatformId_Optional{  };
	/** @brief true if PlatformId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlatformId_IsSet{ false };
	/** @brief Gets the value of PlatformId_Optional, regardless of it having been set */
	ERHAPI_PlatformID& GetPlatformId() { return PlatformId_Optional; }
	/** @brief Gets the value of PlatformId_Optional, regardless of it having been set */
	const ERHAPI_PlatformID& GetPlatformId() const { return PlatformId_Optional; }
	/** @brief Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_PlatformID& GetPlatformId(const ERHAPI_PlatformID& DefaultValue) const { if (PlatformId_IsSet) return PlatformId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlatformId(ERHAPI_PlatformID& OutValue) const { if (PlatformId_IsSet) OutValue = PlatformId_Optional; return PlatformId_IsSet; }
	/** @brief Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_PlatformID* GetPlatformIdOrNull() { if (PlatformId_IsSet) return (&PlatformId_Optional); return nullptr; }
	/** @brief Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_PlatformID* GetPlatformIdOrNull() const { if (PlatformId_IsSet) return (&PlatformId_Optional); return nullptr; }
	/** @brief Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true */
	void SetPlatformId(const ERHAPI_PlatformID& NewValue) { PlatformId_Optional = NewValue; PlatformId_IsSet = true;  }
	/** @brief Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics */
	void SetPlatformId(ERHAPI_PlatformID&& NewValue) { PlatformId_Optional = NewValue; PlatformId_IsSet = true;  }
	/** @brief Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false */
	void ClearPlatformId() { PlatformId_IsSet = false;  }
	/** @brief Checks whether PlatformId_Optional has been set */
	bool IsPlatformIdSet() const { return PlatformId_IsSet; }

	/** @brief Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. Platform is now read from client's authorization claims if available */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Platform Platform_Optional{  };
	/** @brief true if Platform_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Platform_IsSet{ false };
	/** @brief Gets the value of Platform_Optional, regardless of it having been set */
	ERHAPI_Platform& GetPlatform() { return Platform_Optional; }
	/** @brief Gets the value of Platform_Optional, regardless of it having been set */
	const ERHAPI_Platform& GetPlatform() const { return Platform_Optional; }
	/** @brief Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_Platform& GetPlatform(const ERHAPI_Platform& DefaultValue) const { if (Platform_IsSet) return Platform_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlatform(ERHAPI_Platform& OutValue) const { if (Platform_IsSet) OutValue = Platform_Optional; return Platform_IsSet; }
	/** @brief Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_Platform* GetPlatformOrNull() { if (Platform_IsSet) return (&Platform_Optional); return nullptr; }
	/** @brief Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_Platform* GetPlatformOrNull() const { if (Platform_IsSet) return (&Platform_Optional); return nullptr; }
	/** @brief Sets the value of Platform_Optional and also sets Platform_IsSet to true */
	void SetPlatform(const ERHAPI_Platform& NewValue) { Platform_Optional = NewValue; Platform_IsSet = true;  }
	/** @brief Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics */
	void SetPlatform(ERHAPI_Platform&& NewValue) { Platform_Optional = NewValue; Platform_IsSet = true;  }
	/** @brief Clears the value of Platform_Optional and sets Platform_IsSet to false */
	void ClearPlatform() { Platform_IsSet = false;  }
	/** @brief Checks whether Platform_Optional has been set */
	bool IsPlatformSet() const { return Platform_IsSet; }

	/** @brief Which input type this client is using */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Input Input{  };
	/** @brief Gets the value of Input */
	ERHAPI_Input& GetInput() { return Input; }
	/** @brief Gets the value of Input */
	const ERHAPI_Input& GetInput() const { return Input; }
	/** @brief Sets the value of Input */
	void SetInput(const ERHAPI_Input& NewValue) { Input = NewValue;   }
	/** @brief Sets the value of Input using move semantics */
	void SetInput(ERHAPI_Input&& NewValue) { Input = NewValue;   }

	/** @brief Platform verified device type for this client */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_DeviceType DeviceType_Optional{  };
	/** @brief true if DeviceType_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DeviceType_IsSet{ false };
	/** @brief Gets the value of DeviceType_Optional, regardless of it having been set */
	ERHAPI_DeviceType& GetDeviceType() { return DeviceType_Optional; }
	/** @brief Gets the value of DeviceType_Optional, regardless of it having been set */
	const ERHAPI_DeviceType& GetDeviceType() const { return DeviceType_Optional; }
	/** @brief Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_DeviceType& GetDeviceType(const ERHAPI_DeviceType& DefaultValue) const { if (DeviceType_IsSet) return DeviceType_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false */
	bool GetDeviceType(ERHAPI_DeviceType& OutValue) const { if (DeviceType_IsSet) OutValue = DeviceType_Optional; return DeviceType_IsSet; }
	/** @brief Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_DeviceType* GetDeviceTypeOrNull() { if (DeviceType_IsSet) return (&DeviceType_Optional); return nullptr; }
	/** @brief Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_DeviceType* GetDeviceTypeOrNull() const { if (DeviceType_IsSet) return (&DeviceType_Optional); return nullptr; }
	/** @brief Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true */
	void SetDeviceType(const ERHAPI_DeviceType& NewValue) { DeviceType_Optional = NewValue; DeviceType_IsSet = true;  }
	/** @brief Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics */
	void SetDeviceType(ERHAPI_DeviceType&& NewValue) { DeviceType_Optional = NewValue; DeviceType_IsSet = true;  }
	/** @brief Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false */
	void ClearDeviceType() { DeviceType_IsSet = false;  }
	/** @brief Checks whether DeviceType_Optional has been set */
	bool IsDeviceTypeSet() const { return DeviceType_IsSet; }
};

/** @} */
