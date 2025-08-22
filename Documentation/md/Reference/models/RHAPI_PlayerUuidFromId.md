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
`public inline FORCEINLINE FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1a5a2a0d58b51b26c45959b38f34cf5aca)`()` | Gets the value of Uuid.
`public inline FORCEINLINE const FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1ad4e18a95945b7a62eb280ae10a975ffa)`() const` | Gets the value of Uuid.
`public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a88647d8928fca05a1ab34300f7113007)`(const FGuid & NewValue)` | Sets the value of Uuid.
`public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a536214e528c4ce5e6c81e7f4f496cae9)`(FGuid && NewValue)` | Sets the value of Uuid using move semantics.

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

#### `public inline FORCEINLINE FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1a5a2a0d58b51b26c45959b38f34cf5aca)`()` <a id="structFRHAPI__PlayerUuidFromId_1a5a2a0d58b51b26c45959b38f34cf5aca"></a>

Gets the value of Uuid.

#### `public inline FORCEINLINE const FGuid & `[`GetUuid`](#structFRHAPI__PlayerUuidFromId_1ad4e18a95945b7a62eb280ae10a975ffa)`() const` <a id="structFRHAPI__PlayerUuidFromId_1ad4e18a95945b7a62eb280ae10a975ffa"></a>

Gets the value of Uuid.

#### `public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a88647d8928fca05a1ab34300f7113007)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerUuidFromId_1a88647d8928fca05a1ab34300f7113007"></a>

Sets the value of Uuid.

#### `public inline FORCEINLINE void `[`SetUuid`](#structFRHAPI__PlayerUuidFromId_1a536214e528c4ce5e6c81e7f4f496cae9)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerUuidFromId_1a536214e528c4ce5e6c81e7f4f496cae9"></a>

Sets the value of Uuid using move semantics.

