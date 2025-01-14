---
title: RHAPI_PlayerPersonResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerPersonResponse`](#structFRHAPI__PlayerPersonResponse) | Response for getting a player&#39;s info.

## struct `FRHAPI_PlayerPersonResponse` <a id="structFRHAPI__PlayerPersonResponse"></a>

```
struct FRHAPI_PlayerPersonResponse
  : public FRHAPI_Model
```

Response for getting a player&#39;s info.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6) | Player UUID.
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc) | *DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e) | true if ActivePlayerId_Optional has been set to a value
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb) | Active player UUID, if the player has an active player.
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd) | true if ActivePlayerUuid_Optional has been set to a value
`public FGuid `[`PersonId`](#structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e) | Person ID.
`public FString `[`RoleId_Optional`](#structFRHAPI__PlayerPersonResponse_1a17b9eecd802abc7e2d9dea7b8715f1d4) | Role ID of the person, if available.
`public bool `[`RoleId_IsSet`](#structFRHAPI__PlayerPersonResponse_1a38bfe4967a766d285681f24cce2eca62) | true if RoleId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPersonResponse_1afc12973fb7a26385782fae13b652a33a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPersonResponse_1a8f323d9e8618c6ad2df277310f126381)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ac0797eba81f14452be1bb90dceed045d)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1afb40b9451934ac58f6ae0e6645e60957)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a820ab44ccf334526c874dfe032ae1179)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ad515494fd8fb4e76d8df145cea805a08)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1ac32c7ed277cfeaf2bd74a6ade3ab256e)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a3c88052c3284aa635bd15125c4a62c7c)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a94123983b25e78d680e03396d96bdd1f)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aa9eba9b71c3dd5a30964a8fe2aa95f4c)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a4e3e691f4f3775144b2d5c4ba7e9671e)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1add010132368e4eb97d9e1b1ff54b76dc)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a34f5f1e69a0dec41746f72af14a6aa54)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1ab95adc299c29eaf464d681629ac0f135)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1acd71370a08fcaa03039848ed645c2c15)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a19ad9813c879aff779d6ce0980e44769)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a2cf3a97116d00a6afee51dd794aead0d)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__PlayerPersonResponse_1ae9dedb7d6010ae53929c7d6e36d7488f)`() const` | Checks whether ActivePlayerId_Optional has been set.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a92505ca5028433a82b9f5837492208a4)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1af0343b5574a06c704fd6740a3be290b3)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a3f4e86774287abdf9dd276bc4720420c)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1a4292711273b879938241c714f1924cc5)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1a3d7e448bb7b147b88d4f8681678fc821)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aca41ca7015a9149ef82d8ab2763c027d)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a0005536a280a08f5c1c5e7368d6249ba)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__PlayerPersonResponse_1a40cd59e4ade4e758ec73fc488f616ac0)`() const` | Checks whether ActivePlayerUuid_Optional has been set.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1ae4bf0e4b7ec84cf44ab41a60745be5da)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1ad79bc15f561faafa8f534e4a1ae3b92f)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a35a4f7105803ece61ed04ad20ccb29b0)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a2b42e72a1a9775df4f065c704ae18dcc)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a13447a7966af6e871a089fb576881bda)`()` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a53f331e7cf646ed6d1867ec47a242a23)`() const` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a468f02e080ac923e7eff5b903714f720)`(const FString & DefaultValue) const` | Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a795e80b4c10ba64fda9f714128df6974)`(FString & OutValue) const` | Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1a035771070d7030db2f85d024fa04311a)`()` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1ac81948cd3edbe1f48a0ced2c033cd462)`() const` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a8ff2a899d7bb20917687024b5f6e93fa)`(const FString & NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.
`public inline void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a209f7147883acbde77d9715329bd3158)`(FString && NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.
`public inline void `[`ClearRoleId`](#structFRHAPI__PlayerPersonResponse_1a0e2d859a90de28ce4aa6bce422c66761)`()` | Clears the value of RoleId_Optional and sets RoleId_IsSet to false.
`public inline bool `[`IsRoleIdSet`](#structFRHAPI__PlayerPersonResponse_1a2cad8daa1a192c9602043e73967760e4)`() const` | Checks whether RoleId_Optional has been set.

### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a) <a id="structFRHAPI__PlayerPersonResponse_1a280f3f2e11117ce512ad294bb77b986a"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6) <a id="structFRHAPI__PlayerPersonResponse_1a7519b55e22e6a9c02dc80cbfc9d6b2f6"></a>

Player UUID.

#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc) <a id="structFRHAPI__PlayerPersonResponse_1a71d20d8453e439a2338a4796f4f7c9cc"></a>

*DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.

#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e) <a id="structFRHAPI__PlayerPersonResponse_1a1fe5e1c6848bc0efc3bf1a3c82357c9e"></a>

true if ActivePlayerId_Optional has been set to a value

#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb) <a id="structFRHAPI__PlayerPersonResponse_1a3dde1fe982714d74c0fd44719367decb"></a>

Active player UUID, if the player has an active player.

#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd) <a id="structFRHAPI__PlayerPersonResponse_1a7e4f80a38d2b12f0420786801305dffd"></a>

true if ActivePlayerUuid_Optional has been set to a value

#### `public FGuid `[`PersonId`](#structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e) <a id="structFRHAPI__PlayerPersonResponse_1a7c9c64673c5f4060541b705be6a68e4e"></a>

Person ID.

#### `public FString `[`RoleId_Optional`](#structFRHAPI__PlayerPersonResponse_1a17b9eecd802abc7e2d9dea7b8715f1d4) <a id="structFRHAPI__PlayerPersonResponse_1a17b9eecd802abc7e2d9dea7b8715f1d4"></a>

Role ID of the person, if available.

#### `public bool `[`RoleId_IsSet`](#structFRHAPI__PlayerPersonResponse_1a38bfe4967a766d285681f24cce2eca62) <a id="structFRHAPI__PlayerPersonResponse_1a38bfe4967a766d285681f24cce2eca62"></a>

true if RoleId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPersonResponse_1afc12973fb7a26385782fae13b652a33a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPersonResponse_1afc12973fb7a26385782fae13b652a33a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPersonResponse_1a8f323d9e8618c6ad2df277310f126381)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerPersonResponse_1a8f323d9e8618c6ad2df277310f126381"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ac0797eba81f14452be1bb90dceed045d)`()` <a id="structFRHAPI__PlayerPersonResponse_1ac0797eba81f14452be1bb90dceed045d"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1afb40b9451934ac58f6ae0e6645e60957)`() const` <a id="structFRHAPI__PlayerPersonResponse_1afb40b9451934ac58f6ae0e6645e60957"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a820ab44ccf334526c874dfe032ae1179)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a820ab44ccf334526c874dfe032ae1179"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ad515494fd8fb4e76d8df145cea805a08)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1ad515494fd8fb4e76d8df145cea805a08"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a5c9a8ada9783a0f385bc997745fdd9f2"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56)`()` <a id="structFRHAPI__PlayerPersonResponse_1ab1bdfbc107c2424b5062899491c5ad56"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1ac32c7ed277cfeaf2bd74a6ade3ab256e)`()` <a id="structFRHAPI__PlayerPersonResponse_1ac32c7ed277cfeaf2bd74a6ade3ab256e"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a3c88052c3284aa635bd15125c4a62c7c)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a3c88052c3284aa635bd15125c4a62c7c"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a94123983b25e78d680e03396d96bdd1f)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a94123983b25e78d680e03396d96bdd1f"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aa9eba9b71c3dd5a30964a8fe2aa95f4c)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1aa9eba9b71c3dd5a30964a8fe2aa95f4c"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a4e3e691f4f3775144b2d5c4ba7e9671e)`()` <a id="structFRHAPI__PlayerPersonResponse_1a4e3e691f4f3775144b2d5c4ba7e9671e"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1add010132368e4eb97d9e1b1ff54b76dc)`() const` <a id="structFRHAPI__PlayerPersonResponse_1add010132368e4eb97d9e1b1ff54b76dc"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a34f5f1e69a0dec41746f72af14a6aa54)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a34f5f1e69a0dec41746f72af14a6aa54"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a187cfe3d29b7eb69ae446035ac229f9f"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1ab95adc299c29eaf464d681629ac0f135)`()` <a id="structFRHAPI__PlayerPersonResponse_1ab95adc299c29eaf464d681629ac0f135"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1acd71370a08fcaa03039848ed645c2c15)`() const` <a id="structFRHAPI__PlayerPersonResponse_1acd71370a08fcaa03039848ed645c2c15"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a19ad9813c879aff779d6ce0980e44769)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a19ad9813c879aff779d6ce0980e44769"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a2cf3a97116d00a6afee51dd794aead0d)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a2cf3a97116d00a6afee51dd794aead0d"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)`()` <a id="structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__PlayerPersonResponse_1ae9dedb7d6010ae53929c7d6e36d7488f)`() const` <a id="structFRHAPI__PlayerPersonResponse_1ae9dedb7d6010ae53929c7d6e36d7488f"></a>

Checks whether ActivePlayerId_Optional has been set.

#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a7b9f33082c19d3b28c613a7dbfd8243e"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2)`()` <a id="structFRHAPI__PlayerPersonResponse_1a2b06fa3955a69ff033aa899285fe0cc2"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a92505ca5028433a82b9f5837492208a4)`()` <a id="structFRHAPI__PlayerPersonResponse_1a92505ca5028433a82b9f5837492208a4"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1af0343b5574a06c704fd6740a3be290b3)`() const` <a id="structFRHAPI__PlayerPersonResponse_1af0343b5574a06c704fd6740a3be290b3"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a3f4e86774287abdf9dd276bc4720420c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a3f4e86774287abdf9dd276bc4720420c"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1afcf0666d4223356e40602f728b72c17d"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1a4292711273b879938241c714f1924cc5)`()` <a id="structFRHAPI__PlayerPersonResponse_1a4292711273b879938241c714f1924cc5"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1a3d7e448bb7b147b88d4f8681678fc821)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a3d7e448bb7b147b88d4f8681678fc821"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aca41ca7015a9149ef82d8ab2763c027d)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1aca41ca7015a9149ef82d8ab2763c027d"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a0005536a280a08f5c1c5e7368d6249ba)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a0005536a280a08f5c1c5e7368d6249ba"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)`()` <a id="structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__PlayerPersonResponse_1a40cd59e4ade4e758ec73fc488f616ac0)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a40cd59e4ade4e758ec73fc488f616ac0"></a>

Checks whether ActivePlayerUuid_Optional has been set.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1ae4bf0e4b7ec84cf44ab41a60745be5da)`()` <a id="structFRHAPI__PlayerPersonResponse_1ae4bf0e4b7ec84cf44ab41a60745be5da"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1ad79bc15f561faafa8f534e4a1ae3b92f)`() const` <a id="structFRHAPI__PlayerPersonResponse_1ad79bc15f561faafa8f534e4a1ae3b92f"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a35a4f7105803ece61ed04ad20ccb29b0)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a35a4f7105803ece61ed04ad20ccb29b0"></a>

Sets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a2b42e72a1a9775df4f065c704ae18dcc)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a2b42e72a1a9775df4f065c704ae18dcc"></a>

Sets the value of PersonId using move semantics.

#### `public inline FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a13447a7966af6e871a089fb576881bda)`()` <a id="structFRHAPI__PlayerPersonResponse_1a13447a7966af6e871a089fb576881bda"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a53f331e7cf646ed6d1867ec47a242a23)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a53f331e7cf646ed6d1867ec47a242a23"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a468f02e080ac923e7eff5b903714f720)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a468f02e080ac923e7eff5b903714f720"></a>

Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a795e80b4c10ba64fda9f714128df6974)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a795e80b4c10ba64fda9f714128df6974"></a>

Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1a035771070d7030db2f85d024fa04311a)`()` <a id="structFRHAPI__PlayerPersonResponse_1a035771070d7030db2f85d024fa04311a"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1ac81948cd3edbe1f48a0ced2c033cd462)`() const` <a id="structFRHAPI__PlayerPersonResponse_1ac81948cd3edbe1f48a0ced2c033cd462"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a8ff2a899d7bb20917687024b5f6e93fa)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a8ff2a899d7bb20917687024b5f6e93fa"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.

#### `public inline void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a209f7147883acbde77d9715329bd3158)`(FString && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a209f7147883acbde77d9715329bd3158"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.

#### `public inline void `[`ClearRoleId`](#structFRHAPI__PlayerPersonResponse_1a0e2d859a90de28ce4aa6bce422c66761)`()` <a id="structFRHAPI__PlayerPersonResponse_1a0e2d859a90de28ce4aa6bce422c66761"></a>

Clears the value of RoleId_Optional and sets RoleId_IsSet to false.

#### `public inline bool `[`IsRoleIdSet`](#structFRHAPI__PlayerPersonResponse_1a2cad8daa1a192c9602043e73967760e4)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a2cad8daa1a192c9602043e73967760e4"></a>

Checks whether RoleId_Optional has been set.

