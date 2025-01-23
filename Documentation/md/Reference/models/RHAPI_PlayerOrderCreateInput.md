---
title: RHAPI_PlayerOrderCreateInput
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderCreateInput`](#structFRHAPI__PlayerOrderCreateInput) | Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

## struct `FRHAPI_PlayerOrderCreateInput` <a id="structFRHAPI__PlayerOrderCreateInput"></a>

```
struct FRHAPI_PlayerOrderCreateInput
  : public FRHAPI_Model
```

Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreateInput_1a4517930488ebfad6673f642213f8f11d) | 
`public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a8be30b1e8b4ad078888c993bd87c6490) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1ac8149edfcadddc9c4a77500b3c68951c) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a53369302c10d43d32f62177715018348) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1af58cc2f4ccac064ab51cf5a2c65f462f) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1a4ec27c0e8ec546c4e9c6fc4628f3e3a7) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a31a0032c110bbf7311ff2f70283c176e) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a3da4948001240f1110ece2f63389ad75) | true if PortalId_Optional has been explicitly set to null
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1af36f5d262d554cee8603f842a46f46ce) | 
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1ab2e9fd6958cf8b2d45798dcaaa5fc93e) | true if PortalUserId_Optional has been set to a value
`public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a1dd94b1b36d283ba510a9c97d98c203c) | true if PortalUserId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1ace5d21ece527ffb46bac95e3019a4aab) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a8515c051ee161fbde3f7a1362e4a989d) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a906ed8c617fdabe83442400617b88749) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1a2e14aac8840693f953b79f0ba6c7c478) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a831089dd7cbb1c0d4f1edc75749d67f6) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a3d116ae184b72b5c8b1eae213e3b8a17) | true if MatchId_Optional has been explicitly set to null
`public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreateInput_1af434d0f575a4feb95520c2a545dc0abf) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1aff67d8dcc3320d3dbf234c240bbaaeaa) | true if IsTransaction_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1ae831a874274ac27c2574c4937969d443) | 
`public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a8868aae2e71442766ec9588290efdcf7) | true if OrderId_Optional has been set to a value
`public bool `[`OrderId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a0fd4e94b00a4dc2aeefaded70e19c99d) | true if OrderId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > `[`Entries`](#structFRHAPI__PlayerOrderCreateInput_1a3aa8d92b61aab55a93895f51be45f41f) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreateInput_1add80e0709e979f182d7883b6a1558fc2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreateInput_1ad497341a55f454848d3d9895acf4903e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a687be0317c25abfcf2556df4c756d398)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a52d011d63bfdeb5478581ea138eb81aa)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a0d83f3da95537bcf68108d65e6344fd0)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1aca91fa55a8e308060bb93dfec8f780a9)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a63c1e90fae2c686c62d13c0f8cc6ad72)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a6c365d5772247de4d336a678cab61ba7)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1a913b4a28fe938e76c744a23c5e683e5d)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1aea8201230851980a253e25bf60c494e1)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateInput_1abaa8085ecd9b3eef573ae3ac47ae607e)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreateInput_1a534fd105a53dbfbde98dab010fc7fb73)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1aa60acbec1dfc1cb40035ede491083828)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a54e929d0d56fbd34528e2f00fbebf136)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1ad829ab89c8d83912a777401b97516c17)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1ab40d4e55884e6149f6c6ea3871e6c4b5)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ab3782a830d908d97439b1c287a9787d7)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a049ef0c19673d410ee7a3846b4cfdd19)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a21af67cb42783c05ddaf6480095db90e)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a758f77ba5c186db589d11f3a30354504)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a710b8a849f12d3b17f04c06ec83d2c16)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreateInput_1aa700a4574af81b4de502c982e8ba0d2d)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a230c3f346cb1dc45cc375fe8355621a6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a9359849889ecc18c22f53c1f4da93f3b)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a06d0714efea4625abb6c06f9833180ba)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a1642af85259ccc735ca2275415832f6f)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a4b23c2c49f308aa8a3b38310d81e064b)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a7891a21e4637290f1dcceac44d691f59)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7e54b0d0d0918050714e23fae8950584)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a3dc10c3ef879a09cbec6cc078bfa792d)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1abb1a0ce42117733b1d62af1fdaa22564)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a7e6f45f3d0549a3c0d2e3573de90376f)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a8139c4038f55829f6c5e817fb68a76da)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a3e82e738491ecf91e83227d2fe0160a8)`() const` | Checks whether PortalId_Optional has been set.
`public inline void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a4fe17f8c514731bee06781d595d2b6b2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a948627162fd185415f07a07f1d50e30e)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a0d19792768a556d99a8fb9e024de4b0d)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1aa520ca30368a58ba5a88aa5c2ceaea30)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a5e44fbc6f29e10416f5e7e48fa2f7932)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a3d390dc6b1b1d9f07b24503a37e72b0c)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a311b7dc096ad9e69cf15099c5d02ab39)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ae2f22cdb58b5a0b9233830ece712854f)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a893d162024fa61b9e61018dd81321ae5)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a5c3a8e9e148156208c2c803bae32ba71)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a00a636e1ce0ff41e54251e609dda9a09)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a7209765ff04aab216bb4af3f9a3edfc6)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a8a360d9e177b4cadacda59faa2b31b2c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a20b4d3856826700ef108fcbd7d1236fe)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a302f2d7ad75828994bca523d5ebc3b54)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a560564f161d2a71743f670744fdf76a9)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1ada3c0d53b83cbf92b19f873ace14e2a0)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a994dbfa3d7e18416f477dd724e0157f0)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a473bce247c701d4539acd2907aa60427)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a6b488748f493adb371cead9f59fb012b)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a44b66417cc5e585cd4d20b5e65522c0f)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a449da74d631549bb3d3b3c84029de792)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1ab576515ec19320beeb92929926e74ee4)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a33ec4db23a8449bb2b5f9de0f1513965)`() const` | Checks whether InstanceId_Optional has been set.
`public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1ae61ce58d135059de40f6e4a8298949a7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateInput_1ae82df98fc4eb8ef64129ebab147be61b)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a95bcb2e1d275370a1d9dc2dc4dade9bd)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a8a0f1c7d210d913a763a280b9c4b0d57)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1af0413c90bb6daea35aff7a9d87047a18)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1ac009c88391a4518ad144209b681c2f5e)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a46a279b9c4c995ed8f6a714d58f4891a)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a62cd553f138748ed02bdaea3fbf2479c)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a9a4913c1f020afa8e8b6752d458e284f)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a633e5a2a05e853b2c352a1d9b9eb9ee4)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateInput_1aa466cc85fc45ad8941e28ac83c0ce3ba)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreateInput_1adcc9c9ce1a810c734e6b4476281f1b74)`() const` | Checks whether MatchId_Optional has been set.
`public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a2b033a45042a552b3fcaa0cb490e0492)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateInput_1ae3e24064f2b35e6ad4c322ddf0f14e1c)`() const` | Checks whether MatchId_Optional is set to null.
`public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a5420d79cfbff7b9e95e6fc984dae6834)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a61637fadf64c96768797a73f14d4e220)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a6ceb6fe5765add352ef75c18889e84c2)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a219bb1a9731dd5d87e5375bc29f5f3fd)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a5887d489ceb0cb6249084fb18f5fff78)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a2e9878cd98b85ade79541566494eb088)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a6996eb8288f51983afa4f18f9a348ebd)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ab0e3e5c630a86b2141f51d2d069af590)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a3acbcfeed53b5b09bc3b424aad6a1b3f)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreateInput_1ad7bb8902d1ce8c4c40b4854f29819f04)`() const` | Checks whether IsTransaction_Optional has been set.
`public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreateInput_1a8e8d6e8bd58dbd4f63dde86ff76e6e42)`() const` | Returns true if IsTransaction_Optional is set and matches the default value.
`public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreateInput_1a25494142bc8823994c43190a70343d36)`()` | Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a56106610db065d254a3b681f07089b18)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ae83065d05e655b1aaffcc5156d2c994a)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1af2559de316f8358d68e121af12c4c99d)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a29f5f1f4ae21bd1cbe28a5e9a959ee3f)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1af11eb05aef5567242ee3e7bff2b291c1)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1af07e53f82f38ebf513a83c33f28e717e)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1aaf01822098ac67059289b5b7e4349b73)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a1e1b79c7dd4f5bdc881a407fcb9ea537)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ac93de812fb52ea6b261a76a10f53a403)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a34a15edf6722fffae60101e3bc50946b)`() const` | Checks whether OrderId_Optional has been set.
`public inline void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a03f31cefbe2cf3187853ceb6565d78de)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a1899a2795469601c8b9c087e7800e339)`() const` | Checks whether OrderId_Optional is set to null.
`public inline TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1abd457c15ce1aaa446c6d72a5e734e8d4)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a300d1c069a0ca3494bfa8ca537573d52)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1ae3fb7a00a32a820468bb91f5c40912c4)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a225363925bc37948fb82adecf1ce1101)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreateInput_1a4517930488ebfad6673f642213f8f11d) <a id="structFRHAPI__PlayerOrderCreateInput_1a4517930488ebfad6673f642213f8f11d"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a8be30b1e8b4ad078888c993bd87c6490) <a id="structFRHAPI__PlayerOrderCreateInput_1a8be30b1e8b4ad078888c993bd87c6490"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1ac8149edfcadddc9c4a77500b3c68951c) <a id="structFRHAPI__PlayerOrderCreateInput_1ac8149edfcadddc9c4a77500b3c68951c"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a53369302c10d43d32f62177715018348) <a id="structFRHAPI__PlayerOrderCreateInput_1a53369302c10d43d32f62177715018348"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1af58cc2f4ccac064ab51cf5a2c65f462f) <a id="structFRHAPI__PlayerOrderCreateInput_1af58cc2f4ccac064ab51cf5a2c65f462f"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1a4ec27c0e8ec546c4e9c6fc4628f3e3a7) <a id="structFRHAPI__PlayerOrderCreateInput_1a4ec27c0e8ec546c4e9c6fc4628f3e3a7"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a31a0032c110bbf7311ff2f70283c176e) <a id="structFRHAPI__PlayerOrderCreateInput_1a31a0032c110bbf7311ff2f70283c176e"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a3da4948001240f1110ece2f63389ad75) <a id="structFRHAPI__PlayerOrderCreateInput_1a3da4948001240f1110ece2f63389ad75"></a>

true if PortalId_Optional has been explicitly set to null

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1af36f5d262d554cee8603f842a46f46ce) <a id="structFRHAPI__PlayerOrderCreateInput_1af36f5d262d554cee8603f842a46f46ce"></a>

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1ab2e9fd6958cf8b2d45798dcaaa5fc93e) <a id="structFRHAPI__PlayerOrderCreateInput_1ab2e9fd6958cf8b2d45798dcaaa5fc93e"></a>

true if PortalUserId_Optional has been set to a value

#### `public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a1dd94b1b36d283ba510a9c97d98c203c) <a id="structFRHAPI__PlayerOrderCreateInput_1a1dd94b1b36d283ba510a9c97d98c203c"></a>

true if PortalUserId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1ace5d21ece527ffb46bac95e3019a4aab) <a id="structFRHAPI__PlayerOrderCreateInput_1ace5d21ece527ffb46bac95e3019a4aab"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a8515c051ee161fbde3f7a1362e4a989d) <a id="structFRHAPI__PlayerOrderCreateInput_1a8515c051ee161fbde3f7a1362e4a989d"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a906ed8c617fdabe83442400617b88749) <a id="structFRHAPI__PlayerOrderCreateInput_1a906ed8c617fdabe83442400617b88749"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1a2e14aac8840693f953b79f0ba6c7c478) <a id="structFRHAPI__PlayerOrderCreateInput_1a2e14aac8840693f953b79f0ba6c7c478"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a831089dd7cbb1c0d4f1edc75749d67f6) <a id="structFRHAPI__PlayerOrderCreateInput_1a831089dd7cbb1c0d4f1edc75749d67f6"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a3d116ae184b72b5c8b1eae213e3b8a17) <a id="structFRHAPI__PlayerOrderCreateInput_1a3d116ae184b72b5c8b1eae213e3b8a17"></a>

true if MatchId_Optional has been explicitly set to null

#### `public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreateInput_1af434d0f575a4feb95520c2a545dc0abf) <a id="structFRHAPI__PlayerOrderCreateInput_1af434d0f575a4feb95520c2a545dc0abf"></a>

If an order is a transaction, any failed entries will roll back changes from all other entries.

#### `public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1aff67d8dcc3320d3dbf234c240bbaaeaa) <a id="structFRHAPI__PlayerOrderCreateInput_1aff67d8dcc3320d3dbf234c240bbaaeaa"></a>

true if IsTransaction_Optional has been set to a value

#### `public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreateInput_1ae831a874274ac27c2574c4937969d443) <a id="structFRHAPI__PlayerOrderCreateInput_1ae831a874274ac27c2574c4937969d443"></a>

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreateInput_1a8868aae2e71442766ec9588290efdcf7) <a id="structFRHAPI__PlayerOrderCreateInput_1a8868aae2e71442766ec9588290efdcf7"></a>

true if OrderId_Optional has been set to a value

#### `public bool `[`OrderId_IsNull`](#structFRHAPI__PlayerOrderCreateInput_1a0fd4e94b00a4dc2aeefaded70e19c99d) <a id="structFRHAPI__PlayerOrderCreateInput_1a0fd4e94b00a4dc2aeefaded70e19c99d"></a>

true if OrderId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > `[`Entries`](#structFRHAPI__PlayerOrderCreateInput_1a3aa8d92b61aab55a93895f51be45f41f) <a id="structFRHAPI__PlayerOrderCreateInput_1a3aa8d92b61aab55a93895f51be45f41f"></a>

List of Player Order Entries for the Player Order.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreateInput_1add80e0709e979f182d7883b6a1558fc2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1add80e0709e979f182d7883b6a1558fc2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreateInput_1ad497341a55f454848d3d9895acf4903e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ad497341a55f454848d3d9895acf4903e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a687be0317c25abfcf2556df4c756d398)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a687be0317c25abfcf2556df4c756d398"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a52d011d63bfdeb5478581ea138eb81aa)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a52d011d63bfdeb5478581ea138eb81aa"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a0d83f3da95537bcf68108d65e6344fd0)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a0d83f3da95537bcf68108d65e6344fd0"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1aca91fa55a8e308060bb93dfec8f780a9)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1aca91fa55a8e308060bb93dfec8f780a9"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a63c1e90fae2c686c62d13c0f8cc6ad72)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a63c1e90fae2c686c62d13c0f8cc6ad72"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a6c365d5772247de4d336a678cab61ba7)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a6c365d5772247de4d336a678cab61ba7"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1a913b4a28fe938e76c744a23c5e683e5d)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a913b4a28fe938e76c744a23c5e683e5d"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1aea8201230851980a253e25bf60c494e1)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1aea8201230851980a253e25bf60c494e1"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateInput_1abaa8085ecd9b3eef573ae3ac47ae607e)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1abaa8085ecd9b3eef573ae3ac47ae607e"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreateInput_1a534fd105a53dbfbde98dab010fc7fb73)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a534fd105a53dbfbde98dab010fc7fb73"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1aa60acbec1dfc1cb40035ede491083828)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1aa60acbec1dfc1cb40035ede491083828"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a54e929d0d56fbd34528e2f00fbebf136)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a54e929d0d56fbd34528e2f00fbebf136"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1ad829ab89c8d83912a777401b97516c17)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ad829ab89c8d83912a777401b97516c17"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1ab40d4e55884e6149f6c6ea3871e6c4b5)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ab40d4e55884e6149f6c6ea3871e6c4b5"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ab3782a830d908d97439b1c287a9787d7)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ab3782a830d908d97439b1c287a9787d7"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a049ef0c19673d410ee7a3846b4cfdd19)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a049ef0c19673d410ee7a3846b4cfdd19"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a21af67cb42783c05ddaf6480095db90e)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a21af67cb42783c05ddaf6480095db90e"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a758f77ba5c186db589d11f3a30354504)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a758f77ba5c186db589d11f3a30354504"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a710b8a849f12d3b17f04c06ec83d2c16)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a710b8a849f12d3b17f04c06ec83d2c16"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreateInput_1aa700a4574af81b4de502c982e8ba0d2d)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1aa700a4574af81b4de502c982e8ba0d2d"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a230c3f346cb1dc45cc375fe8355621a6)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a230c3f346cb1dc45cc375fe8355621a6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a9359849889ecc18c22f53c1f4da93f3b)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a9359849889ecc18c22f53c1f4da93f3b"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a06d0714efea4625abb6c06f9833180ba)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a06d0714efea4625abb6c06f9833180ba"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a1642af85259ccc735ca2275415832f6f)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a1642af85259ccc735ca2275415832f6f"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a4b23c2c49f308aa8a3b38310d81e064b)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a4b23c2c49f308aa8a3b38310d81e064b"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a7891a21e4637290f1dcceac44d691f59)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a7891a21e4637290f1dcceac44d691f59"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7e54b0d0d0918050714e23fae8950584)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a7e54b0d0d0918050714e23fae8950584"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a3dc10c3ef879a09cbec6cc078bfa792d)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a3dc10c3ef879a09cbec6cc078bfa792d"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1abb1a0ce42117733b1d62af1fdaa22564)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1abb1a0ce42117733b1d62af1fdaa22564"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a7e6f45f3d0549a3c0d2e3573de90376f)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a7e6f45f3d0549a3c0d2e3573de90376f"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a8139c4038f55829f6c5e817fb68a76da)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a8139c4038f55829f6c5e817fb68a76da"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a3e82e738491ecf91e83227d2fe0160a8)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a3e82e738491ecf91e83227d2fe0160a8"></a>

Checks whether PortalId_Optional has been set.

#### `public inline void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a4fe17f8c514731bee06781d595d2b6b2)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a4fe17f8c514731bee06781d595d2b6b2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a948627162fd185415f07a07f1d50e30e)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a948627162fd185415f07a07f1d50e30e"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a0d19792768a556d99a8fb9e024de4b0d)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a0d19792768a556d99a8fb9e024de4b0d"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1aa520ca30368a58ba5a88aa5c2ceaea30)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1aa520ca30368a58ba5a88aa5c2ceaea30"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a5e44fbc6f29e10416f5e7e48fa2f7932)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a5e44fbc6f29e10416f5e7e48fa2f7932"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a3d390dc6b1b1d9f07b24503a37e72b0c)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a3d390dc6b1b1d9f07b24503a37e72b0c"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a311b7dc096ad9e69cf15099c5d02ab39)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a311b7dc096ad9e69cf15099c5d02ab39"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ae2f22cdb58b5a0b9233830ece712854f)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ae2f22cdb58b5a0b9233830ece712854f"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a893d162024fa61b9e61018dd81321ae5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a893d162024fa61b9e61018dd81321ae5"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a5c3a8e9e148156208c2c803bae32ba71)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a5c3a8e9e148156208c2c803bae32ba71"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a00a636e1ce0ff41e54251e609dda9a09)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a00a636e1ce0ff41e54251e609dda9a09"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a7209765ff04aab216bb4af3f9a3edfc6)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a7209765ff04aab216bb4af3f9a3edfc6"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a8a360d9e177b4cadacda59faa2b31b2c)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a8a360d9e177b4cadacda59faa2b31b2c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a20b4d3856826700ef108fcbd7d1236fe)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a20b4d3856826700ef108fcbd7d1236fe"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a302f2d7ad75828994bca523d5ebc3b54)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a302f2d7ad75828994bca523d5ebc3b54"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a560564f161d2a71743f670744fdf76a9)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a560564f161d2a71743f670744fdf76a9"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1ada3c0d53b83cbf92b19f873ace14e2a0)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ada3c0d53b83cbf92b19f873ace14e2a0"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a994dbfa3d7e18416f477dd724e0157f0)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a994dbfa3d7e18416f477dd724e0157f0"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a473bce247c701d4539acd2907aa60427)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a473bce247c701d4539acd2907aa60427"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a6b488748f493adb371cead9f59fb012b)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a6b488748f493adb371cead9f59fb012b"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a44b66417cc5e585cd4d20b5e65522c0f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a44b66417cc5e585cd4d20b5e65522c0f"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a449da74d631549bb3d3b3c84029de792)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a449da74d631549bb3d3b3c84029de792"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1ab576515ec19320beeb92929926e74ee4)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ab576515ec19320beeb92929926e74ee4"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a33ec4db23a8449bb2b5f9de0f1513965)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a33ec4db23a8449bb2b5f9de0f1513965"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1ae61ce58d135059de40f6e4a8298949a7)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ae61ce58d135059de40f6e4a8298949a7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateInput_1ae82df98fc4eb8ef64129ebab147be61b)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ae82df98fc4eb8ef64129ebab147be61b"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a95bcb2e1d275370a1d9dc2dc4dade9bd)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a95bcb2e1d275370a1d9dc2dc4dade9bd"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a8a0f1c7d210d913a763a280b9c4b0d57)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a8a0f1c7d210d913a763a280b9c4b0d57"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1af0413c90bb6daea35aff7a9d87047a18)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1af0413c90bb6daea35aff7a9d87047a18"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1ac009c88391a4518ad144209b681c2f5e)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ac009c88391a4518ad144209b681c2f5e"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a46a279b9c4c995ed8f6a714d58f4891a)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a46a279b9c4c995ed8f6a714d58f4891a"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a62cd553f138748ed02bdaea3fbf2479c)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a62cd553f138748ed02bdaea3fbf2479c"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a9a4913c1f020afa8e8b6752d458e284f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a9a4913c1f020afa8e8b6752d458e284f"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a633e5a2a05e853b2c352a1d9b9eb9ee4)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a633e5a2a05e853b2c352a1d9b9eb9ee4"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateInput_1aa466cc85fc45ad8941e28ac83c0ce3ba)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1aa466cc85fc45ad8941e28ac83c0ce3ba"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreateInput_1adcc9c9ce1a810c734e6b4476281f1b74)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1adcc9c9ce1a810c734e6b4476281f1b74"></a>

Checks whether MatchId_Optional has been set.

#### `public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a2b033a45042a552b3fcaa0cb490e0492)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a2b033a45042a552b3fcaa0cb490e0492"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateInput_1ae3e24064f2b35e6ad4c322ddf0f14e1c)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ae3e24064f2b35e6ad4c322ddf0f14e1c"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a5420d79cfbff7b9e95e6fc984dae6834)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a5420d79cfbff7b9e95e6fc984dae6834"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a61637fadf64c96768797a73f14d4e220)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a61637fadf64c96768797a73f14d4e220"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a6ceb6fe5765add352ef75c18889e84c2)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a6ceb6fe5765add352ef75c18889e84c2"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a219bb1a9731dd5d87e5375bc29f5f3fd)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a219bb1a9731dd5d87e5375bc29f5f3fd"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a5887d489ceb0cb6249084fb18f5fff78)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a5887d489ceb0cb6249084fb18f5fff78"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a2e9878cd98b85ade79541566494eb088)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a2e9878cd98b85ade79541566494eb088"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a6996eb8288f51983afa4f18f9a348ebd)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a6996eb8288f51983afa4f18f9a348ebd"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ab0e3e5c630a86b2141f51d2d069af590)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1ab0e3e5c630a86b2141f51d2d069af590"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a3acbcfeed53b5b09bc3b424aad6a1b3f)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a3acbcfeed53b5b09bc3b424aad6a1b3f"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreateInput_1ad7bb8902d1ce8c4c40b4854f29819f04)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ad7bb8902d1ce8c4c40b4854f29819f04"></a>

Checks whether IsTransaction_Optional has been set.

#### `public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreateInput_1a8e8d6e8bd58dbd4f63dde86ff76e6e42)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a8e8d6e8bd58dbd4f63dde86ff76e6e42"></a>

Returns true if IsTransaction_Optional is set and matches the default value.

#### `public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreateInput_1a25494142bc8823994c43190a70343d36)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a25494142bc8823994c43190a70343d36"></a>

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a56106610db065d254a3b681f07089b18)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a56106610db065d254a3b681f07089b18"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ae83065d05e655b1aaffcc5156d2c994a)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ae83065d05e655b1aaffcc5156d2c994a"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1af2559de316f8358d68e121af12c4c99d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1af2559de316f8358d68e121af12c4c99d"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a29f5f1f4ae21bd1cbe28a5e9a959ee3f)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a29f5f1f4ae21bd1cbe28a5e9a959ee3f"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1af11eb05aef5567242ee3e7bff2b291c1)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1af11eb05aef5567242ee3e7bff2b291c1"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1af07e53f82f38ebf513a83c33f28e717e)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1af07e53f82f38ebf513a83c33f28e717e"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1aaf01822098ac67059289b5b7e4349b73)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1aaf01822098ac67059289b5b7e4349b73"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a1e1b79c7dd4f5bdc881a407fcb9ea537)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a1e1b79c7dd4f5bdc881a407fcb9ea537"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ac93de812fb52ea6b261a76a10f53a403)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ac93de812fb52ea6b261a76a10f53a403"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreateInput_1a34a15edf6722fffae60101e3bc50946b)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a34a15edf6722fffae60101e3bc50946b"></a>

Checks whether OrderId_Optional has been set.

#### `public inline void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a03f31cefbe2cf3187853ceb6565d78de)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a03f31cefbe2cf3187853ceb6565d78de"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a1899a2795469601c8b9c087e7800e339)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a1899a2795469601c8b9c087e7800e339"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1abd457c15ce1aaa446c6d72a5e734e8d4)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1abd457c15ce1aaa446c6d72a5e734e8d4"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a300d1c069a0ca3494bfa8ca537573d52)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a300d1c069a0ca3494bfa8ca537573d52"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1ae3fb7a00a32a820468bb91f5c40912c4)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1ae3fb7a00a32a820468bb91f5c40912c4"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a225363925bc37948fb82adecf1ce1101)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a225363925bc37948fb82adecf1ce1101"></a>

Sets the value of Entries using move semantics.

