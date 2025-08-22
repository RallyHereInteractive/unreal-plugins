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
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a763dd4499ab71acfa0de1ad2d04325b5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1ae71b38862a1538ff5314effebe34a45e)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a23eeb64afac16843ad05d7c5af75fe37)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a3f4d715871b61c06b7a356146784f1e2)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a5821a6385ebbaceb0fe9939e29b874c4)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a37b74dd437cb7ea3df29ae0236ad60ec)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a144e8d7eaad51b3f149483c9b2980bd1)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a4a000b52167f57a221910ea1895d3186)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a93ac18a6056f0f3e6989d29514c8d047)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1abea6b657deb84c10e726a13f6ea95356)`()` | Gets the value of Status.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1afc4af58dd0d92694eecccc5cdaadf4a9)`() const` | Gets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1aec87678e856c8de49b1408212c7bd0fd)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a15a65acf106437bb77a1e98e7717bfa2)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a90673e9883b01a96ff7e296ba50518c3)`()` | Gets the value of TeamId.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a51caabdd7bab5efd9e85801bd4e42813)`() const` | Gets the value of TeamId.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a319c7498d30c9e08dfb43a5032945073)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1aea97d51b185bfb359a1c0fafa1e0da29)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a70f86a8e90c0201c6ce2efbc8be9e1be)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a4850397595404678fd416aec0058e767)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a97c0e98dbcce494e917c5274afd170bd)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a815ef43680df9ac93bcec65b182275b9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a9f216cba82259f787ee9cf6fb54738fd)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1ac6bee2c5f5d101bc12718def267c060d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a7f16a68381175889b4c89622e74433d2)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a8f47ca19c93722e2eac21b0cbff2984d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1aacb42fb044eeb8cda6d9c852aaae7a46)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateResponse_1a763dd4499ab71acfa0de1ad2d04325b5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a763dd4499ab71acfa0de1ad2d04325b5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1ae71b38862a1538ff5314effebe34a45e)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ae71b38862a1538ff5314effebe34a45e"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a23eeb64afac16843ad05d7c5af75fe37)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a23eeb64afac16843ad05d7c5af75fe37"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a3f4d715871b61c06b7a356146784f1e2)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a3f4d715871b61c06b7a356146784f1e2"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a5821a6385ebbaceb0fe9939e29b874c4)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a5821a6385ebbaceb0fe9939e29b874c4"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a37b74dd437cb7ea3df29ae0236ad60ec)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a37b74dd437cb7ea3df29ae0236ad60ec"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a144e8d7eaad51b3f149483c9b2980bd1)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a144e8d7eaad51b3f149483c9b2980bd1"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a4a000b52167f57a221910ea1895d3186)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a4a000b52167f57a221910ea1895d3186"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a93ac18a6056f0f3e6989d29514c8d047)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a93ac18a6056f0f3e6989d29514c8d047"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1abea6b657deb84c10e726a13f6ea95356)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1abea6b657deb84c10e726a13f6ea95356"></a>

Gets the value of Status.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1afc4af58dd0d92694eecccc5cdaadf4a9)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1afc4af58dd0d92694eecccc5cdaadf4a9"></a>

Gets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1aec87678e856c8de49b1408212c7bd0fd)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aec87678e856c8de49b1408212c7bd0fd"></a>

Sets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateResponse_1a15a65acf106437bb77a1e98e7717bfa2)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a15a65acf106437bb77a1e98e7717bfa2"></a>

Sets the value of Status using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a90673e9883b01a96ff7e296ba50518c3)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a90673e9883b01a96ff7e296ba50518c3"></a>

Gets the value of TeamId.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a51caabdd7bab5efd9e85801bd4e42813)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a51caabdd7bab5efd9e85801bd4e42813"></a>

Gets the value of TeamId.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a319c7498d30c9e08dfb43a5032945073)`(const int32 & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a319c7498d30c9e08dfb43a5032945073"></a>

Sets the value of TeamId.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1aea97d51b185bfb359a1c0fafa1e0da29)`(int32 && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aea97d51b185bfb359a1c0fafa1e0da29"></a>

Sets the value of TeamId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SessionPlayerUpdateResponse_1a70f86a8e90c0201c6ce2efbc8be9e1be)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a70f86a8e90c0201c6ce2efbc8be9e1be"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a4850397595404678fd416aec0058e767)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a4850397595404678fd416aec0058e767"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a97c0e98dbcce494e917c5274afd170bd)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a97c0e98dbcce494e917c5274afd170bd"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a815ef43680df9ac93bcec65b182275b9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a815ef43680df9ac93bcec65b182275b9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a9f216cba82259f787ee9cf6fb54738fd)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a9f216cba82259f787ee9cf6fb54738fd"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1ac6bee2c5f5d101bc12718def267c060d)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ac6bee2c5f5d101bc12718def267c060d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateResponse_1a7f16a68381175889b4c89622e74433d2)`() const` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a7f16a68381175889b4c89622e74433d2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a8f47ca19c93722e2eac21b0cbff2984d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a8f47ca19c93722e2eac21b0cbff2984d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1aacb42fb044eeb8cda6d9c852aaae7a46)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aacb42fb044eeb8cda6d9c852aaae7a46"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)`()` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

