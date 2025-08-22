---
title: RHAPI_PlatformUserResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformUserResponse`](#structFRHAPI__PlatformUserResponse) | Response for successfully creating a platform user.

## struct `FRHAPI_PlatformUserResponse` <a id="structFRHAPI__PlatformUserResponse"></a>

```
struct FRHAPI_PlatformUserResponse
  : public FRHAPI_Model
```

Response for successfully creating a platform user.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformUserResponse_1a726f48e174bf6a68a8540489134b9d94) | Platform to search/create with.
`public FString `[`PlatformUserId`](#structFRHAPI__PlatformUserResponse_1a55f1404bd69e29874fc645d89c6176f7) | Platform user ID to search/create with.
`public FString `[`DisplayName_Optional`](#structFRHAPI__PlatformUserResponse_1a3f16e07fab354e8a5ba7dcd51c29a5f7) | Platform Display name.
`public bool `[`DisplayName_IsSet`](#structFRHAPI__PlatformUserResponse_1a4868cecc8bcb5b886c8ff732d1cb2cb2) | true if DisplayName_Optional has been set to a value
`public int32 `[`PlayerId`](#structFRHAPI__PlatformUserResponse_1aabf7a11cd8f9ed3ea446bba465afacfe) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformUserResponse_1af7980a903417502d4689d106ea3763d1) | Player UUID.
`public FGuid `[`PersonId`](#structFRHAPI__PlatformUserResponse_1a2a03597a3a43e59ff7f32ace9d82aaa2) | Person ID.
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlatformUserResponse_1a884999cb95f6c5600b08ddd7bb10f9fd) | *DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlatformUserResponse_1a9c034f207e9f821bab3bb304121dc759) | true if ActivePlayerId_Optional has been set to a value
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlatformUserResponse_1a3c1b8038c0d17def6ed1b427052a5f59) | Active player UUID, if the player has an active player.
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlatformUserResponse_1a968d6667a7ba19495696a298e831abda) | true if ActivePlayerUuid_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserResponse_1a44a8104467f51ee4e94b2f7f66de9f47)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserResponse_1a902f0a857b19b2b56d63c69250aa1b45)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a38dd112b8dfddfb8d9e6dce17da74697)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a33eaa6199526a2527544dbbf6a7b0b52)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1afd209d2e9a441975c51f39ceba71047b)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1a6de6b33572643e8d04b5c56e1c7e9c1f)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a44916c0da551ab7ad128c46350e8483b)`()` | Gets the value of PlatformUserId.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a6c52ce3720dd3ba77567a28bf9a8eb0b)`() const` | Gets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a290c17af0ac852f8a53985b23ed64de7)`(const FString & NewValue)` | Sets the value of PlatformUserId.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a61c402a9a77618d2d7afbe1568930a96)`(FString && NewValue)` | Sets the value of PlatformUserId using move semantics.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a58f0e0ea126f71ef0b231c8da3c4f547)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a0727769630cc77c230fe466f7a26fb84)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a60b5eb21a4e1321802ef1b687974ca4c)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a37652247f2af64391304487585f6d021)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a437440fcf5791ff114054f8d21c37b88)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a4602acc04b6e8e3733bdaeb9f922c0f7)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a305e214eea536b94ed65b41dd1cdf606)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1acea0b0cdc49c375d43a71095bc4464b3)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a5b2291c3a4d9ee1d526b2f794b45bc04)`()` | Gets the value of PlayerId.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a6aacd0fa8e8a7e0b6a1bb48c4d7c750f)`() const` | Gets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1a7cbbdf142905b437f6f6d322e69d9b15)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1a9c376e0940c1d93b0197a3512708e71a)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlatformUserResponse_1ae4ac18f6d112af335c5ff193c5b6c684)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a6a617a3eeef9a389552d04e7419b9ccb)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a3a1c76cff19c0f244690ad5cb514eee0)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a8124b18ba0724473531ebcd810b0fd35)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ad29e06af922bd6d4dd79b289a3c85328)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1ae820bd48aee05e56e738ce4f96ac95f7)`()` | Gets the value of PersonId.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1adf14373382a4827cb48f7b2d8165df85)`() const` | Gets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1aabe8455ff95f565eaf4b63304835bdcc)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1a3cf320f7882a901735abf4fa9bd01d22)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a2127c49ea242d0334411409a88922aad)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ad5eaf6af84fcb4371a59e5a9ec14a9f1)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a384ffb45fba9a024629a4b335e4869cb)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ad5fe6faf67c917ec7b15290f9746390d)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a6f16df3ed9ee803c3beddc85fd28a633)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1ad41c2d7fe4ecccd26dafcde06f1ea887)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a99018187cb9930448e9323b6d3ae6e8b)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a06b6d48f652b3fb2ecb26a582ad6eb9c)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a0fd19e03b1a1cdafff3f6455a958a14d)`()` | Returns the default value of ActivePlayerId.
`public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a8d21b9d729cccfb37b6742ffc565a987)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a4e2e0fea4c371c664fb313a7107aafce)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a8c93a6f250d34d91b5597d6425669f6e)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a913414f240148208a91fb5cdee92362c)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a589aaef3541467dbd58fa2ece4f5713a)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a3aa25092982516bf618609f0d5659c78)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a47ccb8c91e674e7e68766df6ccfead68)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a43ca736b5a033874bdb4cb38cfafa823)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformUserResponse_1a726f48e174bf6a68a8540489134b9d94) <a id="structFRHAPI__PlatformUserResponse_1a726f48e174bf6a68a8540489134b9d94"></a>

Platform to search/create with.

#### `public FString `[`PlatformUserId`](#structFRHAPI__PlatformUserResponse_1a55f1404bd69e29874fc645d89c6176f7) <a id="structFRHAPI__PlatformUserResponse_1a55f1404bd69e29874fc645d89c6176f7"></a>

Platform user ID to search/create with.

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__PlatformUserResponse_1a3f16e07fab354e8a5ba7dcd51c29a5f7) <a id="structFRHAPI__PlatformUserResponse_1a3f16e07fab354e8a5ba7dcd51c29a5f7"></a>

Platform Display name.

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__PlatformUserResponse_1a4868cecc8bcb5b886c8ff732d1cb2cb2) <a id="structFRHAPI__PlatformUserResponse_1a4868cecc8bcb5b886c8ff732d1cb2cb2"></a>

true if DisplayName_Optional has been set to a value

#### `public int32 `[`PlayerId`](#structFRHAPI__PlatformUserResponse_1aabf7a11cd8f9ed3ea446bba465afacfe) <a id="structFRHAPI__PlatformUserResponse_1aabf7a11cd8f9ed3ea446bba465afacfe"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformUserResponse_1af7980a903417502d4689d106ea3763d1) <a id="structFRHAPI__PlatformUserResponse_1af7980a903417502d4689d106ea3763d1"></a>

Player UUID.

#### `public FGuid `[`PersonId`](#structFRHAPI__PlatformUserResponse_1a2a03597a3a43e59ff7f32ace9d82aaa2) <a id="structFRHAPI__PlatformUserResponse_1a2a03597a3a43e59ff7f32ace9d82aaa2"></a>

Person ID.

#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PlatformUserResponse_1a884999cb95f6c5600b08ddd7bb10f9fd) <a id="structFRHAPI__PlatformUserResponse_1a884999cb95f6c5600b08ddd7bb10f9fd"></a>

*DEPRECATED* use `active_player_uuid` instead. Active player ID, if the player has an active player.

#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PlatformUserResponse_1a9c034f207e9f821bab3bb304121dc759) <a id="structFRHAPI__PlatformUserResponse_1a9c034f207e9f821bab3bb304121dc759"></a>

true if ActivePlayerId_Optional has been set to a value

#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__PlatformUserResponse_1a3c1b8038c0d17def6ed1b427052a5f59) <a id="structFRHAPI__PlatformUserResponse_1a3c1b8038c0d17def6ed1b427052a5f59"></a>

Active player UUID, if the player has an active player.

#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__PlatformUserResponse_1a968d6667a7ba19495696a298e831abda) <a id="structFRHAPI__PlatformUserResponse_1a968d6667a7ba19495696a298e831abda"></a>

true if ActivePlayerUuid_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformUserResponse_1a44a8104467f51ee4e94b2f7f66de9f47)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformUserResponse_1a44a8104467f51ee4e94b2f7f66de9f47"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformUserResponse_1a902f0a857b19b2b56d63c69250aa1b45)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformUserResponse_1a902f0a857b19b2b56d63c69250aa1b45"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a38dd112b8dfddfb8d9e6dce17da74697)`()` <a id="structFRHAPI__PlatformUserResponse_1a38dd112b8dfddfb8d9e6dce17da74697"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformUserResponse_1a33eaa6199526a2527544dbbf6a7b0b52)`() const` <a id="structFRHAPI__PlatformUserResponse_1a33eaa6199526a2527544dbbf6a7b0b52"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1afd209d2e9a441975c51f39ceba71047b)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1afd209d2e9a441975c51f39ceba71047b"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformUserResponse_1a6de6b33572643e8d04b5c56e1c7e9c1f)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a6de6b33572643e8d04b5c56e1c7e9c1f"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a44916c0da551ab7ad128c46350e8483b)`()` <a id="structFRHAPI__PlatformUserResponse_1a44916c0da551ab7ad128c46350e8483b"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a6c52ce3720dd3ba77567a28bf9a8eb0b)`() const` <a id="structFRHAPI__PlatformUserResponse_1a6c52ce3720dd3ba77567a28bf9a8eb0b"></a>

Gets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a290c17af0ac852f8a53985b23ed64de7)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a290c17af0ac852f8a53985b23ed64de7"></a>

Sets the value of PlatformUserId.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__PlatformUserResponse_1a61c402a9a77618d2d7afbe1568930a96)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a61c402a9a77618d2d7afbe1568930a96"></a>

Sets the value of PlatformUserId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a58f0e0ea126f71ef0b231c8da3c4f547)`()` <a id="structFRHAPI__PlatformUserResponse_1a58f0e0ea126f71ef0b231c8da3c4f547"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a0727769630cc77c230fe466f7a26fb84)`() const` <a id="structFRHAPI__PlatformUserResponse_1a0727769630cc77c230fe466f7a26fb84"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a60b5eb21a4e1321802ef1b687974ca4c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a60b5eb21a4e1321802ef1b687974ca4c"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__PlatformUserResponse_1a37652247f2af64391304487585f6d021)`(FString & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1a37652247f2af64391304487585f6d021"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a437440fcf5791ff114054f8d21c37b88)`()` <a id="structFRHAPI__PlatformUserResponse_1a437440fcf5791ff114054f8d21c37b88"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlatformUserResponse_1a4602acc04b6e8e3733bdaeb9f922c0f7)`() const` <a id="structFRHAPI__PlatformUserResponse_1a4602acc04b6e8e3733bdaeb9f922c0f7"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1a305e214eea536b94ed65b41dd1cdf606)`(const FString & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a305e214eea536b94ed65b41dd1cdf606"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlatformUserResponse_1acea0b0cdc49c375d43a71095bc4464b3)`(FString && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1acea0b0cdc49c375d43a71095bc4464b3"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff)`()` <a id="structFRHAPI__PlatformUserResponse_1a867c074fe63e383a69916ce2496f65ff"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a5b2291c3a4d9ee1d526b2f794b45bc04)`()` <a id="structFRHAPI__PlatformUserResponse_1a5b2291c3a4d9ee1d526b2f794b45bc04"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlatformUserResponse_1a6aacd0fa8e8a7e0b6a1bb48c4d7c750f)`() const` <a id="structFRHAPI__PlatformUserResponse_1a6aacd0fa8e8a7e0b6a1bb48c4d7c750f"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1a7cbbdf142905b437f6f6d322e69d9b15)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a7cbbdf142905b437f6f6d322e69d9b15"></a>

Sets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlatformUserResponse_1a9c376e0940c1d93b0197a3512708e71a)`(int32 && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a9c376e0940c1d93b0197a3512708e71a"></a>

Sets the value of PlayerId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlatformUserResponse_1ae4ac18f6d112af335c5ff193c5b6c684)`()` <a id="structFRHAPI__PlatformUserResponse_1ae4ac18f6d112af335c5ff193c5b6c684"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a6a617a3eeef9a389552d04e7419b9ccb)`()` <a id="structFRHAPI__PlatformUserResponse_1a6a617a3eeef9a389552d04e7419b9ccb"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a3a1c76cff19c0f244690ad5cb514eee0)`() const` <a id="structFRHAPI__PlatformUserResponse_1a3a1c76cff19c0f244690ad5cb514eee0"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1a8124b18ba0724473531ebcd810b0fd35)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a8124b18ba0724473531ebcd810b0fd35"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformUserResponse_1ad29e06af922bd6d4dd79b289a3c85328)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1ad29e06af922bd6d4dd79b289a3c85328"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1ae820bd48aee05e56e738ce4f96ac95f7)`()` <a id="structFRHAPI__PlatformUserResponse_1ae820bd48aee05e56e738ce4f96ac95f7"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PlatformUserResponse_1adf14373382a4827cb48f7b2d8165df85)`() const` <a id="structFRHAPI__PlatformUserResponse_1adf14373382a4827cb48f7b2d8165df85"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1aabe8455ff95f565eaf4b63304835bdcc)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1aabe8455ff95f565eaf4b63304835bdcc"></a>

Sets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PlatformUserResponse_1a3cf320f7882a901735abf4fa9bd01d22)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a3cf320f7882a901735abf4fa9bd01d22"></a>

Sets the value of PersonId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a2127c49ea242d0334411409a88922aad)`()` <a id="structFRHAPI__PlatformUserResponse_1a2127c49ea242d0334411409a88922aad"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ad5eaf6af84fcb4371a59e5a9ec14a9f1)`() const` <a id="structFRHAPI__PlatformUserResponse_1ad5eaf6af84fcb4371a59e5a9ec14a9f1"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a384ffb45fba9a024629a4b335e4869cb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a384ffb45fba9a024629a4b335e4869cb"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1ad5fe6faf67c917ec7b15290f9746390d)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1ad5fe6faf67c917ec7b15290f9746390d"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1a6f16df3ed9ee803c3beddc85fd28a633)`()` <a id="structFRHAPI__PlatformUserResponse_1a6f16df3ed9ee803c3beddc85fd28a633"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PlatformUserResponse_1ad41c2d7fe4ecccd26dafcde06f1ea887)`() const` <a id="structFRHAPI__PlatformUserResponse_1ad41c2d7fe4ecccd26dafcde06f1ea887"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a99018187cb9930448e9323b6d3ae6e8b)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a99018187cb9930448e9323b6d3ae6e8b"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a06b6d48f652b3fb2ecb26a582ad6eb9c)`(int32 && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a06b6d48f652b3fb2ecb26a582ad6eb9c"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5)`()` <a id="structFRHAPI__PlatformUserResponse_1afb84ba974117532705d640d3f9d8eaf5"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__PlatformUserResponse_1a0fd19e03b1a1cdafff3f6455a958a14d)`()` <a id="structFRHAPI__PlatformUserResponse_1a0fd19e03b1a1cdafff3f6455a958a14d"></a>

Returns the default value of ActivePlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a8d21b9d729cccfb37b6742ffc565a987)`()` <a id="structFRHAPI__PlatformUserResponse_1a8d21b9d729cccfb37b6742ffc565a987"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a4e2e0fea4c371c664fb313a7107aafce)`() const` <a id="structFRHAPI__PlatformUserResponse_1a4e2e0fea4c371c664fb313a7107aafce"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a8c93a6f250d34d91b5597d6425669f6e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlatformUserResponse_1a8c93a6f250d34d91b5597d6425669f6e"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a913414f240148208a91fb5cdee92362c)`(FGuid & OutValue) const` <a id="structFRHAPI__PlatformUserResponse_1a913414f240148208a91fb5cdee92362c"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a589aaef3541467dbd58fa2ece4f5713a)`()` <a id="structFRHAPI__PlatformUserResponse_1a589aaef3541467dbd58fa2ece4f5713a"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__PlatformUserResponse_1a3aa25092982516bf618609f0d5659c78)`() const` <a id="structFRHAPI__PlatformUserResponse_1a3aa25092982516bf618609f0d5659c78"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a47ccb8c91e674e7e68766df6ccfead68)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a47ccb8c91e674e7e68766df6ccfead68"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1a43ca736b5a033874bdb4cb38cfafa823)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformUserResponse_1a43ca736b5a033874bdb4cb38cfafa823"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0)`()` <a id="structFRHAPI__PlatformUserResponse_1ac732875511b55956fcd144638593c3f0"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

