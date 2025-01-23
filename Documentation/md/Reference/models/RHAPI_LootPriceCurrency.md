---
title: RHAPI_LootPriceCurrency
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootPriceCurrency`](#structFRHAPI__LootPriceCurrency) | One currency (of potentially multiple) that can be used for a purchase, and how much of that currency is required for the purchase.

## struct `FRHAPI_LootPriceCurrency` <a id="structFRHAPI__LootPriceCurrency"></a>

```
struct FRHAPI_LootPriceCurrency
  : public FRHAPI_Model
```

One currency (of potentially multiple) that can be used for a purchase, and how much of that currency is required for the purchase.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PriceItemId`](#structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c) | The Item used as the currency for the purchase.
`public int32 `[`PriceLegacyItemId_Optional`](#structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf) | 
`public bool `[`PriceLegacyItemId_IsSet`](#structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9) | true if PriceLegacyItemId_Optional has been set to a value
`public bool `[`PriceLegacyItemId_IsNull`](#structFRHAPI__LootPriceCurrency_1a0591c08253dfc6da241dc74b8c6caa6c) | true if PriceLegacyItemId_Optional has been explicitly set to null
`public int32 `[`CurrentPrice`](#structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689) | The current amount of the item needed to use this price currency.
`public int32 `[`OriginalPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615) | 
`public bool `[`OriginalPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9) | true if OriginalPrice_Optional has been set to a value
`public bool `[`OriginalPrice_IsNull`](#structFRHAPI__LootPriceCurrency_1ab63a60fa98f23d2d6a9300a8c407ef80) | true if OriginalPrice_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrency_1a3cbff339690df570db49702606c2ff9d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a50b5e908045e4781a656b9081abcd4f6)`()` | Gets the value of PriceItemId.
`public inline const FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a82d63ff17758a5b635de994893029f57)`() const` | Gets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1af5dc486ae19361b02c60d181e0bbe96c)`(const FGuid & NewValue)` | Sets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1aae96d82d729b6b08bb302b82436e2bdc)`(FGuid && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a7049cca173113eabf16a5eda383ad6d7)`()` | Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a456f7eed3abec281ccbab2b5f7c39116)`() const` | Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a65ef65d7be6ba5bfe9ee4234be875ce4)`(const int32 & DefaultValue) const` | Gets the value of PriceLegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a46df9d51506c5391c1ce7377351487b4)`(int32 & OutValue) const` | Fills OutValue with the value of PriceLegacyItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a5a2675f5859842b976fba399cb75a131)`()` | Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a15d6805127dd80c1f0637a039fd8c649)`() const` | Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a90d73395a4d7210723b807ce5c052132)`(const int32 & NewValue)` | Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true.
`public inline void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a0c46cefc369d33286ec10a3e5258fb2a)`(int32 && NewValue)` | Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00)`()` | Clears the value of PriceLegacyItemId_Optional and sets PriceLegacyItemId_IsSet to false.
`public inline bool `[`IsPriceLegacyItemIdSet`](#structFRHAPI__LootPriceCurrency_1afb869c81aa45e4e9db8483008dcb1bc0)`() const` | Checks whether PriceLegacyItemId_Optional has been set.
`public inline bool `[`IsPriceLegacyItemIdDefaultValue`](#structFRHAPI__LootPriceCurrency_1af9f1d83df529dda55f3b686bfc16dd06)`() const` | Returns true if PriceLegacyItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceLegacyItemIdToDefault`](#structFRHAPI__LootPriceCurrency_1a1d1ed8b8461ec2f3d0f0b87c6b44b765)`()` | Sets the value of PriceLegacyItemId_Optional to its default and also sets PriceLegacyItemId_IsSet to true.
`public inline void `[`SetPriceLegacyItemIdToNull`](#structFRHAPI__LootPriceCurrency_1ad04e8d8f2ea93855d1fff76e2839e9f1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPriceLegacyItemIdNull`](#structFRHAPI__LootPriceCurrency_1a34a4af41cdbda1e13a56a35955d1a6ac)`() const` | Checks whether PriceLegacyItemId_Optional is set to null.
`public inline int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1ab8a60975058ed8c77cab5996e3a53809)`()` | Gets the value of CurrentPrice.
`public inline const int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1acfc6a1f59dc65cd2de091186a6923ed6)`() const` | Gets the value of CurrentPrice.
`public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1ad8622ee4f7150d9059867f0c04d57a87)`(const int32 & NewValue)` | Sets the value of CurrentPrice.
`public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a431fef74d7b8ad20ddf2f628c9888bf2)`(int32 && NewValue)` | Sets the value of CurrentPrice using move semantics.
`public inline bool `[`IsCurrentPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a7c87468c5cfb065979b06eae939437f0)`() const` | Returns true if CurrentPrice matches the default value.
`public inline void `[`SetCurrentPriceToDefault`](#structFRHAPI__LootPriceCurrency_1a079f4072d3bdf2320506acd7eee2001c)`()` | Sets the value of CurrentPrice to its default
`public inline int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1ad60eac050f049c907cc0906c366ebf61)`()` | Gets the value of OriginalPrice_Optional, regardless of it having been set.
`public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adfa240b023c626d02ec4ffa39b570900)`() const` | Gets the value of OriginalPrice_Optional, regardless of it having been set.
`public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8618985539e7e6ae35108d4f7aec7645)`(const int32 & DefaultValue) const` | Gets the value of OriginalPrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a62cc1a76794cc54e116af9489940aa65)`(int32 & OutValue) const` | Fills OutValue with the value of OriginalPrice_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a3b3c301447294fbc17ed7197f177ab47)`()` | Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a76b63cebbc6ac57d3e606a471c12e48d)`() const` | Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a5e1ebb23cc25a4595ea3ca3d8ba2e9b5)`(const int32 & NewValue)` | Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true.
`public inline void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8ad1a486a0f869e70f82b861aaac23f4)`(int32 && NewValue)` | Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true using move semantics.
`public inline void `[`ClearOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c)`()` | Clears the value of OriginalPrice_Optional and sets OriginalPrice_IsSet to false.
`public inline bool `[`IsOriginalPriceSet`](#structFRHAPI__LootPriceCurrency_1ad9ec20c4891dc02ca64281875b296ee1)`() const` | Checks whether OriginalPrice_Optional has been set.
`public inline bool `[`IsOriginalPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a6b387b52ccf1fac062d6f1e3ebd4ccc9)`() const` | Returns true if OriginalPrice_Optional is set and matches the default value.
`public inline void `[`SetOriginalPriceToDefault`](#structFRHAPI__LootPriceCurrency_1aea69694ba237627de044b779bfae90a0)`()` | Sets the value of OriginalPrice_Optional to its default and also sets OriginalPrice_IsSet to true.
`public inline void `[`SetOriginalPriceToNull`](#structFRHAPI__LootPriceCurrency_1a7bbc25769d59d8177746a59dcd5aa867)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsOriginalPriceNull`](#structFRHAPI__LootPriceCurrency_1a2d873f28d8db6a9a77913eb5fae765bd)`() const` | Checks whether OriginalPrice_Optional is set to null.

### Members

#### `public FGuid `[`PriceItemId`](#structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c) <a id="structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`PriceLegacyItemId_Optional`](#structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf) <a id="structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf"></a>

#### `public bool `[`PriceLegacyItemId_IsSet`](#structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9) <a id="structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9"></a>

true if PriceLegacyItemId_Optional has been set to a value

#### `public bool `[`PriceLegacyItemId_IsNull`](#structFRHAPI__LootPriceCurrency_1a0591c08253dfc6da241dc74b8c6caa6c) <a id="structFRHAPI__LootPriceCurrency_1a0591c08253dfc6da241dc74b8c6caa6c"></a>

true if PriceLegacyItemId_Optional has been explicitly set to null

#### `public int32 `[`CurrentPrice`](#structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689) <a id="structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689"></a>

The current amount of the item needed to use this price currency.

#### `public int32 `[`OriginalPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615) <a id="structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615"></a>

#### `public bool `[`OriginalPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9) <a id="structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9"></a>

true if OriginalPrice_Optional has been set to a value

#### `public bool `[`OriginalPrice_IsNull`](#structFRHAPI__LootPriceCurrency_1ab63a60fa98f23d2d6a9300a8c407ef80) <a id="structFRHAPI__LootPriceCurrency_1ab63a60fa98f23d2d6a9300a8c407ef80"></a>

true if OriginalPrice_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrency_1a3cbff339690df570db49702606c2ff9d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LootPriceCurrency_1a3cbff339690df570db49702606c2ff9d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a50b5e908045e4781a656b9081abcd4f6)`()` <a id="structFRHAPI__LootPriceCurrency_1a50b5e908045e4781a656b9081abcd4f6"></a>

Gets the value of PriceItemId.

#### `public inline const FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a82d63ff17758a5b635de994893029f57)`() const` <a id="structFRHAPI__LootPriceCurrency_1a82d63ff17758a5b635de994893029f57"></a>

Gets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1af5dc486ae19361b02c60d181e0bbe96c)`(const FGuid & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1af5dc486ae19361b02c60d181e0bbe96c"></a>

Sets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1aae96d82d729b6b08bb302b82436e2bdc)`(FGuid && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1aae96d82d729b6b08bb302b82436e2bdc"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a7049cca173113eabf16a5eda383ad6d7)`()` <a id="structFRHAPI__LootPriceCurrency_1a7049cca173113eabf16a5eda383ad6d7"></a>

Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a456f7eed3abec281ccbab2b5f7c39116)`() const` <a id="structFRHAPI__LootPriceCurrency_1a456f7eed3abec281ccbab2b5f7c39116"></a>

Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a65ef65d7be6ba5bfe9ee4234be875ce4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1a65ef65d7be6ba5bfe9ee4234be875ce4"></a>

Gets the value of PriceLegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a46df9d51506c5391c1ce7377351487b4)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1a46df9d51506c5391c1ce7377351487b4"></a>

Fills OutValue with the value of PriceLegacyItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a5a2675f5859842b976fba399cb75a131)`()` <a id="structFRHAPI__LootPriceCurrency_1a5a2675f5859842b976fba399cb75a131"></a>

Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a15d6805127dd80c1f0637a039fd8c649)`() const` <a id="structFRHAPI__LootPriceCurrency_1a15d6805127dd80c1f0637a039fd8c649"></a>

Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a90d73395a4d7210723b807ce5c052132)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a90d73395a4d7210723b807ce5c052132"></a>

Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true.

#### `public inline void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a0c46cefc369d33286ec10a3e5258fb2a)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a0c46cefc369d33286ec10a3e5258fb2a"></a>

Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00)`()` <a id="structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00"></a>

Clears the value of PriceLegacyItemId_Optional and sets PriceLegacyItemId_IsSet to false.

#### `public inline bool `[`IsPriceLegacyItemIdSet`](#structFRHAPI__LootPriceCurrency_1afb869c81aa45e4e9db8483008dcb1bc0)`() const` <a id="structFRHAPI__LootPriceCurrency_1afb869c81aa45e4e9db8483008dcb1bc0"></a>

Checks whether PriceLegacyItemId_Optional has been set.

#### `public inline bool `[`IsPriceLegacyItemIdDefaultValue`](#structFRHAPI__LootPriceCurrency_1af9f1d83df529dda55f3b686bfc16dd06)`() const` <a id="structFRHAPI__LootPriceCurrency_1af9f1d83df529dda55f3b686bfc16dd06"></a>

Returns true if PriceLegacyItemId_Optional is set and matches the default value.

#### `public inline void `[`SetPriceLegacyItemIdToDefault`](#structFRHAPI__LootPriceCurrency_1a1d1ed8b8461ec2f3d0f0b87c6b44b765)`()` <a id="structFRHAPI__LootPriceCurrency_1a1d1ed8b8461ec2f3d0f0b87c6b44b765"></a>

Sets the value of PriceLegacyItemId_Optional to its default and also sets PriceLegacyItemId_IsSet to true.

#### `public inline void `[`SetPriceLegacyItemIdToNull`](#structFRHAPI__LootPriceCurrency_1ad04e8d8f2ea93855d1fff76e2839e9f1)`()` <a id="structFRHAPI__LootPriceCurrency_1ad04e8d8f2ea93855d1fff76e2839e9f1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPriceLegacyItemIdNull`](#structFRHAPI__LootPriceCurrency_1a34a4af41cdbda1e13a56a35955d1a6ac)`() const` <a id="structFRHAPI__LootPriceCurrency_1a34a4af41cdbda1e13a56a35955d1a6ac"></a>

Checks whether PriceLegacyItemId_Optional is set to null.

#### `public inline int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1ab8a60975058ed8c77cab5996e3a53809)`()` <a id="structFRHAPI__LootPriceCurrency_1ab8a60975058ed8c77cab5996e3a53809"></a>

Gets the value of CurrentPrice.

#### `public inline const int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1acfc6a1f59dc65cd2de091186a6923ed6)`() const` <a id="structFRHAPI__LootPriceCurrency_1acfc6a1f59dc65cd2de091186a6923ed6"></a>

Gets the value of CurrentPrice.

#### `public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1ad8622ee4f7150d9059867f0c04d57a87)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1ad8622ee4f7150d9059867f0c04d57a87"></a>

Sets the value of CurrentPrice.

#### `public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a431fef74d7b8ad20ddf2f628c9888bf2)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a431fef74d7b8ad20ddf2f628c9888bf2"></a>

Sets the value of CurrentPrice using move semantics.

#### `public inline bool `[`IsCurrentPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a7c87468c5cfb065979b06eae939437f0)`() const` <a id="structFRHAPI__LootPriceCurrency_1a7c87468c5cfb065979b06eae939437f0"></a>

Returns true if CurrentPrice matches the default value.

#### `public inline void `[`SetCurrentPriceToDefault`](#structFRHAPI__LootPriceCurrency_1a079f4072d3bdf2320506acd7eee2001c)`()` <a id="structFRHAPI__LootPriceCurrency_1a079f4072d3bdf2320506acd7eee2001c"></a>

Sets the value of CurrentPrice to its default

#### `public inline int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1ad60eac050f049c907cc0906c366ebf61)`()` <a id="structFRHAPI__LootPriceCurrency_1ad60eac050f049c907cc0906c366ebf61"></a>

Gets the value of OriginalPrice_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adfa240b023c626d02ec4ffa39b570900)`() const` <a id="structFRHAPI__LootPriceCurrency_1adfa240b023c626d02ec4ffa39b570900"></a>

Gets the value of OriginalPrice_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8618985539e7e6ae35108d4f7aec7645)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1a8618985539e7e6ae35108d4f7aec7645"></a>

Gets the value of OriginalPrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a62cc1a76794cc54e116af9489940aa65)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1a62cc1a76794cc54e116af9489940aa65"></a>

Fills OutValue with the value of OriginalPrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a3b3c301447294fbc17ed7197f177ab47)`()` <a id="structFRHAPI__LootPriceCurrency_1a3b3c301447294fbc17ed7197f177ab47"></a>

Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a76b63cebbc6ac57d3e606a471c12e48d)`() const` <a id="structFRHAPI__LootPriceCurrency_1a76b63cebbc6ac57d3e606a471c12e48d"></a>

Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a5e1ebb23cc25a4595ea3ca3d8ba2e9b5)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a5e1ebb23cc25a4595ea3ca3d8ba2e9b5"></a>

Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true.

#### `public inline void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8ad1a486a0f869e70f82b861aaac23f4)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a8ad1a486a0f869e70f82b861aaac23f4"></a>

Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true using move semantics.

#### `public inline void `[`ClearOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c)`()` <a id="structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c"></a>

Clears the value of OriginalPrice_Optional and sets OriginalPrice_IsSet to false.

#### `public inline bool `[`IsOriginalPriceSet`](#structFRHAPI__LootPriceCurrency_1ad9ec20c4891dc02ca64281875b296ee1)`() const` <a id="structFRHAPI__LootPriceCurrency_1ad9ec20c4891dc02ca64281875b296ee1"></a>

Checks whether OriginalPrice_Optional has been set.

#### `public inline bool `[`IsOriginalPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a6b387b52ccf1fac062d6f1e3ebd4ccc9)`() const` <a id="structFRHAPI__LootPriceCurrency_1a6b387b52ccf1fac062d6f1e3ebd4ccc9"></a>

Returns true if OriginalPrice_Optional is set and matches the default value.

#### `public inline void `[`SetOriginalPriceToDefault`](#structFRHAPI__LootPriceCurrency_1aea69694ba237627de044b779bfae90a0)`()` <a id="structFRHAPI__LootPriceCurrency_1aea69694ba237627de044b779bfae90a0"></a>

Sets the value of OriginalPrice_Optional to its default and also sets OriginalPrice_IsSet to true.

#### `public inline void `[`SetOriginalPriceToNull`](#structFRHAPI__LootPriceCurrency_1a7bbc25769d59d8177746a59dcd5aa867)`()` <a id="structFRHAPI__LootPriceCurrency_1a7bbc25769d59d8177746a59dcd5aa867"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsOriginalPriceNull`](#structFRHAPI__LootPriceCurrency_1a2d873f28d8db6a9a77913eb5fae765bd)`() const` <a id="structFRHAPI__LootPriceCurrency_1a2d873f28d8db6a9a77913eb5fae765bd"></a>

Checks whether OriginalPrice_Optional is set to null.

