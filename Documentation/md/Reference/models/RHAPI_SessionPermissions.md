---
title: RHAPI_SessionPermissions
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionPermissions`](#structFRHAPI__SessionPermissions) | 

## struct `FRHAPI_SessionPermissions` <a id="structFRHAPI__SessionPermissions"></a>

```
struct FRHAPI_SessionPermissions
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__SessionPermissions_1a4df4cd5c674c9840e61d7b8e7e88a2a6) | Unique identifier for this player.
`public TSet< ERHAPI_IntraSessionPermissions > `[`Permissions_Optional`](#structFRHAPI__SessionPermissions_1ad5e4709dfec46866ca8578c19db719e7) | List of intra session permissions for a specific player.
`public bool `[`Permissions_IsSet`](#structFRHAPI__SessionPermissions_1a97729954d0b57d1e1fbef172c2e15f01) | true if Permissions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPermissions_1a4bba944fcbc522707ad4cf04934c03a1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPermissions_1a0d7cc4ebd16f9f575585b3b791ca8f74)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a069b334b30184637bc81dd4496a38fd9)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a1e87bc8bb9ef0a67c17d2993b5c69005)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a6af29d333592a4455c752c4bdea0d9b2)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a239e26b4076e914d87ff9e7f771f95d9)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a3318fb3735c4690e8ea4ec66d3f5e5a7)`()` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a92b997e5f004bcdf68eaecc3e76c360b)`() const` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1ab688e05a642c4be781636ff7a40f3b57)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` | Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a3d8f19c58e6eeacce7d98527358f6df9)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` | Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1ae33a2f9d1afcc3af40e07b32ee264b4d)`()` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1a27a10f0f8ce3f0632dd4259aaad8e334)`() const` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1af033647ede1146b5f1800861c04111d4)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.
`public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1ab5856d428661d15d1747be3391fa0fe5)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.
`public inline void `[`ClearPermissions`](#structFRHAPI__SessionPermissions_1a73f0cc892aabc639e404afcc16dfd5c1)`()` | Clears the value of Permissions_Optional and sets Permissions_IsSet to false.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__SessionPermissions_1a4df4cd5c674c9840e61d7b8e7e88a2a6) <a id="structFRHAPI__SessionPermissions_1a4df4cd5c674c9840e61d7b8e7e88a2a6"></a>

Unique identifier for this player.

#### `public TSet< ERHAPI_IntraSessionPermissions > `[`Permissions_Optional`](#structFRHAPI__SessionPermissions_1ad5e4709dfec46866ca8578c19db719e7) <a id="structFRHAPI__SessionPermissions_1ad5e4709dfec46866ca8578c19db719e7"></a>

List of intra session permissions for a specific player.

#### `public bool `[`Permissions_IsSet`](#structFRHAPI__SessionPermissions_1a97729954d0b57d1e1fbef172c2e15f01) <a id="structFRHAPI__SessionPermissions_1a97729954d0b57d1e1fbef172c2e15f01"></a>

true if Permissions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPermissions_1a4bba944fcbc522707ad4cf04934c03a1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPermissions_1a4bba944fcbc522707ad4cf04934c03a1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPermissions_1a0d7cc4ebd16f9f575585b3b791ca8f74)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionPermissions_1a0d7cc4ebd16f9f575585b3b791ca8f74"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a069b334b30184637bc81dd4496a38fd9)`()` <a id="structFRHAPI__SessionPermissions_1a069b334b30184637bc81dd4496a38fd9"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a1e87bc8bb9ef0a67c17d2993b5c69005)`() const` <a id="structFRHAPI__SessionPermissions_1a1e87bc8bb9ef0a67c17d2993b5c69005"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a6af29d333592a4455c752c4bdea0d9b2)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPermissions_1a6af29d333592a4455c752c4bdea0d9b2"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a239e26b4076e914d87ff9e7f771f95d9)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPermissions_1a239e26b4076e914d87ff9e7f771f95d9"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a3318fb3735c4690e8ea4ec66d3f5e5a7)`()` <a id="structFRHAPI__SessionPermissions_1a3318fb3735c4690e8ea4ec66d3f5e5a7"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a92b997e5f004bcdf68eaecc3e76c360b)`() const` <a id="structFRHAPI__SessionPermissions_1a92b997e5f004bcdf68eaecc3e76c360b"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1ab688e05a642c4be781636ff7a40f3b57)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` <a id="structFRHAPI__SessionPermissions_1ab688e05a642c4be781636ff7a40f3b57"></a>

Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a3d8f19c58e6eeacce7d98527358f6df9)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` <a id="structFRHAPI__SessionPermissions_1a3d8f19c58e6eeacce7d98527358f6df9"></a>

Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1ae33a2f9d1afcc3af40e07b32ee264b4d)`()` <a id="structFRHAPI__SessionPermissions_1ae33a2f9d1afcc3af40e07b32ee264b4d"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1a27a10f0f8ce3f0632dd4259aaad8e334)`() const` <a id="structFRHAPI__SessionPermissions_1a27a10f0f8ce3f0632dd4259aaad8e334"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1af033647ede1146b5f1800861c04111d4)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` <a id="structFRHAPI__SessionPermissions_1af033647ede1146b5f1800861c04111d4"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1ab5856d428661d15d1747be3391fa0fe5)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` <a id="structFRHAPI__SessionPermissions_1ab5856d428661d15d1747be3391fa0fe5"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.

#### `public inline void `[`ClearPermissions`](#structFRHAPI__SessionPermissions_1a73f0cc892aabc639e404afcc16dfd5c1)`()` <a id="structFRHAPI__SessionPermissions_1a73f0cc892aabc639e404afcc16dfd5c1"></a>

Clears the value of Permissions_Optional and sets Permissions_IsSet to false.

