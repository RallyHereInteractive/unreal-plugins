---
title: RHAPI_MapConfig
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MapConfig`](#structFRHAPI__MapConfig) | DEPRECATED Configuration about a specific map for an instance to load into.

## struct `FRHAPI_MapConfig` <a id="structFRHAPI__MapConfig"></a>

```
struct FRHAPI_MapConfig
  : public FRHAPI_Model
```

DEPRECATED Configuration about a specific map for an instance to load into.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`MapGameId_Optional`](#structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3) | ID to uniquely identify this map game.
`public bool `[`MapGameId_IsSet`](#structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5) | true if MapGameId_Optional has been set to a value
`public FString `[`MapName`](#structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7) | Name of the map the instance should load into.
`public FString `[`Mode_Optional`](#structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a) | Game mode for the instance to spawn in.
`public bool `[`Mode_IsSet`](#structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e) | true if Mode_Optional has been set to a value
`public float `[`SelectionChance_Optional`](#structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c) | Chance that this map will get selected in a rotation list.
`public bool `[`SelectionChance_IsSet`](#structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c) | true if SelectionChance_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1) | Custom data to pass through to the instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MapConfig_1a13f29ac7373a2621b9077dbd52a6a3ed)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MapConfig_1a8dc36bf51131ed55f9d52599d6913b67)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1aafd5b918921624dd3fb59910a9c6e26b)`()` | Gets the value of MapGameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1ac01012287449bd62c5418a7b62355421)`() const` | Gets the value of MapGameId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1ad013cf9eb5d9879b0a60d4c3fb6bcec3)`(const int32 & DefaultValue) const` | Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMapGameId`](#structFRHAPI__MapConfig_1a5421efe6be6a43abb7490f54651165f6)`(int32 & OutValue) const` | Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1af8815abe988ac623d3ffc31a79d7ef20)`()` | Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a90e5880102cf394cf6251005595511ed)`() const` | Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMapGameId`](#structFRHAPI__MapConfig_1af11b33271f0e2147bd781f86a85f10fc)`(const int32 & NewValue)` | Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.
`public inline FORCEINLINE void `[`SetMapGameId`](#structFRHAPI__MapConfig_1a51a2a80f628f78d15f3200f3ff5815b1)`(int32 && NewValue)` | Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true using move semantics.
`public inline void `[`ClearMapGameId`](#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)`()` | Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MapGameId`](#structFRHAPI__MapConfig_1a50d3ccac3cb812449ccf6331608d0248)`()` | Returns the default value of MapGameId.
`public inline FORCEINLINE FString & `[`GetMapName`](#structFRHAPI__MapConfig_1af06c6c2b56b30d599e0e9ffcf68f4780)`()` | Gets the value of MapName.
`public inline FORCEINLINE const FString & `[`GetMapName`](#structFRHAPI__MapConfig_1adbea333d52bd5b72c34004497cef00f6)`() const` | Gets the value of MapName.
`public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfig_1ad8ef3c06c85db09d52fb8d0c531f7930)`(const FString & NewValue)` | Sets the value of MapName.
`public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfig_1adcb25e772003a07e9850efa37f7bce20)`(FString && NewValue)` | Sets the value of MapName using move semantics.
`public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__MapConfig_1a10fccfbcc24572992bcdd4ab35193c06)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a0593b3cd53f6af89694852008313de35)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a1d5f2f9aec613988a3406b531203e8eb)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__MapConfig_1aed55699c8a1bf2be19fd35af713053a3)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1abdccb4cf56d25ec4f7d528089b77e26d)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1ab42043bb5ea0dfdf52f4e8d5de3a1b51)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfig_1aecc939680c637da5848d56c7f74cc0d7)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfig_1ad3192ea8c6a83852c39de53277fd3530)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FORCEINLINE float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a755edefd06020aa24c8de86c9f712d4b)`()` | Gets the value of SelectionChance_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1ac7931e4707e9812999a8485682507eaa)`() const` | Gets the value of SelectionChance_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a392bc9f34c33b22ec830d69dec9ee928)`(const float & DefaultValue) const` | Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a7854558ce26ebf77c4a934e0e0d61313)`(float & OutValue) const` | Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a0554163e147d0f485c44187afd4fa827)`()` | Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1ad6ea429795084ed087e0a58a50ff6ffc)`() const` | Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a6733a15ad5e21830d0d80e4fa7dcca73)`(const float & NewValue)` | Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.
`public inline FORCEINLINE void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a5633bbdc0d6f87668f9d3b522e093e30)`(float && NewValue)` | Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true using move semantics.
`public inline void `[`ClearSelectionChance`](#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)`()` | Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a681f87a2e0e58573893f1a41bf327c1a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a2a1c4332d96f1c3499423abc50041333)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a6a5c9d034ee4adca138e80d7693af77c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MapConfig_1a8531726038aa89ce811bc8823f7a5d73)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1a62cccdca2af2b391346291631d3de9ef)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1aef1c3ea202cdfaefb38a6d3237df0f55)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfig_1a11e21e866b0c8ce1d3e809aa0d4b3515)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfig_1a4f6015cef82d347ce88f22ca6839031e)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public int32 `[`MapGameId_Optional`](#structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3) <a id="structFRHAPI__MapConfig_1a0216f5bb2b3caf91e9e0c586f3bacad3"></a>

ID to uniquely identify this map game.

#### `public bool `[`MapGameId_IsSet`](#structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5) <a id="structFRHAPI__MapConfig_1a207def926cd75eddd7994df26d9d41f5"></a>

true if MapGameId_Optional has been set to a value

#### `public FString `[`MapName`](#structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7) <a id="structFRHAPI__MapConfig_1af237d00c336253f72e9d1bbd3b5588a7"></a>

Name of the map the instance should load into.

#### `public FString `[`Mode_Optional`](#structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a) <a id="structFRHAPI__MapConfig_1a51c6c784973a27a3b176e3a427cab48a"></a>

Game mode for the instance to spawn in.

#### `public bool `[`Mode_IsSet`](#structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e) <a id="structFRHAPI__MapConfig_1a1536132bb6092b1aee8cc9551bd4c15e"></a>

true if Mode_Optional has been set to a value

#### `public float `[`SelectionChance_Optional`](#structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c) <a id="structFRHAPI__MapConfig_1ad86b91a2e8b31702852b55166588937c"></a>

Chance that this map will get selected in a rotation list.

#### `public bool `[`SelectionChance_IsSet`](#structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c) <a id="structFRHAPI__MapConfig_1a882a8efdf2c0bca08798e710c2da009c"></a>

true if SelectionChance_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1) <a id="structFRHAPI__MapConfig_1a42c344d2c89e3fcf161b5df2439886e1"></a>

Custom data to pass through to the instance.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5) <a id="structFRHAPI__MapConfig_1a51ebcd51e205cda7d7c57bbc4209d1b5"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MapConfig_1a13f29ac7373a2621b9077dbd52a6a3ed)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MapConfig_1a13f29ac7373a2621b9077dbd52a6a3ed"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MapConfig_1a8dc36bf51131ed55f9d52599d6913b67)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MapConfig_1a8dc36bf51131ed55f9d52599d6913b67"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1aafd5b918921624dd3fb59910a9c6e26b)`()` <a id="structFRHAPI__MapConfig_1aafd5b918921624dd3fb59910a9c6e26b"></a>

Gets the value of MapGameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1ac01012287449bd62c5418a7b62355421)`() const` <a id="structFRHAPI__MapConfig_1ac01012287449bd62c5418a7b62355421"></a>

Gets the value of MapGameId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMapGameId`](#structFRHAPI__MapConfig_1ad013cf9eb5d9879b0a60d4c3fb6bcec3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MapConfig_1ad013cf9eb5d9879b0a60d4c3fb6bcec3"></a>

Gets the value of MapGameId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMapGameId`](#structFRHAPI__MapConfig_1a5421efe6be6a43abb7490f54651165f6)`(int32 & OutValue) const` <a id="structFRHAPI__MapConfig_1a5421efe6be6a43abb7490f54651165f6"></a>

Fills OutValue with the value of MapGameId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1af8815abe988ac623d3ffc31a79d7ef20)`()` <a id="structFRHAPI__MapConfig_1af8815abe988ac623d3ffc31a79d7ef20"></a>

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMapGameIdOrNull`](#structFRHAPI__MapConfig_1a90e5880102cf394cf6251005595511ed)`() const` <a id="structFRHAPI__MapConfig_1a90e5880102cf394cf6251005595511ed"></a>

Returns a pointer to MapGameId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMapGameId`](#structFRHAPI__MapConfig_1af11b33271f0e2147bd781f86a85f10fc)`(const int32 & NewValue)` <a id="structFRHAPI__MapConfig_1af11b33271f0e2147bd781f86a85f10fc"></a>

Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMapGameId`](#structFRHAPI__MapConfig_1a51a2a80f628f78d15f3200f3ff5815b1)`(int32 && NewValue)` <a id="structFRHAPI__MapConfig_1a51a2a80f628f78d15f3200f3ff5815b1"></a>

Sets the value of MapGameId_Optional and also sets MapGameId_IsSet to true using move semantics.

#### `public inline void `[`ClearMapGameId`](#structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05)`()` <a id="structFRHAPI__MapConfig_1ae3e70615eb594ca742b7aec8c469ef05"></a>

Clears the value of MapGameId_Optional and sets MapGameId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MapGameId`](#structFRHAPI__MapConfig_1a50d3ccac3cb812449ccf6331608d0248)`()` <a id="structFRHAPI__MapConfig_1a50d3ccac3cb812449ccf6331608d0248"></a>

Returns the default value of MapGameId.

#### `public inline FORCEINLINE FString & `[`GetMapName`](#structFRHAPI__MapConfig_1af06c6c2b56b30d599e0e9ffcf68f4780)`()` <a id="structFRHAPI__MapConfig_1af06c6c2b56b30d599e0e9ffcf68f4780"></a>

Gets the value of MapName.

#### `public inline FORCEINLINE const FString & `[`GetMapName`](#structFRHAPI__MapConfig_1adbea333d52bd5b72c34004497cef00f6)`() const` <a id="structFRHAPI__MapConfig_1adbea333d52bd5b72c34004497cef00f6"></a>

Gets the value of MapName.

#### `public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfig_1ad8ef3c06c85db09d52fb8d0c531f7930)`(const FString & NewValue)` <a id="structFRHAPI__MapConfig_1ad8ef3c06c85db09d52fb8d0c531f7930"></a>

Sets the value of MapName.

#### `public inline FORCEINLINE void `[`SetMapName`](#structFRHAPI__MapConfig_1adcb25e772003a07e9850efa37f7bce20)`(FString && NewValue)` <a id="structFRHAPI__MapConfig_1adcb25e772003a07e9850efa37f7bce20"></a>

Sets the value of MapName using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__MapConfig_1a10fccfbcc24572992bcdd4ab35193c06)`()` <a id="structFRHAPI__MapConfig_1a10fccfbcc24572992bcdd4ab35193c06"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a0593b3cd53f6af89694852008313de35)`() const` <a id="structFRHAPI__MapConfig_1a0593b3cd53f6af89694852008313de35"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__MapConfig_1a1d5f2f9aec613988a3406b531203e8eb)`(const FString & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a1d5f2f9aec613988a3406b531203e8eb"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__MapConfig_1aed55699c8a1bf2be19fd35af713053a3)`(FString & OutValue) const` <a id="structFRHAPI__MapConfig_1aed55699c8a1bf2be19fd35af713053a3"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1abdccb4cf56d25ec4f7d528089b77e26d)`()` <a id="structFRHAPI__MapConfig_1abdccb4cf56d25ec4f7d528089b77e26d"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__MapConfig_1ab42043bb5ea0dfdf52f4e8d5de3a1b51)`() const` <a id="structFRHAPI__MapConfig_1ab42043bb5ea0dfdf52f4e8d5de3a1b51"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfig_1aecc939680c637da5848d56c7f74cc0d7)`(const FString & NewValue)` <a id="structFRHAPI__MapConfig_1aecc939680c637da5848d56c7f74cc0d7"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__MapConfig_1ad3192ea8c6a83852c39de53277fd3530)`(FString && NewValue)` <a id="structFRHAPI__MapConfig_1ad3192ea8c6a83852c39de53277fd3530"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e)`()` <a id="structFRHAPI__MapConfig_1a9291111cf4da9be48df098a6a1b58b3e"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline FORCEINLINE float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a755edefd06020aa24c8de86c9f712d4b)`()` <a id="structFRHAPI__MapConfig_1a755edefd06020aa24c8de86c9f712d4b"></a>

Gets the value of SelectionChance_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1ac7931e4707e9812999a8485682507eaa)`() const` <a id="structFRHAPI__MapConfig_1ac7931e4707e9812999a8485682507eaa"></a>

Gets the value of SelectionChance_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a392bc9f34c33b22ec830d69dec9ee928)`(const float & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a392bc9f34c33b22ec830d69dec9ee928"></a>

Gets the value of SelectionChance_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSelectionChance`](#structFRHAPI__MapConfig_1a7854558ce26ebf77c4a934e0e0d61313)`(float & OutValue) const` <a id="structFRHAPI__MapConfig_1a7854558ce26ebf77c4a934e0e0d61313"></a>

Fills OutValue with the value of SelectionChance_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1a0554163e147d0f485c44187afd4fa827)`()` <a id="structFRHAPI__MapConfig_1a0554163e147d0f485c44187afd4fa827"></a>

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetSelectionChanceOrNull`](#structFRHAPI__MapConfig_1ad6ea429795084ed087e0a58a50ff6ffc)`() const` <a id="structFRHAPI__MapConfig_1ad6ea429795084ed087e0a58a50ff6ffc"></a>

Returns a pointer to SelectionChance_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a6733a15ad5e21830d0d80e4fa7dcca73)`(const float & NewValue)` <a id="structFRHAPI__MapConfig_1a6733a15ad5e21830d0d80e4fa7dcca73"></a>

Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSelectionChance`](#structFRHAPI__MapConfig_1a5633bbdc0d6f87668f9d3b522e093e30)`(float && NewValue)` <a id="structFRHAPI__MapConfig_1a5633bbdc0d6f87668f9d3b522e093e30"></a>

Sets the value of SelectionChance_Optional and also sets SelectionChance_IsSet to true using move semantics.

#### `public inline void `[`ClearSelectionChance`](#structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb)`()` <a id="structFRHAPI__MapConfig_1ac69f4a713c2cc29e26310d8a19efd6eb"></a>

Clears the value of SelectionChance_Optional and sets SelectionChance_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a681f87a2e0e58573893f1a41bf327c1a)`()` <a id="structFRHAPI__MapConfig_1a681f87a2e0e58573893f1a41bf327c1a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a2a1c4332d96f1c3499423abc50041333)`() const` <a id="structFRHAPI__MapConfig_1a2a1c4332d96f1c3499423abc50041333"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MapConfig_1a6a5c9d034ee4adca138e80d7693af77c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MapConfig_1a6a5c9d034ee4adca138e80d7693af77c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MapConfig_1a8531726038aa89ce811bc8823f7a5d73)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MapConfig_1a8531726038aa89ce811bc8823f7a5d73"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1a62cccdca2af2b391346291631d3de9ef)`()` <a id="structFRHAPI__MapConfig_1a62cccdca2af2b391346291631d3de9ef"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MapConfig_1aef1c3ea202cdfaefb38a6d3237df0f55)`() const` <a id="structFRHAPI__MapConfig_1aef1c3ea202cdfaefb38a6d3237df0f55"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfig_1a11e21e866b0c8ce1d3e809aa0d4b3515)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MapConfig_1a11e21e866b0c8ce1d3e809aa0d4b3515"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MapConfig_1a4f6015cef82d347ce88f22ca6839031e)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MapConfig_1a4f6015cef82d347ce88f22ca6839031e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693)`()` <a id="structFRHAPI__MapConfig_1ab2a70607f4490b6fc462260b8b91a693"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

