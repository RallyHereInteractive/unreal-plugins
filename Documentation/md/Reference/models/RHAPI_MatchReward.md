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
`public int32 `[`LegacyLootId`](#structFRHAPI__MatchReward_1af69e110dd816a2efcc5aa3e1289acf5f) | Which loot to grant to the player.
`public int32 `[`Quantity`](#structFRHAPI__MatchReward_1a29c92b98ab0f134e2e478fc0ac479bf0) | How many times to grant the loot to the player.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchReward_1af3cd68bbd709a37180e2cb0927541dd4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchReward_1a99ae1b8115561be22c9f837545bf5f11)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1a0907159edc50f4d7ef8f303227350338)`()` | Gets the value of LegacyLootId.
`public inline const int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1a439352d0b9d5e9fe00a107a241f17964)`() const` | Gets the value of LegacyLootId.
`public inline void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1a25e94dffca9ba061f699a2f2a60240c5)`(const int32 & NewValue)` | Sets the value of LegacyLootId.
`public inline void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1a3d9c060100acde6fe1ff99c3525807be)`(int32 && NewValue)` | Sets the value of LegacyLootId using move semantics.
`public inline bool `[`IsLegacyLootIdDefaultValue`](#structFRHAPI__MatchReward_1a11d75e2dbc1078c7488f14c4869dd886)`() const` | Returns true if LegacyLootId matches the default value.
`public inline void `[`SetLegacyLootIdToDefault`](#structFRHAPI__MatchReward_1a1ca7c0155375e3241d6c364971c04670)`()` | Sets the value of LegacyLootId to its default
`public inline int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a0df531d1285963c8c7d6be2f1fefd979)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a21d13a6abd295eae55c815f8a495487f)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1afd4de34e83b386737898572b7da7f145)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1a3ac16881976c18d2fbcdbf42c33adf05)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__MatchReward_1af46379b00d725cf2ecd86db33e4e1f8e)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__MatchReward_1a2c1eb4fbd5f16b9d3c745a455369117c)`()` | Sets the value of Quantity to its default

### Members

#### `public int32 `[`LegacyLootId`](#structFRHAPI__MatchReward_1af69e110dd816a2efcc5aa3e1289acf5f) <a id="structFRHAPI__MatchReward_1af69e110dd816a2efcc5aa3e1289acf5f"></a>

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

#### `public inline int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1a0907159edc50f4d7ef8f303227350338)`()` <a id="structFRHAPI__MatchReward_1a0907159edc50f4d7ef8f303227350338"></a>

Gets the value of LegacyLootId.

#### `public inline const int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1a439352d0b9d5e9fe00a107a241f17964)`() const` <a id="structFRHAPI__MatchReward_1a439352d0b9d5e9fe00a107a241f17964"></a>

Gets the value of LegacyLootId.

#### `public inline void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1a25e94dffca9ba061f699a2f2a60240c5)`(const int32 & NewValue)` <a id="structFRHAPI__MatchReward_1a25e94dffca9ba061f699a2f2a60240c5"></a>

Sets the value of LegacyLootId.

#### `public inline void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1a3d9c060100acde6fe1ff99c3525807be)`(int32 && NewValue)` <a id="structFRHAPI__MatchReward_1a3d9c060100acde6fe1ff99c3525807be"></a>

Sets the value of LegacyLootId using move semantics.

#### `public inline bool `[`IsLegacyLootIdDefaultValue`](#structFRHAPI__MatchReward_1a11d75e2dbc1078c7488f14c4869dd886)`() const` <a id="structFRHAPI__MatchReward_1a11d75e2dbc1078c7488f14c4869dd886"></a>

Returns true if LegacyLootId matches the default value.

#### `public inline void `[`SetLegacyLootIdToDefault`](#structFRHAPI__MatchReward_1a1ca7c0155375e3241d6c364971c04670)`()` <a id="structFRHAPI__MatchReward_1a1ca7c0155375e3241d6c364971c04670"></a>

Sets the value of LegacyLootId to its default

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

