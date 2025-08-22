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
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a41457ce2b3d833a49efcfb502d03294b)`()` | Gets the value of Identity_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a4fd9b4c17abc040d4479ff40d6f971e1)`() const` | Gets the value of Identity_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ac76432389d4a8d683c8120965b4d12fc)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` | Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ad7c2ff417e4ed642dd205c8067ff8808)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1aabdfed9e160f9fd23dcd26388971af37)`()` | Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1ace939ec95baa996be300f852688dc024)`() const` | Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a9ddfb696905b45c2a3161c97da463cf1)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` | Sets the value of Identity_Optional and also sets Identity_IsSet to true.
`public inline FORCEINLINE void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a3f6f848730c4b4d4d5551fb9b5f076df)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` | Sets the value of Identity_Optional and also sets Identity_IsSet to true using move semantics.
`public inline void `[`ClearIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)`()` | Clears the value of Identity_Optional and sets Identity_IsSet to false.

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

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a41457ce2b3d833a49efcfb502d03294b)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a41457ce2b3d833a49efcfb502d03294b"></a>

Gets the value of Identity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a4fd9b4c17abc040d4479ff40d6f971e1)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1a4fd9b4c17abc040d4479ff40d6f971e1"></a>

Gets the value of Identity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ac76432389d4a8d683c8120965b4d12fc)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1ac76432389d4a8d683c8120965b4d12fc"></a>

Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1ad7c2ff417e4ed642dd205c8067ff8808)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & OutValue) const` <a id="structFRHAPI__PlatformIdentityLookupResults_1ad7c2ff417e4ed642dd205c8067ff8808"></a>

Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1aabdfed9e160f9fd23dcd26388971af37)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1aabdfed9e160f9fd23dcd26388971af37"></a>

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > * `[`GetIdentityOrNull`](#structFRHAPI__PlatformIdentityLookupResults_1ace939ec95baa996be300f852688dc024)`() const` <a id="structFRHAPI__PlatformIdentityLookupResults_1ace939ec95baa996be300f852688dc024"></a>

Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a9ddfb696905b45c2a3161c97da463cf1)`(const TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > & NewValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1a9ddfb696905b45c2a3161c97da463cf1"></a>

Sets the value of Identity_Optional and also sets Identity_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a3f6f848730c4b4d4d5551fb9b5f076df)`(TMap< FString, `[`FRHAPI_PlayerResponse`](RHAPI_PlayerResponse.md#structFRHAPI__PlayerResponse)` > && NewValue)` <a id="structFRHAPI__PlatformIdentityLookupResults_1a3f6f848730c4b4d4d5551fb9b5f076df"></a>

Sets the value of Identity_Optional and also sets Identity_IsSet to true using move semantics.

#### `public inline void `[`ClearIdentity`](#structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b)`()` <a id="structFRHAPI__PlatformIdentityLookupResults_1a2bf03151bdb401f2036fedafb0d6800b"></a>

Clears the value of Identity_Optional and sets Identity_IsSet to false.

