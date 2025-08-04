---
title: RHAPI_MatchReward
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchReward`](#structFRHAPI__MatchReward) | 

## struct `FRHAPI_MatchReward` <a id="structFRHAPI__MatchReward"></a>

```
struct FRHAPI_MatchReward
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`LootId`](#structFRHAPI__MatchReward_1aa730b2c3bef9076679f4196811c77aa4) | Which loot to grant to the player.
`public int32 `[`Quantity`](#structFRHAPI__MatchReward_1a29c92b98ab0f134e2e478fc0ac479bf0) | How many times to grant the loot to the player.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchReward_1af3cd68bbd709a37180e2cb0927541dd4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchReward_1a99ae1b8115561be22c9f837545bf5f11)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetLootId`](#structFRHAPI__MatchReward_1ab31690085ccfe4d5759d9c39813920b1)`()` | Gets the value of LootId.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__MatchReward_1a5c50195551de760ce4e3e55074e336e8)`() const` | Gets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1a3d8ee3a661dc1ee944b7ce811b1b38db)`(const int32 & NewValue)` | Sets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1af10eaaa8bbdc1a2e5097d3099f2625d8)`(int32 && NewValue)` | Sets the value of LootId using move semantics.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__MatchReward_1a822b444b0a0960df830361201bb1f149)`() const` | Returns true if LootId matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__MatchReward_1a1b0693a0221603662eadd4434c5c3c1a)`()` | Sets the value of LootId to its default
`public inline int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a0df531d1285963c8c7d6be2f1fefd979)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a21d13a6abd295eae55c815f8a495487f)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1afd4de34e83b386737898572b7da7f145)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1a3ac16881976c18d2fbcdbf42c33adf05)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__MatchReward_1af46379b00d725cf2ecd86db33e4e1f8e)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__MatchReward_1a2c1eb4fbd5f16b9d3c745a455369117c)`()` | Sets the value of Quantity to its default

### Members

#### `public int32 `[`LootId`](#structFRHAPI__MatchReward_1aa730b2c3bef9076679f4196811c77aa4) <a id="structFRHAPI__MatchReward_1aa730b2c3bef9076679f4196811c77aa4"></a>

Which loot to grant to the player.

#### `public int32 `[`Quantity`](#structFRHAPI__MatchReward_1a29c92b98ab0f134e2e478fc0ac479bf0) <a id="structFRHAPI__MatchReward_1a29c92b98ab0f134e2e478fc0ac479bf0"></a>

How many times to grant the loot to the player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchReward_1af3cd68bbd709a37180e2cb0927541dd4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchReward_1af3cd68bbd709a37180e2cb0927541dd4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchReward_1a99ae1b8115561be22c9f837545bf5f11)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchReward_1a99ae1b8115561be22c9f837545bf5f11"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__MatchReward_1ab31690085ccfe4d5759d9c39813920b1)`()` <a id="structFRHAPI__MatchReward_1ab31690085ccfe4d5759d9c39813920b1"></a>

Gets the value of LootId.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__MatchReward_1a5c50195551de760ce4e3e55074e336e8)`() const` <a id="structFRHAPI__MatchReward_1a5c50195551de760ce4e3e55074e336e8"></a>

Gets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1a3d8ee3a661dc1ee944b7ce811b1b38db)`(const int32 & NewValue)` <a id="structFRHAPI__MatchReward_1a3d8ee3a661dc1ee944b7ce811b1b38db"></a>

Sets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1af10eaaa8bbdc1a2e5097d3099f2625d8)`(int32 && NewValue)` <a id="structFRHAPI__MatchReward_1af10eaaa8bbdc1a2e5097d3099f2625d8"></a>

Sets the value of LootId using move semantics.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__MatchReward_1a822b444b0a0960df830361201bb1f149)`() const` <a id="structFRHAPI__MatchReward_1a822b444b0a0960df830361201bb1f149"></a>

Returns true if LootId matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__MatchReward_1a1b0693a0221603662eadd4434c5c3c1a)`()` <a id="structFRHAPI__MatchReward_1a1b0693a0221603662eadd4434c5c3c1a"></a>

Sets the value of LootId to its default

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a0df531d1285963c8c7d6be2f1fefd979)`()` <a id="structFRHAPI__MatchReward_1a0df531d1285963c8c7d6be2f1fefd979"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a21d13a6abd295eae55c815f8a495487f)`() const` <a id="structFRHAPI__MatchReward_1a21d13a6abd295eae55c815f8a495487f"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1afd4de34e83b386737898572b7da7f145)`(const int32 & NewValue)` <a id="structFRHAPI__MatchReward_1afd4de34e83b386737898572b7da7f145"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1a3ac16881976c18d2fbcdbf42c33adf05)`(int32 && NewValue)` <a id="structFRHAPI__MatchReward_1a3ac16881976c18d2fbcdbf42c33adf05"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__MatchReward_1af46379b00d725cf2ecd86db33e4e1f8e)`() const` <a id="structFRHAPI__MatchReward_1af46379b00d725cf2ecd86db33e4e1f8e"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__MatchReward_1a2c1eb4fbd5f16b9d3c745a455369117c)`()` <a id="structFRHAPI__MatchReward_1a2c1eb4fbd5f16b9d3c745a455369117c"></a>

Sets the value of Quantity to its default

