---
title: RHAPI_PurchasePriceCurrency
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PurchasePriceCurrency`](#structFRHAPI__PurchasePriceCurrency) | The purchase price currencies of an Item.

## struct `FRHAPI_PurchasePriceCurrency` <a id="structFRHAPI__PurchasePriceCurrency"></a>

```
struct FRHAPI_PurchasePriceCurrency
  : public FRHAPI_Model
```

The purchase price currencies of an Item.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a8fdc45fe01eee1c2324a3b0679c235da) | The Item used as the currency for the purchase.
`public int32 `[`Price`](#structFRHAPI__PurchasePriceCurrency_1a1d3d4f732662736ec75506e9463fd5ac) | The price of the Item.
`public virtual bool `[`FromJson`](#structFRHAPI__PurchasePriceCurrency_1addcbb4c203e2e0fee540dfc2d31dd9b2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurchasePriceCurrency_1a0f8463c563417720d17046401c133cf8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1ad2c06c25985d52157d516bc6a2fef227)`()` | Gets the value of PriceItemId.
`public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a26ccd5c09739a259f69d2de292b860c4)`() const` | Gets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a30e27131c940b0c2002312ded1f00eb4)`(const int32 & NewValue)` | Sets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a54946873b276731bfc7c63b2c659578b)`(int32 && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePriceCurrency_1a7817019fd3e596191cb1a9c691be3875)`() const` | Returns true if PriceItemId matches the default value.
`public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePriceCurrency_1ab37343e92d4d0056bbedeccc71291f06)`()` | Sets the value of PriceItemId to its default
`public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1aa75cf58bfe2cdb7798e351b627e07ded)`()` | Gets the value of Price.
`public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1aa970e3ba7d6dde1654e4d7c4c558f799)`() const` | Gets the value of Price.
`public inline void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1a406b226715f43cb9eaa54f2a5796fbc6)`(const int32 & NewValue)` | Sets the value of Price.
`public inline void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1aefba33266ef59c18f851be05e4235a02)`(int32 && NewValue)` | Sets the value of Price using move semantics.
`public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePriceCurrency_1a4609a35bc1d4513fc13a49382fe4ce42)`() const` | Returns true if Price matches the default value.
`public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePriceCurrency_1ab08f1c00d72d433911cd3d74073d7d82)`()` | Sets the value of Price to its default

### Members

#### `public int32 `[`PriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a8fdc45fe01eee1c2324a3b0679c235da) <a id="structFRHAPI__PurchasePriceCurrency_1a8fdc45fe01eee1c2324a3b0679c235da"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`Price`](#structFRHAPI__PurchasePriceCurrency_1a1d3d4f732662736ec75506e9463fd5ac) <a id="structFRHAPI__PurchasePriceCurrency_1a1d3d4f732662736ec75506e9463fd5ac"></a>

The price of the Item.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurchasePriceCurrency_1addcbb4c203e2e0fee540dfc2d31dd9b2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurchasePriceCurrency_1addcbb4c203e2e0fee540dfc2d31dd9b2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurchasePriceCurrency_1a0f8463c563417720d17046401c133cf8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PurchasePriceCurrency_1a0f8463c563417720d17046401c133cf8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1ad2c06c25985d52157d516bc6a2fef227)`()` <a id="structFRHAPI__PurchasePriceCurrency_1ad2c06c25985d52157d516bc6a2fef227"></a>

Gets the value of PriceItemId.

#### `public inline const int32 & `[`GetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a26ccd5c09739a259f69d2de292b860c4)`() const` <a id="structFRHAPI__PurchasePriceCurrency_1a26ccd5c09739a259f69d2de292b860c4"></a>

Gets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a30e27131c940b0c2002312ded1f00eb4)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1a30e27131c940b0c2002312ded1f00eb4"></a>

Sets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__PurchasePriceCurrency_1a54946873b276731bfc7c63b2c659578b)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1a54946873b276731bfc7c63b2c659578b"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline bool `[`IsPriceItemIdDefaultValue`](#structFRHAPI__PurchasePriceCurrency_1a7817019fd3e596191cb1a9c691be3875)`() const` <a id="structFRHAPI__PurchasePriceCurrency_1a7817019fd3e596191cb1a9c691be3875"></a>

Returns true if PriceItemId matches the default value.

#### `public inline void `[`SetPriceItemIdToDefault`](#structFRHAPI__PurchasePriceCurrency_1ab37343e92d4d0056bbedeccc71291f06)`()` <a id="structFRHAPI__PurchasePriceCurrency_1ab37343e92d4d0056bbedeccc71291f06"></a>

Sets the value of PriceItemId to its default

#### `public inline int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1aa75cf58bfe2cdb7798e351b627e07ded)`()` <a id="structFRHAPI__PurchasePriceCurrency_1aa75cf58bfe2cdb7798e351b627e07ded"></a>

Gets the value of Price.

#### `public inline const int32 & `[`GetPrice`](#structFRHAPI__PurchasePriceCurrency_1aa970e3ba7d6dde1654e4d7c4c558f799)`() const` <a id="structFRHAPI__PurchasePriceCurrency_1aa970e3ba7d6dde1654e4d7c4c558f799"></a>

Gets the value of Price.

#### `public inline void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1a406b226715f43cb9eaa54f2a5796fbc6)`(const int32 & NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1a406b226715f43cb9eaa54f2a5796fbc6"></a>

Sets the value of Price.

#### `public inline void `[`SetPrice`](#structFRHAPI__PurchasePriceCurrency_1aefba33266ef59c18f851be05e4235a02)`(int32 && NewValue)` <a id="structFRHAPI__PurchasePriceCurrency_1aefba33266ef59c18f851be05e4235a02"></a>

Sets the value of Price using move semantics.

#### `public inline bool `[`IsPriceDefaultValue`](#structFRHAPI__PurchasePriceCurrency_1a4609a35bc1d4513fc13a49382fe4ce42)`() const` <a id="structFRHAPI__PurchasePriceCurrency_1a4609a35bc1d4513fc13a49382fe4ce42"></a>

Returns true if Price matches the default value.

#### `public inline void `[`SetPriceToDefault`](#structFRHAPI__PurchasePriceCurrency_1ab08f1c00d72d433911cd3d74073d7d82)`()` <a id="structFRHAPI__PurchasePriceCurrency_1ab08f1c00d72d433911cd3d74073d7d82"></a>

Sets the value of Price to its default

