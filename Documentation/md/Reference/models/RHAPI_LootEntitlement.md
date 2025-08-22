---
title: RHAPI_LootEntitlement
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LootEntitlement`](#structFRHAPI__LootEntitlement) | How a Platform SKU will be converted into Loot for a player.

## struct `FRHAPI_LootEntitlement` <a id="structFRHAPI__LootEntitlement"></a>

```
struct FRHAPI_LootEntitlement
  : public FRHAPI_Model
```

How a Platform SKU will be converted into Loot for a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_EntitlementType `[`Type`](#structFRHAPI__LootEntitlement_1a5bb7423ffa834e3ed248ccffca0fe6dc) | 
`public int32 `[`LootId`](#structFRHAPI__LootEntitlement_1a8adee57180f2b0fe870b387d0ea04946) | The Loot ID that will be granted to the player.
`public int32 `[`RefundLootId_Optional`](#structFRHAPI__LootEntitlement_1af248a552d6171680b5732f0bc5e31c5e) | 
`public bool `[`RefundLootId_IsSet`](#structFRHAPI__LootEntitlement_1a54a7c2ef3b6e4b6e03a063b48def1b56) | true if RefundLootId_Optional has been set to a value
`public bool `[`RefundLootId_IsNull`](#structFRHAPI__LootEntitlement_1a6cc9c07064cf48919b77b7a842960bf1) | true if RefundLootId_Optional has been explicitly set to null
`public int32 `[`ChargebackLootId_Optional`](#structFRHAPI__LootEntitlement_1aea26770f325ead2b0064542fc6a77713) | 
`public bool `[`ChargebackLootId_IsSet`](#structFRHAPI__LootEntitlement_1aeb16768d2e144723c352e400fad25702) | true if ChargebackLootId_Optional has been set to a value
`public bool `[`ChargebackLootId_IsNull`](#structFRHAPI__LootEntitlement_1acd62c02152227a2a8276cf8918d1a8d7) | true if ChargebackLootId_Optional has been explicitly set to null
`public int32 `[`ChargebackReversalLootId_Optional`](#structFRHAPI__LootEntitlement_1a6cc8452d940ee1c31939a72d6b6e4794) | 
`public bool `[`ChargebackReversalLootId_IsSet`](#structFRHAPI__LootEntitlement_1a0ba4d6820454d2c4730abdbf6de5d6d8) | true if ChargebackReversalLootId_Optional has been set to a value
`public bool `[`ChargebackReversalLootId_IsNull`](#structFRHAPI__LootEntitlement_1a831a734b5a8ca367b9e3219e862b05ac) | true if ChargebackReversalLootId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__LootEntitlement_1a61d39abdca0b01971206c217ab93851d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootEntitlement_1aff3385a90d0ea947a29dc599f9f37b4d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a8e71562d4e3b12df3753b2235fbbbe75)`()` | Gets the value of Type.
`public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a30367fda5e66a55bb524907524edc0fc)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__LootEntitlement_1ad21e5fd64c087599b640d4c891fd4c56)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__LootEntitlement_1a6c08328359404612d083bf761a583812)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a20daa02203cd102a40499651f7cb3140)`()` | Gets the value of LootId.
`public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a377123f7ca4b54f4a24a6b1919222c9e)`() const` | Gets the value of LootId.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LootEntitlement_1afed7f17ba2248fdc4f2b52267f8a57de)`(const int32 & NewValue)` | Sets the value of LootId.
`public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LootEntitlement_1a94004a6cc5a19c2b47b741bbc4675da4)`(int32 && NewValue)` | Sets the value of LootId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__LootEntitlement_1ab6753a32b7f9fc64b5c9f34467065d10)`()` | Returns the default value of LootId.
`public inline FORCEINLINE int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a46a00b65507cb3f57721da83cbf619d5)`()` | Gets the value of RefundLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a69f5afa4c06dbaefd5a7bf07fe439c28)`() const` | Gets the value of RefundLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1aea443f612dc649bdbf3a1f3332232b2f)`(const int32 & DefaultValue) const` | Gets the value of RefundLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1ab0120d48840679560e272406354a44bc)`(int32 & OutValue) const` | Fills OutValue with the value of RefundLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1ab032355b5318cb50d78dcbc4d9734051)`()` | Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a77c36e4e040e394d55d3afe30f9ca851)`() const` | Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1a675ba8f2f9addc31aa28e42e40b1e551)`(const int32 & NewValue)` | Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true.
`public inline FORCEINLINE void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1aca3293d75d2f2b9217d244292ecddd18)`(int32 && NewValue)` | Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true using move semantics.
`public inline void `[`ClearRefundLootId`](#structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4)`()` | Clears the value of RefundLootId_Optional and sets RefundLootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_RefundLootId`](#structFRHAPI__LootEntitlement_1a093ae4e125d07e18269668ddc61fa3e4)`()` | Returns the default value of RefundLootId.
`public inline FORCEINLINE void `[`SetRefundLootIdToNull`](#structFRHAPI__LootEntitlement_1aa2ae1e8d27b9786a4f97f642004aee8f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRefundLootIdNull`](#structFRHAPI__LootEntitlement_1a54f3a6b57e798e34731a481130b2e10f)`() const` | Checks whether RefundLootId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a52d1e6a246d3a29e491d6eed4136c11e)`()` | Gets the value of ChargebackLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a636262fc345d1141b6518fa292b9d9e3)`() const` | Gets the value of ChargebackLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a4a4055f095825c643cf2b96233b08b93)`(const int32 & DefaultValue) const` | Gets the value of ChargebackLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a941c7a6c77c877b07f855a77f7cf6247)`(int32 & OutValue) const` | Fills OutValue with the value of ChargebackLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1ad870e23f8ea66c93ee3967eda98fc2c2)`()` | Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a2849e034ee3a7b0a3a0a4accc1b2112d)`() const` | Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a4dbc3e61d7ff654236c331acccb1a08a)`(const int32 & NewValue)` | Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true.
`public inline FORCEINLINE void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a32460d01d60b3626a06424aa13eb7489)`(int32 && NewValue)` | Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true using move semantics.
`public inline void `[`ClearChargebackLootId`](#structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589)`()` | Clears the value of ChargebackLootId_Optional and sets ChargebackLootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ChargebackLootId`](#structFRHAPI__LootEntitlement_1a1745067f4598ee7cdc4ed3e6cbc0571a)`()` | Returns the default value of ChargebackLootId.
`public inline FORCEINLINE void `[`SetChargebackLootIdToNull`](#structFRHAPI__LootEntitlement_1a360933c1487494531f7904066b56868a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsChargebackLootIdNull`](#structFRHAPI__LootEntitlement_1aad05037a8ad6ef606adb5e6be0ca4af3)`() const` | Checks whether ChargebackLootId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a5563b2161595b5e8df2855d53872a7ac)`()` | Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a7fdfd363d9ca6366154e7b9e27d38bfc)`() const` | Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a072e197b8d2d7cdc8bcc8dac19b8016d)`(const int32 & DefaultValue) const` | Gets the value of ChargebackReversalLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a54638a7662683641d0e10ab1902b963e)`(int32 & OutValue) const` | Fills OutValue with the value of ChargebackReversalLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a2f8073919e59485c8d25aacb77433ed6)`()` | Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a1fc49246912cffda3d9c267982a7ea1f)`() const` | Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a909bf01fec4cdfc78d490982a4e3a065)`(const int32 & NewValue)` | Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true.
`public inline FORCEINLINE void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a6f78c2598838adb2bd7eb8553592fbae)`(int32 && NewValue)` | Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true using move semantics.
`public inline void `[`ClearChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e)`()` | Clears the value of ChargebackReversalLootId_Optional and sets ChargebackReversalLootId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1ab1b77dbf4c4fda32e9dadd48ea9da048)`()` | Returns the default value of ChargebackReversalLootId.
`public inline FORCEINLINE void `[`SetChargebackReversalLootIdToNull`](#structFRHAPI__LootEntitlement_1acea1c1cbecedf576b2736ca2be843935)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsChargebackReversalLootIdNull`](#structFRHAPI__LootEntitlement_1afe932a1084626f22161a01fc782754ff)`() const` | Checks whether ChargebackReversalLootId_Optional is set to null.

### Members

#### `public ERHAPI_EntitlementType `[`Type`](#structFRHAPI__LootEntitlement_1a5bb7423ffa834e3ed248ccffca0fe6dc) <a id="structFRHAPI__LootEntitlement_1a5bb7423ffa834e3ed248ccffca0fe6dc"></a>

#### `public int32 `[`LootId`](#structFRHAPI__LootEntitlement_1a8adee57180f2b0fe870b387d0ea04946) <a id="structFRHAPI__LootEntitlement_1a8adee57180f2b0fe870b387d0ea04946"></a>

The Loot ID that will be granted to the player.

#### `public int32 `[`RefundLootId_Optional`](#structFRHAPI__LootEntitlement_1af248a552d6171680b5732f0bc5e31c5e) <a id="structFRHAPI__LootEntitlement_1af248a552d6171680b5732f0bc5e31c5e"></a>

#### `public bool `[`RefundLootId_IsSet`](#structFRHAPI__LootEntitlement_1a54a7c2ef3b6e4b6e03a063b48def1b56) <a id="structFRHAPI__LootEntitlement_1a54a7c2ef3b6e4b6e03a063b48def1b56"></a>

true if RefundLootId_Optional has been set to a value

#### `public bool `[`RefundLootId_IsNull`](#structFRHAPI__LootEntitlement_1a6cc9c07064cf48919b77b7a842960bf1) <a id="structFRHAPI__LootEntitlement_1a6cc9c07064cf48919b77b7a842960bf1"></a>

true if RefundLootId_Optional has been explicitly set to null

#### `public int32 `[`ChargebackLootId_Optional`](#structFRHAPI__LootEntitlement_1aea26770f325ead2b0064542fc6a77713) <a id="structFRHAPI__LootEntitlement_1aea26770f325ead2b0064542fc6a77713"></a>

#### `public bool `[`ChargebackLootId_IsSet`](#structFRHAPI__LootEntitlement_1aeb16768d2e144723c352e400fad25702) <a id="structFRHAPI__LootEntitlement_1aeb16768d2e144723c352e400fad25702"></a>

true if ChargebackLootId_Optional has been set to a value

#### `public bool `[`ChargebackLootId_IsNull`](#structFRHAPI__LootEntitlement_1acd62c02152227a2a8276cf8918d1a8d7) <a id="structFRHAPI__LootEntitlement_1acd62c02152227a2a8276cf8918d1a8d7"></a>

true if ChargebackLootId_Optional has been explicitly set to null

#### `public int32 `[`ChargebackReversalLootId_Optional`](#structFRHAPI__LootEntitlement_1a6cc8452d940ee1c31939a72d6b6e4794) <a id="structFRHAPI__LootEntitlement_1a6cc8452d940ee1c31939a72d6b6e4794"></a>

#### `public bool `[`ChargebackReversalLootId_IsSet`](#structFRHAPI__LootEntitlement_1a0ba4d6820454d2c4730abdbf6de5d6d8) <a id="structFRHAPI__LootEntitlement_1a0ba4d6820454d2c4730abdbf6de5d6d8"></a>

true if ChargebackReversalLootId_Optional has been set to a value

#### `public bool `[`ChargebackReversalLootId_IsNull`](#structFRHAPI__LootEntitlement_1a831a734b5a8ca367b9e3219e862b05ac) <a id="structFRHAPI__LootEntitlement_1a831a734b5a8ca367b9e3219e862b05ac"></a>

true if ChargebackReversalLootId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__LootEntitlement_1a61d39abdca0b01971206c217ab93851d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootEntitlement_1a61d39abdca0b01971206c217ab93851d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LootEntitlement_1aff3385a90d0ea947a29dc599f9f37b4d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LootEntitlement_1aff3385a90d0ea947a29dc599f9f37b4d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a8e71562d4e3b12df3753b2235fbbbe75)`()` <a id="structFRHAPI__LootEntitlement_1a8e71562d4e3b12df3753b2235fbbbe75"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a30367fda5e66a55bb524907524edc0fc)`() const` <a id="structFRHAPI__LootEntitlement_1a30367fda5e66a55bb524907524edc0fc"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__LootEntitlement_1ad21e5fd64c087599b640d4c891fd4c56)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__LootEntitlement_1ad21e5fd64c087599b640d4c891fd4c56"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__LootEntitlement_1a6c08328359404612d083bf761a583812)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__LootEntitlement_1a6c08328359404612d083bf761a583812"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a20daa02203cd102a40499651f7cb3140)`()` <a id="structFRHAPI__LootEntitlement_1a20daa02203cd102a40499651f7cb3140"></a>

Gets the value of LootId.

#### `public inline FORCEINLINE const int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a377123f7ca4b54f4a24a6b1919222c9e)`() const` <a id="structFRHAPI__LootEntitlement_1a377123f7ca4b54f4a24a6b1919222c9e"></a>

Gets the value of LootId.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LootEntitlement_1afed7f17ba2248fdc4f2b52267f8a57de)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1afed7f17ba2248fdc4f2b52267f8a57de"></a>

Sets the value of LootId.

#### `public inline FORCEINLINE void `[`SetLootId`](#structFRHAPI__LootEntitlement_1a94004a6cc5a19c2b47b741bbc4675da4)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1a94004a6cc5a19c2b47b741bbc4675da4"></a>

Sets the value of LootId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LootId`](#structFRHAPI__LootEntitlement_1ab6753a32b7f9fc64b5c9f34467065d10)`()` <a id="structFRHAPI__LootEntitlement_1ab6753a32b7f9fc64b5c9f34467065d10"></a>

Returns the default value of LootId.

#### `public inline FORCEINLINE int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a46a00b65507cb3f57721da83cbf619d5)`()` <a id="structFRHAPI__LootEntitlement_1a46a00b65507cb3f57721da83cbf619d5"></a>

Gets the value of RefundLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a69f5afa4c06dbaefd5a7bf07fe439c28)`() const` <a id="structFRHAPI__LootEntitlement_1a69f5afa4c06dbaefd5a7bf07fe439c28"></a>

Gets the value of RefundLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1aea443f612dc649bdbf3a1f3332232b2f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1aea443f612dc649bdbf3a1f3332232b2f"></a>

Gets the value of RefundLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1ab0120d48840679560e272406354a44bc)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1ab0120d48840679560e272406354a44bc"></a>

Fills OutValue with the value of RefundLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1ab032355b5318cb50d78dcbc4d9734051)`()` <a id="structFRHAPI__LootEntitlement_1ab032355b5318cb50d78dcbc4d9734051"></a>

Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a77c36e4e040e394d55d3afe30f9ca851)`() const` <a id="structFRHAPI__LootEntitlement_1a77c36e4e040e394d55d3afe30f9ca851"></a>

Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1a675ba8f2f9addc31aa28e42e40b1e551)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a675ba8f2f9addc31aa28e42e40b1e551"></a>

Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1aca3293d75d2f2b9217d244292ecddd18)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1aca3293d75d2f2b9217d244292ecddd18"></a>

Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearRefundLootId`](#structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4)`()` <a id="structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4"></a>

Clears the value of RefundLootId_Optional and sets RefundLootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_RefundLootId`](#structFRHAPI__LootEntitlement_1a093ae4e125d07e18269668ddc61fa3e4)`()` <a id="structFRHAPI__LootEntitlement_1a093ae4e125d07e18269668ddc61fa3e4"></a>

Returns the default value of RefundLootId.

#### `public inline FORCEINLINE void `[`SetRefundLootIdToNull`](#structFRHAPI__LootEntitlement_1aa2ae1e8d27b9786a4f97f642004aee8f)`()` <a id="structFRHAPI__LootEntitlement_1aa2ae1e8d27b9786a4f97f642004aee8f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRefundLootIdNull`](#structFRHAPI__LootEntitlement_1a54f3a6b57e798e34731a481130b2e10f)`() const` <a id="structFRHAPI__LootEntitlement_1a54f3a6b57e798e34731a481130b2e10f"></a>

Checks whether RefundLootId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a52d1e6a246d3a29e491d6eed4136c11e)`()` <a id="structFRHAPI__LootEntitlement_1a52d1e6a246d3a29e491d6eed4136c11e"></a>

Gets the value of ChargebackLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a636262fc345d1141b6518fa292b9d9e3)`() const` <a id="structFRHAPI__LootEntitlement_1a636262fc345d1141b6518fa292b9d9e3"></a>

Gets the value of ChargebackLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a4a4055f095825c643cf2b96233b08b93)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1a4a4055f095825c643cf2b96233b08b93"></a>

Gets the value of ChargebackLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a941c7a6c77c877b07f855a77f7cf6247)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a941c7a6c77c877b07f855a77f7cf6247"></a>

Fills OutValue with the value of ChargebackLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1ad870e23f8ea66c93ee3967eda98fc2c2)`()` <a id="structFRHAPI__LootEntitlement_1ad870e23f8ea66c93ee3967eda98fc2c2"></a>

Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a2849e034ee3a7b0a3a0a4accc1b2112d)`() const` <a id="structFRHAPI__LootEntitlement_1a2849e034ee3a7b0a3a0a4accc1b2112d"></a>

Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a4dbc3e61d7ff654236c331acccb1a08a)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a4dbc3e61d7ff654236c331acccb1a08a"></a>

Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a32460d01d60b3626a06424aa13eb7489)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1a32460d01d60b3626a06424aa13eb7489"></a>

Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearChargebackLootId`](#structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589)`()` <a id="structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589"></a>

Clears the value of ChargebackLootId_Optional and sets ChargebackLootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ChargebackLootId`](#structFRHAPI__LootEntitlement_1a1745067f4598ee7cdc4ed3e6cbc0571a)`()` <a id="structFRHAPI__LootEntitlement_1a1745067f4598ee7cdc4ed3e6cbc0571a"></a>

Returns the default value of ChargebackLootId.

#### `public inline FORCEINLINE void `[`SetChargebackLootIdToNull`](#structFRHAPI__LootEntitlement_1a360933c1487494531f7904066b56868a)`()` <a id="structFRHAPI__LootEntitlement_1a360933c1487494531f7904066b56868a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsChargebackLootIdNull`](#structFRHAPI__LootEntitlement_1aad05037a8ad6ef606adb5e6be0ca4af3)`() const` <a id="structFRHAPI__LootEntitlement_1aad05037a8ad6ef606adb5e6be0ca4af3"></a>

Checks whether ChargebackLootId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a5563b2161595b5e8df2855d53872a7ac)`()` <a id="structFRHAPI__LootEntitlement_1a5563b2161595b5e8df2855d53872a7ac"></a>

Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a7fdfd363d9ca6366154e7b9e27d38bfc)`() const` <a id="structFRHAPI__LootEntitlement_1a7fdfd363d9ca6366154e7b9e27d38bfc"></a>

Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a072e197b8d2d7cdc8bcc8dac19b8016d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1a072e197b8d2d7cdc8bcc8dac19b8016d"></a>

Gets the value of ChargebackReversalLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a54638a7662683641d0e10ab1902b963e)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a54638a7662683641d0e10ab1902b963e"></a>

Fills OutValue with the value of ChargebackReversalLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a2f8073919e59485c8d25aacb77433ed6)`()` <a id="structFRHAPI__LootEntitlement_1a2f8073919e59485c8d25aacb77433ed6"></a>

Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a1fc49246912cffda3d9c267982a7ea1f)`() const` <a id="structFRHAPI__LootEntitlement_1a1fc49246912cffda3d9c267982a7ea1f"></a>

Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a909bf01fec4cdfc78d490982a4e3a065)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a909bf01fec4cdfc78d490982a4e3a065"></a>

Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a6f78c2598838adb2bd7eb8553592fbae)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1a6f78c2598838adb2bd7eb8553592fbae"></a>

Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e)`()` <a id="structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e"></a>

Clears the value of ChargebackReversalLootId_Optional and sets ChargebackReversalLootId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1ab1b77dbf4c4fda32e9dadd48ea9da048)`()` <a id="structFRHAPI__LootEntitlement_1ab1b77dbf4c4fda32e9dadd48ea9da048"></a>

Returns the default value of ChargebackReversalLootId.

#### `public inline FORCEINLINE void `[`SetChargebackReversalLootIdToNull`](#structFRHAPI__LootEntitlement_1acea1c1cbecedf576b2736ca2be843935)`()` <a id="structFRHAPI__LootEntitlement_1acea1c1cbecedf576b2736ca2be843935"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsChargebackReversalLootIdNull`](#structFRHAPI__LootEntitlement_1afe932a1084626f22161a01fc782754ff)`() const` <a id="structFRHAPI__LootEntitlement_1afe932a1084626f22161a01fc782754ff"></a>

Checks whether ChargebackReversalLootId_Optional is set to null.

