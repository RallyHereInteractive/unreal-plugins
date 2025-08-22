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
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a69d01232fdd33c22c81a5fe68af6bfff)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1ab8960d81473539069ed84e3502245c3e)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a1e1b3106fe9866d2a420c830bacf5b8c)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a1cf71149163f3485ef19edcb4d033cc3)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a580dc9c3e71d8f5fdb4d4c74cb0f127b)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a25600bfc0c7b6bf7fdfd5f81c192b9d3)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1a8a905b3b90aa3cf64592c7f0217ee896)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1afc02007c232f5c063f734b47c4393a6b)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateInput_1abaa8085ecd9b3eef573ae3ac47ae607e)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1aefecf04d0f7afba04b24a98e4ea7d19f)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1acb7fb31f55b7690d1ed937c086a71a01)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1afc4b3c15bf8f4a201c6e7ea8209aae1c)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a028373e9faf509cdd8eef9f5b8c44891)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7f2cd5e5644aa9657ba8399daad2524b)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a991779f9368e22bef244e4bbc208bc10)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1ac342d3214bb4871cfd5aa4549686efea)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1afb845a7a2cef277f424c769e05c0692a)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a710b8a849f12d3b17f04c06ec83d2c16)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1af196524f6427152e49dc5f19715f1230)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateInput_1acea82a216aba560d6bcea3ab4dda31e0)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a1e435436230fc889d984c0e4c11eddfc)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a8b80d6edcedd8eefaa18efc966e79ee7)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1ac1f3ce18d568a8633dee52642090b72d)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1aa6d2f184eb37b552c8c87963b0894975)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a3d19d7bce2e9df74e6d79d9e07267f38)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1adab77079ac199960873abf772ae07ef1)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a3e2ac72f8389250088df13e4ff5ebfa4)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a6a6f075a2f7985b2b412116ae1d8d5dd)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a8139c4038f55829f6c5e817fb68a76da)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a8467f7ce53c16f5a3c2df9bde13c4e2a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateInput_1acbab926705ac9ae2262be0af2a92674f)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a90af773e6a403918a7b706843f33448f)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a3f1e5f3250b1abe5ee1ee6c5f9dbc223)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a1c503f61c493e20f5d5d9eb8e78e7648)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a33af00bb6eb2a0dcabd930466c1fd18c)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ae5f9e17886e65770fece1f4949139cc7)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7a72892b58e685b91e92ac7e1cad3074)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1ad45d6d40352263904c8c3e510b730efa)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1affd01db8d53e37fccab5c2ca812bbde9)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a00a636e1ce0ff41e54251e609dda9a09)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1abeafbb1ebd85db362f45445a77cf4a3c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateInput_1ac413c2f4a77a2422fb5395b1124c422f)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a1b39fc6fb8a3e28da07b2c25c61a7ccb)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a027ce3ea26e784466d487f93d26f78e5)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a1924f7d026c109136cd6802e5caba507)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a55fd00f46b61527117e2df69051e5e4e)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1abe62ac0133993717863d4d86190c51ce)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1afe4765d06abbe466db82a6311263342d)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1aa842d6be7f87530600b5b845d6975a19)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1aae1c5c1e789445e9c444f33bfa182c2a)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1ab576515ec19320beeb92929926e74ee4)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a4fc913a9f881749e5743627d3f0a0527)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a9fd359e1ab731608923e2b49aa66339b)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a33c0630160dadc0dd0b76a3f67463268)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1af3b1c8d8c5ff4310d2c75b0539308615)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a3600587db8b40958b1ffc251f3961f68)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1ab74a864593c589417cf433295ab5ecdd)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a16e2d9ecf34d47a6e22cefda1f0e319a)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ae0c71df2812985e7e49f0d8ee6463e7e)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a1fbaa63020c7a6e7a2db1fee42f8d51d)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a9eefab69f5e76bd206d74abb4d355d74)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateInput_1aa466cc85fc45ad8941e28ac83c0ce3ba)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1af836af6fa29b6dc361b61a673e1743d2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a8240538cef686f85726fdc414c8d031a)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ade3bd89f1fb46361e1efc0f87f9990a8)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ae40b8e2e72177cab0d7444bd24087b35)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a06dec1c8838a6fda71df31c4e5be281c)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a6ed32287e90d60598207a3e887bf381a)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ac1d0bf83eba1bfde6f8c2c5568a7a013)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a78ddca61d12fa44c915fdd6971758de3)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ac0b8dd43da6acf9bc7c23ee0de924d8c)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a21b2bfa3f8851bbabd6a219ec91bc64d)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a3acbcfeed53b5b09bc3b424aad6a1b3f)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a5f21e6b8edb5fa9b15f201b5e5d38cea)`()` | Returns the default value of IsTransaction.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a0e52f2e83f67a179796e41dae7ef155e)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a22f588561f9508c55fcd97bb94d7315e)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a28b0fd7c46ef0a7299abc2d51bef89ca)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a10fc355d8b7cc92ea7beee1d1ce780ee)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7efa7a18e95fd3d85fc8b70dcd909cc6)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a254ce37ddf0aab8648c00283b42b525d)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a4d416fac7259c52dcd2a13332049a0c5)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ac47efb54eb3a972105b615beb826e185)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ac93de812fb52ea6b261a76a10f53a403)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a56d984cf3a78fb878ed65e6ded4c1b9f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a88f625ae50321178ddae7ecddaa07723)`() const` | Checks whether OrderId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1aedf6862c381f4f694984a4d32e26bc68)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a3bafd514cb0aa45ee306d33eb64486d6)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1aa2ab6fa6028b40e8563803de355faa1e)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a94699b0e6616ba4a2615f7bd0b219032)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` | Sets the value of Entries using move semantics.

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

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a69d01232fdd33c22c81a5fe68af6bfff)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a69d01232fdd33c22c81a5fe68af6bfff"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1ab8960d81473539069ed84e3502245c3e)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ab8960d81473539069ed84e3502245c3e"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a1e1b3106fe9866d2a420c830bacf5b8c)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a1e1b3106fe9866d2a420c830bacf5b8c"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateInput_1a1cf71149163f3485ef19edcb4d033cc3)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a1cf71149163f3485ef19edcb4d033cc3"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a580dc9c3e71d8f5fdb4d4c74cb0f127b)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a580dc9c3e71d8f5fdb4d4c74cb0f127b"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a25600bfc0c7b6bf7fdfd5f81c192b9d3)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a25600bfc0c7b6bf7fdfd5f81c192b9d3"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1a8a905b3b90aa3cf64592c7f0217ee896)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a8a905b3b90aa3cf64592c7f0217ee896"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateInput_1afc02007c232f5c063f734b47c4393a6b)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1afc02007c232f5c063f734b47c4393a6b"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateInput_1abaa8085ecd9b3eef573ae3ac47ae607e)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1abaa8085ecd9b3eef573ae3ac47ae607e"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1aefecf04d0f7afba04b24a98e4ea7d19f)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1aefecf04d0f7afba04b24a98e4ea7d19f"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1acb7fb31f55b7690d1ed937c086a71a01)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1acb7fb31f55b7690d1ed937c086a71a01"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1afc4b3c15bf8f4a201c6e7ea8209aae1c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1afc4b3c15bf8f4a201c6e7ea8209aae1c"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a028373e9faf509cdd8eef9f5b8c44891)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a028373e9faf509cdd8eef9f5b8c44891"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7f2cd5e5644aa9657ba8399daad2524b)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a7f2cd5e5644aa9657ba8399daad2524b"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a991779f9368e22bef244e4bbc208bc10)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a991779f9368e22bef244e4bbc208bc10"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1ac342d3214bb4871cfd5aa4549686efea)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1ac342d3214bb4871cfd5aa4549686efea"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1afb845a7a2cef277f424c769e05c0692a)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1afb845a7a2cef277f424c769e05c0692a"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateInput_1a710b8a849f12d3b17f04c06ec83d2c16)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a710b8a849f12d3b17f04c06ec83d2c16"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1af196524f6427152e49dc5f19715f1230)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1af196524f6427152e49dc5f19715f1230"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateInput_1acea82a216aba560d6bcea3ab4dda31e0)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1acea82a216aba560d6bcea3ab4dda31e0"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a1e435436230fc889d984c0e4c11eddfc)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a1e435436230fc889d984c0e4c11eddfc"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a8b80d6edcedd8eefaa18efc966e79ee7)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a8b80d6edcedd8eefaa18efc966e79ee7"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1ac1f3ce18d568a8633dee52642090b72d)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ac1f3ce18d568a8633dee52642090b72d"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1aa6d2f184eb37b552c8c87963b0894975)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1aa6d2f184eb37b552c8c87963b0894975"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a3d19d7bce2e9df74e6d79d9e07267f38)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a3d19d7bce2e9df74e6d79d9e07267f38"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1adab77079ac199960873abf772ae07ef1)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1adab77079ac199960873abf772ae07ef1"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a3e2ac72f8389250088df13e4ff5ebfa4)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a3e2ac72f8389250088df13e4ff5ebfa4"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a6a6f075a2f7985b2b412116ae1d8d5dd)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a6a6f075a2f7985b2b412116ae1d8d5dd"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateInput_1a8139c4038f55829f6c5e817fb68a76da)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a8139c4038f55829f6c5e817fb68a76da"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a8467f7ce53c16f5a3c2df9bde13c4e2a)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a8467f7ce53c16f5a3c2df9bde13c4e2a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateInput_1acbab926705ac9ae2262be0af2a92674f)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1acbab926705ac9ae2262be0af2a92674f"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a90af773e6a403918a7b706843f33448f)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a90af773e6a403918a7b706843f33448f"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a3f1e5f3250b1abe5ee1ee6c5f9dbc223)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a3f1e5f3250b1abe5ee1ee6c5f9dbc223"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a1c503f61c493e20f5d5d9eb8e78e7648)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a1c503f61c493e20f5d5d9eb8e78e7648"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a33af00bb6eb2a0dcabd930466c1fd18c)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a33af00bb6eb2a0dcabd930466c1fd18c"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ae5f9e17886e65770fece1f4949139cc7)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ae5f9e17886e65770fece1f4949139cc7"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7a72892b58e685b91e92ac7e1cad3074)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a7a72892b58e685b91e92ac7e1cad3074"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1ad45d6d40352263904c8c3e510b730efa)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1ad45d6d40352263904c8c3e510b730efa"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1affd01db8d53e37fccab5c2ca812bbde9)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1affd01db8d53e37fccab5c2ca812bbde9"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateInput_1a00a636e1ce0ff41e54251e609dda9a09)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a00a636e1ce0ff41e54251e609dda9a09"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1abeafbb1ebd85db362f45445a77cf4a3c)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1abeafbb1ebd85db362f45445a77cf4a3c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateInput_1ac413c2f4a77a2422fb5395b1124c422f)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ac413c2f4a77a2422fb5395b1124c422f"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a1b39fc6fb8a3e28da07b2c25c61a7ccb)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a1b39fc6fb8a3e28da07b2c25c61a7ccb"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a027ce3ea26e784466d487f93d26f78e5)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a027ce3ea26e784466d487f93d26f78e5"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a1924f7d026c109136cd6802e5caba507)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a1924f7d026c109136cd6802e5caba507"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1a55fd00f46b61527117e2df69051e5e4e)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a55fd00f46b61527117e2df69051e5e4e"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1abe62ac0133993717863d4d86190c51ce)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1abe62ac0133993717863d4d86190c51ce"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1afe4765d06abbe466db82a6311263342d)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1afe4765d06abbe466db82a6311263342d"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1aa842d6be7f87530600b5b845d6975a19)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1aa842d6be7f87530600b5b845d6975a19"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1aae1c5c1e789445e9c444f33bfa182c2a)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1aae1c5c1e789445e9c444f33bfa182c2a"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateInput_1ab576515ec19320beeb92929926e74ee4)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ab576515ec19320beeb92929926e74ee4"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a4fc913a9f881749e5743627d3f0a0527)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a4fc913a9f881749e5743627d3f0a0527"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a9fd359e1ab731608923e2b49aa66339b)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a9fd359e1ab731608923e2b49aa66339b"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a33c0630160dadc0dd0b76a3f67463268)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a33c0630160dadc0dd0b76a3f67463268"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1af3b1c8d8c5ff4310d2c75b0539308615)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1af3b1c8d8c5ff4310d2c75b0539308615"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a3600587db8b40958b1ffc251f3961f68)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a3600587db8b40958b1ffc251f3961f68"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1ab74a864593c589417cf433295ab5ecdd)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1ab74a864593c589417cf433295ab5ecdd"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a16e2d9ecf34d47a6e22cefda1f0e319a)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a16e2d9ecf34d47a6e22cefda1f0e319a"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ae0c71df2812985e7e49f0d8ee6463e7e)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ae0c71df2812985e7e49f0d8ee6463e7e"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a1fbaa63020c7a6e7a2db1fee42f8d51d)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a1fbaa63020c7a6e7a2db1fee42f8d51d"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateInput_1a9eefab69f5e76bd206d74abb4d355d74)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a9eefab69f5e76bd206d74abb4d355d74"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateInput_1aa466cc85fc45ad8941e28ac83c0ce3ba)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1aa466cc85fc45ad8941e28ac83c0ce3ba"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1af836af6fa29b6dc361b61a673e1743d2)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1af836af6fa29b6dc361b61a673e1743d2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a8240538cef686f85726fdc414c8d031a)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a8240538cef686f85726fdc414c8d031a"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ade3bd89f1fb46361e1efc0f87f9990a8)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ade3bd89f1fb46361e1efc0f87f9990a8"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ae40b8e2e72177cab0d7444bd24087b35)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1ae40b8e2e72177cab0d7444bd24087b35"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a06dec1c8838a6fda71df31c4e5be281c)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a06dec1c8838a6fda71df31c4e5be281c"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a6ed32287e90d60598207a3e887bf381a)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a6ed32287e90d60598207a3e887bf381a"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1ac1d0bf83eba1bfde6f8c2c5568a7a013)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ac1d0bf83eba1bfde6f8c2c5568a7a013"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a78ddca61d12fa44c915fdd6971758de3)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a78ddca61d12fa44c915fdd6971758de3"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1ac0b8dd43da6acf9bc7c23ee0de924d8c)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1ac0b8dd43da6acf9bc7c23ee0de924d8c"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a21b2bfa3f8851bbabd6a219ec91bc64d)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a21b2bfa3f8851bbabd6a219ec91bc64d"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a3acbcfeed53b5b09bc3b424aad6a1b3f)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a3acbcfeed53b5b09bc3b424aad6a1b3f"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrderCreateInput_1a5f21e6b8edb5fa9b15f201b5e5d38cea)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a5f21e6b8edb5fa9b15f201b5e5d38cea"></a>

Returns the default value of IsTransaction.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a0e52f2e83f67a179796e41dae7ef155e)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a0e52f2e83f67a179796e41dae7ef155e"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a22f588561f9508c55fcd97bb94d7315e)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a22f588561f9508c55fcd97bb94d7315e"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a28b0fd7c46ef0a7299abc2d51bef89ca)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a28b0fd7c46ef0a7299abc2d51bef89ca"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a10fc355d8b7cc92ea7beee1d1ce780ee)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateInput_1a10fc355d8b7cc92ea7beee1d1ce780ee"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a7efa7a18e95fd3d85fc8b70dcd909cc6)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a7efa7a18e95fd3d85fc8b70dcd909cc6"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateInput_1a254ce37ddf0aab8648c00283b42b525d)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a254ce37ddf0aab8648c00283b42b525d"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1a4d416fac7259c52dcd2a13332049a0c5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a4d416fac7259c52dcd2a13332049a0c5"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ac47efb54eb3a972105b615beb826e185)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1ac47efb54eb3a972105b615beb826e185"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateInput_1ac93de812fb52ea6b261a76a10f53a403)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1ac93de812fb52ea6b261a76a10f53a403"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateInput_1a56d984cf3a78fb878ed65e6ded4c1b9f)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1a56d984cf3a78fb878ed65e6ded4c1b9f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateInput_1a88f625ae50321178ddae7ecddaa07723)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a88f625ae50321178ddae7ecddaa07723"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1aedf6862c381f4f694984a4d32e26bc68)`()` <a id="structFRHAPI__PlayerOrderCreateInput_1aedf6862c381f4f694984a4d32e26bc68"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a3bafd514cb0aa45ee306d33eb64486d6)`() const` <a id="structFRHAPI__PlayerOrderCreateInput_1a3bafd514cb0aa45ee306d33eb64486d6"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1aa2ab6fa6028b40e8563803de355faa1e)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1aa2ab6fa6028b40e8563803de355faa1e"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateInput_1a94699b0e6616ba4a2615f7bd0b219032)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreateInput_1a94699b0e6616ba4a2615f7bd0b219032"></a>

Sets the value of Entries using move semantics.

