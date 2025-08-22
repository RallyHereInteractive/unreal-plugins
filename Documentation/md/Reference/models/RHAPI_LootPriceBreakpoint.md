---
title: RHAPI_LootPriceBreakpoint
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootPriceBreakpoint`](#structFRHAPI__LootPriceBreakpoint) | Price Breakpoint for a specific quantity of units to purchase.

## struct `FRHAPI_LootPriceBreakpoint` <a id="structFRHAPI__LootPriceBreakpoint"></a>

```
struct FRHAPI_LootPriceBreakpoint
  : public FRHAPI_Model
```

Price Breakpoint for a specific quantity of units to purchase.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Quantity_Optional`](#structFRHAPI__LootPriceBreakpoint_1acc2ebdee4ec21575877e3d58d65cfe26) | Amount of units that must be purchased to use this price.
`public bool `[`Quantity_IsSet`](#structFRHAPI__LootPriceBreakpoint_1a1c75a8c6cc10571e361b6a6734bbcbb5) | true if Quantity_Optional has been set to a value
`public TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > `[`Prices_Optional`](#structFRHAPI__LootPriceBreakpoint_1a4052913cc0df3936cca31cce83e78f97) | List of all possible prices that this breakpoint can be purchased with.
`public bool `[`Prices_IsSet`](#structFRHAPI__LootPriceBreakpoint_1a15564d6db277336bf69f5742650d8388) | true if Prices_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LootPriceBreakpoint_1a7394cf7b2197617c095373e1afd2f4c5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootPriceBreakpoint_1ac334405aaca90310ba3f2911a84dfac0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1ada63849d17e11e3aff84615399a74131)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a91b078d4afcd9ea00891dd376b2b867e)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1ac5e208d6ec524ae0cba9228b5bc02e9c)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a99d9ab58d983780f6a9eb4756e14dbb9)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1a821eaf3b377c528ba01004f671338ba2)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1aa0a075a5e999d1d3ef2052dae8ee074d)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a50c5aef735e08a926e503e26ff8ac00a)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a9e1934b69294d50b90bf1034253cad08)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__LootPriceBreakpoint_1a368a1f8252c9026f6f8ab37500628d1f)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__LootPriceBreakpoint_1a1f82cb2c33539d92cf0f05cb82d5149c)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a3c0c977ae57b06cd6c84a5567c5caf0b)`()` | Gets the value of Prices_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a6a4ce0d2487c3aaf32da49107ae5995e)`() const` | Gets the value of Prices_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1ad35082cea6886166539a75163ab767a9)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & DefaultValue) const` | Gets the value of Prices_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1ac062e533c6e832738dbbf9574e5a6800)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & OutValue) const` | Fills OutValue with the value of Prices_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1a9bdb6cd9054e77289fec60cc7e971546)`()` | Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1a19b0eb8b1a8021a8bb59c06aa9115320)`() const` | Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1a5907d1d0185d1e5dbd95353c2da643ca)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & NewValue)` | Sets the value of Prices_Optional and also sets Prices_IsSet to true.
`public inline FORCEINLINE void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1a030d137e1f343e49283794db769c4622)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > && NewValue)` | Sets the value of Prices_Optional and also sets Prices_IsSet to true using move semantics.
`public inline void `[`ClearPrices`](#structFRHAPI__LootPriceBreakpoint_1a1cfa25b466d2012c8fb4ab91f89b9b36)`()` | Clears the value of Prices_Optional and sets Prices_IsSet to false.

### Members

#### `public int32 `[`Quantity_Optional`](#structFRHAPI__LootPriceBreakpoint_1acc2ebdee4ec21575877e3d58d65cfe26) <a id="structFRHAPI__LootPriceBreakpoint_1acc2ebdee4ec21575877e3d58d65cfe26"></a>

Amount of units that must be purchased to use this price.

#### `public bool `[`Quantity_IsSet`](#structFRHAPI__LootPriceBreakpoint_1a1c75a8c6cc10571e361b6a6734bbcbb5) <a id="structFRHAPI__LootPriceBreakpoint_1a1c75a8c6cc10571e361b6a6734bbcbb5"></a>

true if Quantity_Optional has been set to a value

#### `public TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > `[`Prices_Optional`](#structFRHAPI__LootPriceBreakpoint_1a4052913cc0df3936cca31cce83e78f97) <a id="structFRHAPI__LootPriceBreakpoint_1a4052913cc0df3936cca31cce83e78f97"></a>

List of all possible prices that this breakpoint can be purchased with.

#### `public bool `[`Prices_IsSet`](#structFRHAPI__LootPriceBreakpoint_1a15564d6db277336bf69f5742650d8388) <a id="structFRHAPI__LootPriceBreakpoint_1a15564d6db277336bf69f5742650d8388"></a>

true if Prices_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootPriceBreakpoint_1a7394cf7b2197617c095373e1afd2f4c5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a7394cf7b2197617c095373e1afd2f4c5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPriceBreakpoint_1ac334405aaca90310ba3f2911a84dfac0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LootPriceBreakpoint_1ac334405aaca90310ba3f2911a84dfac0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1ada63849d17e11e3aff84615399a74131)`()` <a id="structFRHAPI__LootPriceBreakpoint_1ada63849d17e11e3aff84615399a74131"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a91b078d4afcd9ea00891dd376b2b867e)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1a91b078d4afcd9ea00891dd376b2b867e"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1ac5e208d6ec524ae0cba9228b5bc02e9c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1ac5e208d6ec524ae0cba9228b5bc02e9c"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a99d9ab58d983780f6a9eb4756e14dbb9)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1a99d9ab58d983780f6a9eb4756e14dbb9"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1a821eaf3b377c528ba01004f671338ba2)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a821eaf3b377c528ba01004f671338ba2"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1aa0a075a5e999d1d3ef2052dae8ee074d)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1aa0a075a5e999d1d3ef2052dae8ee074d"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a50c5aef735e08a926e503e26ff8ac00a)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a50c5aef735e08a926e503e26ff8ac00a"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a9e1934b69294d50b90bf1034253cad08)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a9e1934b69294d50b90bf1034253cad08"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__LootPriceBreakpoint_1a368a1f8252c9026f6f8ab37500628d1f)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a368a1f8252c9026f6f8ab37500628d1f"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__LootPriceBreakpoint_1a1f82cb2c33539d92cf0f05cb82d5149c)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a1f82cb2c33539d92cf0f05cb82d5149c"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a3c0c977ae57b06cd6c84a5567c5caf0b)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a3c0c977ae57b06cd6c84a5567c5caf0b"></a>

Gets the value of Prices_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a6a4ce0d2487c3aaf32da49107ae5995e)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1a6a4ce0d2487c3aaf32da49107ae5995e"></a>

Gets the value of Prices_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1ad35082cea6886166539a75163ab767a9)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & DefaultValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1ad35082cea6886166539a75163ab767a9"></a>

Gets the value of Prices_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1ac062e533c6e832738dbbf9574e5a6800)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & OutValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1ac062e533c6e832738dbbf9574e5a6800"></a>

Fills OutValue with the value of Prices_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1a9bdb6cd9054e77289fec60cc7e971546)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a9bdb6cd9054e77289fec60cc7e971546"></a>

Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1a19b0eb8b1a8021a8bb59c06aa9115320)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1a19b0eb8b1a8021a8bb59c06aa9115320"></a>

Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1a5907d1d0185d1e5dbd95353c2da643ca)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a5907d1d0185d1e5dbd95353c2da643ca"></a>

Sets the value of Prices_Optional and also sets Prices_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1a030d137e1f343e49283794db769c4622)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > && NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a030d137e1f343e49283794db769c4622"></a>

Sets the value of Prices_Optional and also sets Prices_IsSet to true using move semantics.

#### `public inline void `[`ClearPrices`](#structFRHAPI__LootPriceBreakpoint_1a1cfa25b466d2012c8fb4ab91f89b9b36)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a1cfa25b466d2012c8fb4ab91f89b9b36"></a>

Clears the value of Prices_Optional and sets Prices_IsSet to false.

