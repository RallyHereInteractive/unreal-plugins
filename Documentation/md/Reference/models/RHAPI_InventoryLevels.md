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
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevels_1a45e43c5c5626a29475a6a555ca1b1ae2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a946ae6c80934374cf83948a7bc3541e8)`()` | Gets the value of Levels_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a321da68fd6ff3f045223c2c67d9c2b27)`() const` | Gets the value of Levels_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1af4a3391b72b38e925e7bc7b8686ce5f2)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & DefaultValue) const` | Gets the value of Levels_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLevels`](#structFRHAPI__InventoryLevels_1add168362f7655cecf4efb5abffa8f7cc)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & OutValue) const` | Fills OutValue with the value of Levels_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1a7c9a8dc1885065bc99f1b107445cd831)`()` | Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1ab615fbc18d1fc2baf1a644676fec4d61)`() const` | Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a6a64c010aeb8c8b6f30c1bf5debc20f8)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & NewValue)` | Sets the value of Levels_Optional and also sets Levels_IsSet to true.
`public inline FORCEINLINE void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a45c6477d1090520a735c374f6e79b275)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > && NewValue)` | Sets the value of Levels_Optional and also sets Levels_IsSet to true using move semantics.
`public inline void `[`ClearLevels`](#structFRHAPI__InventoryLevels_1acc3ec5ab42083d1d72cefedfe52cef67)`()` | Clears the value of Levels_Optional and sets Levels_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryLevels_1a45e43c5c5626a29475a6a555ca1b1ae2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryLevels_1a45e43c5c5626a29475a6a555ca1b1ae2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a946ae6c80934374cf83948a7bc3541e8)`()` <a id="structFRHAPI__InventoryLevels_1a946ae6c80934374cf83948a7bc3541e8"></a>

Gets the value of Levels_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1a321da68fd6ff3f045223c2c67d9c2b27)`() const` <a id="structFRHAPI__InventoryLevels_1a321da68fd6ff3f045223c2c67d9c2b27"></a>

Gets the value of Levels_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & `[`GetLevels`](#structFRHAPI__InventoryLevels_1af4a3391b72b38e925e7bc7b8686ce5f2)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & DefaultValue) const` <a id="structFRHAPI__InventoryLevels_1af4a3391b72b38e925e7bc7b8686ce5f2"></a>

Gets the value of Levels_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLevels`](#structFRHAPI__InventoryLevels_1add168362f7655cecf4efb5abffa8f7cc)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & OutValue) const` <a id="structFRHAPI__InventoryLevels_1add168362f7655cecf4efb5abffa8f7cc"></a>

Fills OutValue with the value of Levels_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1a7c9a8dc1885065bc99f1b107445cd831)`()` <a id="structFRHAPI__InventoryLevels_1a7c9a8dc1885065bc99f1b107445cd831"></a>

Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > * `[`GetLevelsOrNull`](#structFRHAPI__InventoryLevels_1ab615fbc18d1fc2baf1a644676fec4d61)`() const` <a id="structFRHAPI__InventoryLevels_1ab615fbc18d1fc2baf1a644676fec4d61"></a>

Returns a pointer to Levels_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a6a64c010aeb8c8b6f30c1bf5debc20f8)`(const TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > & NewValue)` <a id="structFRHAPI__InventoryLevels_1a6a64c010aeb8c8b6f30c1bf5debc20f8"></a>

Sets the value of Levels_Optional and also sets Levels_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLevels`](#structFRHAPI__InventoryLevels_1a45c6477d1090520a735c374f6e79b275)`(TArray< `[`FRHAPI_InventoryLevel`](RHAPI_InventoryLevel.md#structFRHAPI__InventoryLevel)` > && NewValue)` <a id="structFRHAPI__InventoryLevels_1a45c6477d1090520a735c374f6e79b275"></a>

Sets the value of Levels_Optional and also sets Levels_IsSet to true using move semantics.

#### `public inline void `[`ClearLevels`](#structFRHAPI__InventoryLevels_1acc3ec5ab42083d1d72cefedfe52cef67)`()` <a id="structFRHAPI__InventoryLevels_1acc3ec5ab42083d1d72cefedfe52cef67"></a>

Clears the value of Levels_Optional and sets Levels_IsSet to false.

