---
title: RHAPI_PriceBreakPointCurrency
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PriceBreakPointCurrency`](#structFRHAPI__PriceBreakPointCurrency) | The currencies of a Price Breakpoint.

## struct `FRHAPI_PriceBreakPointCurrency` <a id="structFRHAPI__PriceBreakPointCurrency"></a>

```
struct FRHAPI_PriceBreakPointCurrency
  : public FRHAPI_Model
```

The currencies of a Price Breakpoint.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e) | The Item used as the currency for the purchase.
`public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3) | The Item used as the currency for the purchase.
`public int32 `[`Price`](#structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83) | The price of the Item.
`public int32 `[`MinReducedPrice_Optional`](#structFRHAPI__PriceBreakPointCurrency_1a0ac0645921ade0588488d2686477d78a) | 
`public bool `[`MinReducedPrice_IsSet`](#structFRHAPI__PriceBreakPointCurrency_1a9f447bb6e25cc2c12aef143d07d5aeff) | true if MinReducedPrice_Optional has been set to a value
`public bool `[`MinReducedPrice_IsNull`](#structFRHAPI__PriceBreakPointCurrency_1ad03da28c1045d1a07dd31c23a6c1b67d) | true if MinReducedPrice_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakPointCurrency_1a38b39a44fd1bae117ba63e1600323843)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakPointCurrency_1acc2a9f0bcbf761ac28f72dbec33036c6)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1aedcccb6998c4cf300ae5dab1d6694e57)`()` | Gets the value of PriceItemUuid.
`public inline FORCEINLINE const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1adfd877484f115c5bbbd6b5ea98f8117b)`() const` | Gets the value of PriceItemUuid.
`public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a873f4de6b897b038379c43635485a4bc)`(const FGuid & NewValue)` | Sets the value of PriceItemUuid.
`public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a0473f49e6f4f696af8dd6e98b038a403)`(FGuid && NewValue)` | Sets the value of PriceItemUuid using move semantics.
`public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a1ea9750ac0ed39a4154b67209ce0ef56)`()` | Gets the value of PriceItemId.
`public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a00d3f3e61ba9b4016086de803677462d)`() const` | Gets the value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a3a7b5ccf001367e96ab6fd51db0cc152)`(const int32 & NewValue)` | Sets the value of PriceItemId.
`public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1ab5690fab4c02f12d12d77f2fc48dec19)`(int32 && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a9359a70c6885073d80a2ef658cc238fe)`()` | Returns the default value of PriceItemId.
`public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a56c37c39e89cd6231f1d950ee0f40bdc)`()` | Gets the value of Price.
`public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a9e116ac9ecd3696ec23c56a4069d4229)`() const` | Gets the value of Price.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a43a6e93e7526b6f05340698f26cccba8)`(const int32 & NewValue)` | Sets the value of Price.
`public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a3d4db9efe15318e0289344d7e8f1f106)`(int32 && NewValue)` | Sets the value of Price using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PriceBreakPointCurrency_1a49c6178e2ecda2a249cca1670e524836)`()` | Returns the default value of Price.
`public inline FORCEINLINE int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1abf2475a1f49777ace89db507b803abad)`()` | Gets the value of MinReducedPrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a5de6e82e9e72c09840bbe3c7d82626fe)`() const` | Gets the value of MinReducedPrice_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a9936529b1565899397100a3590ca0ee8)`(const int32 & DefaultValue) const` | Gets the value of MinReducedPrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac3487cb1ef4392cc754b7b47decd79c6)`(int32 & OutValue) const` | Fills OutValue with the value of MinReducedPrice_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1a4b8f002619b9d96b25df4827521d6b72)`()` | Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1a5ac0981e327ab0a0d14c5e06ad5c1041)`() const` | Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac543b80a955ad3a62507dd0fabafa446)`(const int32 & NewValue)` | Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true.
`public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a89ea65e99b0056aa46cd18791e82e385)`(int32 && NewValue)` | Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true using move semantics.
`public inline void `[`ClearMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a92c5e8210e4de9957632082bd76d0a76)`()` | Clears the value of MinReducedPrice_Optional and sets MinReducedPrice_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a885aa715d3bd3784b5d88196c5ff6223)`()` | Returns the default value of MinReducedPrice.
`public inline FORCEINLINE void `[`SetMinReducedPriceToNull`](#structFRHAPI__PriceBreakPointCurrency_1aa3cbc63ba34e76a8a9312a8a435baeb4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMinReducedPriceNull`](#structFRHAPI__PriceBreakPointCurrency_1ae93ad2fb5961e789dac252b4a3202ae0)`() const` | Checks whether MinReducedPrice_Optional is set to null.

### Members

#### `public FGuid `[`PriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e) <a id="structFRHAPI__PriceBreakPointCurrency_1a6825eadd6f35d093e2f946a920e56b5e"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3) <a id="structFRHAPI__PriceBreakPointCurrency_1aab4fef02c40243609a2fd4bb04e7e0b3"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`Price`](#structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83) <a id="structFRHAPI__PriceBreakPointCurrency_1a0fbeeaafec354c1df791be5b8b7d9a83"></a>

The price of the Item.

#### `public int32 `[`MinReducedPrice_Optional`](#structFRHAPI__PriceBreakPointCurrency_1a0ac0645921ade0588488d2686477d78a) <a id="structFRHAPI__PriceBreakPointCurrency_1a0ac0645921ade0588488d2686477d78a"></a>

#### `public bool `[`MinReducedPrice_IsSet`](#structFRHAPI__PriceBreakPointCurrency_1a9f447bb6e25cc2c12aef143d07d5aeff) <a id="structFRHAPI__PriceBreakPointCurrency_1a9f447bb6e25cc2c12aef143d07d5aeff"></a>

true if MinReducedPrice_Optional has been set to a value

#### `public bool `[`MinReducedPrice_IsNull`](#structFRHAPI__PriceBreakPointCurrency_1ad03da28c1045d1a07dd31c23a6c1b67d) <a id="structFRHAPI__PriceBreakPointCurrency_1ad03da28c1045d1a07dd31c23a6c1b67d"></a>

true if MinReducedPrice_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PriceBreakPointCurrency_1a38b39a44fd1bae117ba63e1600323843)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a38b39a44fd1bae117ba63e1600323843"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PriceBreakPointCurrency_1acc2a9f0bcbf761ac28f72dbec33036c6)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PriceBreakPointCurrency_1acc2a9f0bcbf761ac28f72dbec33036c6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1aedcccb6998c4cf300ae5dab1d6694e57)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1aedcccb6998c4cf300ae5dab1d6694e57"></a>

Gets the value of PriceItemUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1adfd877484f115c5bbbd6b5ea98f8117b)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1adfd877484f115c5bbbd6b5ea98f8117b"></a>

Gets the value of PriceItemUuid.

#### `public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a873f4de6b897b038379c43635485a4bc)`(const FGuid & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a873f4de6b897b038379c43635485a4bc"></a>

Sets the value of PriceItemUuid.

#### `public inline FORCEINLINE void `[`SetPriceItemUuid`](#structFRHAPI__PriceBreakPointCurrency_1a0473f49e6f4f696af8dd6e98b038a403)`(FGuid && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a0473f49e6f4f696af8dd6e98b038a403"></a>

Sets the value of PriceItemUuid using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a1ea9750ac0ed39a4154b67209ce0ef56)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a1ea9750ac0ed39a4154b67209ce0ef56"></a>

Gets the value of PriceItemId.

#### `public inline FORCEINLINE const int32 & `[`GetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a00d3f3e61ba9b4016086de803677462d)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a00d3f3e61ba9b4016086de803677462d"></a>

Gets the value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a3a7b5ccf001367e96ab6fd51db0cc152)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a3a7b5ccf001367e96ab6fd51db0cc152"></a>

Sets the value of PriceItemId.

#### `public inline FORCEINLINE void `[`SetPriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1ab5690fab4c02f12d12d77f2fc48dec19)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1ab5690fab4c02f12d12d77f2fc48dec19"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PriceItemId`](#structFRHAPI__PriceBreakPointCurrency_1a9359a70c6885073d80a2ef658cc238fe)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a9359a70c6885073d80a2ef658cc238fe"></a>

Returns the default value of PriceItemId.

#### `public inline FORCEINLINE int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a56c37c39e89cd6231f1d950ee0f40bdc)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a56c37c39e89cd6231f1d950ee0f40bdc"></a>

Gets the value of Price.

#### `public inline FORCEINLINE const int32 & `[`GetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a9e116ac9ecd3696ec23c56a4069d4229)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a9e116ac9ecd3696ec23c56a4069d4229"></a>

Gets the value of Price.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a43a6e93e7526b6f05340698f26cccba8)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a43a6e93e7526b6f05340698f26cccba8"></a>

Sets the value of Price.

#### `public inline FORCEINLINE void `[`SetPrice`](#structFRHAPI__PriceBreakPointCurrency_1a3d4db9efe15318e0289344d7e8f1f106)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a3d4db9efe15318e0289344d7e8f1f106"></a>

Sets the value of Price using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Price`](#structFRHAPI__PriceBreakPointCurrency_1a49c6178e2ecda2a249cca1670e524836)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a49c6178e2ecda2a249cca1670e524836"></a>

Returns the default value of Price.

#### `public inline FORCEINLINE int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1abf2475a1f49777ace89db507b803abad)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1abf2475a1f49777ace89db507b803abad"></a>

Gets the value of MinReducedPrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a5de6e82e9e72c09840bbe3c7d82626fe)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a5de6e82e9e72c09840bbe3c7d82626fe"></a>

Gets the value of MinReducedPrice_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a9936529b1565899397100a3590ca0ee8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PriceBreakPointCurrency_1a9936529b1565899397100a3590ca0ee8"></a>

Gets the value of MinReducedPrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac3487cb1ef4392cc754b7b47decd79c6)`(int32 & OutValue) const` <a id="structFRHAPI__PriceBreakPointCurrency_1ac3487cb1ef4392cc754b7b47decd79c6"></a>

Fills OutValue with the value of MinReducedPrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1a4b8f002619b9d96b25df4827521d6b72)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a4b8f002619b9d96b25df4827521d6b72"></a>

Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMinReducedPriceOrNull`](#structFRHAPI__PriceBreakPointCurrency_1a5ac0981e327ab0a0d14c5e06ad5c1041)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1a5ac0981e327ab0a0d14c5e06ad5c1041"></a>

Returns a pointer to MinReducedPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1ac543b80a955ad3a62507dd0fabafa446)`(const int32 & NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1ac543b80a955ad3a62507dd0fabafa446"></a>

Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a89ea65e99b0056aa46cd18791e82e385)`(int32 && NewValue)` <a id="structFRHAPI__PriceBreakPointCurrency_1a89ea65e99b0056aa46cd18791e82e385"></a>

Sets the value of MinReducedPrice_Optional and also sets MinReducedPrice_IsSet to true using move semantics.

#### `public inline void `[`ClearMinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a92c5e8210e4de9957632082bd76d0a76)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a92c5e8210e4de9957632082bd76d0a76"></a>

Clears the value of MinReducedPrice_Optional and sets MinReducedPrice_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MinReducedPrice`](#structFRHAPI__PriceBreakPointCurrency_1a885aa715d3bd3784b5d88196c5ff6223)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1a885aa715d3bd3784b5d88196c5ff6223"></a>

Returns the default value of MinReducedPrice.

#### `public inline FORCEINLINE void `[`SetMinReducedPriceToNull`](#structFRHAPI__PriceBreakPointCurrency_1aa3cbc63ba34e76a8a9312a8a435baeb4)`()` <a id="structFRHAPI__PriceBreakPointCurrency_1aa3cbc63ba34e76a8a9312a8a435baeb4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMinReducedPriceNull`](#structFRHAPI__PriceBreakPointCurrency_1ae93ad2fb5961e789dac252b4a3202ae0)`() const` <a id="structFRHAPI__PriceBreakPointCurrency_1ae93ad2fb5961e789dac252b4a3202ae0"></a>

Checks whether MinReducedPrice_Optional is set to null.

