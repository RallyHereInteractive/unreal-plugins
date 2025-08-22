---
title: RHAPI_LootPriceCurrencies
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootPriceCurrencies`](#structFRHAPI__LootPriceCurrencies) | Single price that the loot can be purchased with. Note that all currencies of this list will be spent together.

## struct `FRHAPI_LootPriceCurrencies` <a id="structFRHAPI__LootPriceCurrencies"></a>

```
struct FRHAPI_LootPriceCurrencies
  : public FRHAPI_Model
```

Single price that the loot can be purchased with. Note that all currencies of this list will be spent together.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > `[`Currencies_Optional`](#structFRHAPI__LootPriceCurrencies_1a6d4e46da4afe1b54c8bfe9a56de9b36f) | All required currencies to use this price for purchase. All currencies in this list are spent together.
`public bool `[`Currencies_IsSet`](#structFRHAPI__LootPriceCurrencies_1a220a00f32d0b3d5b6a0d3d675b8b5042) | true if Currencies_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrencies_1ad4bb860746949477863298dc57703620)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrencies_1afddf3d6bdea93b070fd2d3f362166755)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a6701d64fb5063ef5b304b59d1aea3e33)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1abf8f25faaf1c08b9dfba0e89b834a289)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1adab33db82a7da35d10acb7c434613b89)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a2f716c1c51daacc27fcb84382f7a0509)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1a2b4c4bb4698326a161f25ac07d39a39c)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1ae47078b4bd0d8a529ce4e5c6da470b82)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1ad566da955f9e6717f582e166b235e9b3)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a621af4a0e8975ce77e5d240e18eea2f1)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__LootPriceCurrencies_1a8c330470ea1908537853066d0fc65e86)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > `[`Currencies_Optional`](#structFRHAPI__LootPriceCurrencies_1a6d4e46da4afe1b54c8bfe9a56de9b36f) <a id="structFRHAPI__LootPriceCurrencies_1a6d4e46da4afe1b54c8bfe9a56de9b36f"></a>

All required currencies to use this price for purchase. All currencies in this list are spent together.

#### `public bool `[`Currencies_IsSet`](#structFRHAPI__LootPriceCurrencies_1a220a00f32d0b3d5b6a0d3d675b8b5042) <a id="structFRHAPI__LootPriceCurrencies_1a220a00f32d0b3d5b6a0d3d675b8b5042"></a>

true if Currencies_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrencies_1ad4bb860746949477863298dc57703620)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootPriceCurrencies_1ad4bb860746949477863298dc57703620"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrencies_1afddf3d6bdea93b070fd2d3f362166755)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LootPriceCurrencies_1afddf3d6bdea93b070fd2d3f362166755"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a6701d64fb5063ef5b304b59d1aea3e33)`()` <a id="structFRHAPI__LootPriceCurrencies_1a6701d64fb5063ef5b304b59d1aea3e33"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1abf8f25faaf1c08b9dfba0e89b834a289)`() const` <a id="structFRHAPI__LootPriceCurrencies_1abf8f25faaf1c08b9dfba0e89b834a289"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1adab33db82a7da35d10acb7c434613b89)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrencies_1adab33db82a7da35d10acb7c434613b89"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a2f716c1c51daacc27fcb84382f7a0509)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & OutValue) const` <a id="structFRHAPI__LootPriceCurrencies_1a2f716c1c51daacc27fcb84382f7a0509"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1a2b4c4bb4698326a161f25ac07d39a39c)`()` <a id="structFRHAPI__LootPriceCurrencies_1a2b4c4bb4698326a161f25ac07d39a39c"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1ae47078b4bd0d8a529ce4e5c6da470b82)`() const` <a id="structFRHAPI__LootPriceCurrencies_1ae47078b4bd0d8a529ce4e5c6da470b82"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1ad566da955f9e6717f582e166b235e9b3)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & NewValue)` <a id="structFRHAPI__LootPriceCurrencies_1ad566da955f9e6717f582e166b235e9b3"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a621af4a0e8975ce77e5d240e18eea2f1)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > && NewValue)` <a id="structFRHAPI__LootPriceCurrencies_1a621af4a0e8975ce77e5d240e18eea2f1"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__LootPriceCurrencies_1a8c330470ea1908537853066d0fc65e86)`()` <a id="structFRHAPI__LootPriceCurrencies_1a8c330470ea1908537853066d0fc65e86"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

