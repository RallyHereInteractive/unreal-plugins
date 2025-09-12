---
title: RHAPI_StageMatchmakeParams
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StageMatchmakeParams`](#structFRHAPI__StageMatchmakeParams) | Parameters used to select a stage to play against. MMR considerations: if &#x60;mmr_internal_min&#x60; and &#x60;mmr_internal_max&#x60; are non-empty, a random stage will be returned within the given range. if &#x60;mmr_internal_min&#x60; and &#x60;mmr_internal_max&#x60; are empty, internally configured MMR ranges will be used to select a stage.

## struct `FRHAPI_StageMatchmakeParams` <a id="structFRHAPI__StageMatchmakeParams"></a>

```
struct FRHAPI_StageMatchmakeParams
  : public FRHAPI_Model
```

Parameters used to select a stage to play against. MMR considerations: if &#x60;mmr_internal_min&#x60; and &#x60;mmr_internal_max&#x60; are non-empty, a random stage will be returned within the given range. if &#x60;mmr_internal_min&#x60; and &#x60;mmr_internal_max&#x60; are empty, internally configured MMR ranges will be used to select a stage.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`V_Optional`](#structFRHAPI__StageMatchmakeParams_1a4c9a267f500071286a850b6f4bf4f339) | 
`public bool `[`V_IsSet`](#structFRHAPI__StageMatchmakeParams_1a86f2ddce818a7a4d3758875d1bb167ba) | true if V_Optional has been set to a value
`public bool `[`V_IsNull`](#structFRHAPI__StageMatchmakeParams_1ac1b1a1e97729bcb6413f30b24d537c76) | true if V_Optional has been explicitly set to null
`public FString `[`Type1_Optional`](#structFRHAPI__StageMatchmakeParams_1ab208e508222606c48a3bbbe58691a059) | 
`public bool `[`Type1_IsSet`](#structFRHAPI__StageMatchmakeParams_1a9ba831c495fc47445774e8c190c17896) | true if Type1_Optional has been set to a value
`public bool `[`Type1_IsNull`](#structFRHAPI__StageMatchmakeParams_1a012ce63c40127f208228aa143fecaabb) | true if Type1_Optional has been explicitly set to null
`public FString `[`Type2_Optional`](#structFRHAPI__StageMatchmakeParams_1a7468fa115285aa98335ef81903276f6d) | 
`public bool `[`Type2_IsSet`](#structFRHAPI__StageMatchmakeParams_1a7cb0ddbbce47dd99630fbc8c3cbc7d59) | true if Type2_Optional has been set to a value
`public bool `[`Type2_IsNull`](#structFRHAPI__StageMatchmakeParams_1a01955d648bdc57d0b0bb513d34637c36) | true if Type2_Optional has been explicitly set to null
`public FString `[`Type3_Optional`](#structFRHAPI__StageMatchmakeParams_1aaec058fb3712e7539ea7fc6e77e8fea0) | 
`public bool `[`Type3_IsSet`](#structFRHAPI__StageMatchmakeParams_1a7114cbf8ce2c4409c72a8080eca723f8) | true if Type3_Optional has been set to a value
`public bool `[`Type3_IsNull`](#structFRHAPI__StageMatchmakeParams_1a17c00025b674992694403a32197132da) | true if Type3_Optional has been explicitly set to null
`public FString `[`Type4_Optional`](#structFRHAPI__StageMatchmakeParams_1a111dc056bb66d6bd990a7fb1803d9fa7) | 
`public bool `[`Type4_IsSet`](#structFRHAPI__StageMatchmakeParams_1a37b8a1c01125fbb9aa0685b64dbeef83) | true if Type4_Optional has been set to a value
`public bool `[`Type4_IsNull`](#structFRHAPI__StageMatchmakeParams_1a3f62221484e16c92eeb288f26ace5611) | true if Type4_Optional has been explicitly set to null
`public int32 `[`Index_Optional`](#structFRHAPI__StageMatchmakeParams_1a6e92270f95e9061379a178e7b68217c6) | 
`public bool `[`Index_IsSet`](#structFRHAPI__StageMatchmakeParams_1a3aa280f613c0e2df0b2cd6a995c52a75) | true if Index_Optional has been set to a value
`public bool `[`Index_IsNull`](#structFRHAPI__StageMatchmakeParams_1a92561eae668da3193cd218209e2070a9) | true if Index_Optional has been explicitly set to null
`public float `[`MmrInternalMin_Optional`](#structFRHAPI__StageMatchmakeParams_1a570190e9c7f62bc87779bfe321970410) | 
`public bool `[`MmrInternalMin_IsSet`](#structFRHAPI__StageMatchmakeParams_1ab9e62f0ba9da1f6421881be73843d8a1) | true if MmrInternalMin_Optional has been set to a value
`public bool `[`MmrInternalMin_IsNull`](#structFRHAPI__StageMatchmakeParams_1a60ecb3794510a2a8a3134a9ec4bc178c) | true if MmrInternalMin_Optional has been explicitly set to null
`public float `[`MmrInternalMax_Optional`](#structFRHAPI__StageMatchmakeParams_1ad6e0fca0d1aff52947d1c1139f33b621) | 
`public bool `[`MmrInternalMax_IsSet`](#structFRHAPI__StageMatchmakeParams_1a8794d30e93e4b714e680cc8e70e1d357) | true if MmrInternalMax_Optional has been set to a value
`public bool `[`MmrInternalMax_IsNull`](#structFRHAPI__StageMatchmakeParams_1ab6a145a2ffe6bc93339c24ed56d9d44e) | true if MmrInternalMax_Optional has been explicitly set to null
`public ERHAPI_StageEntityType `[`EntityType_Optional`](#structFRHAPI__StageMatchmakeParams_1ad4cb356269e25534e570ac4f5e2be0ea) | 
`public bool `[`EntityType_IsSet`](#structFRHAPI__StageMatchmakeParams_1a3e329f2a723b527fa7f468df160ad278) | true if EntityType_Optional has been set to a value
`public bool `[`EntityType_IsNull`](#structFRHAPI__StageMatchmakeParams_1a25d8bd43b05203da72f9707d43e74dec) | true if EntityType_Optional has been explicitly set to null
`public FString `[`EntityId_Optional`](#structFRHAPI__StageMatchmakeParams_1a50b998ae1ef9f42a6ffc7d2ed05adb1c) | 
`public bool `[`EntityId_IsSet`](#structFRHAPI__StageMatchmakeParams_1aac78b88c1bb38b5e04209b43990eeea1) | true if EntityId_Optional has been set to a value
`public bool `[`EntityId_IsNull`](#structFRHAPI__StageMatchmakeParams_1a22b8a6bc13ff058519ae2ccf4a5b718d) | true if EntityId_Optional has been explicitly set to null
`public float `[`MmrInternalOverride_Optional`](#structFRHAPI__StageMatchmakeParams_1a5bded57d55d8e2d73897958b2c952bb3) | 
`public bool `[`MmrInternalOverride_IsSet`](#structFRHAPI__StageMatchmakeParams_1acf9f7dd3590bad1ffaeeef962ee4b82c) | true if MmrInternalOverride_Optional has been set to a value
`public bool `[`MmrInternalOverride_IsNull`](#structFRHAPI__StageMatchmakeParams_1a1c52e9d0f9c54674dee783dbafa76249) | true if MmrInternalOverride_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__StageMatchmakeParams_1a73d1825dbb415173179c024ad2bea573)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StageMatchmakeParams_1ac62d9382d0e063abf677c793208ffb11)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__StageMatchmakeParams_1a98ad61bbd8d05c03e9428cb571e3bc1f)`()` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageMatchmakeParams_1aa9a924efef9c7661c7448fb85569a288)`() const` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageMatchmakeParams_1a3438faab5345a59d28d33f2a950a58f7)`(const FString & DefaultValue) const` | Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__StageMatchmakeParams_1a05f3ea0a6e7e4127b059abda3e97db56)`(FString & OutValue) const` | Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__StageMatchmakeParams_1a82cf599b0ebb0c2a018ccbead6fdd75f)`()` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__StageMatchmakeParams_1a41c485c95cd0a744a1464a53cb68c64c)`() const` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageMatchmakeParams_1a643ea28918cf2ca7406f3a1bafdc23dc)`(const FString & NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageMatchmakeParams_1ac6bdfd19b4e0a4fd31ecfd8243ea4428)`(FString && NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true using move semantics.
`public inline void `[`ClearV`](#structFRHAPI__StageMatchmakeParams_1a634010a4ac8d61538675a93cf31113b6)`()` | Clears the value of V_Optional and sets V_IsSet to false.
`public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__StageMatchmakeParams_1ac34e8af30df1e92eba68fe9b849deb7d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__StageMatchmakeParams_1a4f380753be0073ddcac24125490a2c82)`() const` | Checks whether V_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a77854e0111d6c34ae49fefad02188e9f)`()` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a1ac0a706f3ad914d7f568c041a621db8)`() const` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a934cd507398039b7dcdc9eb35c232f3e)`(const FString & DefaultValue) const` | Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a993dfbb8c572260f2b9dc76baaafe8b0)`(FString & OutValue) const` | Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__StageMatchmakeParams_1af1470317fe1553b37ec36f2a05b2125f)`()` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__StageMatchmakeParams_1a9165557e49916b31a30751772a2d7b83)`() const` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageMatchmakeParams_1a645b6333e0a3beff7537ab871eb4e18c)`(const FString & NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageMatchmakeParams_1a85a46e71aae45e3c1e9c783039f1bcb6)`(FString && NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.
`public inline void `[`ClearType1`](#structFRHAPI__StageMatchmakeParams_1aa1ce937418a96fb519a9d11ce6844fae)`()` | Clears the value of Type1_Optional and sets Type1_IsSet to false.
`public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__StageMatchmakeParams_1a29dac71a29b109b8210efe9ae6151536)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__StageMatchmakeParams_1a2abcc4aa174b70ab3a4156667da29117)`() const` | Checks whether Type1_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1a133d78986e9af4e2a0447d69a75f8342)`()` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1a7226678e6d7627d2dd24112d195447c3)`() const` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1abf03e7deb0fe8cccd17eaa3b7f7a9c74)`(const FString & DefaultValue) const` | Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1a235652e89e089a0485735644bc85e6d2)`(FString & OutValue) const` | Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__StageMatchmakeParams_1a6c3db28be7f1c80cb52132fbc7d3e74e)`()` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__StageMatchmakeParams_1a91f9ee1f61b7086b24563f35e09559ec)`() const` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageMatchmakeParams_1a2779f28f22025db523323f60bb0bccf6)`(const FString & NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageMatchmakeParams_1a00bbcaabda973424269bbe4ade3a0ecd)`(FString && NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.
`public inline void `[`ClearType2`](#structFRHAPI__StageMatchmakeParams_1a355148456925bbb359ea6af29afe83dd)`()` | Clears the value of Type2_Optional and sets Type2_IsSet to false.
`public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__StageMatchmakeParams_1af800268d83aea8969f26b6423651f34e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__StageMatchmakeParams_1ab7147917fad4908e0111f3e11c7ca33f)`() const` | Checks whether Type2_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a6919019f6164465d07320a946bf00df9)`()` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a636c746bfee40206868d24f57dee282c)`() const` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a286757cc94f00c4d9b0d0c7bd0f3ab89)`(const FString & DefaultValue) const` | Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a4c9043f752b649742a71460659182896)`(FString & OutValue) const` | Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__StageMatchmakeParams_1a5fb05fe2fdfb09948eb11ff23ed71a52)`()` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__StageMatchmakeParams_1a3442d4cd2be7703ba70bf4e5f0357906)`() const` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageMatchmakeParams_1a1cf49f43a93a3f47960b69c0f3c30026)`(const FString & NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageMatchmakeParams_1a761a0300d3c9599fa64e38c235d36b2f)`(FString && NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.
`public inline void `[`ClearType3`](#structFRHAPI__StageMatchmakeParams_1ada2db9248e832e3b74625a9e70479e64)`()` | Clears the value of Type3_Optional and sets Type3_IsSet to false.
`public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__StageMatchmakeParams_1a40cb9fa0eae5d010638130ec99188d32)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__StageMatchmakeParams_1a823f218b500d587a507737e6ea240614)`() const` | Checks whether Type3_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1ad9bbe7285e75d7b0a87bb6438dffaf4b)`()` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1ab372f4a1f1ac8c380e8faefccd8f0606)`() const` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1af1928b65f8d39f2b539c08e81d365750)`(const FString & DefaultValue) const` | Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1a5ee486dd5e9ff0ce93ea89207b33bbbf)`(FString & OutValue) const` | Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__StageMatchmakeParams_1a6f426f77faca0075ca9a6b8787c3af1b)`()` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__StageMatchmakeParams_1ac002e335d51484f19886b6012c6b4853)`() const` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageMatchmakeParams_1a995923f890d671688ef47ed0d9f195f0)`(const FString & NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageMatchmakeParams_1aa933f982cf02bf94440d25bedf53ad1e)`(FString && NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.
`public inline void `[`ClearType4`](#structFRHAPI__StageMatchmakeParams_1a33bd4b68cc51a3973f66e2dff7a18155)`()` | Clears the value of Type4_Optional and sets Type4_IsSet to false.
`public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__StageMatchmakeParams_1a8ec7ad3363048687f7232604f3ec4d87)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__StageMatchmakeParams_1afdcb7c0c5db2351b2fc05ae3b63cdcfe)`() const` | Checks whether Type4_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1af2db023bde558c255535d2f7460ac0e1)`()` | Gets the value of Index_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1a978661f49f6189b59141f44106368d40)`() const` | Gets the value of Index_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1a76a93f805ef52fd209d49f02bb25d969)`(const int32 & DefaultValue) const` | Gets the value of Index_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1af934f721084a902da6b24ec78dc5f3da)`(int32 & OutValue) const` | Fills OutValue with the value of Index_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetIndexOrNull`](#structFRHAPI__StageMatchmakeParams_1aec88e46cfb16779b9e3bef6144a7a9e3)`()` | Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetIndexOrNull`](#structFRHAPI__StageMatchmakeParams_1a3da69a65ec137735c4a18f19516cf8fe)`() const` | Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageMatchmakeParams_1a43f926ec909ab89876923b5a829a0beb)`(const int32 & NewValue)` | Sets the value of Index_Optional and also sets Index_IsSet to true.
`public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageMatchmakeParams_1a41689cbbabecd836420ce66a3cd81fb3)`(int32 && NewValue)` | Sets the value of Index_Optional and also sets Index_IsSet to true using move semantics.
`public inline void `[`ClearIndex`](#structFRHAPI__StageMatchmakeParams_1ab0a81997bb30af0f6d6bfd5610c6b6f2)`()` | Clears the value of Index_Optional and sets Index_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Index`](#structFRHAPI__StageMatchmakeParams_1ac61d3cc83bdcda96d8e88e0e9dc1c0d5)`()` | Returns the default value of Index.
`public inline FORCEINLINE void `[`SetIndexToNull`](#structFRHAPI__StageMatchmakeParams_1adebe7b0be28a1cf924467fb10f0391ad)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsIndexNull`](#structFRHAPI__StageMatchmakeParams_1a98de301adf86bbf9f5ca342a767659a9)`() const` | Checks whether Index_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a1d2cbd2d9cd5b1718fe532d4e4b4e545)`()` | Gets the value of MmrInternalMin_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1ad018c5b75ee23cc7dd6113d549cfcc7c)`() const` | Gets the value of MmrInternalMin_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1acf227db9c8e16b8f54760ba6224164fb)`(const float & DefaultValue) const` | Gets the value of MmrInternalMin_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1aba6941c46d653369afe09443aeb45ce7)`(float & OutValue) const` | Fills OutValue with the value of MmrInternalMin_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalMinOrNull`](#structFRHAPI__StageMatchmakeParams_1a7ed6370f6d7e0a1cd7696dd583e5fa4b)`()` | Returns a pointer to MmrInternalMin_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalMinOrNull`](#structFRHAPI__StageMatchmakeParams_1adad8a67ba35986b85ca3a6087f6f6d4d)`() const` | Returns a pointer to MmrInternalMin_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a4355abc9a9f38a52df65db634f3d414c)`(const float & NewValue)` | Sets the value of MmrInternalMin_Optional and also sets MmrInternalMin_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a605f0e6d24e23c2172a944d2b77d7799)`(float && NewValue)` | Sets the value of MmrInternalMin_Optional and also sets MmrInternalMin_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a39c0b72d090af4d3a541364fea4effe2)`()` | Clears the value of MmrInternalMin_Optional and sets MmrInternalMin_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalMinToNull`](#structFRHAPI__StageMatchmakeParams_1a94c8526af28b3dd3a267fded4b2fdb83)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalMinNull`](#structFRHAPI__StageMatchmakeParams_1af16ce70dfa8862cb6818347487b1f6b6)`() const` | Checks whether MmrInternalMin_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1ab8064a1c6b7a00a1dd7550b912c4cf95)`()` | Gets the value of MmrInternalMax_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1afb5d55eeb6405afebd9a52d112b13bf1)`() const` | Gets the value of MmrInternalMax_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a8602d25e433db5c8ac6bf85b276c34cb)`(const float & DefaultValue) const` | Gets the value of MmrInternalMax_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1aa3e421ffc3d2798ce233b0160c48bb8b)`(float & OutValue) const` | Fills OutValue with the value of MmrInternalMax_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalMaxOrNull`](#structFRHAPI__StageMatchmakeParams_1abe0c6fc732a7488c303319e3be8c537d)`()` | Returns a pointer to MmrInternalMax_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalMaxOrNull`](#structFRHAPI__StageMatchmakeParams_1a1122f6fde63a6bc12ad1e29772ea4b11)`() const` | Returns a pointer to MmrInternalMax_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a09f98846655e8da64c04529820f27a2f)`(const float & NewValue)` | Sets the value of MmrInternalMax_Optional and also sets MmrInternalMax_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a49054faa8d1c8ee70d78a74723e9fe29)`(float && NewValue)` | Sets the value of MmrInternalMax_Optional and also sets MmrInternalMax_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a61d04bbab10c4ae19805196ab0bd74bd)`()` | Clears the value of MmrInternalMax_Optional and sets MmrInternalMax_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalMaxToNull`](#structFRHAPI__StageMatchmakeParams_1a68cb51ae2b100a4dde71591d71c94541)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalMaxNull`](#structFRHAPI__StageMatchmakeParams_1a7f2d52855c810c5d0a727dacd7b01df7)`() const` | Checks whether MmrInternalMax_Optional is set to null.
`public inline FORCEINLINE ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1a1ca852cfdac833ba589e239c075ee7d5)`()` | Gets the value of EntityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1a65a9a038e534c1c89c2b5f620ca89ed9)`() const` | Gets the value of EntityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1ae42c55d92a4ce839ad6010e415dddfe5)`(const ERHAPI_StageEntityType & DefaultValue) const` | Gets the value of EntityType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1acae2464c15092ba7aabbe26bd8640d09)`(ERHAPI_StageEntityType & OutValue) const` | Fills OutValue with the value of EntityType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_StageEntityType * `[`GetEntityTypeOrNull`](#structFRHAPI__StageMatchmakeParams_1a44c33a3033524e1b6c27d052342d180e)`()` | Returns a pointer to EntityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_StageEntityType * `[`GetEntityTypeOrNull`](#structFRHAPI__StageMatchmakeParams_1af3112176e59e72a525dc7167bfee22a0)`() const` | Returns a pointer to EntityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__StageMatchmakeParams_1a7ebf3de41768228ff0ccee50c56a97db)`(const ERHAPI_StageEntityType & NewValue)` | Sets the value of EntityType_Optional and also sets EntityType_IsSet to true.
`public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__StageMatchmakeParams_1a0030b11284bdbccdbbce65210ee4beca)`(ERHAPI_StageEntityType && NewValue)` | Sets the value of EntityType_Optional and also sets EntityType_IsSet to true using move semantics.
`public inline void `[`ClearEntityType`](#structFRHAPI__StageMatchmakeParams_1a01ebb557fafcc61f5dfe34a8f4ef4c51)`()` | Clears the value of EntityType_Optional and sets EntityType_IsSet to false.
`public inline FORCEINLINE void `[`SetEntityTypeToNull`](#structFRHAPI__StageMatchmakeParams_1a95abb41f2d7088129c239dd10899be13)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntityTypeNull`](#structFRHAPI__StageMatchmakeParams_1aa5abc0b6427cb795824d075241c2e27b)`() const` | Checks whether EntityType_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a2ace3244711f06ee8628dff09bdd7042)`()` | Gets the value of EntityId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a1f88b09159a1901e70086d541ff15504)`() const` | Gets the value of EntityId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a75848f3fc0b232084fecb736d43c86dc)`(const FString & DefaultValue) const` | Gets the value of EntityId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a6225e2a21d0227efe0197a6f5d50dcfa)`(FString & OutValue) const` | Fills OutValue with the value of EntityId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEntityIdOrNull`](#structFRHAPI__StageMatchmakeParams_1aa31bf05fce60edf84467bdb07443c191)`()` | Returns a pointer to EntityId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEntityIdOrNull`](#structFRHAPI__StageMatchmakeParams_1aa1c935e7bebb2978a13e34657a0f5db5)`() const` | Returns a pointer to EntityId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__StageMatchmakeParams_1a27a56b7a467993e611f03d2f00fce54a)`(const FString & NewValue)` | Sets the value of EntityId_Optional and also sets EntityId_IsSet to true.
`public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__StageMatchmakeParams_1ae1487c638010e2db2078ff3d8c542248)`(FString && NewValue)` | Sets the value of EntityId_Optional and also sets EntityId_IsSet to true using move semantics.
`public inline void `[`ClearEntityId`](#structFRHAPI__StageMatchmakeParams_1aec9a61546882f0727b702003d132e8a0)`()` | Clears the value of EntityId_Optional and sets EntityId_IsSet to false.
`public inline FORCEINLINE void `[`SetEntityIdToNull`](#structFRHAPI__StageMatchmakeParams_1ae7c233098a47b0a7a175bdb336f9e925)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntityIdNull`](#structFRHAPI__StageMatchmakeParams_1a236a91910db499f7ee850776bf08a96a)`() const` | Checks whether EntityId_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1aa4e2dd4fb590c6d4fbc06fab253b3c2b)`()` | Gets the value of MmrInternalOverride_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a6007928e11d8ef634ee893da3edd71dd)`() const` | Gets the value of MmrInternalOverride_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a7e448ed7a7841927149825d79ab9e85f)`(const float & DefaultValue) const` | Gets the value of MmrInternalOverride_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1ab5aac2a856c8e33f7355bafaeb82238f)`(float & OutValue) const` | Fills OutValue with the value of MmrInternalOverride_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalOverrideOrNull`](#structFRHAPI__StageMatchmakeParams_1a6f93759ac8c2873ed04cb7884c75be69)`()` | Returns a pointer to MmrInternalOverride_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalOverrideOrNull`](#structFRHAPI__StageMatchmakeParams_1ad3b15cd99f5a45526d10dfbdb0c5214c)`() const` | Returns a pointer to MmrInternalOverride_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a38aaa281132ecda4faece1c2eb88f583)`(const float & NewValue)` | Sets the value of MmrInternalOverride_Optional and also sets MmrInternalOverride_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a7a85344d9ec4909714b8c2909924104e)`(float && NewValue)` | Sets the value of MmrInternalOverride_Optional and also sets MmrInternalOverride_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a06db7150c6f54f80fe5410bdc5594e11)`()` | Clears the value of MmrInternalOverride_Optional and sets MmrInternalOverride_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalOverrideToNull`](#structFRHAPI__StageMatchmakeParams_1a063ce3995ceec62e64e42437c1c3a9d9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalOverrideNull`](#structFRHAPI__StageMatchmakeParams_1af68aaec1455a3c77130ffc71d66ba9f1)`() const` | Checks whether MmrInternalOverride_Optional is set to null.

### Members

#### `public FString `[`V_Optional`](#structFRHAPI__StageMatchmakeParams_1a4c9a267f500071286a850b6f4bf4f339) <a id="structFRHAPI__StageMatchmakeParams_1a4c9a267f500071286a850b6f4bf4f339"></a>

#### `public bool `[`V_IsSet`](#structFRHAPI__StageMatchmakeParams_1a86f2ddce818a7a4d3758875d1bb167ba) <a id="structFRHAPI__StageMatchmakeParams_1a86f2ddce818a7a4d3758875d1bb167ba"></a>

true if V_Optional has been set to a value

#### `public bool `[`V_IsNull`](#structFRHAPI__StageMatchmakeParams_1ac1b1a1e97729bcb6413f30b24d537c76) <a id="structFRHAPI__StageMatchmakeParams_1ac1b1a1e97729bcb6413f30b24d537c76"></a>

true if V_Optional has been explicitly set to null

#### `public FString `[`Type1_Optional`](#structFRHAPI__StageMatchmakeParams_1ab208e508222606c48a3bbbe58691a059) <a id="structFRHAPI__StageMatchmakeParams_1ab208e508222606c48a3bbbe58691a059"></a>

#### `public bool `[`Type1_IsSet`](#structFRHAPI__StageMatchmakeParams_1a9ba831c495fc47445774e8c190c17896) <a id="structFRHAPI__StageMatchmakeParams_1a9ba831c495fc47445774e8c190c17896"></a>

true if Type1_Optional has been set to a value

#### `public bool `[`Type1_IsNull`](#structFRHAPI__StageMatchmakeParams_1a012ce63c40127f208228aa143fecaabb) <a id="structFRHAPI__StageMatchmakeParams_1a012ce63c40127f208228aa143fecaabb"></a>

true if Type1_Optional has been explicitly set to null

#### `public FString `[`Type2_Optional`](#structFRHAPI__StageMatchmakeParams_1a7468fa115285aa98335ef81903276f6d) <a id="structFRHAPI__StageMatchmakeParams_1a7468fa115285aa98335ef81903276f6d"></a>

#### `public bool `[`Type2_IsSet`](#structFRHAPI__StageMatchmakeParams_1a7cb0ddbbce47dd99630fbc8c3cbc7d59) <a id="structFRHAPI__StageMatchmakeParams_1a7cb0ddbbce47dd99630fbc8c3cbc7d59"></a>

true if Type2_Optional has been set to a value

#### `public bool `[`Type2_IsNull`](#structFRHAPI__StageMatchmakeParams_1a01955d648bdc57d0b0bb513d34637c36) <a id="structFRHAPI__StageMatchmakeParams_1a01955d648bdc57d0b0bb513d34637c36"></a>

true if Type2_Optional has been explicitly set to null

#### `public FString `[`Type3_Optional`](#structFRHAPI__StageMatchmakeParams_1aaec058fb3712e7539ea7fc6e77e8fea0) <a id="structFRHAPI__StageMatchmakeParams_1aaec058fb3712e7539ea7fc6e77e8fea0"></a>

#### `public bool `[`Type3_IsSet`](#structFRHAPI__StageMatchmakeParams_1a7114cbf8ce2c4409c72a8080eca723f8) <a id="structFRHAPI__StageMatchmakeParams_1a7114cbf8ce2c4409c72a8080eca723f8"></a>

true if Type3_Optional has been set to a value

#### `public bool `[`Type3_IsNull`](#structFRHAPI__StageMatchmakeParams_1a17c00025b674992694403a32197132da) <a id="structFRHAPI__StageMatchmakeParams_1a17c00025b674992694403a32197132da"></a>

true if Type3_Optional has been explicitly set to null

#### `public FString `[`Type4_Optional`](#structFRHAPI__StageMatchmakeParams_1a111dc056bb66d6bd990a7fb1803d9fa7) <a id="structFRHAPI__StageMatchmakeParams_1a111dc056bb66d6bd990a7fb1803d9fa7"></a>

#### `public bool `[`Type4_IsSet`](#structFRHAPI__StageMatchmakeParams_1a37b8a1c01125fbb9aa0685b64dbeef83) <a id="structFRHAPI__StageMatchmakeParams_1a37b8a1c01125fbb9aa0685b64dbeef83"></a>

true if Type4_Optional has been set to a value

#### `public bool `[`Type4_IsNull`](#structFRHAPI__StageMatchmakeParams_1a3f62221484e16c92eeb288f26ace5611) <a id="structFRHAPI__StageMatchmakeParams_1a3f62221484e16c92eeb288f26ace5611"></a>

true if Type4_Optional has been explicitly set to null

#### `public int32 `[`Index_Optional`](#structFRHAPI__StageMatchmakeParams_1a6e92270f95e9061379a178e7b68217c6) <a id="structFRHAPI__StageMatchmakeParams_1a6e92270f95e9061379a178e7b68217c6"></a>

#### `public bool `[`Index_IsSet`](#structFRHAPI__StageMatchmakeParams_1a3aa280f613c0e2df0b2cd6a995c52a75) <a id="structFRHAPI__StageMatchmakeParams_1a3aa280f613c0e2df0b2cd6a995c52a75"></a>

true if Index_Optional has been set to a value

#### `public bool `[`Index_IsNull`](#structFRHAPI__StageMatchmakeParams_1a92561eae668da3193cd218209e2070a9) <a id="structFRHAPI__StageMatchmakeParams_1a92561eae668da3193cd218209e2070a9"></a>

true if Index_Optional has been explicitly set to null

#### `public float `[`MmrInternalMin_Optional`](#structFRHAPI__StageMatchmakeParams_1a570190e9c7f62bc87779bfe321970410) <a id="structFRHAPI__StageMatchmakeParams_1a570190e9c7f62bc87779bfe321970410"></a>

#### `public bool `[`MmrInternalMin_IsSet`](#structFRHAPI__StageMatchmakeParams_1ab9e62f0ba9da1f6421881be73843d8a1) <a id="structFRHAPI__StageMatchmakeParams_1ab9e62f0ba9da1f6421881be73843d8a1"></a>

true if MmrInternalMin_Optional has been set to a value

#### `public bool `[`MmrInternalMin_IsNull`](#structFRHAPI__StageMatchmakeParams_1a60ecb3794510a2a8a3134a9ec4bc178c) <a id="structFRHAPI__StageMatchmakeParams_1a60ecb3794510a2a8a3134a9ec4bc178c"></a>

true if MmrInternalMin_Optional has been explicitly set to null

#### `public float `[`MmrInternalMax_Optional`](#structFRHAPI__StageMatchmakeParams_1ad6e0fca0d1aff52947d1c1139f33b621) <a id="structFRHAPI__StageMatchmakeParams_1ad6e0fca0d1aff52947d1c1139f33b621"></a>

#### `public bool `[`MmrInternalMax_IsSet`](#structFRHAPI__StageMatchmakeParams_1a8794d30e93e4b714e680cc8e70e1d357) <a id="structFRHAPI__StageMatchmakeParams_1a8794d30e93e4b714e680cc8e70e1d357"></a>

true if MmrInternalMax_Optional has been set to a value

#### `public bool `[`MmrInternalMax_IsNull`](#structFRHAPI__StageMatchmakeParams_1ab6a145a2ffe6bc93339c24ed56d9d44e) <a id="structFRHAPI__StageMatchmakeParams_1ab6a145a2ffe6bc93339c24ed56d9d44e"></a>

true if MmrInternalMax_Optional has been explicitly set to null

#### `public ERHAPI_StageEntityType `[`EntityType_Optional`](#structFRHAPI__StageMatchmakeParams_1ad4cb356269e25534e570ac4f5e2be0ea) <a id="structFRHAPI__StageMatchmakeParams_1ad4cb356269e25534e570ac4f5e2be0ea"></a>

#### `public bool `[`EntityType_IsSet`](#structFRHAPI__StageMatchmakeParams_1a3e329f2a723b527fa7f468df160ad278) <a id="structFRHAPI__StageMatchmakeParams_1a3e329f2a723b527fa7f468df160ad278"></a>

true if EntityType_Optional has been set to a value

#### `public bool `[`EntityType_IsNull`](#structFRHAPI__StageMatchmakeParams_1a25d8bd43b05203da72f9707d43e74dec) <a id="structFRHAPI__StageMatchmakeParams_1a25d8bd43b05203da72f9707d43e74dec"></a>

true if EntityType_Optional has been explicitly set to null

#### `public FString `[`EntityId_Optional`](#structFRHAPI__StageMatchmakeParams_1a50b998ae1ef9f42a6ffc7d2ed05adb1c) <a id="structFRHAPI__StageMatchmakeParams_1a50b998ae1ef9f42a6ffc7d2ed05adb1c"></a>

#### `public bool `[`EntityId_IsSet`](#structFRHAPI__StageMatchmakeParams_1aac78b88c1bb38b5e04209b43990eeea1) <a id="structFRHAPI__StageMatchmakeParams_1aac78b88c1bb38b5e04209b43990eeea1"></a>

true if EntityId_Optional has been set to a value

#### `public bool `[`EntityId_IsNull`](#structFRHAPI__StageMatchmakeParams_1a22b8a6bc13ff058519ae2ccf4a5b718d) <a id="structFRHAPI__StageMatchmakeParams_1a22b8a6bc13ff058519ae2ccf4a5b718d"></a>

true if EntityId_Optional has been explicitly set to null

#### `public float `[`MmrInternalOverride_Optional`](#structFRHAPI__StageMatchmakeParams_1a5bded57d55d8e2d73897958b2c952bb3) <a id="structFRHAPI__StageMatchmakeParams_1a5bded57d55d8e2d73897958b2c952bb3"></a>

#### `public bool `[`MmrInternalOverride_IsSet`](#structFRHAPI__StageMatchmakeParams_1acf9f7dd3590bad1ffaeeef962ee4b82c) <a id="structFRHAPI__StageMatchmakeParams_1acf9f7dd3590bad1ffaeeef962ee4b82c"></a>

true if MmrInternalOverride_Optional has been set to a value

#### `public bool `[`MmrInternalOverride_IsNull`](#structFRHAPI__StageMatchmakeParams_1a1c52e9d0f9c54674dee783dbafa76249) <a id="structFRHAPI__StageMatchmakeParams_1a1c52e9d0f9c54674dee783dbafa76249"></a>

true if MmrInternalOverride_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__StageMatchmakeParams_1a73d1825dbb415173179c024ad2bea573)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StageMatchmakeParams_1a73d1825dbb415173179c024ad2bea573"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StageMatchmakeParams_1ac62d9382d0e063abf677c793208ffb11)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__StageMatchmakeParams_1ac62d9382d0e063abf677c793208ffb11"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__StageMatchmakeParams_1a98ad61bbd8d05c03e9428cb571e3bc1f)`()` <a id="structFRHAPI__StageMatchmakeParams_1a98ad61bbd8d05c03e9428cb571e3bc1f"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageMatchmakeParams_1aa9a924efef9c7661c7448fb85569a288)`() const` <a id="structFRHAPI__StageMatchmakeParams_1aa9a924efef9c7661c7448fb85569a288"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageMatchmakeParams_1a3438faab5345a59d28d33f2a950a58f7)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a3438faab5345a59d28d33f2a950a58f7"></a>

Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__StageMatchmakeParams_1a05f3ea0a6e7e4127b059abda3e97db56)`(FString & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a05f3ea0a6e7e4127b059abda3e97db56"></a>

Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__StageMatchmakeParams_1a82cf599b0ebb0c2a018ccbead6fdd75f)`()` <a id="structFRHAPI__StageMatchmakeParams_1a82cf599b0ebb0c2a018ccbead6fdd75f"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__StageMatchmakeParams_1a41c485c95cd0a744a1464a53cb68c64c)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a41c485c95cd0a744a1464a53cb68c64c"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageMatchmakeParams_1a643ea28918cf2ca7406f3a1bafdc23dc)`(const FString & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a643ea28918cf2ca7406f3a1bafdc23dc"></a>

Sets the value of V_Optional and also sets V_IsSet to true.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageMatchmakeParams_1ac6bdfd19b4e0a4fd31ecfd8243ea4428)`(FString && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1ac6bdfd19b4e0a4fd31ecfd8243ea4428"></a>

Sets the value of V_Optional and also sets V_IsSet to true using move semantics.

#### `public inline void `[`ClearV`](#structFRHAPI__StageMatchmakeParams_1a634010a4ac8d61538675a93cf31113b6)`()` <a id="structFRHAPI__StageMatchmakeParams_1a634010a4ac8d61538675a93cf31113b6"></a>

Clears the value of V_Optional and sets V_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__StageMatchmakeParams_1ac34e8af30df1e92eba68fe9b849deb7d)`()` <a id="structFRHAPI__StageMatchmakeParams_1ac34e8af30df1e92eba68fe9b849deb7d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__StageMatchmakeParams_1a4f380753be0073ddcac24125490a2c82)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a4f380753be0073ddcac24125490a2c82"></a>

Checks whether V_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a77854e0111d6c34ae49fefad02188e9f)`()` <a id="structFRHAPI__StageMatchmakeParams_1a77854e0111d6c34ae49fefad02188e9f"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a1ac0a706f3ad914d7f568c041a621db8)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a1ac0a706f3ad914d7f568c041a621db8"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a934cd507398039b7dcdc9eb35c232f3e)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a934cd507398039b7dcdc9eb35c232f3e"></a>

Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__StageMatchmakeParams_1a993dfbb8c572260f2b9dc76baaafe8b0)`(FString & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a993dfbb8c572260f2b9dc76baaafe8b0"></a>

Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__StageMatchmakeParams_1af1470317fe1553b37ec36f2a05b2125f)`()` <a id="structFRHAPI__StageMatchmakeParams_1af1470317fe1553b37ec36f2a05b2125f"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__StageMatchmakeParams_1a9165557e49916b31a30751772a2d7b83)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a9165557e49916b31a30751772a2d7b83"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageMatchmakeParams_1a645b6333e0a3beff7537ab871eb4e18c)`(const FString & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a645b6333e0a3beff7537ab871eb4e18c"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageMatchmakeParams_1a85a46e71aae45e3c1e9c783039f1bcb6)`(FString && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a85a46e71aae45e3c1e9c783039f1bcb6"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.

#### `public inline void `[`ClearType1`](#structFRHAPI__StageMatchmakeParams_1aa1ce937418a96fb519a9d11ce6844fae)`()` <a id="structFRHAPI__StageMatchmakeParams_1aa1ce937418a96fb519a9d11ce6844fae"></a>

Clears the value of Type1_Optional and sets Type1_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__StageMatchmakeParams_1a29dac71a29b109b8210efe9ae6151536)`()` <a id="structFRHAPI__StageMatchmakeParams_1a29dac71a29b109b8210efe9ae6151536"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__StageMatchmakeParams_1a2abcc4aa174b70ab3a4156667da29117)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a2abcc4aa174b70ab3a4156667da29117"></a>

Checks whether Type1_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1a133d78986e9af4e2a0447d69a75f8342)`()` <a id="structFRHAPI__StageMatchmakeParams_1a133d78986e9af4e2a0447d69a75f8342"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1a7226678e6d7627d2dd24112d195447c3)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a7226678e6d7627d2dd24112d195447c3"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1abf03e7deb0fe8cccd17eaa3b7f7a9c74)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1abf03e7deb0fe8cccd17eaa3b7f7a9c74"></a>

Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__StageMatchmakeParams_1a235652e89e089a0485735644bc85e6d2)`(FString & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a235652e89e089a0485735644bc85e6d2"></a>

Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__StageMatchmakeParams_1a6c3db28be7f1c80cb52132fbc7d3e74e)`()` <a id="structFRHAPI__StageMatchmakeParams_1a6c3db28be7f1c80cb52132fbc7d3e74e"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__StageMatchmakeParams_1a91f9ee1f61b7086b24563f35e09559ec)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a91f9ee1f61b7086b24563f35e09559ec"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageMatchmakeParams_1a2779f28f22025db523323f60bb0bccf6)`(const FString & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a2779f28f22025db523323f60bb0bccf6"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageMatchmakeParams_1a00bbcaabda973424269bbe4ade3a0ecd)`(FString && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a00bbcaabda973424269bbe4ade3a0ecd"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.

#### `public inline void `[`ClearType2`](#structFRHAPI__StageMatchmakeParams_1a355148456925bbb359ea6af29afe83dd)`()` <a id="structFRHAPI__StageMatchmakeParams_1a355148456925bbb359ea6af29afe83dd"></a>

Clears the value of Type2_Optional and sets Type2_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__StageMatchmakeParams_1af800268d83aea8969f26b6423651f34e)`()` <a id="structFRHAPI__StageMatchmakeParams_1af800268d83aea8969f26b6423651f34e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__StageMatchmakeParams_1ab7147917fad4908e0111f3e11c7ca33f)`() const` <a id="structFRHAPI__StageMatchmakeParams_1ab7147917fad4908e0111f3e11c7ca33f"></a>

Checks whether Type2_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a6919019f6164465d07320a946bf00df9)`()` <a id="structFRHAPI__StageMatchmakeParams_1a6919019f6164465d07320a946bf00df9"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a636c746bfee40206868d24f57dee282c)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a636c746bfee40206868d24f57dee282c"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a286757cc94f00c4d9b0d0c7bd0f3ab89)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a286757cc94f00c4d9b0d0c7bd0f3ab89"></a>

Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__StageMatchmakeParams_1a4c9043f752b649742a71460659182896)`(FString & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a4c9043f752b649742a71460659182896"></a>

Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__StageMatchmakeParams_1a5fb05fe2fdfb09948eb11ff23ed71a52)`()` <a id="structFRHAPI__StageMatchmakeParams_1a5fb05fe2fdfb09948eb11ff23ed71a52"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__StageMatchmakeParams_1a3442d4cd2be7703ba70bf4e5f0357906)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a3442d4cd2be7703ba70bf4e5f0357906"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageMatchmakeParams_1a1cf49f43a93a3f47960b69c0f3c30026)`(const FString & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a1cf49f43a93a3f47960b69c0f3c30026"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageMatchmakeParams_1a761a0300d3c9599fa64e38c235d36b2f)`(FString && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a761a0300d3c9599fa64e38c235d36b2f"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.

#### `public inline void `[`ClearType3`](#structFRHAPI__StageMatchmakeParams_1ada2db9248e832e3b74625a9e70479e64)`()` <a id="structFRHAPI__StageMatchmakeParams_1ada2db9248e832e3b74625a9e70479e64"></a>

Clears the value of Type3_Optional and sets Type3_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__StageMatchmakeParams_1a40cb9fa0eae5d010638130ec99188d32)`()` <a id="structFRHAPI__StageMatchmakeParams_1a40cb9fa0eae5d010638130ec99188d32"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__StageMatchmakeParams_1a823f218b500d587a507737e6ea240614)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a823f218b500d587a507737e6ea240614"></a>

Checks whether Type3_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1ad9bbe7285e75d7b0a87bb6438dffaf4b)`()` <a id="structFRHAPI__StageMatchmakeParams_1ad9bbe7285e75d7b0a87bb6438dffaf4b"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1ab372f4a1f1ac8c380e8faefccd8f0606)`() const` <a id="structFRHAPI__StageMatchmakeParams_1ab372f4a1f1ac8c380e8faefccd8f0606"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1af1928b65f8d39f2b539c08e81d365750)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1af1928b65f8d39f2b539c08e81d365750"></a>

Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__StageMatchmakeParams_1a5ee486dd5e9ff0ce93ea89207b33bbbf)`(FString & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a5ee486dd5e9ff0ce93ea89207b33bbbf"></a>

Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__StageMatchmakeParams_1a6f426f77faca0075ca9a6b8787c3af1b)`()` <a id="structFRHAPI__StageMatchmakeParams_1a6f426f77faca0075ca9a6b8787c3af1b"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__StageMatchmakeParams_1ac002e335d51484f19886b6012c6b4853)`() const` <a id="structFRHAPI__StageMatchmakeParams_1ac002e335d51484f19886b6012c6b4853"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageMatchmakeParams_1a995923f890d671688ef47ed0d9f195f0)`(const FString & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a995923f890d671688ef47ed0d9f195f0"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageMatchmakeParams_1aa933f982cf02bf94440d25bedf53ad1e)`(FString && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1aa933f982cf02bf94440d25bedf53ad1e"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.

#### `public inline void `[`ClearType4`](#structFRHAPI__StageMatchmakeParams_1a33bd4b68cc51a3973f66e2dff7a18155)`()` <a id="structFRHAPI__StageMatchmakeParams_1a33bd4b68cc51a3973f66e2dff7a18155"></a>

Clears the value of Type4_Optional and sets Type4_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__StageMatchmakeParams_1a8ec7ad3363048687f7232604f3ec4d87)`()` <a id="structFRHAPI__StageMatchmakeParams_1a8ec7ad3363048687f7232604f3ec4d87"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__StageMatchmakeParams_1afdcb7c0c5db2351b2fc05ae3b63cdcfe)`() const` <a id="structFRHAPI__StageMatchmakeParams_1afdcb7c0c5db2351b2fc05ae3b63cdcfe"></a>

Checks whether Type4_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1af2db023bde558c255535d2f7460ac0e1)`()` <a id="structFRHAPI__StageMatchmakeParams_1af2db023bde558c255535d2f7460ac0e1"></a>

Gets the value of Index_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1a978661f49f6189b59141f44106368d40)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a978661f49f6189b59141f44106368d40"></a>

Gets the value of Index_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1a76a93f805ef52fd209d49f02bb25d969)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a76a93f805ef52fd209d49f02bb25d969"></a>

Gets the value of Index_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIndex`](#structFRHAPI__StageMatchmakeParams_1af934f721084a902da6b24ec78dc5f3da)`(int32 & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1af934f721084a902da6b24ec78dc5f3da"></a>

Fills OutValue with the value of Index_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetIndexOrNull`](#structFRHAPI__StageMatchmakeParams_1aec88e46cfb16779b9e3bef6144a7a9e3)`()` <a id="structFRHAPI__StageMatchmakeParams_1aec88e46cfb16779b9e3bef6144a7a9e3"></a>

Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetIndexOrNull`](#structFRHAPI__StageMatchmakeParams_1a3da69a65ec137735c4a18f19516cf8fe)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a3da69a65ec137735c4a18f19516cf8fe"></a>

Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageMatchmakeParams_1a43f926ec909ab89876923b5a829a0beb)`(const int32 & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a43f926ec909ab89876923b5a829a0beb"></a>

Sets the value of Index_Optional and also sets Index_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageMatchmakeParams_1a41689cbbabecd836420ce66a3cd81fb3)`(int32 && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a41689cbbabecd836420ce66a3cd81fb3"></a>

Sets the value of Index_Optional and also sets Index_IsSet to true using move semantics.

#### `public inline void `[`ClearIndex`](#structFRHAPI__StageMatchmakeParams_1ab0a81997bb30af0f6d6bfd5610c6b6f2)`()` <a id="structFRHAPI__StageMatchmakeParams_1ab0a81997bb30af0f6d6bfd5610c6b6f2"></a>

Clears the value of Index_Optional and sets Index_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Index`](#structFRHAPI__StageMatchmakeParams_1ac61d3cc83bdcda96d8e88e0e9dc1c0d5)`()` <a id="structFRHAPI__StageMatchmakeParams_1ac61d3cc83bdcda96d8e88e0e9dc1c0d5"></a>

Returns the default value of Index.

#### `public inline FORCEINLINE void `[`SetIndexToNull`](#structFRHAPI__StageMatchmakeParams_1adebe7b0be28a1cf924467fb10f0391ad)`()` <a id="structFRHAPI__StageMatchmakeParams_1adebe7b0be28a1cf924467fb10f0391ad"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsIndexNull`](#structFRHAPI__StageMatchmakeParams_1a98de301adf86bbf9f5ca342a767659a9)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a98de301adf86bbf9f5ca342a767659a9"></a>

Checks whether Index_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a1d2cbd2d9cd5b1718fe532d4e4b4e545)`()` <a id="structFRHAPI__StageMatchmakeParams_1a1d2cbd2d9cd5b1718fe532d4e4b4e545"></a>

Gets the value of MmrInternalMin_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1ad018c5b75ee23cc7dd6113d549cfcc7c)`() const` <a id="structFRHAPI__StageMatchmakeParams_1ad018c5b75ee23cc7dd6113d549cfcc7c"></a>

Gets the value of MmrInternalMin_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1acf227db9c8e16b8f54760ba6224164fb)`(const float & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1acf227db9c8e16b8f54760ba6224164fb"></a>

Gets the value of MmrInternalMin_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1aba6941c46d653369afe09443aeb45ce7)`(float & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1aba6941c46d653369afe09443aeb45ce7"></a>

Fills OutValue with the value of MmrInternalMin_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalMinOrNull`](#structFRHAPI__StageMatchmakeParams_1a7ed6370f6d7e0a1cd7696dd583e5fa4b)`()` <a id="structFRHAPI__StageMatchmakeParams_1a7ed6370f6d7e0a1cd7696dd583e5fa4b"></a>

Returns a pointer to MmrInternalMin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalMinOrNull`](#structFRHAPI__StageMatchmakeParams_1adad8a67ba35986b85ca3a6087f6f6d4d)`() const` <a id="structFRHAPI__StageMatchmakeParams_1adad8a67ba35986b85ca3a6087f6f6d4d"></a>

Returns a pointer to MmrInternalMin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a4355abc9a9f38a52df65db634f3d414c)`(const float & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a4355abc9a9f38a52df65db634f3d414c"></a>

Sets the value of MmrInternalMin_Optional and also sets MmrInternalMin_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a605f0e6d24e23c2172a944d2b77d7799)`(float && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a605f0e6d24e23c2172a944d2b77d7799"></a>

Sets the value of MmrInternalMin_Optional and also sets MmrInternalMin_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternalMin`](#structFRHAPI__StageMatchmakeParams_1a39c0b72d090af4d3a541364fea4effe2)`()` <a id="structFRHAPI__StageMatchmakeParams_1a39c0b72d090af4d3a541364fea4effe2"></a>

Clears the value of MmrInternalMin_Optional and sets MmrInternalMin_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalMinToNull`](#structFRHAPI__StageMatchmakeParams_1a94c8526af28b3dd3a267fded4b2fdb83)`()` <a id="structFRHAPI__StageMatchmakeParams_1a94c8526af28b3dd3a267fded4b2fdb83"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalMinNull`](#structFRHAPI__StageMatchmakeParams_1af16ce70dfa8862cb6818347487b1f6b6)`() const` <a id="structFRHAPI__StageMatchmakeParams_1af16ce70dfa8862cb6818347487b1f6b6"></a>

Checks whether MmrInternalMin_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1ab8064a1c6b7a00a1dd7550b912c4cf95)`()` <a id="structFRHAPI__StageMatchmakeParams_1ab8064a1c6b7a00a1dd7550b912c4cf95"></a>

Gets the value of MmrInternalMax_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1afb5d55eeb6405afebd9a52d112b13bf1)`() const` <a id="structFRHAPI__StageMatchmakeParams_1afb5d55eeb6405afebd9a52d112b13bf1"></a>

Gets the value of MmrInternalMax_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a8602d25e433db5c8ac6bf85b276c34cb)`(const float & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a8602d25e433db5c8ac6bf85b276c34cb"></a>

Gets the value of MmrInternalMax_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1aa3e421ffc3d2798ce233b0160c48bb8b)`(float & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1aa3e421ffc3d2798ce233b0160c48bb8b"></a>

Fills OutValue with the value of MmrInternalMax_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalMaxOrNull`](#structFRHAPI__StageMatchmakeParams_1abe0c6fc732a7488c303319e3be8c537d)`()` <a id="structFRHAPI__StageMatchmakeParams_1abe0c6fc732a7488c303319e3be8c537d"></a>

Returns a pointer to MmrInternalMax_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalMaxOrNull`](#structFRHAPI__StageMatchmakeParams_1a1122f6fde63a6bc12ad1e29772ea4b11)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a1122f6fde63a6bc12ad1e29772ea4b11"></a>

Returns a pointer to MmrInternalMax_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a09f98846655e8da64c04529820f27a2f)`(const float & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a09f98846655e8da64c04529820f27a2f"></a>

Sets the value of MmrInternalMax_Optional and also sets MmrInternalMax_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a49054faa8d1c8ee70d78a74723e9fe29)`(float && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a49054faa8d1c8ee70d78a74723e9fe29"></a>

Sets the value of MmrInternalMax_Optional and also sets MmrInternalMax_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternalMax`](#structFRHAPI__StageMatchmakeParams_1a61d04bbab10c4ae19805196ab0bd74bd)`()` <a id="structFRHAPI__StageMatchmakeParams_1a61d04bbab10c4ae19805196ab0bd74bd"></a>

Clears the value of MmrInternalMax_Optional and sets MmrInternalMax_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalMaxToNull`](#structFRHAPI__StageMatchmakeParams_1a68cb51ae2b100a4dde71591d71c94541)`()` <a id="structFRHAPI__StageMatchmakeParams_1a68cb51ae2b100a4dde71591d71c94541"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalMaxNull`](#structFRHAPI__StageMatchmakeParams_1a7f2d52855c810c5d0a727dacd7b01df7)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a7f2d52855c810c5d0a727dacd7b01df7"></a>

Checks whether MmrInternalMax_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1a1ca852cfdac833ba589e239c075ee7d5)`()` <a id="structFRHAPI__StageMatchmakeParams_1a1ca852cfdac833ba589e239c075ee7d5"></a>

Gets the value of EntityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1a65a9a038e534c1c89c2b5f620ca89ed9)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a65a9a038e534c1c89c2b5f620ca89ed9"></a>

Gets the value of EntityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1ae42c55d92a4ce839ad6010e415dddfe5)`(const ERHAPI_StageEntityType & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1ae42c55d92a4ce839ad6010e415dddfe5"></a>

Gets the value of EntityType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntityType`](#structFRHAPI__StageMatchmakeParams_1acae2464c15092ba7aabbe26bd8640d09)`(ERHAPI_StageEntityType & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1acae2464c15092ba7aabbe26bd8640d09"></a>

Fills OutValue with the value of EntityType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_StageEntityType * `[`GetEntityTypeOrNull`](#structFRHAPI__StageMatchmakeParams_1a44c33a3033524e1b6c27d052342d180e)`()` <a id="structFRHAPI__StageMatchmakeParams_1a44c33a3033524e1b6c27d052342d180e"></a>

Returns a pointer to EntityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType * `[`GetEntityTypeOrNull`](#structFRHAPI__StageMatchmakeParams_1af3112176e59e72a525dc7167bfee22a0)`() const` <a id="structFRHAPI__StageMatchmakeParams_1af3112176e59e72a525dc7167bfee22a0"></a>

Returns a pointer to EntityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__StageMatchmakeParams_1a7ebf3de41768228ff0ccee50c56a97db)`(const ERHAPI_StageEntityType & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a7ebf3de41768228ff0ccee50c56a97db"></a>

Sets the value of EntityType_Optional and also sets EntityType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__StageMatchmakeParams_1a0030b11284bdbccdbbce65210ee4beca)`(ERHAPI_StageEntityType && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a0030b11284bdbccdbbce65210ee4beca"></a>

Sets the value of EntityType_Optional and also sets EntityType_IsSet to true using move semantics.

#### `public inline void `[`ClearEntityType`](#structFRHAPI__StageMatchmakeParams_1a01ebb557fafcc61f5dfe34a8f4ef4c51)`()` <a id="structFRHAPI__StageMatchmakeParams_1a01ebb557fafcc61f5dfe34a8f4ef4c51"></a>

Clears the value of EntityType_Optional and sets EntityType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEntityTypeToNull`](#structFRHAPI__StageMatchmakeParams_1a95abb41f2d7088129c239dd10899be13)`()` <a id="structFRHAPI__StageMatchmakeParams_1a95abb41f2d7088129c239dd10899be13"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntityTypeNull`](#structFRHAPI__StageMatchmakeParams_1aa5abc0b6427cb795824d075241c2e27b)`() const` <a id="structFRHAPI__StageMatchmakeParams_1aa5abc0b6427cb795824d075241c2e27b"></a>

Checks whether EntityType_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a2ace3244711f06ee8628dff09bdd7042)`()` <a id="structFRHAPI__StageMatchmakeParams_1a2ace3244711f06ee8628dff09bdd7042"></a>

Gets the value of EntityId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a1f88b09159a1901e70086d541ff15504)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a1f88b09159a1901e70086d541ff15504"></a>

Gets the value of EntityId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a75848f3fc0b232084fecb736d43c86dc)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a75848f3fc0b232084fecb736d43c86dc"></a>

Gets the value of EntityId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntityId`](#structFRHAPI__StageMatchmakeParams_1a6225e2a21d0227efe0197a6f5d50dcfa)`(FString & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a6225e2a21d0227efe0197a6f5d50dcfa"></a>

Fills OutValue with the value of EntityId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEntityIdOrNull`](#structFRHAPI__StageMatchmakeParams_1aa31bf05fce60edf84467bdb07443c191)`()` <a id="structFRHAPI__StageMatchmakeParams_1aa31bf05fce60edf84467bdb07443c191"></a>

Returns a pointer to EntityId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEntityIdOrNull`](#structFRHAPI__StageMatchmakeParams_1aa1c935e7bebb2978a13e34657a0f5db5)`() const` <a id="structFRHAPI__StageMatchmakeParams_1aa1c935e7bebb2978a13e34657a0f5db5"></a>

Returns a pointer to EntityId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__StageMatchmakeParams_1a27a56b7a467993e611f03d2f00fce54a)`(const FString & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a27a56b7a467993e611f03d2f00fce54a"></a>

Sets the value of EntityId_Optional and also sets EntityId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__StageMatchmakeParams_1ae1487c638010e2db2078ff3d8c542248)`(FString && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1ae1487c638010e2db2078ff3d8c542248"></a>

Sets the value of EntityId_Optional and also sets EntityId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntityId`](#structFRHAPI__StageMatchmakeParams_1aec9a61546882f0727b702003d132e8a0)`()` <a id="structFRHAPI__StageMatchmakeParams_1aec9a61546882f0727b702003d132e8a0"></a>

Clears the value of EntityId_Optional and sets EntityId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEntityIdToNull`](#structFRHAPI__StageMatchmakeParams_1ae7c233098a47b0a7a175bdb336f9e925)`()` <a id="structFRHAPI__StageMatchmakeParams_1ae7c233098a47b0a7a175bdb336f9e925"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntityIdNull`](#structFRHAPI__StageMatchmakeParams_1a236a91910db499f7ee850776bf08a96a)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a236a91910db499f7ee850776bf08a96a"></a>

Checks whether EntityId_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1aa4e2dd4fb590c6d4fbc06fab253b3c2b)`()` <a id="structFRHAPI__StageMatchmakeParams_1aa4e2dd4fb590c6d4fbc06fab253b3c2b"></a>

Gets the value of MmrInternalOverride_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a6007928e11d8ef634ee893da3edd71dd)`() const` <a id="structFRHAPI__StageMatchmakeParams_1a6007928e11d8ef634ee893da3edd71dd"></a>

Gets the value of MmrInternalOverride_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a7e448ed7a7841927149825d79ab9e85f)`(const float & DefaultValue) const` <a id="structFRHAPI__StageMatchmakeParams_1a7e448ed7a7841927149825d79ab9e85f"></a>

Gets the value of MmrInternalOverride_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1ab5aac2a856c8e33f7355bafaeb82238f)`(float & OutValue) const` <a id="structFRHAPI__StageMatchmakeParams_1ab5aac2a856c8e33f7355bafaeb82238f"></a>

Fills OutValue with the value of MmrInternalOverride_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalOverrideOrNull`](#structFRHAPI__StageMatchmakeParams_1a6f93759ac8c2873ed04cb7884c75be69)`()` <a id="structFRHAPI__StageMatchmakeParams_1a6f93759ac8c2873ed04cb7884c75be69"></a>

Returns a pointer to MmrInternalOverride_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalOverrideOrNull`](#structFRHAPI__StageMatchmakeParams_1ad3b15cd99f5a45526d10dfbdb0c5214c)`() const` <a id="structFRHAPI__StageMatchmakeParams_1ad3b15cd99f5a45526d10dfbdb0c5214c"></a>

Returns a pointer to MmrInternalOverride_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a38aaa281132ecda4faece1c2eb88f583)`(const float & NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a38aaa281132ecda4faece1c2eb88f583"></a>

Sets the value of MmrInternalOverride_Optional and also sets MmrInternalOverride_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a7a85344d9ec4909714b8c2909924104e)`(float && NewValue)` <a id="structFRHAPI__StageMatchmakeParams_1a7a85344d9ec4909714b8c2909924104e"></a>

Sets the value of MmrInternalOverride_Optional and also sets MmrInternalOverride_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternalOverride`](#structFRHAPI__StageMatchmakeParams_1a06db7150c6f54f80fe5410bdc5594e11)`()` <a id="structFRHAPI__StageMatchmakeParams_1a06db7150c6f54f80fe5410bdc5594e11"></a>

Clears the value of MmrInternalOverride_Optional and sets MmrInternalOverride_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalOverrideToNull`](#structFRHAPI__StageMatchmakeParams_1a063ce3995ceec62e64e42437c1c3a9d9)`()` <a id="structFRHAPI__StageMatchmakeParams_1a063ce3995ceec62e64e42437c1c3a9d9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalOverrideNull`](#structFRHAPI__StageMatchmakeParams_1af68aaec1455a3c77130ffc71d66ba9f1)`() const` <a id="structFRHAPI__StageMatchmakeParams_1af68aaec1455a3c77130ffc71d66ba9f1"></a>

Checks whether MmrInternalOverride_Optional is set to null.

