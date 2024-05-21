# group `RHAPI_PurchasePrice` <a id="group__RHAPI__PurchasePrice"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PurchasePrice_1a99422b3908bc70c26347ff7f933b03ab)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurchasePrice_1a009d08c7d6af6016eb6fd5f0e1610e1c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ae5374995f8e978a32729fef362f8f02c)`()` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811)`() const` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a62f80add2eb594581c0822c3ea12f39a)`(const int32 & DefaultValue) const` | Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a38592831d19b11ef864aab2c87e66cb2)`(int32 & OutValue) const` | Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a773e3e3824e5b1ddfaff98499dede52a)`()` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1abda17ccba3a42b00bce6ed0dca79fe9a)`() const` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f)`(int32 NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.
`public inline void `[`ClearPriceItemId`](#structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc)`()` | Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)`() const` | Returns true if PriceItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)`()` | Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.
`public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a56076e9c454f6ecfbb596710bf301a11)`(const int32 & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPrice`](#structFRHAPI__PurchasePrice_1a9de82033e012e6ec77df26f9e2ac7e20)`(int32 & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1af2d3dc2ea1f33fab772e00d0554905f2)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1a063b838ab43b8ce63eec932f5915ae2e)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23)`(int32 NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline void `[`ClearPrice`](#structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)`() const` | Returns true if Price_Optional is set and matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)`()` | Sets the value of Price_Optional to its default and also sets Price_IsSet to true.
`public inline int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1aff5cc86f3bcd4f86c87d3b3ab62a0afb)`()` | Gets the value of PriceCouponItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a2262c072b691a01253e75a910ea65cfd)`() const` | Gets the value of PriceCouponItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a84367abb0e3f553b1915b0ae08866685)`(const int32 & DefaultValue) const` | Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091)`(int32 & OutValue) const` | Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1ad1ff3ce1ddb45d7644e460284ae11e09)`()` | Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1a3dfa20abc1216340dae08006f5ef3235)`() const` | Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a92487fae3a1a99ee1b2967dbd9a206cc)`(int32 NewValue)` | Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.
`public inline void `[`ClearPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)`()` | Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.
`public inline bool `[`IsPriceCouponItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440)`() const` | Returns true if PriceCouponItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceCouponItemIdToDefault`](#structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78)`()` | Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true.
`public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1abb2ce7e496725b9e0e6ed5ae67ee2ab8)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a0e479ad7acc5ccb527b3a5e00f9e2ad5)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1aa09f769643d39a94a928a483bc13a220)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a0c7fd1d2f86beecf5ec7a4b3c03e5b1f)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a97e244b38e818810f4f98070ac7f5492)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a3165c65fa38db7163b52c43ed9683c68)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1ad648b02d850fb5e92bdc96ec4ef3f3b3)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline void `[`ClearCurrencies`](#structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurchasePrice_1a99422b3908bc70c26347ff7f933b03ab)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurchasePrice_1a99422b3908bc70c26347ff7f933b03ab"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurchasePrice_1a009d08c7d6af6016eb6fd5f0e1610e1c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PurchasePrice_1a009d08c7d6af6016eb6fd5f0e1610e1c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ae5374995f8e978a32729fef362f8f02c)`()` <a id="structFRHAPI__PurchasePrice_1ae5374995f8e978a32729fef362f8f02c"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811)`() const` <a id="structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a62f80add2eb594581c0822c3ea12f39a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1a62f80add2eb594581c0822c3ea12f39a"></a>

Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a38592831d19b11ef864aab2c87e66cb2)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a38592831d19b11ef864aab2c87e66cb2"></a>

Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a773e3e3824e5b1ddfaff98499dede52a)`()` <a id="structFRHAPI__PurchasePrice_1a773e3e3824e5b1ddfaff98499dede52a"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1abda17ccba3a42b00bce6ed0dca79fe9a)`() const` <a id="structFRHAPI__PurchasePrice_1abda17ccba3a42b00bce6ed0dca79fe9a"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f)`(int32 NewValue)` <a id="structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.

#### `public inline void `[`ClearPriceItemId`](#structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc)`()` <a id="structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc"></a>

Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)`() const` <a id="structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f"></a>

Returns true if PriceItemId_Optional is set and matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)`()` <a id="structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7"></a>

Sets the value of PriceItemId_Optional to its default and also sets PriceItemId_IsSet to true.

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38)`()` <a id="structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210)`() const` <a id="structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a56076e9c454f6ecfbb596710bf301a11)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1a56076e9c454f6ecfbb596710bf301a11"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPrice`](#structFRHAPI__PurchasePrice_1a9de82033e012e6ec77df26f9e2ac7e20)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a9de82033e012e6ec77df26f9e2ac7e20"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1af2d3dc2ea1f33fab772e00d0554905f2)`()` <a id="structFRHAPI__PurchasePrice_1af2d3dc2ea1f33fab772e00d0554905f2"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1a063b838ab43b8ce63eec932f5915ae2e)`() const` <a id="structFRHAPI__PurchasePrice_1a063b838ab43b8ce63eec932f5915ae2e"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23)`(int32 NewValue)` <a id="structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline void `[`ClearPrice`](#structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26)`()` <a id="structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)`() const` <a id="structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899"></a>

Returns true if Price_Optional is set and matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)`()` <a id="structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812"></a>

Sets the value of Price_Optional to its default and also sets Price_IsSet to true.

#### `public inline int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1aff5cc86f3bcd4f86c87d3b3ab62a0afb)`()` <a id="structFRHAPI__PurchasePrice_1aff5cc86f3bcd4f86c87d3b3ab62a0afb"></a>

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a2262c072b691a01253e75a910ea65cfd)`() const` <a id="structFRHAPI__PurchasePrice_1a2262c072b691a01253e75a910ea65cfd"></a>

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a84367abb0e3f553b1915b0ae08866685)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1a84367abb0e3f553b1915b0ae08866685"></a>

Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091"></a>

Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1ad1ff3ce1ddb45d7644e460284ae11e09)`()` <a id="structFRHAPI__PurchasePrice_1ad1ff3ce1ddb45d7644e460284ae11e09"></a>

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1a3dfa20abc1216340dae08006f5ef3235)`() const` <a id="structFRHAPI__PurchasePrice_1a3dfa20abc1216340dae08006f5ef3235"></a>

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a92487fae3a1a99ee1b2967dbd9a206cc)`(int32 NewValue)` <a id="structFRHAPI__PurchasePrice_1a92487fae3a1a99ee1b2967dbd9a206cc"></a>

Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.

#### `public inline void `[`ClearPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)`()` <a id="structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873"></a>

Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.

#### `public inline bool `[`IsPriceCouponItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440)`() const` <a id="structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440"></a>

Returns true if PriceCouponItemId_Optional is set and matches the default value.

#### `public inline void `[`SetPriceCouponItemIdToDefault`](#structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78)`()` <a id="structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78"></a>

Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true.

#### `public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1abb2ce7e496725b9e0e6ed5ae67ee2ab8)`()` <a id="structFRHAPI__PurchasePrice_1abb2ce7e496725b9e0e6ed5ae67ee2ab8"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a0e479ad7acc5ccb527b3a5e00f9e2ad5)`() const` <a id="structFRHAPI__PurchasePrice_1a0e479ad7acc5ccb527b3a5e00f9e2ad5"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1aa09f769643d39a94a928a483bc13a220)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1aa09f769643d39a94a928a483bc13a220"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a0c7fd1d2f86beecf5ec7a4b3c03e5b1f)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a0c7fd1d2f86beecf5ec7a4b3c03e5b1f"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a97e244b38e818810f4f98070ac7f5492)`()` <a id="structFRHAPI__PurchasePrice_1a97e244b38e818810f4f98070ac7f5492"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a3165c65fa38db7163b52c43ed9683c68)`() const` <a id="structFRHAPI__PurchasePrice_1a3165c65fa38db7163b52c43ed9683c68"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1ad648b02d850fb5e92bdc96ec4ef3f3b3)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > NewValue)` <a id="structFRHAPI__PurchasePrice_1ad648b02d850fb5e92bdc96ec4ef3f3b3"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a)`()` <a id="structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

