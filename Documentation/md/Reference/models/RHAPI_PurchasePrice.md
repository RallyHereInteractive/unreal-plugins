---
title: RHAPI_PurchasePrice
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PurchasePrice`](#structFRHAPI__PurchasePrice) | The purchase price of an Item.

## struct `FRHAPI_PurchasePrice` <a id="structFRHAPI__PurchasePrice"></a>

```
struct FRHAPI_PurchasePrice
  : public FRHAPI_Model
```

The purchase price of an Item.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PriceItemId_Optional`](#structFRHAPI__PurchasePrice_1a06ded8afd467545bcbc1d65df4590eab) | The Item used as the currency for the purchase. Deprecated. Use currencies instead.
`public bool `[`PriceItemId_IsSet`](#structFRHAPI__PurchasePrice_1afcc1a2d955e3eb4803b5027e2135760f) | true if PriceItemId_Optional has been set to a value
`public int32 `[`Price_Optional`](#structFRHAPI__PurchasePrice_1a8cb720494b67ae992ebc3c9fa0db3b71) | The price of the Item. Deprecated. Use currencies instead.
`public bool `[`Price_IsSet`](#structFRHAPI__PurchasePrice_1acb6bb6768e7b0f995b6fe36e07f1c696) | true if Price_Optional has been set to a value
`public int32 `[`PriceCouponItemId_Optional`](#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7) | The Item used as the coupon for the purchase.
`public bool `[`PriceCouponItemId_IsSet`](#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0) | true if PriceCouponItemId_Optional has been set to a value
`public TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PurchasePrice_1a89bd02520de60e0e154002f442203362) | List of currencies for this purchase price.
`public bool `[`Currencies_IsSet`](#structFRHAPI__PurchasePrice_1ac8092e120be50625e87f7891f202d7d3) | true if Currencies_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PurchasePrice_1a0ff3da398c5aa47aa9fa948c70da562a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurchasePrice_1a01defa4513f3ad2f6daac36d8a4a0aba)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a0bbad8fb526c795e5ef94e9486732873)`()` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ab07a56ec86108c79ebe61d1c6a2e8ddb)`() const` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a79026f16d5ab5fe86b29868c5b42f4d1)`(const int32 & DefaultValue) const` | Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a38592831d19b11ef864aab2c87e66cb2)`(int32 & OutValue) const` | Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1ab5b406ab0c1ad7833af4ee527a0cb549)`()` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a34720db51374bc9ae7b9eada2839fc57)`() const` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1a576be34260b4bd36199f9fcd8c1eb3c7)`(const int32 & NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1ab9f07a2a0e33a1afa9f7df20937811a9)`(int32 && NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemId`](#structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc)`()` | Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.
`public inline bool `[`IsPriceItemIdSet`](#structFRHAPI__PurchasePrice_1aea4f03f31308974f418c09404f1986ac)`() const` | Checks whether PriceItemId_Optional has been set.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)`() const` | Returns true if PriceItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)`()` | Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.
`public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1ae82a232869857df7781f733b6f0e8405)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a22f98d9ee805b5b30ce1992f9d2e54b9)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1aa693c948a1f28954fe8bec6225d59fa7)`(const int32 & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPrice`](#structFRHAPI__PurchasePrice_1a9de82033e012e6ec77df26f9e2ac7e20)`(int32 & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1abea1c0312f6f743fd3057ec173942224)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1ad7b4b21209e5197d5c99bb23cc234d0a)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1ac77de08a63edaac744f1bbb757bcb6a4)`(const int32 & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a20ca007791351db8a82bf3466286fd77)`(int32 && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline bool `[`IsPriceSet`](#structFRHAPI__PurchasePrice_1ab855164885438d759d81309d52b053dd)`() const` | Checks whether Price_Optional has been set.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)`() const` | Returns true if Price_Optional is set and matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)`()` | Sets the value of Price_Optional to its default and also sets Price_IsSet to true.
`public inline int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1adcdfbcfe42e900d9f75dc912f423db18)`()` | Gets the value of PriceCouponItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a742a7b9bdff50c88ca59504924c3bd4f)`() const` | Gets the value of PriceCouponItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a47df9e5eef0c570ef02337d560694f7d)`(const int32 & DefaultValue) const` | Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091)`(int32 & OutValue) const` | Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1a34af82ae77ab08794c5ad0430440cbec)`()` | Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1ae6d37883de533dfc6c188d2a293ad858)`() const` | Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a03bccd19cb99f406ae6527a357daedec)`(const int32 & NewValue)` | Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.
`public inline void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a79bb4b09df74e75102c0a119893828de)`(int32 && NewValue)` | Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)`()` | Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.
`public inline bool `[`IsPriceCouponItemIdSet`](#structFRHAPI__PurchasePrice_1a68c11da13099ee91dafacd573c90ea68)`() const` | Checks whether PriceCouponItemId_Optional has been set.
`public inline bool `[`IsPriceCouponItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440)`() const` | Returns true if PriceCouponItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceCouponItemIdToDefault`](#structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78)`()` | Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true.
`public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a75085407be253da11175b776b1b6953c)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a6e98063de4271eaf908d3bfd63c5e680)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1ae92b849020c4176f2dc11ef122d9a51f)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a0c7fd1d2f86beecf5ec7a4b3c03e5b1f)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a4259061203baed114e5749e2dcb305db)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a8773dfaaf5a5178c6f915f7c1938f057)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1a16651c51e97b10d8670d8cc050eccd03)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1aaf899f1478b661e10fe6b234b20534ed)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.
`public inline bool `[`IsCurrenciesSet`](#structFRHAPI__PurchasePrice_1a127cf025847595e13dfea72b02097b9d)`() const` | Checks whether Currencies_Optional has been set.

### Members

#### `public int32 `[`PriceItemId_Optional`](#structFRHAPI__PurchasePrice_1a06ded8afd467545bcbc1d65df4590eab) <a id="structFRHAPI__PurchasePrice_1a06ded8afd467545bcbc1d65df4590eab"></a>

The Item used as the currency for the purchase. Deprecated. Use currencies instead.

#### `public bool `[`PriceItemId_IsSet`](#structFRHAPI__PurchasePrice_1afcc1a2d955e3eb4803b5027e2135760f) <a id="structFRHAPI__PurchasePrice_1afcc1a2d955e3eb4803b5027e2135760f"></a>

true if PriceItemId_Optional has been set to a value

#### `public int32 `[`Price_Optional`](#structFRHAPI__PurchasePrice_1a8cb720494b67ae992ebc3c9fa0db3b71) <a id="structFRHAPI__PurchasePrice_1a8cb720494b67ae992ebc3c9fa0db3b71"></a>

The price of the Item. Deprecated. Use currencies instead.

#### `public bool `[`Price_IsSet`](#structFRHAPI__PurchasePrice_1acb6bb6768e7b0f995b6fe36e07f1c696) <a id="structFRHAPI__PurchasePrice_1acb6bb6768e7b0f995b6fe36e07f1c696"></a>

true if Price_Optional has been set to a value

#### `public int32 `[`PriceCouponItemId_Optional`](#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7) <a id="structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7"></a>

The Item used as the coupon for the purchase.

#### `public bool `[`PriceCouponItemId_IsSet`](#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0) <a id="structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0"></a>

true if PriceCouponItemId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PurchasePrice_1a89bd02520de60e0e154002f442203362) <a id="structFRHAPI__PurchasePrice_1a89bd02520de60e0e154002f442203362"></a>

List of currencies for this purchase price.

#### `public bool `[`Currencies_IsSet`](#structFRHAPI__PurchasePrice_1ac8092e120be50625e87f7891f202d7d3) <a id="structFRHAPI__PurchasePrice_1ac8092e120be50625e87f7891f202d7d3"></a>

true if Currencies_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurchasePrice_1a0ff3da398c5aa47aa9fa948c70da562a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurchasePrice_1a0ff3da398c5aa47aa9fa948c70da562a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurchasePrice_1a01defa4513f3ad2f6daac36d8a4a0aba)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PurchasePrice_1a01defa4513f3ad2f6daac36d8a4a0aba"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a0bbad8fb526c795e5ef94e9486732873)`()` <a id="structFRHAPI__PurchasePrice_1a0bbad8fb526c795e5ef94e9486732873"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ab07a56ec86108c79ebe61d1c6a2e8ddb)`() const` <a id="structFRHAPI__PurchasePrice_1ab07a56ec86108c79ebe61d1c6a2e8ddb"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a79026f16d5ab5fe86b29868c5b42f4d1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1a79026f16d5ab5fe86b29868c5b42f4d1"></a>

Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a38592831d19b11ef864aab2c87e66cb2)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a38592831d19b11ef864aab2c87e66cb2"></a>

Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1ab5b406ab0c1ad7833af4ee527a0cb549)`()` <a id="structFRHAPI__PurchasePrice_1ab5b406ab0c1ad7833af4ee527a0cb549"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a34720db51374bc9ae7b9eada2839fc57)`() const` <a id="structFRHAPI__PurchasePrice_1a34720db51374bc9ae7b9eada2839fc57"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1a576be34260b4bd36199f9fcd8c1eb3c7)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePrice_1a576be34260b4bd36199f9fcd8c1eb3c7"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1ab9f07a2a0e33a1afa9f7df20937811a9)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePrice_1ab9f07a2a0e33a1afa9f7df20937811a9"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceItemId`](#structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc)`()` <a id="structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc"></a>

Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.

#### `public inline bool `[`IsPriceItemIdSet`](#structFRHAPI__PurchasePrice_1aea4f03f31308974f418c09404f1986ac)`() const` <a id="structFRHAPI__PurchasePrice_1aea4f03f31308974f418c09404f1986ac"></a>

Checks whether PriceItemId_Optional has been set.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)`() const` <a id="structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f"></a>

Returns true if PriceItemId_Optional is set and matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)`()` <a id="structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7"></a>

Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1ae82a232869857df7781f733b6f0e8405)`()` <a id="structFRHAPI__PurchasePrice_1ae82a232869857df7781f733b6f0e8405"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a22f98d9ee805b5b30ce1992f9d2e54b9)`() const` <a id="structFRHAPI__PurchasePrice_1a22f98d9ee805b5b30ce1992f9d2e54b9"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1aa693c948a1f28954fe8bec6225d59fa7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1aa693c948a1f28954fe8bec6225d59fa7"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPrice`](#structFRHAPI__PurchasePrice_1a9de82033e012e6ec77df26f9e2ac7e20)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a9de82033e012e6ec77df26f9e2ac7e20"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1abea1c0312f6f743fd3057ec173942224)`()` <a id="structFRHAPI__PurchasePrice_1abea1c0312f6f743fd3057ec173942224"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1ad7b4b21209e5197d5c99bb23cc234d0a)`() const` <a id="structFRHAPI__PurchasePrice_1ad7b4b21209e5197d5c99bb23cc234d0a"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1ac77de08a63edaac744f1bbb757bcb6a4)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePrice_1ac77de08a63edaac744f1bbb757bcb6a4"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a20ca007791351db8a82bf3466286fd77)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePrice_1a20ca007791351db8a82bf3466286fd77"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.

#### `public inline void `[`ClearPrice`](#structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26)`()` <a id="structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline bool `[`IsPriceSet`](#structFRHAPI__PurchasePrice_1ab855164885438d759d81309d52b053dd)`() const` <a id="structFRHAPI__PurchasePrice_1ab855164885438d759d81309d52b053dd"></a>

Checks whether Price_Optional has been set.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)`() const` <a id="structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899"></a>

Returns true if Price_Optional is set and matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)`()` <a id="structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812"></a>

Sets the value of Price_Optional to its default and also sets Price_IsSet to true.

#### `public inline int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1adcdfbcfe42e900d9f75dc912f423db18)`()` <a id="structFRHAPI__PurchasePrice_1adcdfbcfe42e900d9f75dc912f423db18"></a>

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a742a7b9bdff50c88ca59504924c3bd4f)`() const` <a id="structFRHAPI__PurchasePrice_1a742a7b9bdff50c88ca59504924c3bd4f"></a>

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a47df9e5eef0c570ef02337d560694f7d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1a47df9e5eef0c570ef02337d560694f7d"></a>

Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091"></a>

Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1a34af82ae77ab08794c5ad0430440cbec)`()` <a id="structFRHAPI__PurchasePrice_1a34af82ae77ab08794c5ad0430440cbec"></a>

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1ae6d37883de533dfc6c188d2a293ad858)`() const` <a id="structFRHAPI__PurchasePrice_1ae6d37883de533dfc6c188d2a293ad858"></a>

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a03bccd19cb99f406ae6527a357daedec)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePrice_1a03bccd19cb99f406ae6527a357daedec"></a>

Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.

#### `public inline void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a79bb4b09df74e75102c0a119893828de)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePrice_1a79bb4b09df74e75102c0a119893828de"></a>

Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)`()` <a id="structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873"></a>

Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.

#### `public inline bool `[`IsPriceCouponItemIdSet`](#structFRHAPI__PurchasePrice_1a68c11da13099ee91dafacd573c90ea68)`() const` <a id="structFRHAPI__PurchasePrice_1a68c11da13099ee91dafacd573c90ea68"></a>

Checks whether PriceCouponItemId_Optional has been set.

#### `public inline bool `[`IsPriceCouponItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440)`() const` <a id="structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440"></a>

Returns true if PriceCouponItemId_Optional is set and matches the default value.

#### `public inline void `[`SetPriceCouponItemIdToDefault`](#structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78)`()` <a id="structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78"></a>

Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true.

#### `public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a75085407be253da11175b776b1b6953c)`()` <a id="structFRHAPI__PurchasePrice_1a75085407be253da11175b776b1b6953c"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a6e98063de4271eaf908d3bfd63c5e680)`() const` <a id="structFRHAPI__PurchasePrice_1a6e98063de4271eaf908d3bfd63c5e680"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1ae92b849020c4176f2dc11ef122d9a51f)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1ae92b849020c4176f2dc11ef122d9a51f"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a0c7fd1d2f86beecf5ec7a4b3c03e5b1f)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a0c7fd1d2f86beecf5ec7a4b3c03e5b1f"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a4259061203baed114e5749e2dcb305db)`()` <a id="structFRHAPI__PurchasePrice_1a4259061203baed114e5749e2dcb305db"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a8773dfaaf5a5178c6f915f7c1938f057)`() const` <a id="structFRHAPI__PurchasePrice_1a8773dfaaf5a5178c6f915f7c1938f057"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1a16651c51e97b10d8670d8cc050eccd03)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & NewValue)` <a id="structFRHAPI__PurchasePrice_1a16651c51e97b10d8670d8cc050eccd03"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1aaf899f1478b661e10fe6b234b20534ed)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > && NewValue)` <a id="structFRHAPI__PurchasePrice_1aaf899f1478b661e10fe6b234b20534ed"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a)`()` <a id="structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

#### `public inline bool `[`IsCurrenciesSet`](#structFRHAPI__PurchasePrice_1a127cf025847595e13dfea72b02097b9d)`() const` <a id="structFRHAPI__PurchasePrice_1a127cf025847595e13dfea72b02097b9d"></a>

Checks whether Currencies_Optional has been set.

