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
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a753020ce8efdbb2f4fb3683bc0ae21c1)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a559eede40200e383924584c62b8b3b94)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a08b12be2f939d575eed40aa19e139d8e)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a61c74813d795e3a1849f125cf7a77168)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1ad3c66fad88f49a574a5cd4cfbfad5b5d)`()` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1ad64ae1307cf8917a3bbed425c6b8e861)`() const` | Gets the value of Permissions_Optional, regardless of it having been set.
`public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a4e653fe57ed87d62388a781eadd1a7d3)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` | Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a9a7ccff5061227af053dd5fa76edc8bf)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` | Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1af49fb077678ed411f8fbbdf56cac3f7a)`()` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1a1ce40a316bb9a6fb1f0db0fb8087e97c)`() const` | Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1ae7cbb427be6964fe63f5f8385673a1d3)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.
`public inline void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1ad30d60aba817b1f431dc228054f3c7b8)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` | Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.
`public inline void `[`ClearPermissions`](#structFRHAPI__SessionPermissions_1a73f0cc892aabc639e404afcc16dfd5c1)`()` | Clears the value of Permissions_Optional and sets Permissions_IsSet to false.
`public inline bool `[`IsPermissionsSet`](#structFRHAPI__SessionPermissions_1aa61e8615babb35b045d1f772ee17cd06)`() const` | Checks whether Permissions_Optional has been set.

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

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a753020ce8efdbb2f4fb3683bc0ae21c1)`()` <a id="structFRHAPI__SessionPermissions_1a753020ce8efdbb2f4fb3683bc0ae21c1"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPermissions_1a559eede40200e383924584c62b8b3b94)`() const` <a id="structFRHAPI__SessionPermissions_1a559eede40200e383924584c62b8b3b94"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a08b12be2f939d575eed40aa19e139d8e)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPermissions_1a08b12be2f939d575eed40aa19e139d8e"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPermissions_1a61c74813d795e3a1849f125cf7a77168)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPermissions_1a61c74813d795e3a1849f125cf7a77168"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1ad3c66fad88f49a574a5cd4cfbfad5b5d)`()` <a id="structFRHAPI__SessionPermissions_1ad3c66fad88f49a574a5cd4cfbfad5b5d"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1ad64ae1307cf8917a3bbed425c6b8e861)`() const` <a id="structFRHAPI__SessionPermissions_1ad64ae1307cf8917a3bbed425c6b8e861"></a>

Gets the value of Permissions_Optional, regardless of it having been set.

#### `public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a4e653fe57ed87d62388a781eadd1a7d3)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` <a id="structFRHAPI__SessionPermissions_1a4e653fe57ed87d62388a781eadd1a7d3"></a>

Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPermissions`](#structFRHAPI__SessionPermissions_1a9a7ccff5061227af053dd5fa76edc8bf)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` <a id="structFRHAPI__SessionPermissions_1a9a7ccff5061227af053dd5fa76edc8bf"></a>

Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1af49fb077678ed411f8fbbdf56cac3f7a)`()` <a id="structFRHAPI__SessionPermissions_1af49fb077678ed411f8fbbdf56cac3f7a"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< ERHAPI_IntraSessionPermissions > * `[`GetPermissionsOrNull`](#structFRHAPI__SessionPermissions_1a1ce40a316bb9a6fb1f0db0fb8087e97c)`() const` <a id="structFRHAPI__SessionPermissions_1a1ce40a316bb9a6fb1f0db0fb8087e97c"></a>

Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1ae7cbb427be6964fe63f5f8385673a1d3)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` <a id="structFRHAPI__SessionPermissions_1ae7cbb427be6964fe63f5f8385673a1d3"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true.

#### `public inline void `[`SetPermissions`](#structFRHAPI__SessionPermissions_1ad30d60aba817b1f431dc228054f3c7b8)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` <a id="structFRHAPI__SessionPermissions_1ad30d60aba817b1f431dc228054f3c7b8"></a>

Sets the value of Permissions_Optional and also sets Permissions_IsSet to true using move semantics.

#### `public inline void `[`ClearPermissions`](#structFRHAPI__SessionPermissions_1a73f0cc892aabc639e404afcc16dfd5c1)`()` <a id="structFRHAPI__SessionPermissions_1a73f0cc892aabc639e404afcc16dfd5c1"></a>

Clears the value of Permissions_Optional and sets Permissions_IsSet to false.

#### `public inline bool `[`IsPermissionsSet`](#structFRHAPI__SessionPermissions_1aa61e8615babb35b045d1f772ee17cd06)`() const` <a id="structFRHAPI__SessionPermissions_1aa61e8615babb35b045d1f772ee17cd06"></a>

Checks whether Permissions_Optional has been set.

