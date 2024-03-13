# RHAPI_LootEntitlement <a id="group__RHAPI__LootEntitlement"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_EntitlementType `[`Type`](#structFRHAPI__LootEntitlement_1a5bb7423ffa834e3ed248ccffca0fe6dc) | The action taken on the platform when granting this SKU.
`public int32 `[`LootId`](#structFRHAPI__LootEntitlement_1a8adee57180f2b0fe870b387d0ea04946) | The Loot ID that will be granted to the player.
`public int32 `[`RefundLootId_Optional`](#structFRHAPI__LootEntitlement_1af248a552d6171680b5732f0bc5e31c5e) | The Loot ID that will be granted to the player when the SKU is refunded.
`public bool `[`RefundLootId_IsSet`](#structFRHAPI__LootEntitlement_1a54a7c2ef3b6e4b6e03a063b48def1b56) | true if RefundLootId_Optional has been set to a value
`public int32 `[`ChargebackLootId_Optional`](#structFRHAPI__LootEntitlement_1aea26770f325ead2b0064542fc6a77713) | The Loot ID that will be granted to the player when the SKU is charged back.
`public bool `[`ChargebackLootId_IsSet`](#structFRHAPI__LootEntitlement_1aeb16768d2e144723c352e400fad25702) | true if ChargebackLootId_Optional has been set to a value
`public int32 `[`ChargebackReversalLootId_Optional`](#structFRHAPI__LootEntitlement_1a6cc8452d940ee1c31939a72d6b6e4794) | The Loot ID that will be granted to the player when the SKU is charged back is reversed.
`public bool `[`ChargebackReversalLootId_IsSet`](#structFRHAPI__LootEntitlement_1a0ba4d6820454d2c4730abdbf6de5d6d8) | true if ChargebackReversalLootId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LootEntitlement_1af8d49cc2191ed47b84785bc7c5740294)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LootEntitlement_1abc9a3fe5a4eca7716ebc9e9765a0f8f1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a3273a989e504b5fb8285a3c4daaf27e7)`()` | Gets the value of Type.
`public inline const ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1aa87afaa4477efdc3a41837d1e24f50a6)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__LootEntitlement_1ad1c622ae79971a0dda502e51838e597c)`(ERHAPI_EntitlementType NewValue)` | Sets the value of Type.
`public inline int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a41a4c7e648dd972b3cd87d87825fa083)`()` | Gets the value of LootId.
`public inline const int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1ab4a9a7cba3c748c16714834d29f85b48)`() const` | Gets the value of LootId.
`public inline void `[`SetLootId`](#structFRHAPI__LootEntitlement_1a5c4c29c645ee103024e10b15e96045e0)`(int32 NewValue)` | Sets the value of LootId.
`public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1ae579a6fa258227322777f08030c8eb40)`() const` | Returns true if LootId matches the default value.
`public inline void `[`SetLootIdToDefault`](#structFRHAPI__LootEntitlement_1ac109819d196188782622887410d4d28e)`()` | Sets the value of LootId to its default
`public inline int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a9399f83b2c094088ca664d966f9fa44d)`()` | Gets the value of RefundLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a960c2ea5bb23c4b0e15c7cbaefe8813b)`() const` | Gets the value of RefundLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a7f3acdfe8f057dd24a8c7fe48e2c7827)`(const int32 & DefaultValue) const` | Gets the value of RefundLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a25e1304774b2f280bcd0eb04675f60f8)`(int32 & OutValue) const` | Fills OutValue with the value of RefundLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a697fb355a0f2fd6c9f98974a0ac8c9c7)`()` | Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1aea08907a3b45debf01993b949289cdd1)`() const` | Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1a5e630eb6de55791f7bc1e367ed6263b6)`(int32 NewValue)` | Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true.
`public inline void `[`ClearRefundLootId`](#structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4)`()` | Clears the value of RefundLootId_Optional and sets RefundLootId_IsSet to false.
`public inline bool `[`IsRefundLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1acfa22e319b5a5168758dae5ae3da3530)`() const` | Returns true if RefundLootId_Optional is set and matches the default value.
`public inline void `[`SetRefundLootIdToDefault`](#structFRHAPI__LootEntitlement_1a90c354f4a45f98ff889f2c7cf565b076)`()` | Sets the value of RefundLootId_Optional to its default and also sets RefundLootId_IsSet to true.
`public inline int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a12cd536274c5ed464c7d5f5cf9697707)`()` | Gets the value of ChargebackLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1ad366e4ce6fbbb28919ab2301cdeea397)`() const` | Gets the value of ChargebackLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1ab1fee38d5b645efd8473dbbc37750b4e)`(const int32 & DefaultValue) const` | Gets the value of ChargebackLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a5333171229ac5e892f17d694498614b7)`(int32 & OutValue) const` | Fills OutValue with the value of ChargebackLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a6013e6f81d5f0cecbb362b55653ec3ce)`()` | Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a929bd11adaa8aa10cf7d2c7ca77d3ba1)`() const` | Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a988e53a2abd2e6fe8850c8c725d88b47)`(int32 NewValue)` | Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true.
`public inline void `[`ClearChargebackLootId`](#structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589)`()` | Clears the value of ChargebackLootId_Optional and sets ChargebackLootId_IsSet to false.
`public inline bool `[`IsChargebackLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1a7fa2819951a44be101b5e3e5bbf5c2df)`() const` | Returns true if ChargebackLootId_Optional is set and matches the default value.
`public inline void `[`SetChargebackLootIdToDefault`](#structFRHAPI__LootEntitlement_1aa7b189956e3e1c7387144f63bea3ca6e)`()` | Sets the value of ChargebackLootId_Optional to its default and also sets ChargebackLootId_IsSet to true.
`public inline int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1aa77bed16be518c2099a1b86d00328d0a)`()` | Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a62606659f4bc4fca170fc9e02c8f10e6)`() const` | Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a33c1f2c5ceb4d051f4a1958948dd5dac)`(const int32 & DefaultValue) const` | Gets the value of ChargebackReversalLootId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a250e6b338fa8a6e22699458c60314074)`(int32 & OutValue) const` | Fills OutValue with the value of ChargebackReversalLootId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1aca3944f636b1bc6ab7b6311cab9e368e)`()` | Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a9b738eb83ffbba3acebbad9090823bb5)`() const` | Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1acc90b8e7b96362c7c509c58b1ac2f919)`(int32 NewValue)` | Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true.
`public inline void `[`ClearChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e)`()` | Clears the value of ChargebackReversalLootId_Optional and sets ChargebackReversalLootId_IsSet to false.
`public inline bool `[`IsChargebackReversalLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1aa0ba1b30005e46a5d6dc1d970308b1a7)`() const` | Returns true if ChargebackReversalLootId_Optional is set and matches the default value.
`public inline void `[`SetChargebackReversalLootIdToDefault`](#structFRHAPI__LootEntitlement_1a742527a3389dffb53537bed7a00a6749)`()` | Sets the value of ChargebackReversalLootId_Optional to its default and also sets ChargebackReversalLootId_IsSet to true.

#### Members

#### `public ERHAPI_EntitlementType `[`Type`](#structFRHAPI__LootEntitlement_1a5bb7423ffa834e3ed248ccffca0fe6dc) <a id="structFRHAPI__LootEntitlement_1a5bb7423ffa834e3ed248ccffca0fe6dc"></a>

The action taken on the platform when granting this SKU.

<br>
#### `public int32 `[`LootId`](#structFRHAPI__LootEntitlement_1a8adee57180f2b0fe870b387d0ea04946) <a id="structFRHAPI__LootEntitlement_1a8adee57180f2b0fe870b387d0ea04946"></a>

The Loot ID that will be granted to the player.

<br>
#### `public int32 `[`RefundLootId_Optional`](#structFRHAPI__LootEntitlement_1af248a552d6171680b5732f0bc5e31c5e) <a id="structFRHAPI__LootEntitlement_1af248a552d6171680b5732f0bc5e31c5e"></a>

The Loot ID that will be granted to the player when the SKU is refunded.

<br>
#### `public bool `[`RefundLootId_IsSet`](#structFRHAPI__LootEntitlement_1a54a7c2ef3b6e4b6e03a063b48def1b56) <a id="structFRHAPI__LootEntitlement_1a54a7c2ef3b6e4b6e03a063b48def1b56"></a>

true if RefundLootId_Optional has been set to a value

<br>
#### `public int32 `[`ChargebackLootId_Optional`](#structFRHAPI__LootEntitlement_1aea26770f325ead2b0064542fc6a77713) <a id="structFRHAPI__LootEntitlement_1aea26770f325ead2b0064542fc6a77713"></a>

The Loot ID that will be granted to the player when the SKU is charged back.

<br>
#### `public bool `[`ChargebackLootId_IsSet`](#structFRHAPI__LootEntitlement_1aeb16768d2e144723c352e400fad25702) <a id="structFRHAPI__LootEntitlement_1aeb16768d2e144723c352e400fad25702"></a>

true if ChargebackLootId_Optional has been set to a value

<br>
#### `public int32 `[`ChargebackReversalLootId_Optional`](#structFRHAPI__LootEntitlement_1a6cc8452d940ee1c31939a72d6b6e4794) <a id="structFRHAPI__LootEntitlement_1a6cc8452d940ee1c31939a72d6b6e4794"></a>

The Loot ID that will be granted to the player when the SKU is charged back is reversed.

<br>
#### `public bool `[`ChargebackReversalLootId_IsSet`](#structFRHAPI__LootEntitlement_1a0ba4d6820454d2c4730abdbf6de5d6d8) <a id="structFRHAPI__LootEntitlement_1a0ba4d6820454d2c4730abdbf6de5d6d8"></a>

true if ChargebackReversalLootId_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__LootEntitlement_1af8d49cc2191ed47b84785bc7c5740294)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LootEntitlement_1af8d49cc2191ed47b84785bc7c5740294"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__LootEntitlement_1abc9a3fe5a4eca7716ebc9e9765a0f8f1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LootEntitlement_1abc9a3fe5a4eca7716ebc9e9765a0f8f1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1a3273a989e504b5fb8285a3c4daaf27e7)`()` <a id="structFRHAPI__LootEntitlement_1a3273a989e504b5fb8285a3c4daaf27e7"></a>

Gets the value of Type.

<br>
#### `public inline const ERHAPI_EntitlementType & `[`GetType`](#structFRHAPI__LootEntitlement_1aa87afaa4477efdc3a41837d1e24f50a6)`() const` <a id="structFRHAPI__LootEntitlement_1aa87afaa4477efdc3a41837d1e24f50a6"></a>

Gets the value of Type.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__LootEntitlement_1ad1c622ae79971a0dda502e51838e597c)`(ERHAPI_EntitlementType NewValue)` <a id="structFRHAPI__LootEntitlement_1ad1c622ae79971a0dda502e51838e597c"></a>

Sets the value of Type.

<br>
#### `public inline int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1a41a4c7e648dd972b3cd87d87825fa083)`()` <a id="structFRHAPI__LootEntitlement_1a41a4c7e648dd972b3cd87d87825fa083"></a>

Gets the value of LootId.

<br>
#### `public inline const int32 & `[`GetLootId`](#structFRHAPI__LootEntitlement_1ab4a9a7cba3c748c16714834d29f85b48)`() const` <a id="structFRHAPI__LootEntitlement_1ab4a9a7cba3c748c16714834d29f85b48"></a>

Gets the value of LootId.

<br>
#### `public inline void `[`SetLootId`](#structFRHAPI__LootEntitlement_1a5c4c29c645ee103024e10b15e96045e0)`(int32 NewValue)` <a id="structFRHAPI__LootEntitlement_1a5c4c29c645ee103024e10b15e96045e0"></a>

Sets the value of LootId.

<br>
#### `public inline bool `[`IsLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1ae579a6fa258227322777f08030c8eb40)`() const` <a id="structFRHAPI__LootEntitlement_1ae579a6fa258227322777f08030c8eb40"></a>

Returns true if LootId matches the default value.

<br>
#### `public inline void `[`SetLootIdToDefault`](#structFRHAPI__LootEntitlement_1ac109819d196188782622887410d4d28e)`()` <a id="structFRHAPI__LootEntitlement_1ac109819d196188782622887410d4d28e"></a>

Sets the value of LootId to its default

<br>
#### `public inline int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a9399f83b2c094088ca664d966f9fa44d)`()` <a id="structFRHAPI__LootEntitlement_1a9399f83b2c094088ca664d966f9fa44d"></a>

Gets the value of RefundLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a960c2ea5bb23c4b0e15c7cbaefe8813b)`() const` <a id="structFRHAPI__LootEntitlement_1a960c2ea5bb23c4b0e15c7cbaefe8813b"></a>

Gets the value of RefundLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a7f3acdfe8f057dd24a8c7fe48e2c7827)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1a7f3acdfe8f057dd24a8c7fe48e2c7827"></a>

Gets the value of RefundLootId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRefundLootId`](#structFRHAPI__LootEntitlement_1a25e1304774b2f280bcd0eb04675f60f8)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a25e1304774b2f280bcd0eb04675f60f8"></a>

Fills OutValue with the value of RefundLootId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1a697fb355a0f2fd6c9f98974a0ac8c9c7)`()` <a id="structFRHAPI__LootEntitlement_1a697fb355a0f2fd6c9f98974a0ac8c9c7"></a>

Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetRefundLootIdOrNull`](#structFRHAPI__LootEntitlement_1aea08907a3b45debf01993b949289cdd1)`() const` <a id="structFRHAPI__LootEntitlement_1aea08907a3b45debf01993b949289cdd1"></a>

Returns a pointer to RefundLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRefundLootId`](#structFRHAPI__LootEntitlement_1a5e630eb6de55791f7bc1e367ed6263b6)`(int32 NewValue)` <a id="structFRHAPI__LootEntitlement_1a5e630eb6de55791f7bc1e367ed6263b6"></a>

Sets the value of RefundLootId_Optional and also sets RefundLootId_IsSet to true.

<br>
#### `public inline void `[`ClearRefundLootId`](#structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4)`()` <a id="structFRHAPI__LootEntitlement_1ad077f707cd6cd27b7d2c17dbf6173ed4"></a>

Clears the value of RefundLootId_Optional and sets RefundLootId_IsSet to false.

<br>
#### `public inline bool `[`IsRefundLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1acfa22e319b5a5168758dae5ae3da3530)`() const` <a id="structFRHAPI__LootEntitlement_1acfa22e319b5a5168758dae5ae3da3530"></a>

Returns true if RefundLootId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetRefundLootIdToDefault`](#structFRHAPI__LootEntitlement_1a90c354f4a45f98ff889f2c7cf565b076)`()` <a id="structFRHAPI__LootEntitlement_1a90c354f4a45f98ff889f2c7cf565b076"></a>

Sets the value of RefundLootId_Optional to its default and also sets RefundLootId_IsSet to true.

<br>
#### `public inline int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a12cd536274c5ed464c7d5f5cf9697707)`()` <a id="structFRHAPI__LootEntitlement_1a12cd536274c5ed464c7d5f5cf9697707"></a>

Gets the value of ChargebackLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1ad366e4ce6fbbb28919ab2301cdeea397)`() const` <a id="structFRHAPI__LootEntitlement_1ad366e4ce6fbbb28919ab2301cdeea397"></a>

Gets the value of ChargebackLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1ab1fee38d5b645efd8473dbbc37750b4e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1ab1fee38d5b645efd8473dbbc37750b4e"></a>

Gets the value of ChargebackLootId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetChargebackLootId`](#structFRHAPI__LootEntitlement_1a5333171229ac5e892f17d694498614b7)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a5333171229ac5e892f17d694498614b7"></a>

Fills OutValue with the value of ChargebackLootId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a6013e6f81d5f0cecbb362b55653ec3ce)`()` <a id="structFRHAPI__LootEntitlement_1a6013e6f81d5f0cecbb362b55653ec3ce"></a>

Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetChargebackLootIdOrNull`](#structFRHAPI__LootEntitlement_1a929bd11adaa8aa10cf7d2c7ca77d3ba1)`() const` <a id="structFRHAPI__LootEntitlement_1a929bd11adaa8aa10cf7d2c7ca77d3ba1"></a>

Returns a pointer to ChargebackLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetChargebackLootId`](#structFRHAPI__LootEntitlement_1a988e53a2abd2e6fe8850c8c725d88b47)`(int32 NewValue)` <a id="structFRHAPI__LootEntitlement_1a988e53a2abd2e6fe8850c8c725d88b47"></a>

Sets the value of ChargebackLootId_Optional and also sets ChargebackLootId_IsSet to true.

<br>
#### `public inline void `[`ClearChargebackLootId`](#structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589)`()` <a id="structFRHAPI__LootEntitlement_1a25a0c1795e1029da2535636175661589"></a>

Clears the value of ChargebackLootId_Optional and sets ChargebackLootId_IsSet to false.

<br>
#### `public inline bool `[`IsChargebackLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1a7fa2819951a44be101b5e3e5bbf5c2df)`() const` <a id="structFRHAPI__LootEntitlement_1a7fa2819951a44be101b5e3e5bbf5c2df"></a>

Returns true if ChargebackLootId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetChargebackLootIdToDefault`](#structFRHAPI__LootEntitlement_1aa7b189956e3e1c7387144f63bea3ca6e)`()` <a id="structFRHAPI__LootEntitlement_1aa7b189956e3e1c7387144f63bea3ca6e"></a>

Sets the value of ChargebackLootId_Optional to its default and also sets ChargebackLootId_IsSet to true.

<br>
#### `public inline int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1aa77bed16be518c2099a1b86d00328d0a)`()` <a id="structFRHAPI__LootEntitlement_1aa77bed16be518c2099a1b86d00328d0a"></a>

Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a62606659f4bc4fca170fc9e02c8f10e6)`() const` <a id="structFRHAPI__LootEntitlement_1a62606659f4bc4fca170fc9e02c8f10e6"></a>

Gets the value of ChargebackReversalLootId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a33c1f2c5ceb4d051f4a1958948dd5dac)`(const int32 & DefaultValue) const` <a id="structFRHAPI__LootEntitlement_1a33c1f2c5ceb4d051f4a1958948dd5dac"></a>

Gets the value of ChargebackReversalLootId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1a250e6b338fa8a6e22699458c60314074)`(int32 & OutValue) const` <a id="structFRHAPI__LootEntitlement_1a250e6b338fa8a6e22699458c60314074"></a>

Fills OutValue with the value of ChargebackReversalLootId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1aca3944f636b1bc6ab7b6311cab9e368e)`()` <a id="structFRHAPI__LootEntitlement_1aca3944f636b1bc6ab7b6311cab9e368e"></a>

Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetChargebackReversalLootIdOrNull`](#structFRHAPI__LootEntitlement_1a9b738eb83ffbba3acebbad9090823bb5)`() const` <a id="structFRHAPI__LootEntitlement_1a9b738eb83ffbba3acebbad9090823bb5"></a>

Returns a pointer to ChargebackReversalLootId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1acc90b8e7b96362c7c509c58b1ac2f919)`(int32 NewValue)` <a id="structFRHAPI__LootEntitlement_1acc90b8e7b96362c7c509c58b1ac2f919"></a>

Sets the value of ChargebackReversalLootId_Optional and also sets ChargebackReversalLootId_IsSet to true.

<br>
#### `public inline void `[`ClearChargebackReversalLootId`](#structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e)`()` <a id="structFRHAPI__LootEntitlement_1af984b3ff858dcac14e6d4f6fb79ad74e"></a>

Clears the value of ChargebackReversalLootId_Optional and sets ChargebackReversalLootId_IsSet to false.

<br>
#### `public inline bool `[`IsChargebackReversalLootIdDefaultValue`](#structFRHAPI__LootEntitlement_1aa0ba1b30005e46a5d6dc1d970308b1a7)`() const` <a id="structFRHAPI__LootEntitlement_1aa0ba1b30005e46a5d6dc1d970308b1a7"></a>

Returns true if ChargebackReversalLootId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetChargebackReversalLootIdToDefault`](#structFRHAPI__LootEntitlement_1a742527a3389dffb53537bed7a00a6749)`()` <a id="structFRHAPI__LootEntitlement_1a742527a3389dffb53537bed7a00a6749"></a>

Sets the value of ChargebackReversalLootId_Optional to its default and also sets ChargebackReversalLootId_IsSet to true.

<br>