---
title: RHAPI_InventoryLevels
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryLevels`](#structFRHAPI__InventoryLevels) | Inventory Levels for a Player.

## struct `FRHAPI_InventoryLevels` <a id="structFRHAPI__InventoryLevels"></a>

```
struct FRHAPI_InventoryLevels
  : public FRHAPI_Model
```

Inventory Levels for a Player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > `[`Levels_Optional`](#structFRHAPI__InventoryLevels_1a0d74f3208ddc6a32cac9a6fb3bbbde00) | Inventory Levels for a Player.
`public bool `[`Levels_IsSet`](#structFRHAPI__InventoryLevels_1ab3741adad43b0995591ccaea1d457b16) | true if Levels_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryLevels_1a6e435006a5dcbac40ebd0c654e9fc734)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevels_1a301f93ae7104e1bd9acdf18d418403fe)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a9dfc3820b02446f9a435625b4131fc7e)`()` | Gets the value of Levels_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1aee3a8ed23e254e32eefac2a094b3ea54)`() const` | Gets the value of Levels_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a7c0a033b3ac8920aa5e4ac6f4b51c04a)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & DefaultValue) const` | Gets the value of Levels_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLevels`](#structFRHAPI__InventoryLevels_1adbfa2b3171b06adc722dec3348e89d66)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & OutValue) const` | Fills OutValue with the value of Levels_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1aa6391f6bd59e80922dc8d661da2c0cec)`()` | Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1a8ac3e6773da1732983a9800e57616917)`() const` | Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a86449146774d856b963f441d8fccaebd)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & NewValue)` | Sets the value of Levels_Optional and also sets Levels_IsSet to true.
`public inline void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a0bff6cd84910a5ee09cccaf31f3a62ba)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > && NewValue)` | Sets the value of Levels_Optional and also sets Levels_IsSet to true using move semantics.
`public inline void `[`ClearLevels`](#structFRHAPI__InventoryLevels_1acc3ec5ab42083d1d72cefedfe52cef67)`()` | Clears the value of Levels_Optional and sets Levels_IsSet to false.
`public inline bool `[`IsLevelsSet`](#structFRHAPI__InventoryLevels_1a8ea9931990f43a82ba362a35ee1df31f)`() const` | Checks whether Levels_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > `[`Levels_Optional`](#structFRHAPI__InventoryLevels_1a0d74f3208ddc6a32cac9a6fb3bbbde00) <a id="structFRHAPI__InventoryLevels_1a0d74f3208ddc6a32cac9a6fb3bbbde00"></a>

Inventory Levels for a Player.

#### `public bool `[`Levels_IsSet`](#structFRHAPI__InventoryLevels_1ab3741adad43b0995591ccaea1d457b16) <a id="structFRHAPI__InventoryLevels_1ab3741adad43b0995591ccaea1d457b16"></a>

true if Levels_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryLevels_1a6e435006a5dcbac40ebd0c654e9fc734)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryLevels_1a6e435006a5dcbac40ebd0c654e9fc734"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevels_1a301f93ae7104e1bd9acdf18d418403fe)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventoryLevels_1a301f93ae7104e1bd9acdf18d418403fe"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a9dfc3820b02446f9a435625b4131fc7e)`()` <a id="structFRHAPI__InventoryLevels_1a9dfc3820b02446f9a435625b4131fc7e"></a>

Gets the value of Levels_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1aee3a8ed23e254e32eefac2a094b3ea54)`() const` <a id="structFRHAPI__InventoryLevels_1aee3a8ed23e254e32eefac2a094b3ea54"></a>

Gets the value of Levels_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a7c0a033b3ac8920aa5e4ac6f4b51c04a)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & DefaultValue) const` <a id="structFRHAPI__InventoryLevels_1a7c0a033b3ac8920aa5e4ac6f4b51c04a"></a>

Gets the value of Levels_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLevels`](#structFRHAPI__InventoryLevels_1adbfa2b3171b06adc722dec3348e89d66)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & OutValue) const` <a id="structFRHAPI__InventoryLevels_1adbfa2b3171b06adc722dec3348e89d66"></a>

Fills OutValue with the value of Levels_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1aa6391f6bd59e80922dc8d661da2c0cec)`()` <a id="structFRHAPI__InventoryLevels_1aa6391f6bd59e80922dc8d661da2c0cec"></a>

Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1a8ac3e6773da1732983a9800e57616917)`() const` <a id="structFRHAPI__InventoryLevels_1a8ac3e6773da1732983a9800e57616917"></a>

Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a86449146774d856b963f441d8fccaebd)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & NewValue)` <a id="structFRHAPI__InventoryLevels_1a86449146774d856b963f441d8fccaebd"></a>

Sets the value of Levels_Optional and also sets Levels_IsSet to true.

#### `public inline void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a0bff6cd84910a5ee09cccaf31f3a62ba)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > && NewValue)` <a id="structFRHAPI__InventoryLevels_1a0bff6cd84910a5ee09cccaf31f3a62ba"></a>

Sets the value of Levels_Optional and also sets Levels_IsSet to true using move semantics.

#### `public inline void `[`ClearLevels`](#structFRHAPI__InventoryLevels_1acc3ec5ab42083d1d72cefedfe52cef67)`()` <a id="structFRHAPI__InventoryLevels_1acc3ec5ab42083d1d72cefedfe52cef67"></a>

Clears the value of Levels_Optional and sets Levels_IsSet to false.

#### `public inline bool `[`IsLevelsSet`](#structFRHAPI__InventoryLevels_1a8ea9931990f43a82ba362a35ee1df31f)`() const` <a id="structFRHAPI__InventoryLevels_1a8ea9931990f43a82ba362a35ee1df31f"></a>

Checks whether Levels_Optional has been set.

