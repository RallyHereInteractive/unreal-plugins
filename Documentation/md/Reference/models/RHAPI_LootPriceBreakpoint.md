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
`public inline int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1af196622b72c1bf6fcd883322a0c69585)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1aa6775fb5942d4e3bab5acea0df6dc9d7)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a3e1ecd261bee4831e6553f41fbb3fca0)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a4ff5ec289a167764db18708d577e4247)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1aed4fdc8fc50d0ff4981563fcf8cc35cf)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1aeea27282d2dc28821e95e11022b94e5e)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a3c897aa8709f9f66fcf604161ecd9aaf)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a6a46fafcf3ccfafc236ff46fdb6eaa9a)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__LootPriceBreakpoint_1a368a1f8252c9026f6f8ab37500628d1f)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__LootPriceBreakpoint_1a8d1246663ce0ca9db1295d14a012a0ad)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__LootPriceBreakpoint_1ab6058f2af55df28d667124b8a223e076)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__LootPriceBreakpoint_1af7732c581eea26a71b2427e426a05436)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1aa1bb9e59716ab6fa4bbb7bad4ff0e0c8)`()` | Gets the value of Prices_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a08b4a9c2ebb7be03b40a8f617c01450a)`() const` | Gets the value of Prices_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a0fdc97e9fc4772c4c0449db393bc901a)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & DefaultValue) const` | Gets the value of Prices_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a9738f7406cc8a7340b3c860a007bb648)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & OutValue) const` | Fills OutValue with the value of Prices_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1a760a1e6fbdd92d79feb4a5c41938dcd4)`()` | Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1aa97469e0459a105921e1390aacd64717)`() const` | Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1ae6a49fd6731176d9c3685fd905820d56)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & NewValue)` | Sets the value of Prices_Optional and also sets Prices_IsSet to true.
`public inline void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1a712e276c2f8a642a0433f411780d0880)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > && NewValue)` | Sets the value of Prices_Optional and also sets Prices_IsSet to true using move semantics.
`public inline void `[`ClearPrices`](#structFRHAPI__LootPriceBreakpoint_1a1cfa25b466d2012c8fb4ab91f89b9b36)`()` | Clears the value of Prices_Optional and sets Prices_IsSet to false.
`public inline bool `[`IsPricesSet`](#structFRHAPI__LootPriceBreakpoint_1a12f3017bfe5dad0be173cf4829598325)`() const` | Checks whether Prices_Optional has been set.

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

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1af196622b72c1bf6fcd883322a0c69585)`()` <a id="structFRHAPI__LootPriceBreakpoint_1af196622b72c1bf6fcd883322a0c69585"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1aa6775fb5942d4e3bab5acea0df6dc9d7)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1aa6775fb5942d4e3bab5acea0df6dc9d7"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a3e1ecd261bee4831e6553f41fbb3fca0)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1a3e1ecd261bee4831e6553f41fbb3fca0"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a4ff5ec289a167764db18708d577e4247)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1a4ff5ec289a167764db18708d577e4247"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1aed4fdc8fc50d0ff4981563fcf8cc35cf)`()` <a id="structFRHAPI__LootPriceBreakpoint_1aed4fdc8fc50d0ff4981563fcf8cc35cf"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__LootPriceBreakpoint_1aeea27282d2dc28821e95e11022b94e5e)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1aeea27282d2dc28821e95e11022b94e5e"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a3c897aa8709f9f66fcf604161ecd9aaf)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a3c897aa8709f9f66fcf604161ecd9aaf"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline void `[`SetQuantity`](#structFRHAPI__LootPriceBreakpoint_1a6a46fafcf3ccfafc236ff46fdb6eaa9a)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a6a46fafcf3ccfafc236ff46fdb6eaa9a"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__LootPriceBreakpoint_1a368a1f8252c9026f6f8ab37500628d1f)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a368a1f8252c9026f6f8ab37500628d1f"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline bool `[`IsQuantitySet`](#structFRHAPI__LootPriceBreakpoint_1a8d1246663ce0ca9db1295d14a012a0ad)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1a8d1246663ce0ca9db1295d14a012a0ad"></a>

Checks whether Quantity_Optional has been set.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__LootPriceBreakpoint_1ab6058f2af55df28d667124b8a223e076)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1ab6058f2af55df28d667124b8a223e076"></a>

Returns true if Quantity_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__LootPriceBreakpoint_1af7732c581eea26a71b2427e426a05436)`()` <a id="structFRHAPI__LootPriceBreakpoint_1af7732c581eea26a71b2427e426a05436"></a>

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.

#### `public inline TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1aa1bb9e59716ab6fa4bbb7bad4ff0e0c8)`()` <a id="structFRHAPI__LootPriceBreakpoint_1aa1bb9e59716ab6fa4bbb7bad4ff0e0c8"></a>

Gets the value of Prices_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a08b4a9c2ebb7be03b40a8f617c01450a)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1a08b4a9c2ebb7be03b40a8f617c01450a"></a>

Gets the value of Prices_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a0fdc97e9fc4772c4c0449db393bc901a)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & DefaultValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1a0fdc97e9fc4772c4c0449db393bc901a"></a>

Gets the value of Prices_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPrices`](#structFRHAPI__LootPriceBreakpoint_1a9738f7406cc8a7340b3c860a007bb648)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & OutValue) const` <a id="structFRHAPI__LootPriceBreakpoint_1a9738f7406cc8a7340b3c860a007bb648"></a>

Fills OutValue with the value of Prices_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1a760a1e6fbdd92d79feb4a5c41938dcd4)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a760a1e6fbdd92d79feb4a5c41938dcd4"></a>

Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > * `[`GetPricesOrNull`](#structFRHAPI__LootPriceBreakpoint_1aa97469e0459a105921e1390aacd64717)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1aa97469e0459a105921e1390aacd64717"></a>

Returns a pointer to Prices_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1ae6a49fd6731176d9c3685fd905820d56)`(const TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > & NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1ae6a49fd6731176d9c3685fd905820d56"></a>

Sets the value of Prices_Optional and also sets Prices_IsSet to true.

#### `public inline void `[`SetPrices`](#structFRHAPI__LootPriceBreakpoint_1a712e276c2f8a642a0433f411780d0880)`(TArray< `[`FRHAPI_LootPriceCurrencies`](RHAPI_LootPriceCurrencies.md#structFRHAPI__LootPriceCurrencies)` > && NewValue)` <a id="structFRHAPI__LootPriceBreakpoint_1a712e276c2f8a642a0433f411780d0880"></a>

Sets the value of Prices_Optional and also sets Prices_IsSet to true using move semantics.

#### `public inline void `[`ClearPrices`](#structFRHAPI__LootPriceBreakpoint_1a1cfa25b466d2012c8fb4ab91f89b9b36)`()` <a id="structFRHAPI__LootPriceBreakpoint_1a1cfa25b466d2012c8fb4ab91f89b9b36"></a>

Clears the value of Prices_Optional and sets Prices_IsSet to false.

#### `public inline bool `[`IsPricesSet`](#structFRHAPI__LootPriceBreakpoint_1a12f3017bfe5dad0be173cf4829598325)`() const` <a id="structFRHAPI__LootPriceBreakpoint_1a12f3017bfe5dad0be173cf4829598325"></a>

Checks whether Prices_Optional has been set.

