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
`public FGuid `[`LootId`](#structFRHAPI__MatchReward_1a5dee5442ffa0d546c4f75f562b17972b) | Which loot to grant to the player.
`public int32 `[`Quantity`](#structFRHAPI__MatchReward_1a29c92b98ab0f134e2e478fc0ac479bf0) | How many times to grant the loot to the player.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchReward_1af3cd68bbd709a37180e2cb0927541dd4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchReward_1a99ae1b8115561be22c9f837545bf5f11)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetLootId`](#structFRHAPI__MatchReward_1a759f981b65d63ed447fcf8bb1fd447de)`()` | Gets the value of LootId.
`public inline const FGuid & `[`GetLootId`](#structFRHAPI__MatchReward_1aacbc4ff6d1792a0255687f477be638a2)`() const` | Gets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1ad9fbcaf55cf5353fa611744b26b7e475)`(const FGuid & NewValue)` | Sets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1abcef6553f71545a7c30ee54125301502)`(FGuid && NewValue)` | Sets the value of LootId using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a0df531d1285963c8c7d6be2f1fefd979)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a21d13a6abd295eae55c815f8a495487f)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1afd4de34e83b386737898572b7da7f145)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__MatchReward_1a3ac16881976c18d2fbcdbf42c33adf05)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__MatchReward_1af46379b00d725cf2ecd86db33e4e1f8e)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__MatchReward_1a2c1eb4fbd5f16b9d3c745a455369117c)`()` | Sets the value of Quantity to its default

### Members

#### `public FGuid `[`LootId`](#structFRHAPI__MatchReward_1a5dee5442ffa0d546c4f75f562b17972b) <a id="structFRHAPI__MatchReward_1a5dee5442ffa0d546c4f75f562b17972b"></a>

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

#### `public inline FGuid & `[`GetLootId`](#structFRHAPI__MatchReward_1a759f981b65d63ed447fcf8bb1fd447de)`()` <a id="structFRHAPI__MatchReward_1a759f981b65d63ed447fcf8bb1fd447de"></a>

Gets the value of LootId.

#### `public inline const FGuid & `[`GetLootId`](#structFRHAPI__MatchReward_1aacbc4ff6d1792a0255687f477be638a2)`() const` <a id="structFRHAPI__MatchReward_1aacbc4ff6d1792a0255687f477be638a2"></a>

Gets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1ad9fbcaf55cf5353fa611744b26b7e475)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchReward_1ad9fbcaf55cf5353fa611744b26b7e475"></a>

Sets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__MatchReward_1abcef6553f71545a7c30ee54125301502)`(FGuid && NewValue)` <a id="structFRHAPI__MatchReward_1abcef6553f71545a7c30ee54125301502"></a>

Sets the value of LootId using move semantics.

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

