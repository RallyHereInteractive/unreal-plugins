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
`public inline FORCEINLINE int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1acab8be5d97f7cd723809237e98773d9d)`()` | Gets the value of LegacyLootId.
`public inline FORCEINLINE const int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1af98b6dde8925283850f46e79e0df61b3)`() const` | Gets the value of LegacyLootId.
`public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1a2b2ab508372ea7d9e53ec71626ad336b)`(const int32 & NewValue)` | Sets the value of LegacyLootId.
`public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1aaad45b957100300dba8da9ccce653cc9)`(int32 && NewValue)` | Sets the value of LegacyLootId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyLootId`](#structFRHAPI__MatchReward_1a82e3244f4df5816c88d127528317af4d)`()` | Returns the default value of LegacyLootId.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a36c0e68488b90c61f421e0f4131cdd7a)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a7962aceb45547e1deb0a3ed29261ed5e)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__MatchReward_1a94809774d4b65f28184f35ad0f7cb094)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__MatchReward_1a727484cedfbea5c00da50dca300df218)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__MatchReward_1ab8b242a39f3ffedbfe9bdb12ed9eb376)`()` | Returns the default value of Quantity.

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

#### `public inline FORCEINLINE int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1acab8be5d97f7cd723809237e98773d9d)`()` <a id="structFRHAPI__MatchReward_1acab8be5d97f7cd723809237e98773d9d"></a>

Gets the value of LegacyLootId.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyLootId`](#structFRHAPI__MatchReward_1af98b6dde8925283850f46e79e0df61b3)`() const` <a id="structFRHAPI__MatchReward_1af98b6dde8925283850f46e79e0df61b3"></a>

Gets the value of LegacyLootId.

#### `public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1a2b2ab508372ea7d9e53ec71626ad336b)`(const int32 & NewValue)` <a id="structFRHAPI__MatchReward_1a2b2ab508372ea7d9e53ec71626ad336b"></a>

Sets the value of LegacyLootId.

#### `public inline FORCEINLINE void `[`SetLegacyLootId`](#structFRHAPI__MatchReward_1aaad45b957100300dba8da9ccce653cc9)`(int32 && NewValue)` <a id="structFRHAPI__MatchReward_1aaad45b957100300dba8da9ccce653cc9"></a>

Sets the value of LegacyLootId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyLootId`](#structFRHAPI__MatchReward_1a82e3244f4df5816c88d127528317af4d)`()` <a id="structFRHAPI__MatchReward_1a82e3244f4df5816c88d127528317af4d"></a>

Returns the default value of LegacyLootId.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a36c0e68488b90c61f421e0f4131cdd7a)`()` <a id="structFRHAPI__MatchReward_1a36c0e68488b90c61f421e0f4131cdd7a"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__MatchReward_1a7962aceb45547e1deb0a3ed29261ed5e)`() const` <a id="structFRHAPI__MatchReward_1a7962aceb45547e1deb0a3ed29261ed5e"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__MatchReward_1a94809774d4b65f28184f35ad0f7cb094)`(const int32 & NewValue)` <a id="structFRHAPI__MatchReward_1a94809774d4b65f28184f35ad0f7cb094"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__MatchReward_1a727484cedfbea5c00da50dca300df218)`(int32 && NewValue)` <a id="structFRHAPI__MatchReward_1a727484cedfbea5c00da50dca300df218"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__MatchReward_1ab8b242a39f3ffedbfe9bdb12ed9eb376)`()` <a id="structFRHAPI__MatchReward_1ab8b242a39f3ffedbfe9bdb12ed9eb376"></a>

Returns the default value of Quantity.

