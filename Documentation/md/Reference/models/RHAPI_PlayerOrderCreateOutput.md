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
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a157faf02a1f0002645e18373e53350df)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a1c2fc0728f85d033c51b1536bbb5d25b)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a503f91c9c2c279ba1054d701c25cf147)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ad11f22a7efd5f11f87e741ff4394ee62)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ab08c6f44fbd9ea7d935e9749dad489ea)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ac6b9f50f0e810626ceb9174a25ec6454)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ad1290c1ac3aaaed73e0d31819e32b40a)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ab6d7abbf45413ae465f928931cec58d5)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateOutput_1a4ad8a74b52130724bc37906879f24de8)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ab822acc1062406415848895bee370675)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a90c870406acec3f745baa86470d8944e)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1af537f4cf136bda3dcb5d2d0499855db2)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a2d23ee11ee22b609a60bf493d5dd9546)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a8b689315081b53ffe4db0069e9bc3304)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9b9bcea0826164541c47ec7272e5b030)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ae740a32ab73d03849470270694d11e51)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ae2e59faafdf13261bfb92dead5935d16)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a99f2806eeb0e83d14b41a622ad20e924)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a866f32bc2cc35622ee234e6da449b6f2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1ae6fa74e411e1ce81f1273543af6ee150)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a1a9e2197b2f246933c15f1a5558ed571)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1ac0139be8ee837663e00af36d988326de)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a1fa23644dfbbf3a67c8c581394c837fe)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a6c4d505ff7f36071f49ed70d209544c6)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4c4f2fd045fac0337dfce3b5f31fd2f9)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a309614b28d6f4c8fd2eb940009f2988b)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a2e5c92976d5d13e02fc55419810c12d5)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a4313e4d857025794add74588d15413b4)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a030ef38e2ec2764eea65c49f15d2ec06)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a1d59e77500ef905ce56303be472c75c6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a663a952d178e681ef9d9926c0800068a)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a75b462befc5b3b131bb45c75bf91429c)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a21ba4d0803317f00d1a1d05f0f1f882f)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a25f25c417d62bc1826cc01daf51701a4)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1ac0498ecffe54b6fb49926f7b7c87e582)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4cd7a6bff64ebdd8be15cad044c84d9e)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a01d8516be8a9d645b0b917da8c049bfc)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a582406ec546661e462d0bad08ea35a16)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1aef6c900194f6b8fc0902c74d5459f55c)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1ae15e58d848d19e579fe02bc369bb8371)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1af4a209b5eef5e7f411ef3b7bff513323)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1aabd6cd0249188838b7f2430ba024ced5)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ac8a9a193149731c642266224669328c4)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a2a665209de034734ced309319576138d)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a9c37c64914b84ce66398597d4d9510a5)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a4d2183c0ebbe093854db78ca79b70ea8)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a84ba3b04d9776a6938facce9367361de)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ad8e88281493293b529efafcd5ae918c7)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a0cd1d19a12b1ebba37a8cbfe18f7272f)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a2d289bc8f59537747006f4442a1288c3)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ae31ba082e5e028560128df80c8d394a0)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1af2a5801a8a01e21ae4ce20f5037f0b03)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a0e71163ed13cce575c5ea5ff475b37cf)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a9e8cdd11848725f7e76a3bff94684fc1)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1af200b46cc78bf6a30d5702181b6f8b21)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a90674d4433e37db9db8809ce5d64994e)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aef422e240e25b66a71cb51372889ebe3)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa76ba910528027ddca4d93993a0040b6)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ad13f58cfe1bc20705b1cbf66f513a90e)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a7c4fcdc3c78e3f5ec4221d5c1161afc1)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1afd5bba6b6a6226897b84f618875898b3)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aff477ae3ab9bd609f7a7c00c3e38eb6a)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1acb1a1956d78960857fb92a959be8edbc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1ab43da82021d1c9e5448855e9ff9a38fe)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a9c26e9431262725f50a1be7b23d98e0d)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1adf37c579f1fe8b569ad8426f77348a6e)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ab401fec253ef99b15e98d264ba62a9fd)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a77ea89fc1e6a61700972584281a5f255)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a2165682efc77ca0c7522cfad589e83d9)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9aad02586e9970d062a36aff440f8dec)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ada83fb08f3b7b9d504d8b185447a4f17)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a4477548c5ccc4d9b784328c50038a536)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ae711d796890d7e8f2f994198c0540907)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a50d1b4fcc0cd171dfb3283e03055eb8f)`()` | Returns the default value of IsTransaction.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a661a28504c6cf431cc6a048deaf66704)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1ac96a77b86175ac28a0229e59491743e3)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a307ebe1f8d09cd4945d6fe14b4ae0dae)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a80bb7f4a46ae109de8e31241d6684414)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4f6b3b8cfb2d866f6b7d93b11127d02b)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a144cf9e6a365660c9628afe6ccdba725)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1aef2d6ecc980dcf3df9586a2bd1bed5e9)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1afea849987005beebb7304227e8a35286)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a41202ebab97b96a576ccb3710c486d5c)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa0a15b6542b106d1f232aad403bfd684)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4fa9b35cf9164c9a6b37a3eeaf0b8068)`() const` | Checks whether OrderId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1a52016272ad9f595922b3f37a7b731bb3)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ad85f63077494184470510a4e7dbb2db9)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ab4f840f51211d490e6685276df5bf31d)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ad27f2aa6a7965fdf828292ada947ee5c)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > && NewValue)` | Sets the value of Entries using move semantics.

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

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a157faf02a1f0002645e18373e53350df)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a157faf02a1f0002645e18373e53350df"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a1c2fc0728f85d033c51b1536bbb5d25b)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a1c2fc0728f85d033c51b1536bbb5d25b"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1a503f91c9c2c279ba1054d701c25cf147)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a503f91c9c2c279ba1054d701c25cf147"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ad11f22a7efd5f11f87e741ff4394ee62)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad11f22a7efd5f11f87e741ff4394ee62"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ab08c6f44fbd9ea7d935e9749dad489ea)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab08c6f44fbd9ea7d935e9749dad489ea"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ac6b9f50f0e810626ceb9174a25ec6454)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac6b9f50f0e810626ceb9174a25ec6454"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ad1290c1ac3aaaed73e0d31819e32b40a)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad1290c1ac3aaaed73e0d31819e32b40a"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateOutput_1ab6d7abbf45413ae465f928931cec58d5)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab6d7abbf45413ae465f928931cec58d5"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateOutput_1a4ad8a74b52130724bc37906879f24de8)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4ad8a74b52130724bc37906879f24de8"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ab822acc1062406415848895bee370675)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab822acc1062406415848895bee370675"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a90c870406acec3f745baa86470d8944e)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a90c870406acec3f745baa86470d8944e"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1af537f4cf136bda3dcb5d2d0499855db2)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1af537f4cf136bda3dcb5d2d0499855db2"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a2d23ee11ee22b609a60bf493d5dd9546)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a2d23ee11ee22b609a60bf493d5dd9546"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a8b689315081b53ffe4db0069e9bc3304)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a8b689315081b53ffe4db0069e9bc3304"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9b9bcea0826164541c47ec7272e5b030)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9b9bcea0826164541c47ec7272e5b030"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ae740a32ab73d03849470270694d11e51)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae740a32ab73d03849470270694d11e51"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1ae2e59faafdf13261bfb92dead5935d16)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae2e59faafdf13261bfb92dead5935d16"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateOutput_1a99f2806eeb0e83d14b41a622ad20e924)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a99f2806eeb0e83d14b41a622ad20e924"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a866f32bc2cc35622ee234e6da449b6f2)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a866f32bc2cc35622ee234e6da449b6f2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1ae6fa74e411e1ce81f1273543af6ee150)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae6fa74e411e1ce81f1273543af6ee150"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a1a9e2197b2f246933c15f1a5558ed571)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a1a9e2197b2f246933c15f1a5558ed571"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1ac0139be8ee837663e00af36d988326de)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac0139be8ee837663e00af36d988326de"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a1fa23644dfbbf3a67c8c581394c837fe)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a1fa23644dfbbf3a67c8c581394c837fe"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a6c4d505ff7f36071f49ed70d209544c6)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a6c4d505ff7f36071f49ed70d209544c6"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4c4f2fd045fac0337dfce3b5f31fd2f9)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4c4f2fd045fac0337dfce3b5f31fd2f9"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a309614b28d6f4c8fd2eb940009f2988b)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a309614b28d6f4c8fd2eb940009f2988b"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a2e5c92976d5d13e02fc55419810c12d5)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a2e5c92976d5d13e02fc55419810c12d5"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a4313e4d857025794add74588d15413b4)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4313e4d857025794add74588d15413b4"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateOutput_1a030ef38e2ec2764eea65c49f15d2ec06)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a030ef38e2ec2764eea65c49f15d2ec06"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1a1d59e77500ef905ce56303be472c75c6)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a1d59e77500ef905ce56303be472c75c6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a663a952d178e681ef9d9926c0800068a)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a663a952d178e681ef9d9926c0800068a"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a75b462befc5b3b131bb45c75bf91429c)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a75b462befc5b3b131bb45c75bf91429c"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a21ba4d0803317f00d1a1d05f0f1f882f)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a21ba4d0803317f00d1a1d05f0f1f882f"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a25f25c417d62bc1826cc01daf51701a4)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a25f25c417d62bc1826cc01daf51701a4"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1ac0498ecffe54b6fb49926f7b7c87e582)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac0498ecffe54b6fb49926f7b7c87e582"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4cd7a6bff64ebdd8be15cad044c84d9e)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4cd7a6bff64ebdd8be15cad044c84d9e"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a01d8516be8a9d645b0b917da8c049bfc)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a01d8516be8a9d645b0b917da8c049bfc"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1a582406ec546661e462d0bad08ea35a16)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a582406ec546661e462d0bad08ea35a16"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1aef6c900194f6b8fc0902c74d5459f55c)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1aef6c900194f6b8fc0902c74d5459f55c"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateOutput_1ae15e58d848d19e579fe02bc369bb8371)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae15e58d848d19e579fe02bc369bb8371"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1af4a209b5eef5e7f411ef3b7bff513323)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1af4a209b5eef5e7f411ef3b7bff513323"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1aabd6cd0249188838b7f2430ba024ced5)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1aabd6cd0249188838b7f2430ba024ced5"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ac8a9a193149731c642266224669328c4)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac8a9a193149731c642266224669328c4"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a2a665209de034734ced309319576138d)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a2a665209de034734ced309319576138d"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a9c37c64914b84ce66398597d4d9510a5)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9c37c64914b84ce66398597d4d9510a5"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a4d2183c0ebbe093854db78ca79b70ea8)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4d2183c0ebbe093854db78ca79b70ea8"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a84ba3b04d9776a6938facce9367361de)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a84ba3b04d9776a6938facce9367361de"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ad8e88281493293b529efafcd5ae918c7)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad8e88281493293b529efafcd5ae918c7"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a0cd1d19a12b1ebba37a8cbfe18f7272f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a0cd1d19a12b1ebba37a8cbfe18f7272f"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1a2d289bc8f59537747006f4442a1288c3)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a2d289bc8f59537747006f4442a1288c3"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateOutput_1ae31ba082e5e028560128df80c8d394a0)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae31ba082e5e028560128df80c8d394a0"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1af2a5801a8a01e21ae4ce20f5037f0b03)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1af2a5801a8a01e21ae4ce20f5037f0b03"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a0e71163ed13cce575c5ea5ff475b37cf)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a0e71163ed13cce575c5ea5ff475b37cf"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a9e8cdd11848725f7e76a3bff94684fc1)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9e8cdd11848725f7e76a3bff94684fc1"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1af200b46cc78bf6a30d5702181b6f8b21)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1af200b46cc78bf6a30d5702181b6f8b21"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a90674d4433e37db9db8809ce5d64994e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a90674d4433e37db9db8809ce5d64994e"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aef422e240e25b66a71cb51372889ebe3)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1aef422e240e25b66a71cb51372889ebe3"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa76ba910528027ddca4d93993a0040b6)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1aa76ba910528027ddca4d93993a0040b6"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1ad13f58cfe1bc20705b1cbf66f513a90e)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad13f58cfe1bc20705b1cbf66f513a90e"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1a7c4fcdc3c78e3f5ec4221d5c1161afc1)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a7c4fcdc3c78e3f5ec4221d5c1161afc1"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1afd5bba6b6a6226897b84f618875898b3)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1afd5bba6b6a6226897b84f618875898b3"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateOutput_1aff477ae3ab9bd609f7a7c00c3e38eb6a)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1aff477ae3ab9bd609f7a7c00c3e38eb6a"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1acb1a1956d78960857fb92a959be8edbc)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1acb1a1956d78960857fb92a959be8edbc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1ab43da82021d1c9e5448855e9ff9a38fe)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab43da82021d1c9e5448855e9ff9a38fe"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a9c26e9431262725f50a1be7b23d98e0d)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9c26e9431262725f50a1be7b23d98e0d"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1adf37c579f1fe8b569ad8426f77348a6e)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1adf37c579f1fe8b569ad8426f77348a6e"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ab401fec253ef99b15e98d264ba62a9fd)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab401fec253ef99b15e98d264ba62a9fd"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a77ea89fc1e6a61700972584281a5f255)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a77ea89fc1e6a61700972584281a5f255"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a2165682efc77ca0c7522cfad589e83d9)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a2165682efc77ca0c7522cfad589e83d9"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a9aad02586e9970d062a36aff440f8dec)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a9aad02586e9970d062a36aff440f8dec"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ada83fb08f3b7b9d504d8b185447a4f17)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ada83fb08f3b7b9d504d8b185447a4f17"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a4477548c5ccc4d9b784328c50038a536)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4477548c5ccc4d9b784328c50038a536"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1ae711d796890d7e8f2f994198c0540907)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1ae711d796890d7e8f2f994198c0540907"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrderCreateOutput_1a50d1b4fcc0cd171dfb3283e03055eb8f)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a50d1b4fcc0cd171dfb3283e03055eb8f"></a>

Returns the default value of IsTransaction.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a661a28504c6cf431cc6a048deaf66704)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a661a28504c6cf431cc6a048deaf66704"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1ac96a77b86175ac28a0229e59491743e3)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ac96a77b86175ac28a0229e59491743e3"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a307ebe1f8d09cd4945d6fe14b4ae0dae)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a307ebe1f8d09cd4945d6fe14b4ae0dae"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a80bb7f4a46ae109de8e31241d6684414)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a80bb7f4a46ae109de8e31241d6684414"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4f6b3b8cfb2d866f6b7d93b11127d02b)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4f6b3b8cfb2d866f6b7d93b11127d02b"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateOutput_1a144cf9e6a365660c9628afe6ccdba725)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a144cf9e6a365660c9628afe6ccdba725"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1aef2d6ecc980dcf3df9586a2bd1bed5e9)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1aef2d6ecc980dcf3df9586a2bd1bed5e9"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1afea849987005beebb7304227e8a35286)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1afea849987005beebb7304227e8a35286"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateOutput_1a41202ebab97b96a576ccb3710c486d5c)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a41202ebab97b96a576ccb3710c486d5c"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateOutput_1aa0a15b6542b106d1f232aad403bfd684)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1aa0a15b6542b106d1f232aad403bfd684"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateOutput_1a4fa9b35cf9164c9a6b37a3eeaf0b8068)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1a4fa9b35cf9164c9a6b37a3eeaf0b8068"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1a52016272ad9f595922b3f37a7b731bb3)`()` <a id="structFRHAPI__PlayerOrderCreateOutput_1a52016272ad9f595922b3f37a7b731bb3"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ad85f63077494184470510a4e7dbb2db9)`() const` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad85f63077494184470510a4e7dbb2db9"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ab4f840f51211d490e6685276df5bf31d)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ab4f840f51211d490e6685276df5bf31d"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateOutput_1ad27f2aa6a7965fdf828292ada947ee5c)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreateOutput_1ad27f2aa6a7965fdf828292ada947ee5c"></a>

Sets the value of Entries using move semantics.

