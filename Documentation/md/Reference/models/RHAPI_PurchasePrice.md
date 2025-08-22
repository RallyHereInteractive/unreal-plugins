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
`public int32 `[`PriceItemId_Optional`](#structFRHAPI__PurchasePrice_1a06ded8afd467545bcbc1d65df4590eab) | 
`public bool `[`PriceItemId_IsSet`](#structFRHAPI__PurchasePrice_1afcc1a2d955e3eb4803b5027e2135760f) | true if PriceItemId_Optional has been set to a value
`public bool `[`PriceItemId_IsNull`](#structFRHAPI__PurchasePrice_1af90f6f76ac9a6cd46e03f226bf7bac3b) | true if PriceItemId_Optional has been explicitly set to null
`public int32 `[`Price_Optional`](#structFRHAPI__PurchasePrice_1a8cb720494b67ae992ebc3c9fa0db3b71) | 
`public bool `[`Price_IsSet`](#structFRHAPI__PurchasePrice_1acb6bb6768e7b0f995b6fe36e07f1c696) | true if Price_Optional has been set to a value
`public bool `[`Price_IsNull`](#structFRHAPI__PurchasePrice_1a9d9017cddd541a1223bdacefd2d596da) | true if Price_Optional has been explicitly set to null
`public int32 `[`PriceCouponItemId_Optional`](#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7) | 
`public bool `[`PriceCouponItemId_IsSet`](#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0) | true if PriceCouponItemId_Optional has been set to a value
`public bool `[`PriceCouponItemId_IsNull`](#structFRHAPI__PurchasePrice_1a86fa6554117259d8a3c5998bdb04f24a) | true if PriceCouponItemId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PurchasePrice_1a89bd02520de60e0e154002f442203362) | 
`public bool `[`Currencies_IsSet`](#structFRHAPI__PurchasePrice_1ac8092e120be50625e87f7891f202d7d3) | true if Currencies_Optional has been set to a value
`public bool `[`Currencies_IsNull`](#structFRHAPI__PurchasePrice_1add0c99ce76d2abd2baff0d2b2de2282c) | true if Currencies_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PurchasePrice_1a0ff3da398c5aa47aa9fa948c70da562a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurchasePrice_1a01defa4513f3ad2f6daac36d8a4a0aba)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a40727548092021688cd448e2756bef0d)`()` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ae38fe1964f38d97fc4ec829a8934ce4c)`() const` | Gets the value of PriceItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a395910a36bbc3e22889dc9aeee88aac3)`(const int32 & DefaultValue) const` | Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a822ff69f19cf4acedc65b34b42b26604)`(int32 & OutValue) const` | Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a3439611cf4d91ba15638b9a95266c054)`()` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a06659b7c8d5d7895ffe2fae58f624c78)`() const` | Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1aa2c3579a6a3ac320510ad1d55bc1b5ca)`(const int32 & NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1a0d0287f105a9814421d34f4719259232)`(int32 && NewValue)` | Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceItemId`](#structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc)`()` | Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PurchasePrice_1ad7318b201cba96376e57ac91a72bb5c6)`()` | Returns the default value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemIdToNull`](#structFRHAPI__PurchasePrice_1abb59bb27466b1006b04033e72ad6f1be)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceItemIdNull`](#structFRHAPI__PurchasePrice_1a4a733617561d61c51458d2d6c07cfd1c)`() const` | Checks whether PriceItemId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a7d783244ab9cc5cc35103353fdf3186c)`()` | Gets the value of Price_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a83287aa416f9fb0b5ee8bb223ea06dcf)`() const` | Gets the value of Price_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1ae819a4873a8f6082a60ed99935c3edf6)`(const int32 & DefaultValue) const` | Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPrice`](#structFRHAPI__PurchasePrice_1acb1708833ed875a4d46aa453657f1fe5)`(int32 & OutValue) const` | Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1acce5863cd742a5005b199ec45a6fbd95)`()` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1a96abf073731800f5c66aa82941096ce4)`() const` | Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a4bb0df132a7f48a55c5b7c57d98ebe1e)`(const int32 & NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePrice_1adf44cafb62d833a84441a3062539a8e8)`(int32 && NewValue)` | Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.
`public inline void `[`ClearPrice`](#structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26)`()` | Clears the value of Price_Optional and sets Price_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PurchasePrice_1a4d1dc52f909ad189b0c5167b442d5612)`()` | Returns the default value of Price.
`public inline FORCEINLINE void `[`SetPriceToNull`](#structFRHAPI__PurchasePrice_1a228aecb7fe7ff240f6a662f12892e2ab)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceNull`](#structFRHAPI__PurchasePrice_1a3b1fd48dd453517ca14fa1283178b3a9)`() const` | Checks whether Price_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a859c4a34c327847ea2d040f93a40638b)`()` | Gets the value of PriceCouponItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1ac208bf533b7cbdc0682383eca83b56c4)`() const` | Gets the value of PriceCouponItemId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1aac82f3d3f986f285c96fa344b0c35b94)`(const int32 & DefaultValue) const` | Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1ab88a557fa5323b3bb3560691ad714089)`(int32 & OutValue) const` | Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1acfe0f2e147efc9c981f45e61be43f2d7)`()` | Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1a2250c7bbe0c5dbc52c09d71d75e76cee)`() const` | Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1ab9183598a6c6cb03f4bf1ea8e6f83423)`(const int32 & NewValue)` | Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.
`public inline FORCEINLINE void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a362fa79e2cfd4cf11624c7c4f0116232)`(int32 && NewValue)` | Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)`()` | Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PriceCouponItemId`](#structFRHAPI__PurchasePrice_1a33f14e928c478f0c8d15f51c6c20d9bd)`()` | Returns the default value of PriceCouponItemId.
`public inline FORCEINLINE void `[`SetPriceCouponItemIdToNull`](#structFRHAPI__PurchasePrice_1a9e7b1733b5aeccd312ea24779c30efb6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPriceCouponItemIdNull`](#structFRHAPI__PurchasePrice_1ac984795380225afdb9f7e586425e1620)`() const` | Checks whether PriceCouponItemId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a5ab2f63e2c86f933d590bd459d218bd0)`()` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1ab3973d888bf276f3379cfb52eafc65b1)`() const` | Gets the value of Currencies_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1aceb73de628fe6db5b71e04e19a3446f0)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & DefaultValue) const` | Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a63e4c8c4c8d081b05057fc172811187a)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & OutValue) const` | Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1ad0fa66b88d2229ca221e73bfa30eb638)`()` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a7a41e6033295bd2f457e1609e560f114)`() const` | Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1a6508498523fb6f49ce8692b8e77a2079)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.
`public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1a89b8c6ad525a14c69a35a7710ad51723)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > && NewValue)` | Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.
`public inline void `[`ClearCurrencies`](#structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a)`()` | Clears the value of Currencies_Optional and sets Currencies_IsSet to false.
`public inline FORCEINLINE void `[`SetCurrenciesToNull`](#structFRHAPI__PurchasePrice_1a542b17b3eeb384295fa653b6cc613561)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCurrenciesNull`](#structFRHAPI__PurchasePrice_1ac6735ddc32888f9d6b230e4360854a3c)`() const` | Checks whether Currencies_Optional is set to null.

### Members

#### `public int32 `[`PriceItemId_Optional`](#structFRHAPI__PurchasePrice_1a06ded8afd467545bcbc1d65df4590eab) <a id="structFRHAPI__PurchasePrice_1a06ded8afd467545bcbc1d65df4590eab"></a>

#### `public bool `[`PriceItemId_IsSet`](#structFRHAPI__PurchasePrice_1afcc1a2d955e3eb4803b5027e2135760f) <a id="structFRHAPI__PurchasePrice_1afcc1a2d955e3eb4803b5027e2135760f"></a>

true if PriceItemId_Optional has been set to a value

#### `public bool `[`PriceItemId_IsNull`](#structFRHAPI__PurchasePrice_1af90f6f76ac9a6cd46e03f226bf7bac3b) <a id="structFRHAPI__PurchasePrice_1af90f6f76ac9a6cd46e03f226bf7bac3b"></a>

true if PriceItemId_Optional has been explicitly set to null

#### `public int32 `[`Price_Optional`](#structFRHAPI__PurchasePrice_1a8cb720494b67ae992ebc3c9fa0db3b71) <a id="structFRHAPI__PurchasePrice_1a8cb720494b67ae992ebc3c9fa0db3b71"></a>

#### `public bool `[`Price_IsSet`](#structFRHAPI__PurchasePrice_1acb6bb6768e7b0f995b6fe36e07f1c696) <a id="structFRHAPI__PurchasePrice_1acb6bb6768e7b0f995b6fe36e07f1c696"></a>

true if Price_Optional has been set to a value

#### `public bool `[`Price_IsNull`](#structFRHAPI__PurchasePrice_1a9d9017cddd541a1223bdacefd2d596da) <a id="structFRHAPI__PurchasePrice_1a9d9017cddd541a1223bdacefd2d596da"></a>

true if Price_Optional has been explicitly set to null

#### `public int32 `[`PriceCouponItemId_Optional`](#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7) <a id="structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7"></a>

#### `public bool `[`PriceCouponItemId_IsSet`](#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0) <a id="structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0"></a>

true if PriceCouponItemId_Optional has been set to a value

#### `public bool `[`PriceCouponItemId_IsNull`](#structFRHAPI__PurchasePrice_1a86fa6554117259d8a3c5998bdb04f24a) <a id="structFRHAPI__PurchasePrice_1a86fa6554117259d8a3c5998bdb04f24a"></a>

true if PriceCouponItemId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > `[`Currencies_Optional`](#structFRHAPI__PurchasePrice_1a89bd02520de60e0e154002f442203362) <a id="structFRHAPI__PurchasePrice_1a89bd02520de60e0e154002f442203362"></a>

#### `public bool `[`Currencies_IsSet`](#structFRHAPI__PurchasePrice_1ac8092e120be50625e87f7891f202d7d3) <a id="structFRHAPI__PurchasePrice_1ac8092e120be50625e87f7891f202d7d3"></a>

true if Currencies_Optional has been set to a value

#### `public bool `[`Currencies_IsNull`](#structFRHAPI__PurchasePrice_1add0c99ce76d2abd2baff0d2b2de2282c) <a id="structFRHAPI__PurchasePrice_1add0c99ce76d2abd2baff0d2b2de2282c"></a>

true if Currencies_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a40727548092021688cd448e2756bef0d)`()` <a id="structFRHAPI__PurchasePrice_1a40727548092021688cd448e2756bef0d"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1ae38fe1964f38d97fc4ec829a8934ce4c)`() const` <a id="structFRHAPI__PurchasePrice_1ae38fe1964f38d97fc4ec829a8934ce4c"></a>

Gets the value of PriceItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a395910a36bbc3e22889dc9aeee88aac3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1a395910a36bbc3e22889dc9aeee88aac3"></a>

Gets the value of PriceItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPriceItemId`](#structFRHAPI__PurchasePrice_1a822ff69f19cf4acedc65b34b42b26604)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a822ff69f19cf4acedc65b34b42b26604"></a>

Fills OutValue with the value of PriceItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a3439611cf4d91ba15638b9a95266c054)`()` <a id="structFRHAPI__PurchasePrice_1a3439611cf4d91ba15638b9a95266c054"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPriceItemIdOrNull`](#structFRHAPI__PurchasePrice_1a06659b7c8d5d7895ffe2fae58f624c78)`() const` <a id="structFRHAPI__PurchasePrice_1a06659b7c8d5d7895ffe2fae58f624c78"></a>

Returns a pointer to PriceItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1aa2c3579a6a3ac320510ad1d55bc1b5ca)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePrice_1aa2c3579a6a3ac320510ad1d55bc1b5ca"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PurchasePrice_1a0d0287f105a9814421d34f4719259232)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePrice_1a0d0287f105a9814421d34f4719259232"></a>

Sets the value of PriceItemId_Optional and also sets PriceItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceItemId`](#structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc)`()` <a id="structFRHAPI__PurchasePrice_1a58f9863a3c3d1b3c5b81e787cf4e0ddc"></a>

Clears the value of PriceItemId_Optional and sets PriceItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PurchasePrice_1ad7318b201cba96376e57ac91a72bb5c6)`()` <a id="structFRHAPI__PurchasePrice_1ad7318b201cba96376e57ac91a72bb5c6"></a>

Returns the default value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemIdToNull`](#structFRHAPI__PurchasePrice_1abb59bb27466b1006b04033e72ad6f1be)`()` <a id="structFRHAPI__PurchasePrice_1abb59bb27466b1006b04033e72ad6f1be"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceItemIdNull`](#structFRHAPI__PurchasePrice_1a4a733617561d61c51458d2d6c07cfd1c)`() const` <a id="structFRHAPI__PurchasePrice_1a4a733617561d61c51458d2d6c07cfd1c"></a>

Checks whether PriceItemId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a7d783244ab9cc5cc35103353fdf3186c)`()` <a id="structFRHAPI__PurchasePrice_1a7d783244ab9cc5cc35103353fdf3186c"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1a83287aa416f9fb0b5ee8bb223ea06dcf)`() const` <a id="structFRHAPI__PurchasePrice_1a83287aa416f9fb0b5ee8bb223ea06dcf"></a>

Gets the value of Price_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PurchasePrice_1ae819a4873a8f6082a60ed99935c3edf6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1ae819a4873a8f6082a60ed99935c3edf6"></a>

Gets the value of Price_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPrice`](#structFRHAPI__PurchasePrice_1acb1708833ed875a4d46aa453657f1fe5)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1acb1708833ed875a4d46aa453657f1fe5"></a>

Fills OutValue with the value of Price_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1acce5863cd742a5005b199ec45a6fbd95)`()` <a id="structFRHAPI__PurchasePrice_1acce5863cd742a5005b199ec45a6fbd95"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPriceOrNull`](#structFRHAPI__PurchasePrice_1a96abf073731800f5c66aa82941096ce4)`() const` <a id="structFRHAPI__PurchasePrice_1a96abf073731800f5c66aa82941096ce4"></a>

Returns a pointer to Price_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePrice_1a4bb0df132a7f48a55c5b7c57d98ebe1e)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePrice_1a4bb0df132a7f48a55c5b7c57d98ebe1e"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PurchasePrice_1adf44cafb62d833a84441a3062539a8e8)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePrice_1adf44cafb62d833a84441a3062539a8e8"></a>

Sets the value of Price_Optional and also sets Price_IsSet to true using move semantics.

#### `public inline void `[`ClearPrice`](#structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26)`()` <a id="structFRHAPI__PurchasePrice_1afe42ef65f179daf4a556aa45dac59f26"></a>

Clears the value of Price_Optional and sets Price_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PurchasePrice_1a4d1dc52f909ad189b0c5167b442d5612)`()` <a id="structFRHAPI__PurchasePrice_1a4d1dc52f909ad189b0c5167b442d5612"></a>

Returns the default value of Price.

#### `public inline FORCEINLINE void `[`SetPriceToNull`](#structFRHAPI__PurchasePrice_1a228aecb7fe7ff240f6a662f12892e2ab)`()` <a id="structFRHAPI__PurchasePrice_1a228aecb7fe7ff240f6a662f12892e2ab"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceNull`](#structFRHAPI__PurchasePrice_1a3b1fd48dd453517ca14fa1283178b3a9)`() const` <a id="structFRHAPI__PurchasePrice_1a3b1fd48dd453517ca14fa1283178b3a9"></a>

Checks whether Price_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a859c4a34c327847ea2d040f93a40638b)`()` <a id="structFRHAPI__PurchasePrice_1a859c4a34c327847ea2d040f93a40638b"></a>

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1ac208bf533b7cbdc0682383eca83b56c4)`() const` <a id="structFRHAPI__PurchasePrice_1ac208bf533b7cbdc0682383eca83b56c4"></a>

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1aac82f3d3f986f285c96fa344b0c35b94)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1aac82f3d3f986f285c96fa344b0c35b94"></a>

Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1ab88a557fa5323b3bb3560691ad714089)`(int32 & OutValue) const` <a id="structFRHAPI__PurchasePrice_1ab88a557fa5323b3bb3560691ad714089"></a>

Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1acfe0f2e147efc9c981f45e61be43f2d7)`()` <a id="structFRHAPI__PurchasePrice_1acfe0f2e147efc9c981f45e61be43f2d7"></a>

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPriceCouponItemIdOrNull`](#structFRHAPI__PurchasePrice_1a2250c7bbe0c5dbc52c09d71d75e76cee)`() const` <a id="structFRHAPI__PurchasePrice_1a2250c7bbe0c5dbc52c09d71d75e76cee"></a>

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1ab9183598a6c6cb03f4bf1ea8e6f83423)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePrice_1ab9183598a6c6cb03f4bf1ea8e6f83423"></a>

Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a362fa79e2cfd4cf11624c7c4f0116232)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePrice_1a362fa79e2cfd4cf11624c7c4f0116232"></a>

Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceCouponItemId`](#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)`()` <a id="structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873"></a>

Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PriceCouponItemId`](#structFRHAPI__PurchasePrice_1a33f14e928c478f0c8d15f51c6c20d9bd)`()` <a id="structFRHAPI__PurchasePrice_1a33f14e928c478f0c8d15f51c6c20d9bd"></a>

Returns the default value of PriceCouponItemId.

#### `public inline FORCEINLINE void `[`SetPriceCouponItemIdToNull`](#structFRHAPI__PurchasePrice_1a9e7b1733b5aeccd312ea24779c30efb6)`()` <a id="structFRHAPI__PurchasePrice_1a9e7b1733b5aeccd312ea24779c30efb6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPriceCouponItemIdNull`](#structFRHAPI__PurchasePrice_1ac984795380225afdb9f7e586425e1620)`() const` <a id="structFRHAPI__PurchasePrice_1ac984795380225afdb9f7e586425e1620"></a>

Checks whether PriceCouponItemId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a5ab2f63e2c86f933d590bd459d218bd0)`()` <a id="structFRHAPI__PurchasePrice_1a5ab2f63e2c86f933d590bd459d218bd0"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1ab3973d888bf276f3379cfb52eafc65b1)`() const` <a id="structFRHAPI__PurchasePrice_1ab3973d888bf276f3379cfb52eafc65b1"></a>

Gets the value of Currencies_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1aceb73de628fe6db5b71e04e19a3446f0)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & DefaultValue) const` <a id="structFRHAPI__PurchasePrice_1aceb73de628fe6db5b71e04e19a3446f0"></a>

Gets the value of Currencies_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCurrencies`](#structFRHAPI__PurchasePrice_1a63e4c8c4c8d081b05057fc172811187a)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & OutValue) const` <a id="structFRHAPI__PurchasePrice_1a63e4c8c4c8d081b05057fc172811187a"></a>

Fills OutValue with the value of Currencies_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1ad0fa66b88d2229ca221e73bfa30eb638)`()` <a id="structFRHAPI__PurchasePrice_1ad0fa66b88d2229ca221e73bfa30eb638"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > * `[`GetCurrenciesOrNull`](#structFRHAPI__PurchasePrice_1a7a41e6033295bd2f457e1609e560f114)`() const` <a id="structFRHAPI__PurchasePrice_1a7a41e6033295bd2f457e1609e560f114"></a>

Returns a pointer to Currencies_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1a6508498523fb6f49ce8692b8e77a2079)`(const TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > & NewValue)` <a id="structFRHAPI__PurchasePrice_1a6508498523fb6f49ce8692b8e77a2079"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCurrencies`](#structFRHAPI__PurchasePrice_1a89b8c6ad525a14c69a35a7710ad51723)`(TArray< `[`FRHAPI_PurchasePriceCurrency`](RHAPI_PurchasePriceCurrency.md#structFRHAPI__PurchasePriceCurrency)` > && NewValue)` <a id="structFRHAPI__PurchasePrice_1a89b8c6ad525a14c69a35a7710ad51723"></a>

Sets the value of Currencies_Optional and also sets Currencies_IsSet to true using move semantics.

#### `public inline void `[`ClearCurrencies`](#structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a)`()` <a id="structFRHAPI__PurchasePrice_1a69bff048e3709cd32124677c6f33f02a"></a>

Clears the value of Currencies_Optional and sets Currencies_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCurrenciesToNull`](#structFRHAPI__PurchasePrice_1a542b17b3eeb384295fa653b6cc613561)`()` <a id="structFRHAPI__PurchasePrice_1a542b17b3eeb384295fa653b6cc613561"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCurrenciesNull`](#structFRHAPI__PurchasePrice_1ac6735ddc32888f9d6b230e4360854a3c)`() const` <a id="structFRHAPI__PurchasePrice_1ac6735ddc32888f9d6b230e4360854a3c"></a>

Checks whether Currencies_Optional is set to null.

