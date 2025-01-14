---
title: RHAPI_PlatformIdentityLookupResults
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformIdentityLookupResults`](#structFRHAPI__PlatformIdentityLookupResults) | Lookup results for a platform user id.

## struct `FRHAPI_PlatformIdentityLookupResults` <a id="structFRHAPI__PlatformIdentityLookupResults"></a>

```
struct FRHAPI_PlatformIdentityLookupResults
  : public FRHAPI_Model
```

Lookup results for a platform user id.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > `[`Identity_Optional`](#structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b) | List of platform user ids and the players that match that platform user id.
`public bool `[`Identity_IsSet`](#structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0) | true if Identity_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformIdentityLookupResults_1ad09de03d12788455fa1468ddc94044f9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformIdentityLookupResults_1aba004cc210e7036bea50306405c0efef)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a447d56f839e75ac4ed55e899b2cdaf4d)`()` | Gets the value of Identity_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ac055d9ad12ea9f4f91e41314cb4ab62e)`() const` | Gets the value of Identity_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a7b18ef12885a3116604a330bfa84c4ed)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` | Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a4c101355d5a83e3e135bacb7263d8f5a)`()` | Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a2d4e87318dfe7ca461492b19b2a43746)`() const` | Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ae94950f32b38c379ea0cee77cd2a6aaa)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` | Sets the value of Identity_Optional and also sets Identity_IsSet to true.
`public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a12704c2cd9f8ad2ebedf51524deec9a1)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` | Sets the value of Identity_Optional and also sets Identity_IsSet to true using move semantics.
`public inline void `[`ClearIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)`()` | Clears the value of Identity_Optional and sets Identity_IsSet to false.
`public inline bool `[`IsIdentitySet`](#structFRHAPI__PlatformIdentityLookupResults_1af2bee6e2e3c2d8a4d5aa53a3fcd49501)`() const` | Checks whether Identity_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > `[`Identity_Optional`](#structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b) <a id="structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b"></a>

List of platform user ids and the players that match that platform user id.

#### `public bool `[`Identity_IsSet`](#structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0) <a id="structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0"></a>

true if Identity_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformIdentityLookupResults_1ad09de03d12788455fa1468ddc94044f9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1ad09de03d12788455fa1468ddc94044f9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformIdentityLookupResults_1aba004cc210e7036bea50306405c0efef)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1aba004cc210e7036bea50306405c0efef"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a447d56f839e75ac4ed55e899b2cdaf4d)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a447d56f839e75ac4ed55e899b2cdaf4d"></a>

Gets the value of Identity_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ac055d9ad12ea9f4f91e41314cb4ab62e)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1ac055d9ad12ea9f4f91e41314cb4ab62e"></a>

Gets the value of Identity_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a7b18ef12885a3116604a330bfa84c4ed)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a7b18ef12885a3116604a330bfa84c4ed"></a>

Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6"></a>

Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a4c101355d5a83e3e135bacb7263d8f5a)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a4c101355d5a83e3e135bacb7263d8f5a"></a>

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a2d4e87318dfe7ca461492b19b2a43746)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2d4e87318dfe7ca461492b19b2a43746"></a>

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ae94950f32b38c379ea0cee77cd2a6aaa)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1ae94950f32b38c379ea0cee77cd2a6aaa"></a>

Sets the value of Identity_Optional and also sets Identity_IsSet to true.

#### `public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a12704c2cd9f8ad2ebedf51524deec9a1)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1a12704c2cd9f8ad2ebedf51524deec9a1"></a>

Sets the value of Identity_Optional and also sets Identity_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b"></a>

Clears the value of Identity_Optional and sets Identity_IsSet to false.

#### `public inline bool `[`IsIdentitySet`](#structFRHAPI__PlatformIdentityLookupResults_1af2bee6e2e3c2d8a4d5aa53a3fcd49501)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1af2bee6e2e3c2d8a4d5aa53a3fcd49501"></a>

Checks whether Identity_Optional has been set.

