# group `RHAPI_LootPriceCurrency` <a id="group__RHAPI__LootPriceCurrency"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootPriceCurrency`](#structFRHAPI__LootPriceCurrency) | One currency (of potentially multiple) that can be used for a purchase, and how much of that currency is required for the purchase.

---
title: FRHAPI_LootPriceCurrency
---

```
struct FRHAPI_LootPriceCurrency
  : public FRHAPI_Model
```

One currency (of potentially multiple) that can be used for a purchase, and how much of that currency is required for the purchase.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PriceItemId`](#structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c) | The Item used as the currency for the purchase.
`public int32 `[`PriceLegacyItemId_Optional`](#structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf) | The Item used as the currency for the purchase.
`public bool `[`PriceLegacyItemId_IsSet`](#structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9) | true if PriceLegacyItemId_Optional has been set to a value
`public int32 `[`CurrentPrice`](#structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689) | The current amount of the item needed to use this price currency.
`public int32 `[`OriginalPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615) | The amount of the item needed before the sale began.
`public bool `[`OriginalPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9) | true if OriginalPrice_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrency_1ad56803eb95a8e3a291f9776e2e227c81)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1adb4cc358ff5d37eed4f3a47e7221b4e5)`()` | Gets the value of PriceItemId.
`public inline const FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a842262578e2656f51ad5049f6731b8fa)`() const` | Gets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1af5dc486ae19361b02c60d181e0bbe96c)`(const FGuid & NewValue)` | Sets the value of PriceItemId.
`public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1aae96d82d729b6b08bb302b82436e2bdc)`(FGuid && NewValue)` | Sets the value of PriceItemId using move semantics.
`public inline int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1aa5f49e8089d63880b3aa38c8ccb5dcc2)`()` | Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a921e57928c735d54faf250cb47f29df7)`() const` | Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a43a927260c15338b9610a5b0b70c2138)`(const int32 & DefaultValue) const` | Gets the value of PriceLegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a46df9d51506c5391c1ce7377351487b4)`(int32 & OutValue) const` | Fills OutValue with the value of PriceLegacyItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a276aa7cb764f22d8f0244c06399a64d7)`()` | Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a68e16d9aedae29d46f431037e7887a47)`() const` | Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a90d73395a4d7210723b807ce5c052132)`(const int32 & NewValue)` | Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true.
`public inline void `[`SetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a0c46cefc369d33286ec10a3e5258fb2a)`(int32 && NewValue)` | Sets the value of PriceLegacyItemId_Optional and also sets PriceLegacyItemId_IsSet to true using move semantics.
`public inline void `[`ClearPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a14aed06cd68fd028113cad861a230b00)`()` | Clears the value of PriceLegacyItemId_Optional and sets PriceLegacyItemId_IsSet to false.
`public inline bool `[`IsPriceLegacyItemIdSet`](#structFRHAPI__LootPriceCurrency_1afb869c81aa45e4e9db8483008dcb1bc0)`() const` | Checks whether PriceLegacyItemId_Optional has been set.
`public inline bool `[`IsPriceLegacyItemIdDefaultValue`](#structFRHAPI__LootPriceCurrency_1af9f1d83df529dda55f3b686bfc16dd06)`() const` | Returns true if PriceLegacyItemId_Optional is set and matches the default value.
`public inline void `[`SetPriceLegacyItemIdToDefault`](#structFRHAPI__LootPriceCurrency_1a1d1ed8b8461ec2f3d0f0b87c6b44b765)`()` | Sets the value of PriceLegacyItemId_Optional to its default and also sets PriceLegacyItemId_IsSet to true.
`public inline int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a5d25520b43a0265f75a17e1f90aa44da)`()` | Gets the value of CurrentPrice.
`public inline const int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a524513b6654371b70e3823f755ab9404)`() const` | Gets the value of CurrentPrice.
`public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1ad8622ee4f7150d9059867f0c04d57a87)`(const int32 & NewValue)` | Sets the value of CurrentPrice.
`public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a431fef74d7b8ad20ddf2f628c9888bf2)`(int32 && NewValue)` | Sets the value of CurrentPrice using move semantics.
`public inline bool `[`IsCurrentPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a7c87468c5cfb065979b06eae939437f0)`() const` | Returns true if CurrentPrice matches the default value.
`public inline void `[`SetCurrentPriceToDefault`](#structFRHAPI__LootPriceCurrency_1a079f4072d3bdf2320506acd7eee2001c)`()` | Sets the value of CurrentPrice to its default
`public inline int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8fbbbc0c964446529260db9429aecc4c)`()` | Gets the value of OriginalPrice_Optional, regardless of it having been set.
`public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1ad204e6944ca47dfca6deac2883e534c1)`() const` | Gets the value of OriginalPrice_Optional, regardless of it having been set.
`public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a710c629e7ea5c127cffe710fefd33b20)`(const int32 & DefaultValue) const` | Gets the value of OriginalPrice_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a62cc1a76794cc54e116af9489940aa65)`(int32 & OutValue) const` | Fills OutValue with the value of OriginalPrice_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a6fdb76d538c3d541f52eca788ce71351)`()` | Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a395d02dcdd604d27aaf73788a87a2585)`() const` | Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a5e1ebb23cc25a4595ea3ca3d8ba2e9b5)`(const int32 & NewValue)` | Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true.
`public inline void `[`SetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8ad1a486a0f869e70f82b861aaac23f4)`(int32 && NewValue)` | Sets the value of OriginalPrice_Optional and also sets OriginalPrice_IsSet to true using move semantics.
`public inline void `[`ClearOriginalPrice`](#structFRHAPI__LootPriceCurrency_1adb9e99e39f12ab4a59c4dda3e2d6152c)`()` | Clears the value of OriginalPrice_Optional and sets OriginalPrice_IsSet to false.
`public inline bool `[`IsOriginalPriceSet`](#structFRHAPI__LootPriceCurrency_1ad9ec20c4891dc02ca64281875b296ee1)`() const` | Checks whether OriginalPrice_Optional has been set.
`public inline bool `[`IsOriginalPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a6b387b52ccf1fac062d6f1e3ebd4ccc9)`() const` | Returns true if OriginalPrice_Optional is set and matches the default value.
`public inline void `[`SetOriginalPriceToDefault`](#structFRHAPI__LootPriceCurrency_1aea69694ba237627de044b779bfae90a0)`()` | Sets the value of OriginalPrice_Optional to its default and also sets OriginalPrice_IsSet to true.

### Members

#### `public FGuid `[`PriceItemId`](#structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c) <a id="structFRHAPI__LootPriceCurrency_1a97e2aaf765f9eca2943892ead5e8759c"></a>

The Item used as the currency for the purchase.

#### `public int32 `[`PriceLegacyItemId_Optional`](#structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf) <a id="structFRHAPI__LootPriceCurrency_1ae6052d1c00c3dfdc6710483697a6a2cf"></a>

The Item used as the currency for the purchase.

#### `public bool `[`PriceLegacyItemId_IsSet`](#structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9) <a id="structFRHAPI__LootPriceCurrency_1a45e7653798d3ea4905d7a3d8f45c03b9"></a>

true if PriceLegacyItemId_Optional has been set to a value

#### `public int32 `[`CurrentPrice`](#structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689) <a id="structFRHAPI__LootPriceCurrency_1a9dcc9c73026a9967b1fd784594868689"></a>

The current amount of the item needed to use this price currency.

#### `public int32 `[`OriginalPrice_Optional`](#structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615) <a id="structFRHAPI__LootPriceCurrency_1a5da3ba9a4150b4ccbf0517225c4a4615"></a>

The amount of the item needed before the sale began.

#### `public bool `[`OriginalPrice_IsSet`](#structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9) <a id="structFRHAPI__LootPriceCurrency_1aeb1c5edf1724195ec01858cfc7edcca9"></a>

true if OriginalPrice_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootPriceCurrency_1a282ba62867e7214fcfa5a40fed8ad287"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootPriceCurrency_1ad56803eb95a8e3a291f9776e2e227c81)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LootPriceCurrency_1ad56803eb95a8e3a291f9776e2e227c81"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1adb4cc358ff5d37eed4f3a47e7221b4e5)`()` <a id="structFRHAPI__LootPriceCurrency_1adb4cc358ff5d37eed4f3a47e7221b4e5"></a>

Gets the value of PriceItemId.

#### `public inline const FGuid & `[`GetPriceItemId`](#structFRHAPI__LootPriceCurrency_1a842262578e2656f51ad5049f6731b8fa)`() const` <a id="structFRHAPI__LootPriceCurrency_1a842262578e2656f51ad5049f6731b8fa"></a>

Gets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1af5dc486ae19361b02c60d181e0bbe96c)`(const FGuid & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1af5dc486ae19361b02c60d181e0bbe96c"></a>

Sets the value of PriceItemId.

#### `public inline void `[`SetPriceItemId`](#structFRHAPI__LootPriceCurrency_1aae96d82d729b6b08bb302b82436e2bdc)`(FGuid && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1aae96d82d729b6b08bb302b82436e2bdc"></a>

Sets the value of PriceItemId using move semantics.

#### `public inline int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1aa5f49e8089d63880b3aa38c8ccb5dcc2)`()` <a id="structFRHAPI__LootPriceCurrency_1aa5f49e8089d63880b3aa38c8ccb5dcc2"></a>

Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a921e57928c735d54faf250cb47f29df7)`() const` <a id="structFRHAPI__LootPriceCurrency_1a921e57928c735d54faf250cb47f29df7"></a>

Gets the value of PriceLegacyItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a43a927260c15338b9610a5b0b70c2138)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1a43a927260c15338b9610a5b0b70c2138"></a>

Gets the value of PriceLegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPriceLegacyItemId`](#structFRHAPI__LootPriceCurrency_1a46df9d51506c5391c1ce7377351487b4)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1a46df9d51506c5391c1ce7377351487b4"></a>

Fills OutValue with the value of PriceLegacyItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a276aa7cb764f22d8f0244c06399a64d7)`()` <a id="structFRHAPI__LootPriceCurrency_1a276aa7cb764f22d8f0244c06399a64d7"></a>

Returns a pointer to PriceLegacyItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPriceLegacyItemIdOrNull`](#structFRHAPI__LootPriceCurrency_1a68e16d9aedae29d46f431037e7887a47)`() const` <a id="structFRHAPI__LootPriceCurrency_1a68e16d9aedae29d46f431037e7887a47"></a>

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

#### `public inline int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a5d25520b43a0265f75a17e1f90aa44da)`()` <a id="structFRHAPI__LootPriceCurrency_1a5d25520b43a0265f75a17e1f90aa44da"></a>

Gets the value of CurrentPrice.

#### `public inline const int32 & `[`GetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a524513b6654371b70e3823f755ab9404)`() const` <a id="structFRHAPI__LootPriceCurrency_1a524513b6654371b70e3823f755ab9404"></a>

Gets the value of CurrentPrice.

#### `public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1ad8622ee4f7150d9059867f0c04d57a87)`(const int32 & NewValue)` <a id="structFRHAPI__LootPriceCurrency_1ad8622ee4f7150d9059867f0c04d57a87"></a>

Sets the value of CurrentPrice.

#### `public inline void `[`SetCurrentPrice`](#structFRHAPI__LootPriceCurrency_1a431fef74d7b8ad20ddf2f628c9888bf2)`(int32 && NewValue)` <a id="structFRHAPI__LootPriceCurrency_1a431fef74d7b8ad20ddf2f628c9888bf2"></a>

Sets the value of CurrentPrice using move semantics.

#### `public inline bool `[`IsCurrentPriceDefaultValue`](#structFRHAPI__LootPriceCurrency_1a7c87468c5cfb065979b06eae939437f0)`() const` <a id="structFRHAPI__LootPriceCurrency_1a7c87468c5cfb065979b06eae939437f0"></a>

Returns true if CurrentPrice matches the default value.

#### `public inline void `[`SetCurrentPriceToDefault`](#structFRHAPI__LootPriceCurrency_1a079f4072d3bdf2320506acd7eee2001c)`()` <a id="structFRHAPI__LootPriceCurrency_1a079f4072d3bdf2320506acd7eee2001c"></a>

Sets the value of CurrentPrice to its default

#### `public inline int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a8fbbbc0c964446529260db9429aecc4c)`()` <a id="structFRHAPI__LootPriceCurrency_1a8fbbbc0c964446529260db9429aecc4c"></a>

Gets the value of OriginalPrice_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1ad204e6944ca47dfca6deac2883e534c1)`() const` <a id="structFRHAPI__LootPriceCurrency_1ad204e6944ca47dfca6deac2883e534c1"></a>

Gets the value of OriginalPrice_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a710c629e7ea5c127cffe710fefd33b20)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootPriceCurrency_1a710c629e7ea5c127cffe710fefd33b20"></a>

Gets the value of OriginalPrice_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOriginalPrice`](#structFRHAPI__LootPriceCurrency_1a62cc1a76794cc54e116af9489940aa65)`(int32 & OutValue) const` <a id="structFRHAPI__LootPriceCurrency_1a62cc1a76794cc54e116af9489940aa65"></a>

Fills OutValue with the value of OriginalPrice_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a6fdb76d538c3d541f52eca788ce71351)`()` <a id="structFRHAPI__LootPriceCurrency_1a6fdb76d538c3d541f52eca788ce71351"></a>

Returns a pointer to OriginalPrice_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetOriginalPriceOrNull`](#structFRHAPI__LootPriceCurrency_1a395d02dcdd604d27aaf73788a87a2585)`() const` <a id="structFRHAPI__LootPriceCurrency_1a395d02dcdd604d27aaf73788a87a2585"></a>

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

