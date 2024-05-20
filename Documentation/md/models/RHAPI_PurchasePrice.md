# RHAPI_PurchasePrice <a id="group__RHAPI__PurchasePrice"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PriceItemId`](#structFRHAPI__PurchasePrice_1a263df4cc3585b8910e465aad7d2610c9) | The Item used as the currency for the purchase.
`public int32 `[`Price`](#structFRHAPI__PurchasePrice_1a5025132ab0bf6aba04cbe0eb95bb3e1c) | The price of the Item.
`public int32 `[`PriceCouponItemId_Optional`](#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7) | The Item used as the coupon for the purchase.
`public bool `[`PriceCouponItemId_IsSet`](#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0) | true if PriceCouponItemId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PurchasePrice_1a99422b3908bc70c26347ff7f933b03ab)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurchasePrice_1a009d08c7d6af6016eb6fd5f0e1610e1c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ae5374995f8e978a32729fef362f8f02c)`()` | Gets the value of PriceItemId.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811)`() const` | Gets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f)`(int32 NewValue)` | Sets the value of PriceItemId.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)`() const` | Returns true if PriceItemId matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)`()` | Sets the value of PriceItemId to its default
`public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38)`()` | Gets the value of Price.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210)`() const` | Gets the value of Price.
`public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23)`(int32 NewValue)` | Sets the value of Price.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)`() const` | Returns true if Price matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)`()` | Sets the value of Price to its default
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

#### Members

#### `public int32 `[`PriceItemId`](#structFRHAPI__PurchasePrice_1a263df4cc3585b8910e465aad7d2610c9) <a id="structFRHAPI__PurchasePrice_1a263df4cc3585b8910e465aad7d2610c9"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`Price`](#structFRHAPI__PurchasePrice_1a5025132ab0bf6aba04cbe0eb95bb3e1c) <a id="structFRHAPI__PurchasePrice_1a5025132ab0bf6aba04cbe0eb95bb3e1c"></a>

The price of the Item.

#### `public int32 `[`PriceCouponItemId_Optional`](#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7) <a id="structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7"></a>

The Item used as the coupon for the purchase.

#### `public bool `[`PriceCouponItemId_IsSet`](#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0) <a id="structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0"></a>

true if PriceCouponItemId_Optional has been set to a value

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

Gets the value of PriceItemId.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811)`() const` <a id="structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811"></a>

Gets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f)`(int32 NewValue)` <a id="structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f"></a>

Sets the value of PriceItemId.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)`() const` <a id="structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f"></a>

Returns true if PriceItemId matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)`()` <a id="structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7"></a>

Sets the value of PriceItemId to its default

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38)`()` <a id="structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38"></a>

Gets the value of Price.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210)`() const` <a id="structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210"></a>

Gets the value of Price.

#### `public inline void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23)`(int32 NewValue)` <a id="structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23"></a>

Sets the value of Price.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)`() const` <a id="structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899"></a>

Returns true if Price matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)`()` <a id="structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812"></a>

Sets the value of Price to its default

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

