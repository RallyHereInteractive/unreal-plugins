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
`public inline ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1ac5a568bc8e519102363cdfcf00eb5b7e)`()` | Gets the value of Type.
`public inline const ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a1fa4dfcf6b93c7ee943932daad46d830)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__LootEntitlement_1a823022f67d94393021db001d3d0c9269)`(const ERHAPI_EntitlementType & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__LootEntitlement_1a95bb3d5d4b7936c71cf2a7b61e1b2aaf)`(ERHAPI_EntitlementType && NewValue)` | Sets the value of Type using move semantics.
`public inline int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a74c84dbf549f2bf13424bd1367038d00)`()` | Gets the value of LootId.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a1ec507e8941ef7a6c54ae998df6c175e)`() const` | Gets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__LootEntitlement_1a5a7d6872ab1f824d8bac5c609d7d8c34)`(const int32 & NewValue)` | Sets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__LootEntitlement_1af48c3bc963949a9e95ab6b8da3e1d8d1)`(int32 && NewValue)` | Sets the value of LootId using move semantics.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1ae579a6fa258227322777f08030c8eb40)`() const` | Returns true if LootId matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__LootEntitlement_1ac109819d196188782622887410d4d28e)`()` | Sets the value of LootId to its default
`public inline int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1ab48f7f7a86ab61fadc4d1004530b07c4)`()` | Gets the value of RefundLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1adbf498e11ee48d6725c6db417a57a884)`() const` | Gets the value of RefundLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a200973c006c7cd2f5a6c4f0975b72011)`(const int32 & DefaultValue) const` | Gets the value of RefundLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a25e1304774b2f280bcd0eb04675f60f8)`(int32 & OutValue) const` | Fills OutValue with the value of RefundLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a2444f80e5f9c2a7bf3bd06e859a346fc)`()` | Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a3b53db439ba9f3382cd11eeea13dcd36)`() const` | Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1a09de17b1d42671edb347576089741c8e)`(const int32 & NewValue)` | Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true.
`public inline void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1ac2f001079e115071edf5dad4f5e8a5f3)`(int32 && NewValue)` | Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true using move semantics.
`public inline void `[`ClearRefundLootId`](#structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4)`()` | Clears the value of RefundLootId_Optional and sets RefundLootId_IsSet to false.
`public inline bool `[`IsRefundLootIdSet`](#structFRHAPI__LootEntitlement_1af83650a40f5309cce8cda5d99a8306f4)`() const` | Checks whether RefundLootId_Optional has been set.
`public inline bool `[`IsRefundLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1acfa22e319b5a5168758dae5ae3da3530)`() const` | Returns true if RefundLootId_Optional is set and matches the default value.
`public inline void `[`SetRefundLootIdToDefault`](#structFRHAPI__LootEntitlement_1a90c354f4a45f98ff889f2c7cf565b076)`()` | Sets the value of RefundLootId_Optional to its default and also sets RefundLootId_IsSet to true.
`public inline void `[`SetRefundLootIdToNull`](#structFRHAPI__LootEntitlement_1a4167931a814eb0b4dbdbb266b4e45cd3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsRefundLootIdNull`](#structFRHAPI__LootEntitlement_1a4cf294985cdee30a794858e71fc1a1ae)`() const` | Checks whether RefundLootId_Optional is set to null.
`public inline int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a1574f11e2614f0cb77c07224bb0444ab)`()` | Gets the value of ChargebackLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a27d9528930aa21e3da939a4740ebbb5e)`() const` | Gets the value of ChargebackLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1af53992f9133be05d7398d5ac5454382d)`(const int32 & DefaultValue) const` | Gets the value of ChargebackLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a5333171229ac5e892f17d694498614b7)`(int32 & OutValue) const` | Fills OutValue with the value of ChargebackLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1af467f352b56ffb9dd274703e054a7326)`()` | Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a5ad03f22bcc4b3dfbf4262cc6e1c7c23)`() const` | Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a2b64faa543dd5f4b272b4ce3977f1886)`(const int32 & NewValue)` | Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true.
`public inline void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1ac81528dd24935bd845e1a55b43ab6078)`(int32 && NewValue)` | Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true using move semantics.
`public inline void `[`ClearChargebackLootId`](#structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589)`()` | Clears the value of ChargebackLootId_Optional and sets ChargebackLootId_IsSet to false.
`public inline bool `[`IsChargebackLootIdSet`](#structFRHAPI__LootEntitlement_1a2e12b5962cf569047d18970822963838)`() const` | Checks whether ChargebackLootId_Optional has been set.
`public inline bool `[`IsChargebackLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1a7fa2819951a44be101b5e3e5bbf5c2df)`() const` | Returns true if ChargebackLootId_Optional is set and matches the default value.
`public inline void `[`SetChargebackLootIdToDefault`](#structFRHAPI__LootEntitlement_1aa7b189956e3e1c7387144f63bea3ca6e)`()` | Sets the value of ChargebackLootId_Optional to its default and also sets ChargebackLootId_IsSet to true.
`public inline void `[`SetChargebackLootIdToNull`](#structFRHAPI__LootEntitlement_1aadf016a08ebe787488d994781f62f601)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsChargebackLootIdNull`](#structFRHAPI__LootEntitlement_1aa20aa1959136afd99c68a98529611bea)`() const` | Checks whether ChargebackLootId_Optional is set to null.
`public inline int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a873825aacd4f517d0926f6a2d35aba10)`()` | Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1ab11e4a69d75b84d7ef44eeb02315eae6)`() const` | Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a2e9e0ad5acbcea9fc8c76c18c77cb0a7)`(const int32 & DefaultValue) const` | Gets the value of ChargebackReversalLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a250e6b338fa8a6e22699458c60314074)`(int32 & OutValue) const` | Fills OutValue with the value of ChargebackReversalLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a14b252269b299990f8d8663f17611d6b)`()` | Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1adcbb2628e37890b345f7534f684ee0b5)`() const` | Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a89d0c8c15b34e6da8760509d74a9e2f0)`(const int32 & NewValue)` | Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true.
`public inline void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a3599bb72b2784514312a3f87ea599bbd)`(int32 && NewValue)` | Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true using move semantics.
`public inline void `[`ClearChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e)`()` | Clears the value of ChargebackReversalLootId_Optional and sets ChargebackReversalLootId_IsSet to false.
`public inline bool `[`IsChargebackReversalLootIdSet`](#structFRHAPI__LootEntitlement_1af0921d58ce0a89ca283912e35c2fc080)`() const` | Checks whether ChargebackReversalLootId_Optional has been set.
`public inline bool `[`IsChargebackReversalLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1aa0ba1b30005e46a5d6dc1d970308b1a7)`() const` | Returns true if ChargebackReversalLootId_Optional is set and matches the default value.
`public inline void `[`SetChargebackReversalLootIdToDefault`](#structFRHAPI__LootEntitlement_1a742527a3389dffb53537bed7a00a6749)`()` | Sets the value of ChargebackReversalLootId_Optional to its default and also sets ChargebackReversalLootId_IsSet to true.
`public inline void `[`SetChargebackReversalLootIdToNull`](#structFRHAPI__LootEntitlement_1a2e082d64933651446750008d7f384425)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsChargebackReversalLootIdNull`](#structFRHAPI__LootEntitlement_1a5e4824c938d23cb69a89f8e85d873f81)`() const` | Checks whether ChargebackReversalLootId_Optional is set to null.

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

#### `public inline ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1ac5a568bc8e519102363cdfcf00eb5b7e)`()` <a id="structFRHAPI__LootEntitlement_1ac5a568bc8e519102363cdfcf00eb5b7e"></a>

Gets the value of Type.

#### `public inline const ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a1fa4dfcf6b93c7ee943932daad46d830)`() const` <a id="structFRHAPI__LootEntitlement_1a1fa4dfcf6b93c7ee943932daad46d830"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__LootEntitlement_1a823022f67d94393021db001d3d0c9269)`(const ERHAPI_EntitlementType & NewValue)` <a id="structFRHAPI__LootEntitlement_1a823022f67d94393021db001d3d0c9269"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__LootEntitlement_1a95bb3d5d4b7936c71cf2a7b61e1b2aaf)`(ERHAPI_EntitlementType && NewValue)` <a id="structFRHAPI__LootEntitlement_1a95bb3d5d4b7936c71cf2a7b61e1b2aaf"></a>

Sets the value of Type using move semantics.

#### `public inline int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a74c84dbf549f2bf13424bd1367038d00)`()` <a id="structFRHAPI__LootEntitlement_1a74c84dbf549f2bf13424bd1367038d00"></a>

Gets the value of LootId.

#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a1ec507e8941ef7a6c54ae998df6c175e)`() const` <a id="structFRHAPI__LootEntitlement_1a1ec507e8941ef7a6c54ae998df6c175e"></a>

Gets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__LootEntitlement_1a5a7d6872ab1f824d8bac5c609d7d8c34)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a5a7d6872ab1f824d8bac5c609d7d8c34"></a>

Sets the value of LootId.

#### `public inline void `[`SetLootId`](#structFRHAPI__LootEntitlement_1af48c3bc963949a9e95ab6b8da3e1d8d1)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1af48c3bc963949a9e95ab6b8da3e1d8d1"></a>

Sets the value of LootId using move semantics.

#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1ae579a6fa258227322777f08030c8eb40)`() const` <a id="structFRHAPI__LootEntitlement_1ae579a6fa258227322777f08030c8eb40"></a>

Returns true if LootId matches the default value.

#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__LootEntitlement_1ac109819d196188782622887410d4d28e)`()` <a id="structFRHAPI__LootEntitlement_1ac109819d196188782622887410d4d28e"></a>

Sets the value of LootId to its default

#### `public inline int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1ab48f7f7a86ab61fadc4d1004530b07c4)`()` <a id="structFRHAPI__LootEntitlement_1ab48f7f7a86ab61fadc4d1004530b07c4"></a>

Gets the value of RefundLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1adbf498e11ee48d6725c6db417a57a884)`() const` <a id="structFRHAPI__LootEntitlement_1adbf498e11ee48d6725c6db417a57a884"></a>

Gets the value of RefundLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a200973c006c7cd2f5a6c4f0975b72011)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1a200973c006c7cd2f5a6c4f0975b72011"></a>

Gets the value of RefundLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a25e1304774b2f280bcd0eb04675f60f8)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a25e1304774b2f280bcd0eb04675f60f8"></a>

Fills OutValue with the value of RefundLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a2444f80e5f9c2a7bf3bd06e859a346fc)`()` <a id="structFRHAPI__LootEntitlement_1a2444f80e5f9c2a7bf3bd06e859a346fc"></a>

Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a3b53db439ba9f3382cd11eeea13dcd36)`() const` <a id="structFRHAPI__LootEntitlement_1a3b53db439ba9f3382cd11eeea13dcd36"></a>

Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1a09de17b1d42671edb347576089741c8e)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a09de17b1d42671edb347576089741c8e"></a>

Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true.

#### `public inline void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1ac2f001079e115071edf5dad4f5e8a5f3)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1ac2f001079e115071edf5dad4f5e8a5f3"></a>

Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearRefundLootId`](#structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4)`()` <a id="structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4"></a>

Clears the value of RefundLootId_Optional and sets RefundLootId_IsSet to false.

#### `public inline bool `[`IsRefundLootIdSet`](#structFRHAPI__LootEntitlement_1af83650a40f5309cce8cda5d99a8306f4)`() const` <a id="structFRHAPI__LootEntitlement_1af83650a40f5309cce8cda5d99a8306f4"></a>

Checks whether RefundLootId_Optional has been set.

#### `public inline bool `[`IsRefundLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1acfa22e319b5a5168758dae5ae3da3530)`() const` <a id="structFRHAPI__LootEntitlement_1acfa22e319b5a5168758dae5ae3da3530"></a>

Returns true if RefundLootId_Optional is set and matches the default value.

#### `public inline void `[`SetRefundLootIdToDefault`](#structFRHAPI__LootEntitlement_1a90c354f4a45f98ff889f2c7cf565b076)`()` <a id="structFRHAPI__LootEntitlement_1a90c354f4a45f98ff889f2c7cf565b076"></a>

Sets the value of RefundLootId_Optional to its default and also sets RefundLootId_IsSet to true.

#### `public inline void `[`SetRefundLootIdToNull`](#structFRHAPI__LootEntitlement_1a4167931a814eb0b4dbdbb266b4e45cd3)`()` <a id="structFRHAPI__LootEntitlement_1a4167931a814eb0b4dbdbb266b4e45cd3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsRefundLootIdNull`](#structFRHAPI__LootEntitlement_1a4cf294985cdee30a794858e71fc1a1ae)`() const` <a id="structFRHAPI__LootEntitlement_1a4cf294985cdee30a794858e71fc1a1ae"></a>

Checks whether RefundLootId_Optional is set to null.

#### `public inline int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a1574f11e2614f0cb77c07224bb0444ab)`()` <a id="structFRHAPI__LootEntitlement_1a1574f11e2614f0cb77c07224bb0444ab"></a>

Gets the value of ChargebackLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a27d9528930aa21e3da939a4740ebbb5e)`() const` <a id="structFRHAPI__LootEntitlement_1a27d9528930aa21e3da939a4740ebbb5e"></a>

Gets the value of ChargebackLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1af53992f9133be05d7398d5ac5454382d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1af53992f9133be05d7398d5ac5454382d"></a>

Gets the value of ChargebackLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a5333171229ac5e892f17d694498614b7)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a5333171229ac5e892f17d694498614b7"></a>

Fills OutValue with the value of ChargebackLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1af467f352b56ffb9dd274703e054a7326)`()` <a id="structFRHAPI__LootEntitlement_1af467f352b56ffb9dd274703e054a7326"></a>

Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a5ad03f22bcc4b3dfbf4262cc6e1c7c23)`() const` <a id="structFRHAPI__LootEntitlement_1a5ad03f22bcc4b3dfbf4262cc6e1c7c23"></a>

Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a2b64faa543dd5f4b272b4ce3977f1886)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a2b64faa543dd5f4b272b4ce3977f1886"></a>

Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true.

#### `public inline void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1ac81528dd24935bd845e1a55b43ab6078)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1ac81528dd24935bd845e1a55b43ab6078"></a>

Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearChargebackLootId`](#structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589)`()` <a id="structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589"></a>

Clears the value of ChargebackLootId_Optional and sets ChargebackLootId_IsSet to false.

#### `public inline bool `[`IsChargebackLootIdSet`](#structFRHAPI__LootEntitlement_1a2e12b5962cf569047d18970822963838)`() const` <a id="structFRHAPI__LootEntitlement_1a2e12b5962cf569047d18970822963838"></a>

Checks whether ChargebackLootId_Optional has been set.

#### `public inline bool `[`IsChargebackLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1a7fa2819951a44be101b5e3e5bbf5c2df)`() const` <a id="structFRHAPI__LootEntitlement_1a7fa2819951a44be101b5e3e5bbf5c2df"></a>

Returns true if ChargebackLootId_Optional is set and matches the default value.

#### `public inline void `[`SetChargebackLootIdToDefault`](#structFRHAPI__LootEntitlement_1aa7b189956e3e1c7387144f63bea3ca6e)`()` <a id="structFRHAPI__LootEntitlement_1aa7b189956e3e1c7387144f63bea3ca6e"></a>

Sets the value of ChargebackLootId_Optional to its default and also sets ChargebackLootId_IsSet to true.

#### `public inline void `[`SetChargebackLootIdToNull`](#structFRHAPI__LootEntitlement_1aadf016a08ebe787488d994781f62f601)`()` <a id="structFRHAPI__LootEntitlement_1aadf016a08ebe787488d994781f62f601"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsChargebackLootIdNull`](#structFRHAPI__LootEntitlement_1aa20aa1959136afd99c68a98529611bea)`() const` <a id="structFRHAPI__LootEntitlement_1aa20aa1959136afd99c68a98529611bea"></a>

Checks whether ChargebackLootId_Optional is set to null.

#### `public inline int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a873825aacd4f517d0926f6a2d35aba10)`()` <a id="structFRHAPI__LootEntitlement_1a873825aacd4f517d0926f6a2d35aba10"></a>

Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1ab11e4a69d75b84d7ef44eeb02315eae6)`() const` <a id="structFRHAPI__LootEntitlement_1ab11e4a69d75b84d7ef44eeb02315eae6"></a>

Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a2e9e0ad5acbcea9fc8c76c18c77cb0a7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1a2e9e0ad5acbcea9fc8c76c18c77cb0a7"></a>

Gets the value of ChargebackReversalLootId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a250e6b338fa8a6e22699458c60314074)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a250e6b338fa8a6e22699458c60314074"></a>

Fills OutValue with the value of ChargebackReversalLootId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a14b252269b299990f8d8663f17611d6b)`()` <a id="structFRHAPI__LootEntitlement_1a14b252269b299990f8d8663f17611d6b"></a>

Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1adcbb2628e37890b345f7534f684ee0b5)`() const` <a id="structFRHAPI__LootEntitlement_1adcbb2628e37890b345f7534f684ee0b5"></a>

Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a89d0c8c15b34e6da8760509d74a9e2f0)`(const int32 & NewValue)` <a id="structFRHAPI__LootEntitlement_1a89d0c8c15b34e6da8760509d74a9e2f0"></a>

Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true.

#### `public inline void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a3599bb72b2784514312a3f87ea599bbd)`(int32 && NewValue)` <a id="structFRHAPI__LootEntitlement_1a3599bb72b2784514312a3f87ea599bbd"></a>

Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true using move semantics.

#### `public inline void `[`ClearChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e)`()` <a id="structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e"></a>

Clears the value of ChargebackReversalLootId_Optional and sets ChargebackReversalLootId_IsSet to false.

#### `public inline bool `[`IsChargebackReversalLootIdSet`](#structFRHAPI__LootEntitlement_1af0921d58ce0a89ca283912e35c2fc080)`() const` <a id="structFRHAPI__LootEntitlement_1af0921d58ce0a89ca283912e35c2fc080"></a>

Checks whether ChargebackReversalLootId_Optional has been set.

#### `public inline bool `[`IsChargebackReversalLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1aa0ba1b30005e46a5d6dc1d970308b1a7)`() const` <a id="structFRHAPI__LootEntitlement_1aa0ba1b30005e46a5d6dc1d970308b1a7"></a>

Returns true if ChargebackReversalLootId_Optional is set and matches the default value.

#### `public inline void `[`SetChargebackReversalLootIdToDefault`](#structFRHAPI__LootEntitlement_1a742527a3389dffb53537bed7a00a6749)`()` <a id="structFRHAPI__LootEntitlement_1a742527a3389dffb53537bed7a00a6749"></a>

Sets the value of ChargebackReversalLootId_Optional to its default and also sets ChargebackReversalLootId_IsSet to true.

#### `public inline void `[`SetChargebackReversalLootIdToNull`](#structFRHAPI__LootEntitlement_1a2e082d64933651446750008d7f384425)`()` <a id="structFRHAPI__LootEntitlement_1a2e082d64933651446750008d7f384425"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsChargebackReversalLootIdNull`](#structFRHAPI__LootEntitlement_1a5e4824c938d23cb69a89f8e85d873f81)`() const` <a id="structFRHAPI__LootEntitlement_1a5e4824c938d23cb69a89f8e85d873f81"></a>

Checks whether ChargebackReversalLootId_Optional is set to null.

