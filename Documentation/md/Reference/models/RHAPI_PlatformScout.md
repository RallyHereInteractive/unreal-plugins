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
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformScout_1aecc123ee4dcaa4bd24c0dd3d0e75fe10)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1a2ed8738f6e05aa6ffdf1fcf975a68f52)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1a47c947ae3c2e206ed768d4c64c99026b)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1aad3d82b6ce9ce94353496ffbb692e25c)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1a44f3f00e654a25458f64d4c94f1bf996)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a149aabb280c4df5ce4cd6eb4d4c7ef38)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a3863ba6d5ed284c12dafcc6987bc94c9)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformScout_1ac6602bc461a1ff6ce5ed5c8cc1455b17)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformScout_1a264b839d8b4d450d11ac6e406194f065)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformScout_1aecc123ee4dcaa4bd24c0dd3d0e75fe10)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformScout_1aecc123ee4dcaa4bd24c0dd3d0e75fe10"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1a2ed8738f6e05aa6ffdf1fcf975a68f52)`()` <a id="structFRHAPI__PlatformScout_1a2ed8738f6e05aa6ffdf1fcf975a68f52"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlatformScout_1a47c947ae3c2e206ed768d4c64c99026b)`() const` <a id="structFRHAPI__PlatformScout_1a47c947ae3c2e206ed768d4c64c99026b"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1aad3d82b6ce9ce94353496ffbb692e25c)`(const FGuid & NewValue)` <a id="structFRHAPI__PlatformScout_1aad3d82b6ce9ce94353496ffbb692e25c"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlatformScout_1a44f3f00e654a25458f64d4c94f1bf996)`(FGuid && NewValue)` <a id="structFRHAPI__PlatformScout_1a44f3f00e654a25458f64d4c94f1bf996"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a149aabb280c4df5ce4cd6eb4d4c7ef38)`()` <a id="structFRHAPI__PlatformScout_1a149aabb280c4df5ce4cd6eb4d4c7ef38"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformScout_1a3863ba6d5ed284c12dafcc6987bc94c9)`() const` <a id="structFRHAPI__PlatformScout_1a3863ba6d5ed284c12dafcc6987bc94c9"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformScout_1ac6602bc461a1ff6ce5ed5c8cc1455b17)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformScout_1ac6602bc461a1ff6ce5ed5c8cc1455b17"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformScout_1a264b839d8b4d450d11ac6e406194f065)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformScout_1a264b839d8b4d450d11ac6e406194f065"></a>

Sets the value of Platform using move semantics.

