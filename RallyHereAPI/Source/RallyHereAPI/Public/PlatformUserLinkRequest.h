// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "PlatformUserLinkRequest.generated.h"

/** @defgroup RHAPI_PlatformUserLinkRequest RallyHere API Model PlatformUserLinkRequest
 *  @{
 */

/**
 * @brief Model for linking a platform user to the person of another platform user.  This is used to determine the \&quot;leader\&quot; person_id that will be the assigned to a \&quot;follower\&quot; platform user.  The Leader person is found using the following priority:  1. If the &#x60;leader_person_id&#x60; is provided directly 2. If the &#x60;leader_platform&#x60; and &#x60;leader_platform_user_id&#x60; are provided, the &#x60;person_id&#x60; of that platform user is used. 3. If the &#x60;scheme&#x60; and &#x60;credentials&#x60; are provided, the person_id of the platform user of credentials is used.  The Follower platform user is found using the following priority:  1. If the &#x60;follower_platform&#x60; and &#x60;follower_platform_user_id&#x60; are provided directly. 2. If the Authorization header contains a user token, the platform and platform user id from the token are used.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformUserLinkRequest : public FRHAPI_Model
{
	GENERATED_BODY()

	/**
	* @brief Fills this object with data from the passed in JSON
	*
	* @param [in] JsonValue Data from the API call.
	*
	* @return true if parsing of the JSON data was successful.
	*/
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

	/**
	* @brief Writes the data from this object into the specified JSON Writer stream
	*
	* @param [in] Writer JSON Writer stream to push .
	*/
	void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

	/** @brief Person ID of the leader to link to.  If not provided, the person will be found from the `leader_platform` and `leader_platform_user_id` */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid LeaderPersonId_Optional{  };
	/** @brief true if LeaderPersonId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LeaderPersonId_IsSet{ false };
	/** @brief Gets the value of LeaderPersonId_Optional, regardless of it having been set */
	FGuid& GetLeaderPersonId() { return LeaderPersonId_Optional; }
	/** @brief Gets the value of LeaderPersonId_Optional, regardless of it having been set */
	const FGuid& GetLeaderPersonId() const { return LeaderPersonId_Optional; }
	/** @brief Gets the value of LeaderPersonId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetLeaderPersonId(const FGuid& DefaultValue) const { if (LeaderPersonId_IsSet) return LeaderPersonId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LeaderPersonId_Optional and returns true if it has been set, otherwise returns false */
	bool GetLeaderPersonId(FGuid& OutValue) const { if (LeaderPersonId_IsSet) OutValue = LeaderPersonId_Optional; return LeaderPersonId_IsSet; }
	/** @brief Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetLeaderPersonIdOrNull() { if (LeaderPersonId_IsSet) return &LeaderPersonId_Optional; return nullptr; }
	/** @brief Returns a pointer to LeaderPersonId_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetLeaderPersonIdOrNull() const { if (LeaderPersonId_IsSet) return &LeaderPersonId_Optional; return nullptr; }
	/** @brief Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true */
	void SetLeaderPersonId(const FGuid& NewValue) { LeaderPersonId_Optional = NewValue; LeaderPersonId_IsSet = true; }
	/** @brief Sets the value of LeaderPersonId_Optional and also sets LeaderPersonId_IsSet to true using move semantics */
	void SetLeaderPersonId(FGuid&& NewValue) { LeaderPersonId_Optional = NewValue; LeaderPersonId_IsSet = true; }
	 /** @brief Clears the value of LeaderPersonId_Optional and sets LeaderPersonId_IsSet to false */
	void ClearLeaderPersonId() { LeaderPersonId_IsSet = false; }

	/** @brief Platform of the leader to link to.  If not provided, the leader will be found from the `scheme` and `credentials` */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Platform LeaderPlatform_Optional{  };
	/** @brief true if LeaderPlatform_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LeaderPlatform_IsSet{ false };
	/** @brief Gets the value of LeaderPlatform_Optional, regardless of it having been set */
	ERHAPI_Platform& GetLeaderPlatform() { return LeaderPlatform_Optional; }
	/** @brief Gets the value of LeaderPlatform_Optional, regardless of it having been set */
	const ERHAPI_Platform& GetLeaderPlatform() const { return LeaderPlatform_Optional; }
	/** @brief Gets the value of LeaderPlatform_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_Platform& GetLeaderPlatform(const ERHAPI_Platform& DefaultValue) const { if (LeaderPlatform_IsSet) return LeaderPlatform_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LeaderPlatform_Optional and returns true if it has been set, otherwise returns false */
	bool GetLeaderPlatform(ERHAPI_Platform& OutValue) const { if (LeaderPlatform_IsSet) OutValue = LeaderPlatform_Optional; return LeaderPlatform_IsSet; }
	/** @brief Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_Platform* GetLeaderPlatformOrNull() { if (LeaderPlatform_IsSet) return &LeaderPlatform_Optional; return nullptr; }
	/** @brief Returns a pointer to LeaderPlatform_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_Platform* GetLeaderPlatformOrNull() const { if (LeaderPlatform_IsSet) return &LeaderPlatform_Optional; return nullptr; }
	/** @brief Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true */
	void SetLeaderPlatform(const ERHAPI_Platform& NewValue) { LeaderPlatform_Optional = NewValue; LeaderPlatform_IsSet = true; }
	/** @brief Sets the value of LeaderPlatform_Optional and also sets LeaderPlatform_IsSet to true using move semantics */
	void SetLeaderPlatform(ERHAPI_Platform&& NewValue) { LeaderPlatform_Optional = NewValue; LeaderPlatform_IsSet = true; }
	 /** @brief Clears the value of LeaderPlatform_Optional and sets LeaderPlatform_IsSet to false */
	void ClearLeaderPlatform() { LeaderPlatform_IsSet = false; }

	/** @brief Platform user ID of the leader to link to.  If not provided, the leader will be found from the `scheme` and `credentials` */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString LeaderPlatformUserId_Optional{  };
	/** @brief true if LeaderPlatformUserId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LeaderPlatformUserId_IsSet{ false };
	/** @brief Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set */
	FString& GetLeaderPlatformUserId() { return LeaderPlatformUserId_Optional; }
	/** @brief Gets the value of LeaderPlatformUserId_Optional, regardless of it having been set */
	const FString& GetLeaderPlatformUserId() const { return LeaderPlatformUserId_Optional; }
	/** @brief Gets the value of LeaderPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetLeaderPlatformUserId(const FString& DefaultValue) const { if (LeaderPlatformUserId_IsSet) return LeaderPlatformUserId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LeaderPlatformUserId_Optional and returns true if it has been set, otherwise returns false */
	bool GetLeaderPlatformUserId(FString& OutValue) const { if (LeaderPlatformUserId_IsSet) OutValue = LeaderPlatformUserId_Optional; return LeaderPlatformUserId_IsSet; }
	/** @brief Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetLeaderPlatformUserIdOrNull() { if (LeaderPlatformUserId_IsSet) return &LeaderPlatformUserId_Optional; return nullptr; }
	/** @brief Returns a pointer to LeaderPlatformUserId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetLeaderPlatformUserIdOrNull() const { if (LeaderPlatformUserId_IsSet) return &LeaderPlatformUserId_Optional; return nullptr; }
	/** @brief Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true */
	void SetLeaderPlatformUserId(const FString& NewValue) { LeaderPlatformUserId_Optional = NewValue; LeaderPlatformUserId_IsSet = true; }
	/** @brief Sets the value of LeaderPlatformUserId_Optional and also sets LeaderPlatformUserId_IsSet to true using move semantics */
	void SetLeaderPlatformUserId(FString&& NewValue) { LeaderPlatformUserId_Optional = NewValue; LeaderPlatformUserId_IsSet = true; }
	 /** @brief Clears the value of LeaderPlatformUserId_Optional and sets LeaderPlatformUserId_IsSet to false */
	void ClearLeaderPlatformUserId() { LeaderPlatformUserId_IsSet = false; }

	/** @brief Platform of the follower to link.  If not provided, the follower will be found from the Authorization header's token */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Platform FollowerPlatform_Optional{  };
	/** @brief true if FollowerPlatform_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool FollowerPlatform_IsSet{ false };
	/** @brief Gets the value of FollowerPlatform_Optional, regardless of it having been set */
	ERHAPI_Platform& GetFollowerPlatform() { return FollowerPlatform_Optional; }
	/** @brief Gets the value of FollowerPlatform_Optional, regardless of it having been set */
	const ERHAPI_Platform& GetFollowerPlatform() const { return FollowerPlatform_Optional; }
	/** @brief Gets the value of FollowerPlatform_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_Platform& GetFollowerPlatform(const ERHAPI_Platform& DefaultValue) const { if (FollowerPlatform_IsSet) return FollowerPlatform_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of FollowerPlatform_Optional and returns true if it has been set, otherwise returns false */
	bool GetFollowerPlatform(ERHAPI_Platform& OutValue) const { if (FollowerPlatform_IsSet) OutValue = FollowerPlatform_Optional; return FollowerPlatform_IsSet; }
	/** @brief Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_Platform* GetFollowerPlatformOrNull() { if (FollowerPlatform_IsSet) return &FollowerPlatform_Optional; return nullptr; }
	/** @brief Returns a pointer to FollowerPlatform_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_Platform* GetFollowerPlatformOrNull() const { if (FollowerPlatform_IsSet) return &FollowerPlatform_Optional; return nullptr; }
	/** @brief Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true */
	void SetFollowerPlatform(const ERHAPI_Platform& NewValue) { FollowerPlatform_Optional = NewValue; FollowerPlatform_IsSet = true; }
	/** @brief Sets the value of FollowerPlatform_Optional and also sets FollowerPlatform_IsSet to true using move semantics */
	void SetFollowerPlatform(ERHAPI_Platform&& NewValue) { FollowerPlatform_Optional = NewValue; FollowerPlatform_IsSet = true; }
	 /** @brief Clears the value of FollowerPlatform_Optional and sets FollowerPlatform_IsSet to false */
	void ClearFollowerPlatform() { FollowerPlatform_IsSet = false; }

	/** @brief Platform user ID of the follower to link.  If not provided, the follower will be found from the Authorization header's token */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString FollowerPlatformUserId_Optional{  };
	/** @brief true if FollowerPlatformUserId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool FollowerPlatformUserId_IsSet{ false };
	/** @brief Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set */
	FString& GetFollowerPlatformUserId() { return FollowerPlatformUserId_Optional; }
	/** @brief Gets the value of FollowerPlatformUserId_Optional, regardless of it having been set */
	const FString& GetFollowerPlatformUserId() const { return FollowerPlatformUserId_Optional; }
	/** @brief Gets the value of FollowerPlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetFollowerPlatformUserId(const FString& DefaultValue) const { if (FollowerPlatformUserId_IsSet) return FollowerPlatformUserId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of FollowerPlatformUserId_Optional and returns true if it has been set, otherwise returns false */
	bool GetFollowerPlatformUserId(FString& OutValue) const { if (FollowerPlatformUserId_IsSet) OutValue = FollowerPlatformUserId_Optional; return FollowerPlatformUserId_IsSet; }
	/** @brief Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetFollowerPlatformUserIdOrNull() { if (FollowerPlatformUserId_IsSet) return &FollowerPlatformUserId_Optional; return nullptr; }
	/** @brief Returns a pointer to FollowerPlatformUserId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetFollowerPlatformUserIdOrNull() const { if (FollowerPlatformUserId_IsSet) return &FollowerPlatformUserId_Optional; return nullptr; }
	/** @brief Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true */
	void SetFollowerPlatformUserId(const FString& NewValue) { FollowerPlatformUserId_Optional = NewValue; FollowerPlatformUserId_IsSet = true; }
	/** @brief Sets the value of FollowerPlatformUserId_Optional and also sets FollowerPlatformUserId_IsSet to true using move semantics */
	void SetFollowerPlatformUserId(FString&& NewValue) { FollowerPlatformUserId_Optional = NewValue; FollowerPlatformUserId_IsSet = true; }
	 /** @brief Clears the value of FollowerPlatformUserId_Optional and sets FollowerPlatformUserId_IsSet to false */
	void ClearFollowerPlatformUserId() { FollowerPlatformUserId_IsSet = false; }

	/** @brief Scheme to use for the leader.  For most tokens, this will be `Bearer` */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Scheme_Optional{  };
	/** @brief true if Scheme_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Scheme_IsSet{ false };
	/** @brief Gets the value of Scheme_Optional, regardless of it having been set */
	FString& GetScheme() { return Scheme_Optional; }
	/** @brief Gets the value of Scheme_Optional, regardless of it having been set */
	const FString& GetScheme() const { return Scheme_Optional; }
	/** @brief Gets the value of Scheme_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetScheme(const FString& DefaultValue) const { if (Scheme_IsSet) return Scheme_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Scheme_Optional and returns true if it has been set, otherwise returns false */
	bool GetScheme(FString& OutValue) const { if (Scheme_IsSet) OutValue = Scheme_Optional; return Scheme_IsSet; }
	/** @brief Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr */
	FString* GetSchemeOrNull() { if (Scheme_IsSet) return &Scheme_Optional; return nullptr; }
	/** @brief Returns a pointer to Scheme_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetSchemeOrNull() const { if (Scheme_IsSet) return &Scheme_Optional; return nullptr; }
	/** @brief Sets the value of Scheme_Optional and also sets Scheme_IsSet to true */
	void SetScheme(const FString& NewValue) { Scheme_Optional = NewValue; Scheme_IsSet = true; }
	/** @brief Sets the value of Scheme_Optional and also sets Scheme_IsSet to true using move semantics */
	void SetScheme(FString&& NewValue) { Scheme_Optional = NewValue; Scheme_IsSet = true; }
	 /** @brief Clears the value of Scheme_Optional and sets Scheme_IsSet to false */
	void ClearScheme() { Scheme_IsSet = false; }

	/** @brief Credentials to use for the leader.  For most tokens, this will be the token itself. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Credentials_Optional{  };
	/** @brief true if Credentials_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Credentials_IsSet{ false };
	/** @brief Gets the value of Credentials_Optional, regardless of it having been set */
	FString& GetCredentials() { return Credentials_Optional; }
	/** @brief Gets the value of Credentials_Optional, regardless of it having been set */
	const FString& GetCredentials() const { return Credentials_Optional; }
	/** @brief Gets the value of Credentials_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetCredentials(const FString& DefaultValue) const { if (Credentials_IsSet) return Credentials_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Credentials_Optional and returns true if it has been set, otherwise returns false */
	bool GetCredentials(FString& OutValue) const { if (Credentials_IsSet) OutValue = Credentials_Optional; return Credentials_IsSet; }
	/** @brief Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr */
	FString* GetCredentialsOrNull() { if (Credentials_IsSet) return &Credentials_Optional; return nullptr; }
	/** @brief Returns a pointer to Credentials_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetCredentialsOrNull() const { if (Credentials_IsSet) return &Credentials_Optional; return nullptr; }
	/** @brief Sets the value of Credentials_Optional and also sets Credentials_IsSet to true */
	void SetCredentials(const FString& NewValue) { Credentials_Optional = NewValue; Credentials_IsSet = true; }
	/** @brief Sets the value of Credentials_Optional and also sets Credentials_IsSet to true using move semantics */
	void SetCredentials(FString&& NewValue) { Credentials_Optional = NewValue; Credentials_IsSet = true; }
	 /** @brief Clears the value of Credentials_Optional and sets Credentials_IsSet to false */
	void ClearCredentials() { Credentials_IsSet = false; }
};

/** @} */