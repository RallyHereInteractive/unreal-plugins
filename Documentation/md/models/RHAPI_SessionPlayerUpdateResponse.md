---
title: RHAPI_SessionPlayerUpdateResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionPlayerUpdateResponse`](#structFRHAPI__SessionPlayerUpdateResponse) | Response to a request to update a player in a session.

## struct `FRHAPI_SessionPlayerUpdateResponse` <a id="structFRHAPI__SessionPlayerUpdateResponse"></a>

```
struct FRHAPI_SessionPlayerUpdateResponse
  : public FRHAPI_Model
```

Response to a request to update a player in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__SessionPlayerUpdateResponse_1ad1366b614ec9bcf8718329a3f2305f20) | Player UUID of the player updated.
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a8cc5d4083ba7b6e109795fca95e78763) | true if PlayerUuid_Optional has been set to a value
`public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76) | Status of the player after the request is completed.
`public int32 `[`TeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a7e5d666f5988f2203a73e25f8b033134) | Which team the player joined.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1) | Resulting custom data about the player.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a37c2f6505971005b69b2c56c0dca6209)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a73fec1611e97811fe7c9bf4f75b2dc1c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1aaac919243d1c9ffb72862b00505d5f60)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a20d830a862dbaff5968b506e31b6f17e)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1ac10947100065d2b36e59e0e3d2b9b29e)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1ad961afa4053273c8cc1ce9445e51e99e)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a96ec4e1ed8869cba97a21d1ed45acde8)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a64bfe7770df37062af18bfddd53f31c1)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a0a8688de2aa66dcab14b24676ab2e69c)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a881297a0f9e402af6c0f58e5701e65fa)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a46b7e39e500974f858739678ab39a4f7)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818)`()` | Gets the value of Status.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a6e604666518dc1009c6d745926107b55)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1aa17a1434b0f7254b2557d772e9573d2e)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1ae2faf9ab39ec0885585ff09ce62498a8)`()` | Gets the value of TeamId.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a03837704e2df17be8a245f5d0f03b4c0)`() const` | Gets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a988ae935936bccbfc8d0acd0b73156fe)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a524ddc7ad430a0571ce4e653dc4d995e)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionPlayerUpdateResponse_1ae881dcd5ab62fc5c93009d42f7cda798)`() const` | Returns true if TeamId matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionPlayerUpdateResponse_1a29d5973e331400fbf99867e75eb17559)`()` | Sets the value of TeamId to its default
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a73dfe3c9b3b3ef5271eff5305bbe517b)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1aa41d34d793e5baafec31abcbc6b62e56)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a5e6ab2ceba035259409d8e994dfafa43)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__SessionPlayerUpdateResponse_1ad1366b614ec9bcf8718329a3f2305f20) <a id="structFRHAPI__SessionPlayerUpdateResponse_1ad1366b614ec9bcf8718329a3f2305f20"></a>

Player UUID of the player updated.

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a8cc5d4083ba7b6e109795fca95e78763) <a id="structFRHAPI__SessionPlayerUpdateResponse_1a8cc5d4083ba7b6e109795fca95e78763"></a>

true if PlayerUuid_Optional has been set to a value

#### `public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76) <a id="structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76"></a>

Status of the player after the request is completed.

#### `public int32 `[`TeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a7e5d666f5988f2203a73e25f8b033134) <a id="structFRHAPI__SessionPlayerUpdateResponse_1a7e5d666f5988f2203a73e25f8b033134"></a>

Which team the player joined.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1) <a id="structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1"></a>

Resulting custom data about the player.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1) <a id="structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a37c2f6505971005b69b2c56c0dca6209)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a37c2f6505971005b69b2c56c0dca6209"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a73fec1611e97811fe7c9bf4f75b2dc1c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a73fec1611e97811fe7c9bf4f75b2dc1c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1aaac919243d1c9ffb72862b00505d5f60)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aaac919243d1c9ffb72862b00505d5f60"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a20d830a862dbaff5968b506e31b6f17e)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a20d830a862dbaff5968b506e31b6f17e"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1ac10947100065d2b36e59e0e3d2b9b29e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ac10947100065d2b36e59e0e3d2b9b29e"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1ad961afa4053273c8cc1ce9445e51e99e)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ad961afa4053273c8cc1ce9445e51e99e"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a96ec4e1ed8869cba97a21d1ed45acde8)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a96ec4e1ed8869cba97a21d1ed45acde8"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a64bfe7770df37062af18bfddd53f31c1)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a64bfe7770df37062af18bfddd53f31c1"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a0a8688de2aa66dcab14b24676ab2e69c)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a0a8688de2aa66dcab14b24676ab2e69c"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a881297a0f9e402af6c0f58e5701e65fa)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a881297a0f9e402af6c0f58e5701e65fa"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a46b7e39e500974f858739678ab39a4f7)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a46b7e39e500974f858739678ab39a4f7"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818"></a>

Gets the value of Status.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a6e604666518dc1009c6d745926107b55)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a6e604666518dc1009c6d745926107b55"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1aa17a1434b0f7254b2557d772e9573d2e)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aa17a1434b0f7254b2557d772e9573d2e"></a>

Sets the value of Status using move semantics.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1ae2faf9ab39ec0885585ff09ce62498a8)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ae2faf9ab39ec0885585ff09ce62498a8"></a>

Gets the value of TeamId.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a03837704e2df17be8a245f5d0f03b4c0)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a03837704e2df17be8a245f5d0f03b4c0"></a>

Gets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a988ae935936bccbfc8d0acd0b73156fe)`(const int32 & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a988ae935936bccbfc8d0acd0b73156fe"></a>

Sets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a524ddc7ad430a0571ce4e653dc4d995e)`(int32 && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a524ddc7ad430a0571ce4e653dc4d995e"></a>

Sets the value of TeamId using move semantics.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionPlayerUpdateResponse_1ae881dcd5ab62fc5c93009d42f7cda798)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ae881dcd5ab62fc5c93009d42f7cda798"></a>

Returns true if TeamId matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionPlayerUpdateResponse_1a29d5973e331400fbf99867e75eb17559)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a29d5973e331400fbf99867e75eb17559"></a>

Sets the value of TeamId to its default

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a73dfe3c9b3b3ef5271eff5305bbe517b)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a73dfe3c9b3b3ef5271eff5305bbe517b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1aa41d34d793e5baafec31abcbc6b62e56)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aa41d34d793e5baafec31abcbc6b62e56"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionPlayerUpdateResponse_1a5e6ab2ceba035259409d8e994dfafa43)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a5e6ab2ceba035259409d8e994dfafa43"></a>

Checks whether CustomData_Optional has been set.

