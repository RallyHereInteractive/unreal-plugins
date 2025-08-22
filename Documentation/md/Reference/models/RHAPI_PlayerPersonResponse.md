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
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a0ee3861ea9e13544b107a9bf07d6ae9b)`()` | Gets the value of PlayerId.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a61baff98abf01b8c0121a47b55942724)`() const` | Gets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1aaddeafddbb5ef7f613f88694a88faae8)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ae4b43c402c9a624b0caea89564cae01d)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerPersonResponse_1a66dc98991086670cde23af40690461c6)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aa559a67d229be8122874bb7a8f944b67)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a1410dcce808f78008ac8b98263639b11)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a07f8507a98d9b506f03f700e24e2179d)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a5e52508cf938f830cc5c842d71b1ab02)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1ab61e2724d4224629eca3833479070edb)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1ab26e3efbd25974fa68eb590358452f9e)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a4d6ad51e0a14bd2280a06f393a10a9b0)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1adfd569f945f1f2e938ff6abc9852253e)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1aa2ab9790522baf7bbb5adbc9e4e474b7)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1a59020ed8474284e2d0c09e5ccce0a3c1)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a6c0ff38d1e33278affd899e67cc42166)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a64c4e8b47894ac37e8aec63fa18853f2)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1ac8b7314a1028ff97a20c453681e735b0)`()` | Returns the default value of ActivePlayerId.
`public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a864de56bbe08998c16f968a21874991c)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aca01bf456a3adec943c9b05a9fd56352)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a1b3264be49ef0d491d80b95d7d0fe8f5)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a5cc11809a6f5044649bd148777c368fe)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1aa14b848fe322ebd96a6389319a37517c)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1a9fa3902849628351b10f945a2f3036f0)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a7878af7742db03618802d68cc0e048a7)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a6baa755505d90ed9dd6ba1d144a19a2c)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1aa6729073ac303cb136d87a4216738040)`()` | Gets the value of PersonId.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1a612caf5da643ce90553f3d6cfb70265f)`() const` | Gets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a53e05c8fcb7bf5a452cc47eb2a148251)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1ad6c2de58f125bea5850f639f02a99ba0)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FORCEINLINE FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1acf34943d733f4bf0844f6a5eed683307)`()` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a7c80cb2b8981ec0eaf88ed992d735944)`() const` | Gets the value of RoleId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1af3daefcaf75a03dc460bc619f4a1b430)`(const FString & DefaultValue) const` | Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a3e55c296a842b364e89a640ee88a2441)`(FString & OutValue) const` | Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1ae943854f3f296fffd2b66ef7e81e841b)`()` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1aa89504eb41d1df6c94767d052750c46a)`() const` | Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a231682778ea17716ed7f3a03bc1d23cd)`(const FString & NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.
`public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a8267a73263ba303936c07fa7a9371453)`(FString && NewValue)` | Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.
`public inline void `[`ClearRoleId`](#structFRHAPI__PlayerPersonResponse_1a0e2d859a90de28ce4aa6bce422c66761)`()` | Clears the value of RoleId_Optional and sets RoleId_IsSet to false.

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

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a0ee3861ea9e13544b107a9bf07d6ae9b)`()` <a id="structFRHAPI__PlayerPersonResponse_1a0ee3861ea9e13544b107a9bf07d6ae9b"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPersonResponse_1a61baff98abf01b8c0121a47b55942724)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a61baff98abf01b8c0121a47b55942724"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1aaddeafddbb5ef7f613f88694a88faae8)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1aaddeafddbb5ef7f613f88694a88faae8"></a>

Sets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPersonResponse_1ae4b43c402c9a624b0caea89564cae01d)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1ae4b43c402c9a624b0caea89564cae01d"></a>

Sets the value of PlayerId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerPersonResponse_1a66dc98991086670cde23af40690461c6)`()` <a id="structFRHAPI__PlayerPersonResponse_1a66dc98991086670cde23af40690461c6"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aa559a67d229be8122874bb7a8f944b67)`()` <a id="structFRHAPI__PlayerPersonResponse_1aa559a67d229be8122874bb7a8f944b67"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a1410dcce808f78008ac8b98263639b11)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a1410dcce808f78008ac8b98263639b11"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a07f8507a98d9b506f03f700e24e2179d)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a07f8507a98d9b506f03f700e24e2179d"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a5e52508cf938f830cc5c842d71b1ab02)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a5e52508cf938f830cc5c842d71b1ab02"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1ab61e2724d4224629eca3833479070edb)`()` <a id="structFRHAPI__PlayerPersonResponse_1ab61e2724d4224629eca3833479070edb"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1ab26e3efbd25974fa68eb590358452f9e)`() const` <a id="structFRHAPI__PlayerPersonResponse_1ab26e3efbd25974fa68eb590358452f9e"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a4d6ad51e0a14bd2280a06f393a10a9b0)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a4d6ad51e0a14bd2280a06f393a10a9b0"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1adfd569f945f1f2e938ff6abc9852253e)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1adfd569f945f1f2e938ff6abc9852253e"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1aa2ab9790522baf7bbb5adbc9e4e474b7)`()` <a id="structFRHAPI__PlayerPersonResponse_1aa2ab9790522baf7bbb5adbc9e4e474b7"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlayerPersonResponse_1a59020ed8474284e2d0c09e5ccce0a3c1)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a59020ed8474284e2d0c09e5ccce0a3c1"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a6c0ff38d1e33278affd899e67cc42166)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a6c0ff38d1e33278affd899e67cc42166"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a64c4e8b47894ac37e8aec63fa18853f2)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a64c4e8b47894ac37e8aec63fa18853f2"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a)`()` <a id="structFRHAPI__PlayerPersonResponse_1a52911bca3d1c286aa9c49fa76861047a"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__PlayerPersonResponse_1ac8b7314a1028ff97a20c453681e735b0)`()` <a id="structFRHAPI__PlayerPersonResponse_1ac8b7314a1028ff97a20c453681e735b0"></a>

Returns the default value of ActivePlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a864de56bbe08998c16f968a21874991c)`()` <a id="structFRHAPI__PlayerPersonResponse_1a864de56bbe08998c16f968a21874991c"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1aca01bf456a3adec943c9b05a9fd56352)`() const` <a id="structFRHAPI__PlayerPersonResponse_1aca01bf456a3adec943c9b05a9fd56352"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a1b3264be49ef0d491d80b95d7d0fe8f5)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a1b3264be49ef0d491d80b95d7d0fe8f5"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a5cc11809a6f5044649bd148777c368fe)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a5cc11809a6f5044649bd148777c368fe"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1aa14b848fe322ebd96a6389319a37517c)`()` <a id="structFRHAPI__PlayerPersonResponse_1aa14b848fe322ebd96a6389319a37517c"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlayerPersonResponse_1a9fa3902849628351b10f945a2f3036f0)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a9fa3902849628351b10f945a2f3036f0"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a7878af7742db03618802d68cc0e048a7)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a7878af7742db03618802d68cc0e048a7"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a6baa755505d90ed9dd6ba1d144a19a2c)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a6baa755505d90ed9dd6ba1d144a19a2c"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235)`()` <a id="structFRHAPI__PlayerPersonResponse_1a4d3688ff68e789bac4d134e5781e3235"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1aa6729073ac303cb136d87a4216738040)`()` <a id="structFRHAPI__PlayerPersonResponse_1aa6729073ac303cb136d87a4216738040"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PlayerPersonResponse_1a612caf5da643ce90553f3d6cfb70265f)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a612caf5da643ce90553f3d6cfb70265f"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1a53e05c8fcb7bf5a452cc47eb2a148251)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a53e05c8fcb7bf5a452cc47eb2a148251"></a>

Sets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlayerPersonResponse_1ad6c2de58f125bea5850f639f02a99ba0)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1ad6c2de58f125bea5850f639f02a99ba0"></a>

Sets the value of PersonId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1acf34943d733f4bf0844f6a5eed683307)`()` <a id="structFRHAPI__PlayerPersonResponse_1acf34943d733f4bf0844f6a5eed683307"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a7c80cb2b8981ec0eaf88ed992d735944)`() const` <a id="structFRHAPI__PlayerPersonResponse_1a7c80cb2b8981ec0eaf88ed992d735944"></a>

Gets the value of RoleId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1af3daefcaf75a03dc460bc619f4a1b430)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPersonResponse_1af3daefcaf75a03dc460bc619f4a1b430"></a>

Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRoleId`](#structFRHAPI__PlayerPersonResponse_1a3e55c296a842b364e89a640ee88a2441)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPersonResponse_1a3e55c296a842b364e89a640ee88a2441"></a>

Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1ae943854f3f296fffd2b66ef7e81e841b)`()` <a id="structFRHAPI__PlayerPersonResponse_1ae943854f3f296fffd2b66ef7e81e841b"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRoleIdOrNull`](#structFRHAPI__PlayerPersonResponse_1aa89504eb41d1df6c94767d052750c46a)`() const` <a id="structFRHAPI__PlayerPersonResponse_1aa89504eb41d1df6c94767d052750c46a"></a>

Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a231682778ea17716ed7f3a03bc1d23cd)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a231682778ea17716ed7f3a03bc1d23cd"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__PlayerPersonResponse_1a8267a73263ba303936c07fa7a9371453)`(FString && NewValue)` <a id="structFRHAPI__PlayerPersonResponse_1a8267a73263ba303936c07fa7a9371453"></a>

Sets the value of RoleId_Optional and also sets RoleId_IsSet to true using move semantics.

#### `public inline void `[`ClearRoleId`](#structFRHAPI__PlayerPersonResponse_1a0e2d859a90de28ce4aa6bce422c66761)`()` <a id="structFRHAPI__PlayerPersonResponse_1a0e2d859a90de28ce4aa6bce422c66761"></a>

Clears the value of RoleId_Optional and sets RoleId_IsSet to false.

