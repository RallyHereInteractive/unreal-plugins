---
title: RHAPI_UpdateInventoryRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateInventoryRequest`](#structFRHAPI__UpdateInventoryRequest) | Request to Update an existing Inventory entry. If the Inventory entry does not exist, then the request will fail.

## struct `FRHAPI_UpdateInventoryRequest` <a id="structFRHAPI__UpdateInventoryRequest"></a>

```
struct FRHAPI_UpdateInventoryRequest
  : public FRHAPI_Model
```

Request to Update an existing Inventory entry. If the Inventory entry does not exist, then the request will fail.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054) | 
`public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a7065ca93798dd9119fafe090fc0c1635) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144) | 
`public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb) | true if Bucket_Optional has been set to a value
`public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230) | Count for this Inventory Operation.
`public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3) | true if Count_Optional has been set to a value
`public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4) | true if Expires_Optional has been set to a value
`public bool `[`Expires_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a8bdb443171e1df08c90bd6f87f9fabee) | true if Expires_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a6030499108156b55e608fd7f2c8e5465) | true if CustomData_Optional has been explicitly set to null
`public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d) | 
`public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6) | true if ItemId_Optional has been set to a value
`public bool `[`ItemId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a4cbd050ac90f8813d291162adcce1ef4) | true if ItemId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequest_1a81c2178a7e923e2ebc26343b035e9db0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequest_1a7d40bda9fb664373b0130e0ebc62b3ad)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1acd35c3a4c999058e49c34f5a9f591b0a)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1ac9bb4c78b1514a112d760efb47b0d74b)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1adb818b1ee87880d7acc4e7eda4c1f3a8)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1ac5597d81276e2204c30830dabb5cbf4b)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1aaecfe7545da605a9cbd35d7f97339901)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1aaab05872ea3f90013982f54b24a9906d)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1a367142e95b6b49113cdc79b4c8ff0ee4)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__UpdateInventoryRequest_1ae25701fe93b0b6be353b62ff149f622b)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1aa1b88a458aa576529a7fec25fbd28280)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a68817430f0c7522cf39d7f8d1c802d7f)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a079f72fe26b6e18e62cd8f0aa54c9df0)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1adafbcfcaae4d197cb73be9484f179c12)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a123f912baaea48c30de6dbcef89efa61)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ad704a0d5b069ca9c3ad5d2818669bd9c)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ab3ea7e940d6c53bee95b3ff93787f71d)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__UpdateInventoryRequest_1a8e8fb183d136f77562aee0c9612dfb5b)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__UpdateInventoryRequest_1acae923a73509b236c78dc74781b133c1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__UpdateInventoryRequest_1a290a1694156948bfbbac956b1efd77f6)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a53f1442aa0d88293cfb5e2897c6ddffe)`()` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a44f0ab51b6a3a9c4f55e451c062fd11a)`() const` | Gets the value of Bucket_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a6a910438af48806c3bcfb87a25cd6c34)`(const ERHAPI_InventoryBucket & DefaultValue) const` | Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d)`(ERHAPI_InventoryBucket & OutValue) const` | Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a5f8f408514797b04278c6286db63fda9)`()` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a7fd2df1ff569fbfec75d8e8bf2f59ba9)`() const` | Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a9d93802adc2b6481a25ad10ac5ed1683)`(const ERHAPI_InventoryBucket & NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.
`public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a2ed2ec59792e18bdff4aa8583c0945fd)`(ERHAPI_InventoryBucket && NewValue)` | Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.
`public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)`()` | Clears the value of Bucket_Optional and sets Bucket_IsSet to false.
`public inline bool `[`IsBucketSet`](#structFRHAPI__UpdateInventoryRequest_1a85e82b8cb261dc3629fcac23bff8fe74)`() const` | Checks whether Bucket_Optional has been set.
`public inline int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1ac47356f702bb1cfc93d78c51a81ee7b1)`()` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1abbc4628e1f2d47b52e8c73f8eb6ed5a6)`() const` | Gets the value of Count_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a4e0e1414efc6f525aa893365a29641d1)`(const int32 & DefaultValue) const` | Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb)`(int32 & OutValue) const` | Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a71bb2b2d9e1885ae98b644a7ee3ff52b)`()` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a853353edd5c57b65c46c13b1a17f0e21)`() const` | Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a245e53ba64162c8ef3232f0adff14f47)`(const int32 & NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true.
`public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a0af9199c83578caf84d01a5e2d4b79cf)`(int32 && NewValue)` | Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.
`public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)`()` | Clears the value of Count_Optional and sets Count_IsSet to false.
`public inline bool `[`IsCountSet`](#structFRHAPI__UpdateInventoryRequest_1aba6ca0eeff52a78d99fdbe61b8029d0b)`() const` | Checks whether Count_Optional has been set.
`public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a)`() const` | Returns true if Count_Optional is set and matches the default value.
`public inline void `[`SetCountToDefault`](#structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352)`()` | Sets the value of Count_Optional to its default and also sets Count_IsSet to true.
`public inline FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1abc9944fd8c6f73f330809f46de42a61c)`()` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a8eb71c1957ebfc1fc64e7c7474f3857c)`() const` | Gets the value of Expires_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a96a23cbbcf7ab78c141c19e51558b0a4)`(const FDateTime & DefaultValue) const` | Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a3b70fbe3c83eef13b4756593ce1e792e)`()` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a662011f45a3ddd195df463b3c48941db)`() const` | Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1aa8b064f0e6fc014dec67e834069889b8)`(const FDateTime & NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true.
`public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1ad7cdc08de12a438ef83161e443542a27)`(FDateTime && NewValue)` | Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.
`public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)`()` | Clears the value of Expires_Optional and sets Expires_IsSet to false.
`public inline bool `[`IsExpiresSet`](#structFRHAPI__UpdateInventoryRequest_1af0157d7c63dec55b9c646024b1294a20)`() const` | Checks whether Expires_Optional has been set.
`public inline void `[`SetExpiresToNull`](#structFRHAPI__UpdateInventoryRequest_1a799edc6df48219ad163de08bf665eda8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsExpiresNull`](#structFRHAPI__UpdateInventoryRequest_1ac7e5cb4cc65f0f0ff973484526c20f7a)`() const` | Checks whether Expires_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a5c4d17e228f069d8ca72f7d5c445b989)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a91b7a09cf56b1f8f3b528d758f361655)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ac271c035c9b0a6c764e40d338eea77f6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a10f5ad7261152e58a70aa5d9d560c5e2)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a352c01531da98b54eb0400b998f11d6b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a68a8cb347a5aba6a97e70cd6200fb875)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a9d873938289c332106696f9da034ee95)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__UpdateInventoryRequest_1ac47ca55495229280188eaeff5fac2085)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__UpdateInventoryRequest_1aa5e869a1507d2d2befa6f8d7c8e0b0b3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__UpdateInventoryRequest_1a87164ca3b8c611a210d6107f12049a5b)`() const` | Checks whether CustomData_Optional is set to null.
`public inline int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1da86450023c2460ec397cd82ae38b71)`()` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a584f83ef12699468094ac6cc46bca487)`() const` | Gets the value of ItemId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a088f023c310c5ccd1c983fb8a060f9df)`(const int32 & DefaultValue) const` | Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046)`(int32 & OutValue) const` | Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1aca1e0c000bf7a052a22b4bca06f5b887)`()` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a8b0682209c27b2177173554a65bdc86b)`() const` | Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1b4b114c23a2a7471bb7967ad1f7dc62)`(const int32 & NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.
`public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1acfd0d6771ac92b6ebecd6f54d735d8a3)`(int32 && NewValue)` | Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.
`public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)`()` | Clears the value of ItemId_Optional and sets ItemId_IsSet to false.
`public inline bool `[`IsItemIdSet`](#structFRHAPI__UpdateInventoryRequest_1aee6ea8a282d74f58c74223ac397891a0)`() const` | Checks whether ItemId_Optional has been set.
`public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f)`() const` | Returns true if ItemId_Optional is set and matches the default value.
`public inline void `[`SetItemIdToDefault`](#structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d)`()` | Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.
`public inline void `[`SetItemIdToNull`](#structFRHAPI__UpdateInventoryRequest_1a64e76e0eb237dbae6b7775a62c1ef051)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsItemIdNull`](#structFRHAPI__UpdateInventoryRequest_1a9f772223ef872b47b4bb90e786f6b773)`() const` | Checks whether ItemId_Optional is set to null.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054) <a id="structFRHAPI__UpdateInventoryRequest_1a572870eb8d72f3f11e19d10a1b715054"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd) <a id="structFRHAPI__UpdateInventoryRequest_1a49b6c64de83ac40dbc5413b8baae81fd"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48) <a id="structFRHAPI__UpdateInventoryRequest_1a50bdf580faea52f516462a76bedcfb48"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f) <a id="structFRHAPI__UpdateInventoryRequest_1a9f4d05f5fac79be2b6531db04add170f"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a7065ca93798dd9119fafe090fc0c1635) <a id="structFRHAPI__UpdateInventoryRequest_1a7065ca93798dd9119fafe090fc0c1635"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_InventoryBucket `[`Bucket_Optional`](#structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144) <a id="structFRHAPI__UpdateInventoryRequest_1ad7084cc1cf879f9ab7afa14f246f5144"></a>

#### `public bool `[`Bucket_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb) <a id="structFRHAPI__UpdateInventoryRequest_1a768c1a8f8b4afc8d1d900d6848bd6dbb"></a>

true if Bucket_Optional has been set to a value

#### `public int32 `[`Count_Optional`](#structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230) <a id="structFRHAPI__UpdateInventoryRequest_1a84bd93733d280cf1f14ca521646be230"></a>

Count for this Inventory Operation.

#### `public bool `[`Count_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3) <a id="structFRHAPI__UpdateInventoryRequest_1a33bc89b54bcb2b794cd8b53b0b9f6bf3"></a>

true if Count_Optional has been set to a value

#### `public FDateTime `[`Expires_Optional`](#structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924) <a id="structFRHAPI__UpdateInventoryRequest_1af3c92bce4bb168b350c52ece0d1f1924"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expires_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4) <a id="structFRHAPI__UpdateInventoryRequest_1a5f7acd9fcd7bbe61d73fdccbf2c15cd4"></a>

true if Expires_Optional has been set to a value

#### `public bool `[`Expires_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a8bdb443171e1df08c90bd6f87f9fabee) <a id="structFRHAPI__UpdateInventoryRequest_1a8bdb443171e1df08c90bd6f87f9fabee"></a>

true if Expires_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd) <a id="structFRHAPI__UpdateInventoryRequest_1aaedbb86b7b311b43abadfdb5c68241cd"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68) <a id="structFRHAPI__UpdateInventoryRequest_1a25fc95aff0ab9731e31bc2c2048eef68"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a6030499108156b55e608fd7f2c8e5465) <a id="structFRHAPI__UpdateInventoryRequest_1a6030499108156b55e608fd7f2c8e5465"></a>

true if CustomData_Optional has been explicitly set to null

#### `public int32 `[`ItemId_Optional`](#structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d) <a id="structFRHAPI__UpdateInventoryRequest_1a818c5214deb7bb7f614db54bd3e9e47d"></a>

#### `public bool `[`ItemId_IsSet`](#structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6) <a id="structFRHAPI__UpdateInventoryRequest_1a80ed649b2b03c882285c73cce3aa94c6"></a>

true if ItemId_Optional has been set to a value

#### `public bool `[`ItemId_IsNull`](#structFRHAPI__UpdateInventoryRequest_1a4cbd050ac90f8813d291162adcce1ef4) <a id="structFRHAPI__UpdateInventoryRequest_1a4cbd050ac90f8813d291162adcce1ef4"></a>

true if ItemId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequest_1a81c2178a7e923e2ebc26343b035e9db0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a81c2178a7e923e2ebc26343b035e9db0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequest_1a7d40bda9fb664373b0130e0ebc62b3ad)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UpdateInventoryRequest_1a7d40bda9fb664373b0130e0ebc62b3ad"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1acd35c3a4c999058e49c34f5a9f591b0a)`()` <a id="structFRHAPI__UpdateInventoryRequest_1acd35c3a4c999058e49c34f5a9f591b0a"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1ac9bb4c78b1514a112d760efb47b0d74b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ac9bb4c78b1514a112d760efb47b0d74b"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1adb818b1ee87880d7acc4e7eda4c1f3a8)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1adb818b1ee87880d7acc4e7eda4c1f3a8"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a9ab944d63536a517abffe9cf0283c2f9"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1ac5597d81276e2204c30830dabb5cbf4b)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ac5597d81276e2204c30830dabb5cbf4b"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequest_1aaecfe7545da605a9cbd35d7f97339901)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aaecfe7545da605a9cbd35d7f97339901"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1aaab05872ea3f90013982f54b24a9906d)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aaab05872ea3f90013982f54b24a9906d"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequest_1a367142e95b6b49113cdc79b4c8ff0ee4)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a367142e95b6b49113cdc79b4c8ff0ee4"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae21fc186dd7da6d10f132d1058daf0b2"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__UpdateInventoryRequest_1ae25701fe93b0b6be353b62ff149f622b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ae25701fe93b0b6be353b62ff149f622b"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1aa1b88a458aa576529a7fec25fbd28280)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aa1b88a458aa576529a7fec25fbd28280"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a68817430f0c7522cf39d7f8d1c802d7f)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a68817430f0c7522cf39d7f8d1c802d7f"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a079f72fe26b6e18e62cd8f0aa54c9df0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a079f72fe26b6e18e62cd8f0aa54c9df0"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2)`(FGuid & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1ae5398b9e64a90a80fd6177d9d34768d2"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1adafbcfcaae4d197cb73be9484f179c12)`()` <a id="structFRHAPI__UpdateInventoryRequest_1adafbcfcaae4d197cb73be9484f179c12"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a123f912baaea48c30de6dbcef89efa61)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a123f912baaea48c30de6dbcef89efa61"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ad704a0d5b069ca9c3ad5d2818669bd9c)`(const FGuid & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ad704a0d5b069ca9c3ad5d2818669bd9c"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1ab3ea7e940d6c53bee95b3ff93787f71d)`(FGuid && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ab3ea7e940d6c53bee95b3ff93787f71d"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a52322b28cb9d71dd236cfb0f5a5d0110"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__UpdateInventoryRequest_1a8e8fb183d136f77562aee0c9612dfb5b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a8e8fb183d136f77562aee0c9612dfb5b"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__UpdateInventoryRequest_1acae923a73509b236c78dc74781b133c1)`()` <a id="structFRHAPI__UpdateInventoryRequest_1acae923a73509b236c78dc74781b133c1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__UpdateInventoryRequest_1a290a1694156948bfbbac956b1efd77f6)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a290a1694156948bfbbac956b1efd77f6"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a53f1442aa0d88293cfb5e2897c6ddffe)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a53f1442aa0d88293cfb5e2897c6ddffe"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a44f0ab51b6a3a9c4f55e451c062fd11a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a44f0ab51b6a3a9c4f55e451c062fd11a"></a>

Gets the value of Bucket_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryBucket & `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a6a910438af48806c3bcfb87a25cd6c34)`(const ERHAPI_InventoryBucket & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a6a910438af48806c3bcfb87a25cd6c34"></a>

Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetBucket`](#structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d)`(ERHAPI_InventoryBucket & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a15e3816b7e44c9c85d714b499b201a2d"></a>

Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a5f8f408514797b04278c6286db63fda9)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a5f8f408514797b04278c6286db63fda9"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryBucket * `[`GetBucketOrNull`](#structFRHAPI__UpdateInventoryRequest_1a7fd2df1ff569fbfec75d8e8bf2f59ba9)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a7fd2df1ff569fbfec75d8e8bf2f59ba9"></a>

Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a9d93802adc2b6481a25ad10ac5ed1683)`(const ERHAPI_InventoryBucket & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a9d93802adc2b6481a25ad10ac5ed1683"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true.

#### `public inline void `[`SetBucket`](#structFRHAPI__UpdateInventoryRequest_1a2ed2ec59792e18bdff4aa8583c0945fd)`(ERHAPI_InventoryBucket && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a2ed2ec59792e18bdff4aa8583c0945fd"></a>

Sets the value of Bucket_Optional and also sets Bucket_IsSet to true using move semantics.

#### `public inline void `[`ClearBucket`](#structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ae6b64c7a747a2a36ccda81290f93c35f"></a>

Clears the value of Bucket_Optional and sets Bucket_IsSet to false.

#### `public inline bool `[`IsBucketSet`](#structFRHAPI__UpdateInventoryRequest_1a85e82b8cb261dc3629fcac23bff8fe74)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a85e82b8cb261dc3629fcac23bff8fe74"></a>

Checks whether Bucket_Optional has been set.

#### `public inline int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1ac47356f702bb1cfc93d78c51a81ee7b1)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ac47356f702bb1cfc93d78c51a81ee7b1"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1abbc4628e1f2d47b52e8c73f8eb6ed5a6)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1abbc4628e1f2d47b52e8c73f8eb6ed5a6"></a>

Gets the value of Count_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a4e0e1414efc6f525aa893365a29641d1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a4e0e1414efc6f525aa893365a29641d1"></a>

Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCount`](#structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a038ab2b14746a20a0c443059c25a5acb"></a>

Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a71bb2b2d9e1885ae98b644a7ee3ff52b)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a71bb2b2d9e1885ae98b644a7ee3ff52b"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCountOrNull`](#structFRHAPI__UpdateInventoryRequest_1a853353edd5c57b65c46c13b1a17f0e21)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a853353edd5c57b65c46c13b1a17f0e21"></a>

Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a245e53ba64162c8ef3232f0adff14f47)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a245e53ba64162c8ef3232f0adff14f47"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true.

#### `public inline void `[`SetCount`](#structFRHAPI__UpdateInventoryRequest_1a0af9199c83578caf84d01a5e2d4b79cf)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a0af9199c83578caf84d01a5e2d4b79cf"></a>

Sets the value of Count_Optional and also sets Count_IsSet to true using move semantics.

#### `public inline void `[`ClearCount`](#structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512)`()` <a id="structFRHAPI__UpdateInventoryRequest_1abc478f61cff8135826588a9c4a7bd512"></a>

Clears the value of Count_Optional and sets Count_IsSet to false.

#### `public inline bool `[`IsCountSet`](#structFRHAPI__UpdateInventoryRequest_1aba6ca0eeff52a78d99fdbe61b8029d0b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aba6ca0eeff52a78d99fdbe61b8029d0b"></a>

Checks whether Count_Optional has been set.

#### `public inline bool `[`IsCountDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aab5e6a51cdd54d2b66d2b48765421b8a"></a>

Returns true if Count_Optional is set and matches the default value.

#### `public inline void `[`SetCountToDefault`](#structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aa0e45b196edcd66daa9e790ea9052352"></a>

Sets the value of Count_Optional to its default and also sets Count_IsSet to true.

#### `public inline FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1abc9944fd8c6f73f330809f46de42a61c)`()` <a id="structFRHAPI__UpdateInventoryRequest_1abc9944fd8c6f73f330809f46de42a61c"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a8eb71c1957ebfc1fc64e7c7474f3857c)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a8eb71c1957ebfc1fc64e7c7474f3857c"></a>

Gets the value of Expires_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a96a23cbbcf7ab78c141c19e51558b0a4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a96a23cbbcf7ab78c141c19e51558b0a4"></a>

Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpires`](#structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774)`(FDateTime & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a937b4f983a15093712d24f60ec87b774"></a>

Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a3b70fbe3c83eef13b4756593ce1e792e)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a3b70fbe3c83eef13b4756593ce1e792e"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpiresOrNull`](#structFRHAPI__UpdateInventoryRequest_1a662011f45a3ddd195df463b3c48941db)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a662011f45a3ddd195df463b3c48941db"></a>

Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1aa8b064f0e6fc014dec67e834069889b8)`(const FDateTime & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1aa8b064f0e6fc014dec67e834069889b8"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true.

#### `public inline void `[`SetExpires`](#structFRHAPI__UpdateInventoryRequest_1ad7cdc08de12a438ef83161e443542a27)`(FDateTime && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1ad7cdc08de12a438ef83161e443542a27"></a>

Sets the value of Expires_Optional and also sets Expires_IsSet to true using move semantics.

#### `public inline void `[`ClearExpires`](#structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a2c377a3ce655cd29ac5bdc1f9f9bbf6a"></a>

Clears the value of Expires_Optional and sets Expires_IsSet to false.

#### `public inline bool `[`IsExpiresSet`](#structFRHAPI__UpdateInventoryRequest_1af0157d7c63dec55b9c646024b1294a20)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1af0157d7c63dec55b9c646024b1294a20"></a>

Checks whether Expires_Optional has been set.

#### `public inline void `[`SetExpiresToNull`](#structFRHAPI__UpdateInventoryRequest_1a799edc6df48219ad163de08bf665eda8)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a799edc6df48219ad163de08bf665eda8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsExpiresNull`](#structFRHAPI__UpdateInventoryRequest_1ac7e5cb4cc65f0f0ff973484526c20f7a)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ac7e5cb4cc65f0f0ff973484526c20f7a"></a>

Checks whether Expires_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a5c4d17e228f069d8ca72f7d5c445b989)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a5c4d17e228f069d8ca72f7d5c445b989"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a91b7a09cf56b1f8f3b528d758f361655)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a91b7a09cf56b1f8f3b528d758f361655"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1ac271c035c9b0a6c764e40d338eea77f6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1ac271c035c9b0a6c764e40d338eea77f6"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a2210a7ccc9715d9dd2384210932edf1a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a10f5ad7261152e58a70aa5d9d560c5e2)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a10f5ad7261152e58a70aa5d9d560c5e2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__UpdateInventoryRequest_1a352c01531da98b54eb0400b998f11d6b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a352c01531da98b54eb0400b998f11d6b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a68a8cb347a5aba6a97e70cd6200fb875)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a68a8cb347a5aba6a97e70cd6200fb875"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__UpdateInventoryRequest_1a9d873938289c332106696f9da034ee95)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a9d873938289c332106696f9da034ee95"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ad439f11cd2027fdd8b1c533d1ffb0cfb"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__UpdateInventoryRequest_1ac47ca55495229280188eaeff5fac2085)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1ac47ca55495229280188eaeff5fac2085"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__UpdateInventoryRequest_1aa5e869a1507d2d2befa6f8d7c8e0b0b3)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aa5e869a1507d2d2befa6f8d7c8e0b0b3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__UpdateInventoryRequest_1a87164ca3b8c611a210d6107f12049a5b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a87164ca3b8c611a210d6107f12049a5b"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1da86450023c2460ec397cd82ae38b71)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a1da86450023c2460ec397cd82ae38b71"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a584f83ef12699468094ac6cc46bca487)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a584f83ef12699468094ac6cc46bca487"></a>

Gets the value of ItemId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a088f023c310c5ccd1c983fb8a060f9df)`(const int32 & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a088f023c310c5ccd1c983fb8a060f9df"></a>

Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItemId`](#structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046)`(int32 & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequest_1a76b858794e9456d48463b82b7dd0e046"></a>

Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1aca1e0c000bf7a052a22b4bca06f5b887)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aca1e0c000bf7a052a22b4bca06f5b887"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetItemIdOrNull`](#structFRHAPI__UpdateInventoryRequest_1a8b0682209c27b2177173554a65bdc86b)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a8b0682209c27b2177173554a65bdc86b"></a>

Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1a1b4b114c23a2a7471bb7967ad1f7dc62)`(const int32 & NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1a1b4b114c23a2a7471bb7967ad1f7dc62"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemId`](#structFRHAPI__UpdateInventoryRequest_1acfd0d6771ac92b6ebecd6f54d735d8a3)`(int32 && NewValue)` <a id="structFRHAPI__UpdateInventoryRequest_1acfd0d6771ac92b6ebecd6f54d735d8a3"></a>

Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics.

#### `public inline void `[`ClearItemId`](#structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001)`()` <a id="structFRHAPI__UpdateInventoryRequest_1aec5ba46c40f111dce16dbbb057251001"></a>

Clears the value of ItemId_Optional and sets ItemId_IsSet to false.

#### `public inline bool `[`IsItemIdSet`](#structFRHAPI__UpdateInventoryRequest_1aee6ea8a282d74f58c74223ac397891a0)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1aee6ea8a282d74f58c74223ac397891a0"></a>

Checks whether ItemId_Optional has been set.

#### `public inline bool `[`IsItemIdDefaultValue`](#structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a3d1b3d8f181533b01ecb89b627949b5f"></a>

Returns true if ItemId_Optional is set and matches the default value.

#### `public inline void `[`SetItemIdToDefault`](#structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d)`()` <a id="structFRHAPI__UpdateInventoryRequest_1ac994fb467690e1e6b6f00bf32ccd390d"></a>

Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true.

#### `public inline void `[`SetItemIdToNull`](#structFRHAPI__UpdateInventoryRequest_1a64e76e0eb237dbae6b7775a62c1ef051)`()` <a id="structFRHAPI__UpdateInventoryRequest_1a64e76e0eb237dbae6b7775a62c1ef051"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsItemIdNull`](#structFRHAPI__UpdateInventoryRequest_1a9f772223ef872b47b4bb90e786f6b773)`() const` <a id="structFRHAPI__UpdateInventoryRequest_1a9f772223ef872b47b4bb90e786f6b773"></a>

Checks whether ItemId_Optional is set to null.

