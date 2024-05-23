# group `RHAPI_PlatformIdentityLookupResults` <a id="group__RHAPI__PlatformIdentityLookupResults"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformIdentityLookupResults_1a9e157dd1f379185352e84233304f8a98)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformIdentityLookupResults_1a8570a73905d233486b39be55dfc22731)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a11959a09f8ff2131a34d3a81ad51a684)`()` | Gets the value of Identity_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1acbe9eeb085f5634eb37966a990bb3061)`() const` | Gets the value of Identity_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a5b8b998bc31ecc3e04d72c57a3d19296)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` | Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a78662a60d3e9bf723bd3d8681dd8850c)`()` | Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a2256a0fe1009b3b9dea514c94e1ecb3d)`() const` | Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ae94950f32b38c379ea0cee77cd2a6aaa)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` | Sets the value of Identity_Optional and also sets Identity_IsSet to true.
`public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a12704c2cd9f8ad2ebedf51524deec9a1)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` | Sets the value of Identity_Optional and also sets Identity_IsSet to true using move semantics.
`public inline void `[`ClearIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)`()` | Clears the value of Identity_Optional and sets Identity_IsSet to false.

### Members

#### `public TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > `[`Identity_Optional`](#structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b) <a id="structFRHAPI__PlatformIdentityLookupResults_1a770dcf050dd98432ebaf4cf67be3b31b"></a>

List of platform user ids and the players that match that platform user id.

#### `public bool `[`Identity_IsSet`](#structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0) <a id="structFRHAPI__PlatformIdentityLookupResults_1a726c02e11706d55e61507f78b39c86e0"></a>

true if Identity_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformIdentityLookupResults_1a9e157dd1f379185352e84233304f8a98)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1a9e157dd1f379185352e84233304f8a98"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformIdentityLookupResults_1a8570a73905d233486b39be55dfc22731)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a8570a73905d233486b39be55dfc22731"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a11959a09f8ff2131a34d3a81ad51a684)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a11959a09f8ff2131a34d3a81ad51a684"></a>

Gets the value of Identity_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1acbe9eeb085f5634eb37966a990bb3061)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1acbe9eeb085f5634eb37966a990bb3061"></a>

Gets the value of Identity_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a5b8b998bc31ecc3e04d72c57a3d19296)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a5b8b998bc31ecc3e04d72c57a3d19296"></a>

Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a5d34c865dd67d82644989486c3ca19b6"></a>

Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a78662a60d3e9bf723bd3d8681dd8850c)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a78662a60d3e9bf723bd3d8681dd8850c"></a>

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1a2256a0fe1009b3b9dea514c94e1ecb3d)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2256a0fe1009b3b9dea514c94e1ecb3d"></a>

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ae94950f32b38c379ea0cee77cd2a6aaa)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1ae94950f32b38c379ea0cee77cd2a6aaa"></a>

Sets the value of Identity_Optional and also sets Identity_IsSet to true.

#### `public inline void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a12704c2cd9f8ad2ebedf51524deec9a1)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1a12704c2cd9f8ad2ebedf51524deec9a1"></a>

Sets the value of Identity_Optional and also sets Identity_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b"></a>

Clears the value of Identity_Optional and sets Identity_IsSet to false.

