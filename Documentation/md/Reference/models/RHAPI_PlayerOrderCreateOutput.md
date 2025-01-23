---
title: RHAPI_PlayerOrderCreateOutput
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderCreateOutput`](#structFRHAPI__PlayerOrderCreateOutput) | Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

## struct `FRHAPI_PlayerOrderCreateOutput` <a id="structFRHAPI__PlayerOrderCreateOutput"></a>

```
struct FRHAPI_PlayerOrderCreateOutput
  : public FRHAPI_Model
```

Create a new Player Order. <b>Note: &#x60;use_inventory_bucket&#x60; will be ignored on the PlayerOrderEntryCreate if the &#x60;source&#x60; equals &#x60;CLIENT&#x60;.</b>.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a10bc6bafe5ee9d036c40ead8d17ac5a9) | 
`public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1afc0e60425d7d91d948bd1b886a4637d4) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a3fcda1333a2737eed044d1569107587f) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a0573cf55479a9c4d865712a8e631304b) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1a5f5090152fe242a926b19883a8e7d480) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1abd2226cdbc5b13bb7943ae5f0ca9313e) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a6982222566f118e366923f52008e8b00) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1aefc59320428c196b6daebe92dd90bcaa) | true if PortalId_Optional has been explicitly set to null
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a61eb70fb92634577ab48d601c73c7aa9) | 
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1ad16a87bafef0934435a52dea787365d3) | true if PortalUserId_Optional has been set to a value
`public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1a5825ec3ae1bb2541ae73b600f72e3de8) | true if PortalUserId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1aa97ffcf255d04749aed4ea70101bb10a) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1adc5e589390f03951d4113b66dfa6af8e) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1abb071e2b6d77d0b20a2cf271550a2c6f) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a143ea162eae05375e68d154cc934b569) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a79ee5faf3bcbea729a5dd69b2f9b247b) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa6fb3ea3fe2bc0ff731318b73b1fbc9e) | true if MatchId_Optional has been explicitly set to null
`public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a31ff921a5f6b1148a84fa08304dc3076) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a1c74e85b36398d5a0b9e51415f0b9eac) | true if IsTransaction_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a3d7e5637fbb1d5762c3213fa3db015b6) | 
`public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a04bf53d1c0144901e0e472279616ab7b) | true if OrderId_Optional has been set to a value
`public bool `[`OrderId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1a3106958def19e2a9704e60a790ccbb0a) | true if OrderId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > `[`Entries`](#structFRHAPI__PlayerOrderCreateOutput_1a6df0a243454429e388a36e0f080aab53) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreateOutput_1a04f675ff9569891ebb5726f12e7e7338)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreateOutput_1ac6cac933e06ab6d00c98359509b41115)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a7a94bd89955914526c6a97b6700b7629)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ae042479373a9d163804da1ee4e54850e)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a0546ca062da2f89ed4f82ed8891c770e)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1afb44780cdda43d4dd01594bd5a170920)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1abd3c397e94fd9c0d4cc38c070d958611)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1af6aa18f9255a6aff2f1d32623525cc55)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ade744cefd298c1cb868fb4bce650cd88)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a96786a310211e6c1c308ea550cbf1857)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateOutput_1a4ad8a74b52130724bc37906879f24de8)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreateOutput_1a38fbc767b6e5c4608dac6547bad89e34)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a83607d55df7933aa538401bf11a41252)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1aa1c3fd8b4c21c362bd28e6789904ab2d)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1aad1c45f8511861b430056b438b33d27b)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ad3e622dea6c7c870e871fb0276872f9d)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9827e221c2bc93c1c1d34967339e2271)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a6e814b06abba7db0af649a49dcac9e93)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a7880df8401092bd0a0f18dcdcc3eea47)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a4c4a5d496cbaccc97f5a09e05922a0f8)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a99f2806eeb0e83d14b41a622ad20e924)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a11c6a46523db1a9626f6a0467d37a4d6)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a990b482248ae5ee4c3d06a06fb295875)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a692f87ecdb4a69eed664b6426c3da826)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a4e37637bfc8d6714e28ffbef22c2266c)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1ad188b3582d7228bc8c6246e4f2d956d2)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a3494e61958a441e43aa8572b12ec80db)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a55a1ad11cbb83993807105792057a685)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a194fac63c7ca4bf7e695193370c2c5be)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1abda7b4378f67bcc40d94d88d406217a3)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1ad3c5a0f7dadfa9d67b65c3eecbc7c181)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a45581fd81ac904f59ba1cbc938de7f51)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a030ef38e2ec2764eea65c49f15d2ec06)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a536bf57302855ad71c3992e89309f85e)`() const` | Checks whether PortalId_Optional has been set.
`public inline void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a0248cd190a535cb56b16d91d7b20b625)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a28b1da72a58bd74dcee4e5cf16d27cd9)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a570e82eb25251f7001e5cefa079d2997)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a447220e79e0fc95a1cb1b3c82e8499c5)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a4bf5b9468c663fb3b1cfba19a4b1463e)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a7d2f05f0ea804093e2cfc211fa5d7a00)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9e93432bee10e3d3bd8373b45c0a07a9)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a1a927d93ca8639d844172aefb9c3654a)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a63748fbb96c354959beec2ea941739fa)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a0faf244f71d897a950c1eb48018b4729)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1ae15e58d848d19e579fe02bc369bb8371)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a6e954c11273e1df592af4876b7b813ae)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1af32086498cae00a9fabad67da4aa4b28)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a650761bbe3096b083451afefb90e2582)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ad06b5d6585ffc5da9d442d22a636daed)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a8041559ce86a4fca678577a7b84add29)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a3d1fc45ab31b876d9289c5dbd37d2129)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a07145c8fa78cc6509d0d5c12aee1ca05)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a6cd9d6c85b29f4bb3d0660236d587b55)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1acd4268b43b17906b27042341f64d4e32)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a44bae4de01981841b3253f3d5fdb6a72)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1abbabd0b8d769ea52495509e23df45f76)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ae31ba082e5e028560128df80c8d394a0)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a8f9e1e3c1ec4f52345d65a1aee0a0d34)`() const` | Checks whether InstanceId_Optional has been set.
`public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1ac8d0fa336a83dfe33c09534f8dfa287d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1af759236cd6f66a1c509661c35f0fe605)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a0dfcc7de13eae22ac4f9b9d104329065)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a9f089f960ba177eda6259cb972d72ef0)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1ac76251a049c97c38dea3aab96a06eba9)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1afa2138d52c32431ae0148897782ded48)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ac78fa746e5c12e149a5638f0de53da50)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ade8223491b34e042d9f2ee5cf91c83e3)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aa959d2a22a75d455a0ccff39c138ca11)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1ae5e2bc66e0515054158241a02cbacce7)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aff477ae3ab9bd609f7a7c00c3e38eb6a)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a8a4095800f4280cb1a017cfa2981e8ee)`() const` | Checks whether MatchId_Optional has been set.
`public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1ae365f4314d2e398a49a5396a9a59733f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a24e771d4ecc850bd57a268a0a544b960)`() const` | Checks whether MatchId_Optional is set to null.
`public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a2744f058315324a3b11496ef837a7c56)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1af09b93357ec5e3eb8d35a7c198449bae)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a44dd50422f916f13c01e77b32c540ff2)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a40eeb9d7e4688cb9c46a87827838c7b3)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a8f161f44f29852093ad61c05784f9d9b)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1adf7cbc5347b2514ce705bb9f7fb436fa)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a00eb84bd55fe81aa6115a9d437946d09)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a1a3fa9e566d15598d6c792c703c052d1)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ae711d796890d7e8f2f994198c0540907)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreateOutput_1a549537a6bfb25646b5196f64e1aff3ca)`() const` | Checks whether IsTransaction_Optional has been set.
`public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreateOutput_1aa7be04af9ba4f214ae6fc0f03e91ebe6)`() const` | Returns true if IsTransaction_Optional is set and matches the default value.
`public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreateOutput_1aed76c623fabe4fff60dc7ba7421ff7cb)`()` | Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a884ffc5cf04c3192fe1aef3c4da3dec3)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1ab5b1720056d29af9740350d27b33b483)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a6173e9bb3eaed88ba5e8ec773ff2ec6c)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a50e729ff5d75e898b4ea15f8c6f81618)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a607359c2e3387259f4c5eac00d1d6996)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a3b7eef9ed3233e18aa1369d4e4487012)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a3ed802dc074af5ec04fbaf3e52850cba)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a451e0582d4383cd85ee4a1a1a5233ff2)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a41202ebab97b96a576ccb3710c486d5c)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a94abcba6056420df80c9317b5a01cf69)`() const` | Checks whether OrderId_Optional has been set.
`public inline void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1adadbbe5cbccac30d8013376ceae3192c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa7947093aff7284eb506184c8a6d1c5e)`() const` | Checks whether OrderId_Optional is set to null.
`public inline TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1a689fbe6caca0a3113b51682953dd3f58)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ae51b84cac2a41741fa2be4947b593580)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1a52dfbabf30d98bf4ddd7e33558eb596f)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1aeaa32653fa927183d2035ebfd50058a1)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a10bc6bafe5ee9d036c40ead8d17ac5a9) <a id="structFRHAPI__PlayerOrderCreateOutput_1a10bc6bafe5ee9d036c40ead8d17ac5a9"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1afc0e60425d7d91d948bd1b886a4637d4) <a id="structFRHAPI__PlayerOrderCreateOutput_1afc0e60425d7d91d948bd1b886a4637d4"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a3fcda1333a2737eed044d1569107587f) <a id="structFRHAPI__PlayerOrderCreateOutput_1a3fcda1333a2737eed044d1569107587f"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a0573cf55479a9c4d865712a8e631304b) <a id="structFRHAPI__PlayerOrderCreateOutput_1a0573cf55479a9c4d865712a8e631304b"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1a5f5090152fe242a926b19883a8e7d480) <a id="structFRHAPI__PlayerOrderCreateOutput_1a5f5090152fe242a926b19883a8e7d480"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1abd2226cdbc5b13bb7943ae5f0ca9313e) <a id="structFRHAPI__PlayerOrderCreateOutput_1abd2226cdbc5b13bb7943ae5f0ca9313e"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a6982222566f118e366923f52008e8b00) <a id="structFRHAPI__PlayerOrderCreateOutput_1a6982222566f118e366923f52008e8b00"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1aefc59320428c196b6daebe92dd90bcaa) <a id="structFRHAPI__PlayerOrderCreateOutput_1aefc59320428c196b6daebe92dd90bcaa"></a>

true if PortalId_Optional has been explicitly set to null

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a61eb70fb92634577ab48d601c73c7aa9) <a id="structFRHAPI__PlayerOrderCreateOutput_1a61eb70fb92634577ab48d601c73c7aa9"></a>

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1ad16a87bafef0934435a52dea787365d3) <a id="structFRHAPI__PlayerOrderCreateOutput_1ad16a87bafef0934435a52dea787365d3"></a>

true if PortalUserId_Optional has been set to a value

#### `public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1a5825ec3ae1bb2541ae73b600f72e3de8) <a id="structFRHAPI__PlayerOrderCreateOutput_1a5825ec3ae1bb2541ae73b600f72e3de8"></a>

true if PortalUserId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1aa97ffcf255d04749aed4ea70101bb10a) <a id="structFRHAPI__PlayerOrderCreateOutput_1aa97ffcf255d04749aed4ea70101bb10a"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1adc5e589390f03951d4113b66dfa6af8e) <a id="structFRHAPI__PlayerOrderCreateOutput_1adc5e589390f03951d4113b66dfa6af8e"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1abb071e2b6d77d0b20a2cf271550a2c6f) <a id="structFRHAPI__PlayerOrderCreateOutput_1abb071e2b6d77d0b20a2cf271550a2c6f"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a143ea162eae05375e68d154cc934b569) <a id="structFRHAPI__PlayerOrderCreateOutput_1a143ea162eae05375e68d154cc934b569"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a79ee5faf3bcbea729a5dd69b2f9b247b) <a id="structFRHAPI__PlayerOrderCreateOutput_1a79ee5faf3bcbea729a5dd69b2f9b247b"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa6fb3ea3fe2bc0ff731318b73b1fbc9e) <a id="structFRHAPI__PlayerOrderCreateOutput_1aa6fb3ea3fe2bc0ff731318b73b1fbc9e"></a>

true if MatchId_Optional has been explicitly set to null

#### `public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a31ff921a5f6b1148a84fa08304dc3076) <a id="structFRHAPI__PlayerOrderCreateOutput_1a31ff921a5f6b1148a84fa08304dc3076"></a>

If an order is a transaction, any failed entries will roll back changes from all other entries.

#### `public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a1c74e85b36398d5a0b9e51415f0b9eac) <a id="structFRHAPI__PlayerOrderCreateOutput_1a1c74e85b36398d5a0b9e51415f0b9eac"></a>

true if IsTransaction_Optional has been set to a value

#### `public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreateOutput_1a3d7e5637fbb1d5762c3213fa3db015b6) <a id="structFRHAPI__PlayerOrderCreateOutput_1a3d7e5637fbb1d5762c3213fa3db015b6"></a>

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreateOutput_1a04bf53d1c0144901e0e472279616ab7b) <a id="structFRHAPI__PlayerOrderCreateOutput_1a04bf53d1c0144901e0e472279616ab7b"></a>

true if OrderId_Optional has been set to a value

#### `public bool `[`OrderId_IsNull`](#structFRHAPI__PlayerOrderCreateOutput_1a3106958def19e2a9704e60a790ccbb0a) <a id="structFRHAPI__PlayerOrderCreateOutput_1a3106958def19e2a9704e60a790ccbb0a"></a>

true if OrderId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > `[`Entries`](#structFRHAPI__PlayerOrderCreateOutput_1a6df0a243454429e388a36e0f080aab53) <a id="structFRHAPI__PlayerOrderCreateOutput_1a6df0a243454429e388a36e0f080aab53"></a>

List of Player Order Entries for the Player Order.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreateOutput_1a04f675ff9569891ebb5726f12e7e7338)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a04f675ff9569891ebb5726f12e7e7338"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreateOutput_1ac6cac933e06ab6d00c98359509b41115)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac6cac933e06ab6d00c98359509b41115"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a7a94bd89955914526c6a97b6700b7629)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a7a94bd89955914526c6a97b6700b7629"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ae042479373a9d163804da1ee4e54850e)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae042479373a9d163804da1ee4e54850e"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a0546ca062da2f89ed4f82ed8891c770e)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a0546ca062da2f89ed4f82ed8891c770e"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1afb44780cdda43d4dd01594bd5a170920)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1afb44780cdda43d4dd01594bd5a170920"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1abd3c397e94fd9c0d4cc38c070d958611)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1abd3c397e94fd9c0d4cc38c070d958611"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1af6aa18f9255a6aff2f1d32623525cc55)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1af6aa18f9255a6aff2f1d32623525cc55"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ade744cefd298c1cb868fb4bce650cd88)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ade744cefd298c1cb868fb4bce650cd88"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a96786a310211e6c1c308ea550cbf1857)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a96786a310211e6c1c308ea550cbf1857"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateOutput_1a4ad8a74b52130724bc37906879f24de8)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4ad8a74b52130724bc37906879f24de8"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreateOutput_1a38fbc767b6e5c4608dac6547bad89e34)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a38fbc767b6e5c4608dac6547bad89e34"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a83607d55df7933aa538401bf11a41252)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a83607d55df7933aa538401bf11a41252"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1aa1c3fd8b4c21c362bd28e6789904ab2d)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1aa1c3fd8b4c21c362bd28e6789904ab2d"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1aad1c45f8511861b430056b438b33d27b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1aad1c45f8511861b430056b438b33d27b"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ad3e622dea6c7c870e871fb0276872f9d)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad3e622dea6c7c870e871fb0276872f9d"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9827e221c2bc93c1c1d34967339e2271)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9827e221c2bc93c1c1d34967339e2271"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a6e814b06abba7db0af649a49dcac9e93)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a6e814b06abba7db0af649a49dcac9e93"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a7880df8401092bd0a0f18dcdcc3eea47)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a7880df8401092bd0a0f18dcdcc3eea47"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a4c4a5d496cbaccc97f5a09e05922a0f8)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4c4a5d496cbaccc97f5a09e05922a0f8"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a99f2806eeb0e83d14b41a622ad20e924)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a99f2806eeb0e83d14b41a622ad20e924"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a11c6a46523db1a9626f6a0467d37a4d6)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a11c6a46523db1a9626f6a0467d37a4d6"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a990b482248ae5ee4c3d06a06fb295875)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a990b482248ae5ee4c3d06a06fb295875"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a692f87ecdb4a69eed664b6426c3da826)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a692f87ecdb4a69eed664b6426c3da826"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a4e37637bfc8d6714e28ffbef22c2266c)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4e37637bfc8d6714e28ffbef22c2266c"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1ad188b3582d7228bc8c6246e4f2d956d2)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad188b3582d7228bc8c6246e4f2d956d2"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a3494e61958a441e43aa8572b12ec80db)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a3494e61958a441e43aa8572b12ec80db"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a55a1ad11cbb83993807105792057a685)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a55a1ad11cbb83993807105792057a685"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a194fac63c7ca4bf7e695193370c2c5be)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a194fac63c7ca4bf7e695193370c2c5be"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1abda7b4378f67bcc40d94d88d406217a3)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1abda7b4378f67bcc40d94d88d406217a3"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1ad3c5a0f7dadfa9d67b65c3eecbc7c181)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad3c5a0f7dadfa9d67b65c3eecbc7c181"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a45581fd81ac904f59ba1cbc938de7f51)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a45581fd81ac904f59ba1cbc938de7f51"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a030ef38e2ec2764eea65c49f15d2ec06)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a030ef38e2ec2764eea65c49f15d2ec06"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a536bf57302855ad71c3992e89309f85e)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a536bf57302855ad71c3992e89309f85e"></a>

Checks whether PortalId_Optional has been set.

#### `public inline void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a0248cd190a535cb56b16d91d7b20b625)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a0248cd190a535cb56b16d91d7b20b625"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a28b1da72a58bd74dcee4e5cf16d27cd9)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a28b1da72a58bd74dcee4e5cf16d27cd9"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a570e82eb25251f7001e5cefa079d2997)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a570e82eb25251f7001e5cefa079d2997"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a447220e79e0fc95a1cb1b3c82e8499c5)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a447220e79e0fc95a1cb1b3c82e8499c5"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a4bf5b9468c663fb3b1cfba19a4b1463e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4bf5b9468c663fb3b1cfba19a4b1463e"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a7d2f05f0ea804093e2cfc211fa5d7a00)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a7d2f05f0ea804093e2cfc211fa5d7a00"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9e93432bee10e3d3bd8373b45c0a07a9)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9e93432bee10e3d3bd8373b45c0a07a9"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a1a927d93ca8639d844172aefb9c3654a)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a1a927d93ca8639d844172aefb9c3654a"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a63748fbb96c354959beec2ea941739fa)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a63748fbb96c354959beec2ea941739fa"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a0faf244f71d897a950c1eb48018b4729)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a0faf244f71d897a950c1eb48018b4729"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1ae15e58d848d19e579fe02bc369bb8371)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae15e58d848d19e579fe02bc369bb8371"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a6e954c11273e1df592af4876b7b813ae)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a6e954c11273e1df592af4876b7b813ae"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1af32086498cae00a9fabad67da4aa4b28)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1af32086498cae00a9fabad67da4aa4b28"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a650761bbe3096b083451afefb90e2582)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a650761bbe3096b083451afefb90e2582"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ad06b5d6585ffc5da9d442d22a636daed)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad06b5d6585ffc5da9d442d22a636daed"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a8041559ce86a4fca678577a7b84add29)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a8041559ce86a4fca678577a7b84add29"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a3d1fc45ab31b876d9289c5dbd37d2129)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a3d1fc45ab31b876d9289c5dbd37d2129"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a07145c8fa78cc6509d0d5c12aee1ca05)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a07145c8fa78cc6509d0d5c12aee1ca05"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a6cd9d6c85b29f4bb3d0660236d587b55)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a6cd9d6c85b29f4bb3d0660236d587b55"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1acd4268b43b17906b27042341f64d4e32)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1acd4268b43b17906b27042341f64d4e32"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a44bae4de01981841b3253f3d5fdb6a72)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a44bae4de01981841b3253f3d5fdb6a72"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1abbabd0b8d769ea52495509e23df45f76)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1abbabd0b8d769ea52495509e23df45f76"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ae31ba082e5e028560128df80c8d394a0)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae31ba082e5e028560128df80c8d394a0"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a8f9e1e3c1ec4f52345d65a1aee0a0d34)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a8f9e1e3c1ec4f52345d65a1aee0a0d34"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1ac8d0fa336a83dfe33c09534f8dfa287d)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac8d0fa336a83dfe33c09534f8dfa287d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1af759236cd6f66a1c509661c35f0fe605)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1af759236cd6f66a1c509661c35f0fe605"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a0dfcc7de13eae22ac4f9b9d104329065)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a0dfcc7de13eae22ac4f9b9d104329065"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a9f089f960ba177eda6259cb972d72ef0)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9f089f960ba177eda6259cb972d72ef0"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1ac76251a049c97c38dea3aab96a06eba9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac76251a049c97c38dea3aab96a06eba9"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1afa2138d52c32431ae0148897782ded48)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1afa2138d52c32431ae0148897782ded48"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ac78fa746e5c12e149a5638f0de53da50)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac78fa746e5c12e149a5638f0de53da50"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ade8223491b34e042d9f2ee5cf91c83e3)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ade8223491b34e042d9f2ee5cf91c83e3"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aa959d2a22a75d455a0ccff39c138ca11)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1aa959d2a22a75d455a0ccff39c138ca11"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1ae5e2bc66e0515054158241a02cbacce7)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae5e2bc66e0515054158241a02cbacce7"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aff477ae3ab9bd609f7a7c00c3e38eb6a)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1aff477ae3ab9bd609f7a7c00c3e38eb6a"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a8a4095800f4280cb1a017cfa2981e8ee)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a8a4095800f4280cb1a017cfa2981e8ee"></a>

Checks whether MatchId_Optional has been set.

#### `public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1ae365f4314d2e398a49a5396a9a59733f)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae365f4314d2e398a49a5396a9a59733f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a24e771d4ecc850bd57a268a0a544b960)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a24e771d4ecc850bd57a268a0a544b960"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a2744f058315324a3b11496ef837a7c56)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a2744f058315324a3b11496ef837a7c56"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1af09b93357ec5e3eb8d35a7c198449bae)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1af09b93357ec5e3eb8d35a7c198449bae"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a44dd50422f916f13c01e77b32c540ff2)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a44dd50422f916f13c01e77b32c540ff2"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a40eeb9d7e4688cb9c46a87827838c7b3)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a40eeb9d7e4688cb9c46a87827838c7b3"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a8f161f44f29852093ad61c05784f9d9b)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a8f161f44f29852093ad61c05784f9d9b"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1adf7cbc5347b2514ce705bb9f7fb436fa)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1adf7cbc5347b2514ce705bb9f7fb436fa"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a00eb84bd55fe81aa6115a9d437946d09)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a00eb84bd55fe81aa6115a9d437946d09"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a1a3fa9e566d15598d6c792c703c052d1)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a1a3fa9e566d15598d6c792c703c052d1"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ae711d796890d7e8f2f994198c0540907)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae711d796890d7e8f2f994198c0540907"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreateOutput_1a549537a6bfb25646b5196f64e1aff3ca)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a549537a6bfb25646b5196f64e1aff3ca"></a>

Checks whether IsTransaction_Optional has been set.

#### `public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreateOutput_1aa7be04af9ba4f214ae6fc0f03e91ebe6)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1aa7be04af9ba4f214ae6fc0f03e91ebe6"></a>

Returns true if IsTransaction_Optional is set and matches the default value.

#### `public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreateOutput_1aed76c623fabe4fff60dc7ba7421ff7cb)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1aed76c623fabe4fff60dc7ba7421ff7cb"></a>

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a884ffc5cf04c3192fe1aef3c4da3dec3)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a884ffc5cf04c3192fe1aef3c4da3dec3"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1ab5b1720056d29af9740350d27b33b483)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab5b1720056d29af9740350d27b33b483"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a6173e9bb3eaed88ba5e8ec773ff2ec6c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a6173e9bb3eaed88ba5e8ec773ff2ec6c"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a50e729ff5d75e898b4ea15f8c6f81618)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a50e729ff5d75e898b4ea15f8c6f81618"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a607359c2e3387259f4c5eac00d1d6996)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a607359c2e3387259f4c5eac00d1d6996"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a3b7eef9ed3233e18aa1369d4e4487012)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a3b7eef9ed3233e18aa1369d4e4487012"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a3ed802dc074af5ec04fbaf3e52850cba)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a3ed802dc074af5ec04fbaf3e52850cba"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a451e0582d4383cd85ee4a1a1a5233ff2)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a451e0582d4383cd85ee4a1a1a5233ff2"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a41202ebab97b96a576ccb3710c486d5c)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a41202ebab97b96a576ccb3710c486d5c"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreateOutput_1a94abcba6056420df80c9317b5a01cf69)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a94abcba6056420df80c9317b5a01cf69"></a>

Checks whether OrderId_Optional has been set.

#### `public inline void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1adadbbe5cbccac30d8013376ceae3192c)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1adadbbe5cbccac30d8013376ceae3192c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa7947093aff7284eb506184c8a6d1c5e)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1aa7947093aff7284eb506184c8a6d1c5e"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1a689fbe6caca0a3113b51682953dd3f58)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a689fbe6caca0a3113b51682953dd3f58"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ae51b84cac2a41741fa2be4947b593580)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae51b84cac2a41741fa2be4947b593580"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1a52dfbabf30d98bf4ddd7e33558eb596f)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a52dfbabf30d98bf4ddd7e33558eb596f"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1aeaa32653fa927183d2035ebfd50058a1)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1aeaa32653fa927183d2035ebfd50058a1"></a>

Sets the value of Entries using move semantics.

