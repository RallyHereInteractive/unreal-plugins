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
`public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrencies_1a3f81ce3e6d053d6f94c65e4671e6e184)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a3b5848ae39f22697aee33bc76684fc47)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a599d138b24da59080e05f7e0ff39e71e)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a49b7bb058a1da19e2b959b6e89f0ed15)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a7f6b6a18b447dd0e10deb31dc2a8581e)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1a96ccf683d2b511af907bf2589f1e8a70)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1a34fb1bbb766d32af07795042159ca252)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a247e6a72e91df3d991e786acc88c134c)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a733475c2ea6ffee7a50dda3e5d6c91e4)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__LootPriceCurrencies_1a8c330470ea1908537853066d0fc65e86)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.
`public inline bool `[`IsCurrenciesSet`](#structFRHAPI__LootPriceCurrencies_1a3ea6c06ff8d093787f2d4e05c9391646)`() const` | Checks whether Currencies_Optional has been set.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrencies_1a3f81ce3e6d053d6f94c65e4671e6e184)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LootPriceCurrencies_1a3f81ce3e6d053d6f94c65e4671e6e184"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a3b5848ae39f22697aee33bc76684fc47)`()` <a id="structFRHAPI__LootPriceCurrencies_1a3b5848ae39f22697aee33bc76684fc47"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a599d138b24da59080e05f7e0ff39e71e)`() const` <a id="structFRHAPI__LootPriceCurrencies_1a599d138b24da59080e05f7e0ff39e71e"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a49b7bb058a1da19e2b959b6e89f0ed15)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrencies_1a49b7bb058a1da19e2b959b6e89f0ed15"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a7f6b6a18b447dd0e10deb31dc2a8581e)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & OutValue) const` <a id="structFRHAPI__LootPriceCurrencies_1a7f6b6a18b447dd0e10deb31dc2a8581e"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1a96ccf683d2b511af907bf2589f1e8a70)`()` <a id="structFRHAPI__LootPriceCurrencies_1a96ccf683d2b511af907bf2589f1e8a70"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__LootPriceCurrencies_1a34fb1bbb766d32af07795042159ca252)`() const` <a id="structFRHAPI__LootPriceCurrencies_1a34fb1bbb766d32af07795042159ca252"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a247e6a72e91df3d991e786acc88c134c)`(const TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > & NewValue)` <a id="structFRHAPI__LootPriceCurrencies_1a247e6a72e91df3d991e786acc88c134c"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__LootPriceCurrencies_1a733475c2ea6ffee7a50dda3e5d6c91e4)`(TArray< `[`FRHAPI_LootPriceCurrency`](RHAPI_LootPriceCurrency.md#structFRHAPI__LootPriceCurrency)` > && NewValue)` <a id="structFRHAPI__LootPriceCurrencies_1a733475c2ea6ffee7a50dda3e5d6c91e4"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__LootPriceCurrencies_1a8c330470ea1908537853066d0fc65e86)`()` <a id="structFRHAPI__LootPriceCurrencies_1a8c330470ea1908537853066d0fc65e86"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

#### `public inline bool `[`IsCurrenciesSet`](#structFRHAPI__LootPriceCurrencies_1a3ea6c06ff8d093787f2d4e05c9391646)`() const` <a id="structFRHAPI__LootPriceCurrencies_1a3ea6c06ff8d093787f2d4e05c9391646"></a>

Checks whether Currencies_Optional has been set.

