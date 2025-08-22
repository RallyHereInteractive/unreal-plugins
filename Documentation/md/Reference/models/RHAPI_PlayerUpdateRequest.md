---
title: RHAPI_PlayerUpdateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerUpdateRequest`](#structFRHAPI__PlayerUpdateRequest) | 

## struct `FRHAPI_PlayerUpdateRequest` <a id="structFRHAPI__PlayerUpdateRequest"></a>

```
struct FRHAPI_PlayerUpdateRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerUpdateRequest_1a3d4766eba33d888cf19423cca8a604ac) | Custom data for the player.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerUpdateRequest_1a722b66dcd71262b17204d97a62705d8d) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerUpdateRequest_1a56a375b7965b9add2da285ae13aa1a3a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerUpdateRequest_1ac477e46613d17ec3944d73cc74c4240b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1aad65290fa8be14097045928d1df0a269)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a7c0ae4f5504ba0ea5ebfa4dbcb8bd27b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a6cc12ceb6810d9bdb83d9c08bced30a8)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a6ab0e0d159c2533986c1c27b2ac489a9)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a75002002b9422dc52545e55d7999730c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a2dbf3f90f039a6ff86d74ca9d335cb27)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1aa421ca82eee78ea093159e0aab9fad63)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1af5f583cb268e2b20deb973569104ceb2)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerUpdateRequest_1a821b5c2d6545ecd1a1eff6410f6ff9f5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerUpdateRequest_1a3d4766eba33d888cf19423cca8a604ac) <a id="structFRHAPI__PlayerUpdateRequest_1a3d4766eba33d888cf19423cca8a604ac"></a>

Custom data for the player.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerUpdateRequest_1a722b66dcd71262b17204d97a62705d8d) <a id="structFRHAPI__PlayerUpdateRequest_1a722b66dcd71262b17204d97a62705d8d"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerUpdateRequest_1a56a375b7965b9add2da285ae13aa1a3a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerUpdateRequest_1a56a375b7965b9add2da285ae13aa1a3a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerUpdateRequest_1ac477e46613d17ec3944d73cc74c4240b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerUpdateRequest_1ac477e46613d17ec3944d73cc74c4240b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1aad65290fa8be14097045928d1df0a269)`()` <a id="structFRHAPI__PlayerUpdateRequest_1aad65290fa8be14097045928d1df0a269"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a7c0ae4f5504ba0ea5ebfa4dbcb8bd27b)`() const` <a id="structFRHAPI__PlayerUpdateRequest_1a7c0ae4f5504ba0ea5ebfa4dbcb8bd27b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a6cc12ceb6810d9bdb83d9c08bced30a8)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerUpdateRequest_1a6cc12ceb6810d9bdb83d9c08bced30a8"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a6ab0e0d159c2533986c1c27b2ac489a9)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerUpdateRequest_1a6ab0e0d159c2533986c1c27b2ac489a9"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a75002002b9422dc52545e55d7999730c)`()` <a id="structFRHAPI__PlayerUpdateRequest_1a75002002b9422dc52545e55d7999730c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a2dbf3f90f039a6ff86d74ca9d335cb27)`() const` <a id="structFRHAPI__PlayerUpdateRequest_1a2dbf3f90f039a6ff86d74ca9d335cb27"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1aa421ca82eee78ea093159e0aab9fad63)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerUpdateRequest_1aa421ca82eee78ea093159e0aab9fad63"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1af5f583cb268e2b20deb973569104ceb2)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerUpdateRequest_1af5f583cb268e2b20deb973569104ceb2"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerUpdateRequest_1a821b5c2d6545ecd1a1eff6410f6ff9f5)`()` <a id="structFRHAPI__PlayerUpdateRequest_1a821b5c2d6545ecd1a1eff6410f6ff9f5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

