// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ClientSettings.h"
#include "Containers/Set.h"
#include "CrossplayPreferences.h"
#include "IntraSessionPermissions.h"
#include "SessionPlayerStatus.h"
#include "SessionPlayer.generated.h"

/** @defgroup RHAPI_SessionPlayer RallyHere API Model SessionPlayer
 *  @{
 */

/**
 * @brief A player resource in a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SessionPlayer : public FRHAPI_Model
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

	/** @brief Legacy id for this player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 PlayerId_Optional{ 0 };
	/** @brief true if PlayerId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlayerId_IsSet{ false };
	/** @brief Gets the value of PlayerId_Optional, regardless of it having been set */
	int32& GetPlayerId() { return PlayerId_Optional; }
	/** @brief Gets the value of PlayerId_Optional, regardless of it having been set */
	const int32& GetPlayerId() const { return PlayerId_Optional; }
	/** @brief Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetPlayerId(const int32& DefaultValue) const { if (PlayerId_IsSet) return PlayerId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlayerId(int32& OutValue) const { if (PlayerId_IsSet) OutValue = PlayerId_Optional; return PlayerId_IsSet; }
	/** @brief Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetPlayerIdOrNull() { if (PlayerId_IsSet) return (&PlayerId_Optional); return nullptr; }
	/** @brief Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetPlayerIdOrNull() const { if (PlayerId_IsSet) return (&PlayerId_Optional); return nullptr; }
	/** @brief Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true */
	void SetPlayerId(const int32& NewValue) { PlayerId_Optional = NewValue; PlayerId_IsSet = true;  }
	/** @brief Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics */
	void SetPlayerId(int32&& NewValue) { PlayerId_Optional = NewValue; PlayerId_IsSet = true;  }
	/** @brief Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false */
	void ClearPlayerId() { PlayerId_Optional = 0; PlayerId_IsSet = false;  }
	/** @brief Checks whether PlayerId_Optional has been set */
	bool IsPlayerIdSet() const { return PlayerId_IsSet; }
	/** @brief Returns true if PlayerId_Optional is set and matches the default value */
	bool IsPlayerIdDefaultValue() const { return PlayerId_IsSet && PlayerId_Optional == 0; }
	/** @brief Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true */
	void SetPlayerIdToDefault() { SetPlayerId(0); }

	/** @brief UUID for this player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PlayerUuid{  };
	/** @brief Gets the value of PlayerUuid */
	FGuid& GetPlayerUuid() { return PlayerUuid; }
	/** @brief Gets the value of PlayerUuid */
	const FGuid& GetPlayerUuid() const { return PlayerUuid; }
	/** @brief Sets the value of PlayerUuid */
	void SetPlayerUuid(const FGuid& NewValue) { PlayerUuid = NewValue;   }
	/** @brief Sets the value of PlayerUuid using move semantics */
	void SetPlayerUuid(FGuid&& NewValue) { PlayerUuid = NewValue;   }

	/** @brief Status of the player in the session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_SessionPlayerStatus Status{  };
	/** @brief Gets the value of Status */
	ERHAPI_SessionPlayerStatus& GetStatus() { return Status; }
	/** @brief Gets the value of Status */
	const ERHAPI_SessionPlayerStatus& GetStatus() const { return Status; }
	/** @brief Sets the value of Status */
	void SetStatus(const ERHAPI_SessionPlayerStatus& NewValue) { Status = NewValue;   }
	/** @brief Sets the value of Status using move semantics */
	void SetStatus(ERHAPI_SessionPlayerStatus&& NewValue) { Status = NewValue;   }

	/** @brief UUID of the player who sent this players invite, if any */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid InvitingPlayerUuid_Optional{  };
	/** @brief true if InvitingPlayerUuid_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InvitingPlayerUuid_IsSet{ false };
	/** @brief Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set */
	FGuid& GetInvitingPlayerUuid() { return InvitingPlayerUuid_Optional; }
	/** @brief Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set */
	const FGuid& GetInvitingPlayerUuid() const { return InvitingPlayerUuid_Optional; }
	/** @brief Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetInvitingPlayerUuid(const FGuid& DefaultValue) const { if (InvitingPlayerUuid_IsSet) return InvitingPlayerUuid_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false */
	bool GetInvitingPlayerUuid(FGuid& OutValue) const { if (InvitingPlayerUuid_IsSet) OutValue = InvitingPlayerUuid_Optional; return InvitingPlayerUuid_IsSet; }
	/** @brief Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetInvitingPlayerUuidOrNull() { if (InvitingPlayerUuid_IsSet) return (&InvitingPlayerUuid_Optional); return nullptr; }
	/** @brief Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetInvitingPlayerUuidOrNull() const { if (InvitingPlayerUuid_IsSet) return (&InvitingPlayerUuid_Optional); return nullptr; }
	/** @brief Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true */
	void SetInvitingPlayerUuid(const FGuid& NewValue) { InvitingPlayerUuid_Optional = NewValue; InvitingPlayerUuid_IsSet = true;  }
	/** @brief Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics */
	void SetInvitingPlayerUuid(FGuid&& NewValue) { InvitingPlayerUuid_Optional = NewValue; InvitingPlayerUuid_IsSet = true;  }
	/** @brief Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false */
	void ClearInvitingPlayerUuid() { InvitingPlayerUuid_IsSet = false;  }
	/** @brief Checks whether InvitingPlayerUuid_Optional has been set */
	bool IsInvitingPlayerUuidSet() const { return InvitingPlayerUuid_IsSet; }

	/** @brief The UUID of the session that this player was invited from */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString SourceSessionId_Optional{  };
	/** @brief true if SourceSessionId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool SourceSessionId_IsSet{ false };
	/** @brief Gets the value of SourceSessionId_Optional, regardless of it having been set */
	FString& GetSourceSessionId() { return SourceSessionId_Optional; }
	/** @brief Gets the value of SourceSessionId_Optional, regardless of it having been set */
	const FString& GetSourceSessionId() const { return SourceSessionId_Optional; }
	/** @brief Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetSourceSessionId(const FString& DefaultValue) const { if (SourceSessionId_IsSet) return SourceSessionId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false */
	bool GetSourceSessionId(FString& OutValue) const { if (SourceSessionId_IsSet) OutValue = SourceSessionId_Optional; return SourceSessionId_IsSet; }
	/** @brief Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetSourceSessionIdOrNull() { if (SourceSessionId_IsSet) return (&SourceSessionId_Optional); return nullptr; }
	/** @brief Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetSourceSessionIdOrNull() const { if (SourceSessionId_IsSet) return (&SourceSessionId_Optional); return nullptr; }
	/** @brief Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true */
	void SetSourceSessionId(const FString& NewValue) { SourceSessionId_Optional = NewValue; SourceSessionId_IsSet = true;  }
	/** @brief Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true using move semantics */
	void SetSourceSessionId(FString&& NewValue) { SourceSessionId_Optional = NewValue; SourceSessionId_IsSet = true;  }
	/** @brief Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false */
	void ClearSourceSessionId() { SourceSessionId_IsSet = false;  }
	/** @brief Checks whether SourceSessionId_Optional has been set */
	bool IsSourceSessionIdSet() const { return SourceSessionId_IsSet; }

	/** @brief player-defined custom data */
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

	/** @brief Product Client Version number.  Used for compatibility checking with other players and instances */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Version_Optional{  };
	/** @brief true if Version_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Version_IsSet{ false };
	/** @brief Gets the value of Version_Optional, regardless of it having been set */
	FString& GetVersion() { return Version_Optional; }
	/** @brief Gets the value of Version_Optional, regardless of it having been set */
	const FString& GetVersion() const { return Version_Optional; }
	/** @brief Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetVersion(const FString& DefaultValue) const { if (Version_IsSet) return Version_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false */
	bool GetVersion(FString& OutValue) const { if (Version_IsSet) OutValue = Version_Optional; return Version_IsSet; }
	/** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
	FString* GetVersionOrNull() { if (Version_IsSet) return (&Version_Optional); return nullptr; }
	/** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetVersionOrNull() const { if (Version_IsSet) return (&Version_Optional); return nullptr; }
	/** @brief Sets the value of Version_Optional and also sets Version_IsSet to true */
	void SetVersion(const FString& NewValue) { Version_Optional = NewValue; Version_IsSet = true;  }
	/** @brief Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics */
	void SetVersion(FString&& NewValue) { Version_Optional = NewValue; Version_IsSet = true;  }
	/** @brief Clears the value of Version_Optional and sets Version_IsSet to false */
	void ClearVersion() { Version_IsSet = false;  }
	/** @brief Checks whether Version_Optional has been set */
	bool IsVersionSet() const { return Version_IsSet; }

	/** @brief Which input type and platform the client is using */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_ClientSettings ClientSettings_Optional{  };
	/** @brief true if ClientSettings_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ClientSettings_IsSet{ false };
	/** @brief Gets the value of ClientSettings_Optional, regardless of it having been set */
	FRHAPI_ClientSettings& GetClientSettings() { return ClientSettings_Optional; }
	/** @brief Gets the value of ClientSettings_Optional, regardless of it having been set */
	const FRHAPI_ClientSettings& GetClientSettings() const { return ClientSettings_Optional; }
	/** @brief Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_ClientSettings& GetClientSettings(const FRHAPI_ClientSettings& DefaultValue) const { if (ClientSettings_IsSet) return ClientSettings_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false */
	bool GetClientSettings(FRHAPI_ClientSettings& OutValue) const { if (ClientSettings_IsSet) OutValue = ClientSettings_Optional; return ClientSettings_IsSet; }
	/** @brief Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_ClientSettings* GetClientSettingsOrNull() { if (ClientSettings_IsSet) return (&ClientSettings_Optional); return nullptr; }
	/** @brief Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_ClientSettings* GetClientSettingsOrNull() const { if (ClientSettings_IsSet) return (&ClientSettings_Optional); return nullptr; }
	/** @brief Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true */
	void SetClientSettings(const FRHAPI_ClientSettings& NewValue) { ClientSettings_Optional = NewValue; ClientSettings_IsSet = true;  }
	/** @brief Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics */
	void SetClientSettings(FRHAPI_ClientSettings&& NewValue) { ClientSettings_Optional = NewValue; ClientSettings_IsSet = true;  }
	/** @brief Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false */
	void ClearClientSettings() { ClientSettings_IsSet = false;  }
	/** @brief Checks whether ClientSettings_Optional has been set */
	bool IsClientSettingsSet() const { return ClientSettings_IsSet; }

	/** @brief Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_CrossplayPreferences CrossplayPreferences_Optional{  };
	/** @brief true if CrossplayPreferences_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CrossplayPreferences_IsSet{ false };
	/** @brief Gets the value of CrossplayPreferences_Optional, regardless of it having been set */
	FRHAPI_CrossplayPreferences& GetCrossplayPreferences() { return CrossplayPreferences_Optional; }
	/** @brief Gets the value of CrossplayPreferences_Optional, regardless of it having been set */
	const FRHAPI_CrossplayPreferences& GetCrossplayPreferences() const { return CrossplayPreferences_Optional; }
	/** @brief Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_CrossplayPreferences& GetCrossplayPreferences(const FRHAPI_CrossplayPreferences& DefaultValue) const { if (CrossplayPreferences_IsSet) return CrossplayPreferences_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false */
	bool GetCrossplayPreferences(FRHAPI_CrossplayPreferences& OutValue) const { if (CrossplayPreferences_IsSet) OutValue = CrossplayPreferences_Optional; return CrossplayPreferences_IsSet; }
	/** @brief Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_CrossplayPreferences* GetCrossplayPreferencesOrNull() { if (CrossplayPreferences_IsSet) return (&CrossplayPreferences_Optional); return nullptr; }
	/** @brief Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_CrossplayPreferences* GetCrossplayPreferencesOrNull() const { if (CrossplayPreferences_IsSet) return (&CrossplayPreferences_Optional); return nullptr; }
	/** @brief Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true */
	void SetCrossplayPreferences(const FRHAPI_CrossplayPreferences& NewValue) { CrossplayPreferences_Optional = NewValue; CrossplayPreferences_IsSet = true;  }
	/** @brief Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics */
	void SetCrossplayPreferences(FRHAPI_CrossplayPreferences&& NewValue) { CrossplayPreferences_Optional = NewValue; CrossplayPreferences_IsSet = true;  }
	/** @brief Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false */
	void ClearCrossplayPreferences() { CrossplayPreferences_IsSet = false;  }
	/** @brief Checks whether CrossplayPreferences_Optional has been set */
	bool IsCrossplayPreferencesSet() const { return CrossplayPreferences_IsSet; }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime Invited_Optional{  };
	/** @brief true if Invited_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Invited_IsSet{ false };
	/** @brief Gets the value of Invited_Optional, regardless of it having been set */
	FDateTime& GetInvited() { return Invited_Optional; }
	/** @brief Gets the value of Invited_Optional, regardless of it having been set */
	const FDateTime& GetInvited() const { return Invited_Optional; }
	/** @brief Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue */
	const FDateTime& GetInvited(const FDateTime& DefaultValue) const { if (Invited_IsSet) return Invited_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false */
	bool GetInvited(FDateTime& OutValue) const { if (Invited_IsSet) OutValue = Invited_Optional; return Invited_IsSet; }
	/** @brief Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr */
	FDateTime* GetInvitedOrNull() { if (Invited_IsSet) return (&Invited_Optional); return nullptr; }
	/** @brief Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr */
	const FDateTime* GetInvitedOrNull() const { if (Invited_IsSet) return (&Invited_Optional); return nullptr; }
	/** @brief Sets the value of Invited_Optional and also sets Invited_IsSet to true */
	void SetInvited(const FDateTime& NewValue) { Invited_Optional = NewValue; Invited_IsSet = true;  }
	/** @brief Sets the value of Invited_Optional and also sets Invited_IsSet to true using move semantics */
	void SetInvited(FDateTime&& NewValue) { Invited_Optional = NewValue; Invited_IsSet = true;  }
	/** @brief Clears the value of Invited_Optional and sets Invited_IsSet to false */
	void ClearInvited() { Invited_IsSet = false;  }
	/** @brief Checks whether Invited_Optional has been set */
	bool IsInvitedSet() const { return Invited_IsSet; }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime Joined_Optional{  };
	/** @brief true if Joined_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Joined_IsSet{ false };
	/** @brief Gets the value of Joined_Optional, regardless of it having been set */
	FDateTime& GetJoined() { return Joined_Optional; }
	/** @brief Gets the value of Joined_Optional, regardless of it having been set */
	const FDateTime& GetJoined() const { return Joined_Optional; }
	/** @brief Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue */
	const FDateTime& GetJoined(const FDateTime& DefaultValue) const { if (Joined_IsSet) return Joined_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false */
	bool GetJoined(FDateTime& OutValue) const { if (Joined_IsSet) OutValue = Joined_Optional; return Joined_IsSet; }
	/** @brief Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr */
	FDateTime* GetJoinedOrNull() { if (Joined_IsSet) return (&Joined_Optional); return nullptr; }
	/** @brief Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr */
	const FDateTime* GetJoinedOrNull() const { if (Joined_IsSet) return (&Joined_Optional); return nullptr; }
	/** @brief Sets the value of Joined_Optional and also sets Joined_IsSet to true */
	void SetJoined(const FDateTime& NewValue) { Joined_Optional = NewValue; Joined_IsSet = true;  }
	/** @brief Sets the value of Joined_Optional and also sets Joined_IsSet to true using move semantics */
	void SetJoined(FDateTime&& NewValue) { Joined_Optional = NewValue; Joined_IsSet = true;  }
	/** @brief Clears the value of Joined_Optional and sets Joined_IsSet to false */
	void ClearJoined() { Joined_IsSet = false;  }
	/** @brief Checks whether Joined_Optional has been set */
	bool IsJoinedSet() const { return Joined_IsSet; }

	/** @brief A list of intra session permissions granted to this specific player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TSet<ERHAPI_IntraSessionPermissions> SessionPermissions_Optional{  };
	/** @brief true if SessionPermissions_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool SessionPermissions_IsSet{ false };
	/** @brief Gets the value of SessionPermissions_Optional, regardless of it having been set */
	TSet<ERHAPI_IntraSessionPermissions>& GetSessionPermissions() { return SessionPermissions_Optional; }
	/** @brief Gets the value of SessionPermissions_Optional, regardless of it having been set */
	const TSet<ERHAPI_IntraSessionPermissions>& GetSessionPermissions() const { return SessionPermissions_Optional; }
	/** @brief Gets the value of SessionPermissions_Optional, if it has been set, otherwise it returns DefaultValue */
	const TSet<ERHAPI_IntraSessionPermissions>& GetSessionPermissions(const TSet<ERHAPI_IntraSessionPermissions>& DefaultValue) const { if (SessionPermissions_IsSet) return SessionPermissions_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of SessionPermissions_Optional and returns true if it has been set, otherwise returns false */
	bool GetSessionPermissions(TSet<ERHAPI_IntraSessionPermissions>& OutValue) const { if (SessionPermissions_IsSet) OutValue = SessionPermissions_Optional; return SessionPermissions_IsSet; }
	/** @brief Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr */
	TSet<ERHAPI_IntraSessionPermissions>* GetSessionPermissionsOrNull() { if (SessionPermissions_IsSet) return (&SessionPermissions_Optional); return nullptr; }
	/** @brief Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr */
	const TSet<ERHAPI_IntraSessionPermissions>* GetSessionPermissionsOrNull() const { if (SessionPermissions_IsSet) return (&SessionPermissions_Optional); return nullptr; }
	/** @brief Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true */
	void SetSessionPermissions(const TSet<ERHAPI_IntraSessionPermissions>& NewValue) { SessionPermissions_Optional = NewValue; SessionPermissions_IsSet = true;  }
	/** @brief Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true using move semantics */
	void SetSessionPermissions(TSet<ERHAPI_IntraSessionPermissions>&& NewValue) { SessionPermissions_Optional = NewValue; SessionPermissions_IsSet = true;  }
	/** @brief Clears the value of SessionPermissions_Optional and sets SessionPermissions_IsSet to false */
	void ClearSessionPermissions() { SessionPermissions_IsSet = false;  }
	/** @brief Checks whether SessionPermissions_Optional has been set */
	bool IsSessionPermissionsSet() const { return SessionPermissions_IsSet; }
};

/** @} */
