---
title: RHAPI_PlatformScout
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformScout`](#structFRHAPI__PlatformScout) | 

## struct `FRHAPI_PlatformScout` <a id="structFRHAPI__PlatformScout"></a>

```
struct FRHAPI_PlatformScout
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformScout_1aa2618c76b55a1aa089d368c7c48a4b55) | UUID of player who is the designated scout for the platform session.
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformScout_1a65ee1e51a53ff7a6bd4d8cca9a36e75f) | Which platform this specified player is a scout for.
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformScout_1af4200f66e8e54b8abef20aeb6bcefd6c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformScout_1a6c6ea98ace7d996a9658a63a1e4487f1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1a0ae9801cb891b51693ac19d35296cf3c)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1ab50cb6ce07729c7cbdd9181af9dd691d)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1a64458df7a48e4d2736d4ee1b05f91488)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1ae1023edfdb85abbf9094f83f3d95863c)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a1063225df5eb4255fc2c6167c6511927)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a699087dd9b0ec50dacf29b6e8ee1e64d)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformScout_1a84b2dc271455018f5ac7012bc869d868)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformScout_1a0da5ccf9182314d2024caac1abb7961c)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlatformScout_1aa2618c76b55a1aa089d368c7c48a4b55) <a id="structFRHAPI__PlatformScout_1aa2618c76b55a1aa089d368c7c48a4b55"></a>

UUID of player who is the designated scout for the platform session.

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformScout_1a65ee1e51a53ff7a6bd4d8cca9a36e75f) <a id="structFRHAPI__PlatformScout_1a65ee1e51a53ff7a6bd4d8cca9a36e75f"></a>

Which platform this specified player is a scout for.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformScout_1af4200f66e8e54b8abef20aeb6bcefd6c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformScout_1af4200f66e8e54b8abef20aeb6bcefd6c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformScout_1a6c6ea98ace7d996a9658a63a1e4487f1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformScout_1a6c6ea98ace7d996a9658a63a1e4487f1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1a0ae9801cb891b51693ac19d35296cf3c)`()` <a id="structFRHAPI__PlatformScout_1a0ae9801cb891b51693ac19d35296cf3c"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1ab50cb6ce07729c7cbdd9181af9dd691d)`() const` <a id="structFRHAPI__PlatformScout_1ab50cb6ce07729c7cbdd9181af9dd691d"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1a64458df7a48e4d2736d4ee1b05f91488)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformScout_1a64458df7a48e4d2736d4ee1b05f91488"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1ae1023edfdb85abbf9094f83f3d95863c)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformScout_1ae1023edfdb85abbf9094f83f3d95863c"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a1063225df5eb4255fc2c6167c6511927)`()` <a id="structFRHAPI__PlatformScout_1a1063225df5eb4255fc2c6167c6511927"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a699087dd9b0ec50dacf29b6e8ee1e64d)`() const` <a id="structFRHAPI__PlatformScout_1a699087dd9b0ec50dacf29b6e8ee1e64d"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformScout_1a84b2dc271455018f5ac7012bc869d868)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformScout_1a84b2dc271455018f5ac7012bc869d868"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformScout_1a0da5ccf9182314d2024caac1abb7961c)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformScout_1a0da5ccf9182314d2024caac1abb7961c"></a>

Sets the value of Platform using move semantics.

