---
title: RHAPI_PlayerUuidFromId
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerUuidFromId`](#structFRHAPI__PlayerUuidFromId) | Model for getting a player UUID from a player ID.

## struct `FRHAPI_PlayerUuidFromId` <a id="structFRHAPI__PlayerUuidFromId"></a>

```
struct FRHAPI_PlayerUuidFromId
  : public FRHAPI_Model
```

Model for getting a player UUID from a player ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`Uuid`](#structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerUuidFromId_1adb1e13d6594a5eec9b1a4560e5c1461a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerUuidFromId_1aadba05e4a73b72f7c5ecaca642ae8edf)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1a81f5f0c870c287d7ddca0344ddabad47)`()` | Gets the value of Uuid.
`public inline const FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1ae375db489af1e80db1325d5fba95d3ae)`() const` | Gets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a7945727f5fc44c291c074abf9a481bf6)`(const FGuid & NewValue)` | Sets the value of Uuid.
`public inline void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a0bb1f33cc5fcfd48637816d197c7c65b)`(FGuid && NewValue)` | Sets the value of Uuid using move semantics.

### Members

#### `public FGuid `[`Uuid`](#structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc) <a id="structFRHAPI__PlayerUuidFromId_1af3d1c98234ec394e36c4ac3ba7873ebc"></a>

Player UUID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerUuidFromId_1adb1e13d6594a5eec9b1a4560e5c1461a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerUuidFromId_1adb1e13d6594a5eec9b1a4560e5c1461a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerUuidFromId_1aadba05e4a73b72f7c5ecaca642ae8edf)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerUuidFromId_1aadba05e4a73b72f7c5ecaca642ae8edf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1a81f5f0c870c287d7ddca0344ddabad47)`()` <a id="structFRHAPI__PlayerUuidFromId_1a81f5f0c870c287d7ddca0344ddabad47"></a>

Gets the value of Uuid.

#### `public inline const FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1ae375db489af1e80db1325d5fba95d3ae)`() const` <a id="structFRHAPI__PlayerUuidFromId_1ae375db489af1e80db1325d5fba95d3ae"></a>

Gets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a7945727f5fc44c291c074abf9a481bf6)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerUuidFromId_1a7945727f5fc44c291c074abf9a481bf6"></a>

Sets the value of Uuid.

#### `public inline void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a0bb1f33cc5fcfd48637816d197c7c65b)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerUuidFromId_1a0bb1f33cc5fcfd48637816d197c7c65b"></a>

Sets the value of Uuid using move semantics.

