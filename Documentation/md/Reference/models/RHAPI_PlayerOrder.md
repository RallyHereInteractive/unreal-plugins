---
title: RHAPI_PlayerOrder
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrder`](#structFRHAPI__PlayerOrder) | Represents a Player Order.

## struct `FRHAPI_PlayerOrder` <a id="structFRHAPI__PlayerOrder"></a>

```
struct FRHAPI_PlayerOrder
  : public FRHAPI_Model
```

Represents a Player Order.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11) | 
`public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrder_1adb516ab88dc29ea925ec95aeed000a5d) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrder_1a93f828e1be48defa2a71a8d291d290e2) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrder_1aa53878daa52c5f292cf138b860f28d4d) | true if PortalId_Optional has been explicitly set to null
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623) | 
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032) | true if PortalUserId_Optional has been set to a value
`public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrder_1a7baebc79b8481b874edc29d0c1e1faf2) | true if PortalUserId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrder_1a7bf99c3db8b14fbe54cb86c16194e12b) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrder_1a05be588cdcc1436b71530a5c910df595) | true if MatchId_Optional has been explicitly set to null
`public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrder_1a675a03c8fb3c2d8c805887b9201981ee) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrder_1a30482ee87d4cb50c608290e43f3308de) | true if IsTransaction_Optional has been set to a value
`public FString `[`OrderId`](#structFRHAPI__PlayerOrder_1a55713f9bf6e90b0a2e260f7c2caa60d1) | Unique Identifier for the Order.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerOrder_1ab334dc4e5f3db2677c6f7bc63f2faf2d) | Player UUID of the Player this Player Order belongs to.
`public FDateTime `[`CreatedTime`](#structFRHAPI__PlayerOrder_1a64a7756cf64cbb16bba72c743e6d4e40) | Time the Player Order was created.
`public TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > `[`Entries`](#structFRHAPI__PlayerOrder_1a7a45cd58f0b7dfc940fbdb45af46caa7) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrder_1a920d6b691d52153c6acf20cb9c15495f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrder_1a0ff401fc1747149bcdae1eacc50d86bd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1aff3e7277026ae2470bdfdee79433defe)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a5b8387557b65d9dc79c5bc196821ea00)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a7c8dc200b8cb488291a17576fdfcedb4)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrder_1aaa77808af9942282b6e1dd82d560841c)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1ac8705645690163b099c3ab59f65eedd7)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1aae8198d6c086a5b642f08987bd8a2867)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrder_1ae7071b971f60ed8bb9ae60e1f5b8bae8)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrder_1a8f91f3fe2cf5017e0bf8bc592be718fd)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a506ae23951ede440f3f2dd60523a5eaf)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a095cac2c318518be00d97a334ba5a5d3)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a1cfe097265b433ba58ea0edbe5d9c2c0)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a350791fc62c633b6e62ec13beddd8e21)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a35b0488b2f8df78d16160b1fa02b547c)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a4a571a48aee99a680dbddb3d2ea58f37)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a31419d28671cc30e430e42a32144410c)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a13da9576cdcdbedc3d1a9c2b37f484f3)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrder_1a083f7af25b620672d66693c54ed92ca9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrder_1aa4303e6e6cc83a33c98409d99132058c)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1ac032e92fb2496deb62dfda9749c631a7)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a7351fef2ab027c33fa508e1c8c66527e)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1adcb9eb3460a92f9a60e4488060c12e9b)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a82b9bdeee8fa3b8265920d91b02d5215)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1a4aed5869800d572509eb578c37bc8644)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1a78ea67225259c2a2634ff9c1c6c251bb)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a8b96f2eaf8aa0feb439aaa35248bec6a)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a76f6da1ed7623f33dd9b4c6d877ff75b)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrder_1aa43aa5249fdcb29eb6029f30766a7039)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrder_1a2fcfc7d5edf9a899824b1816cf22e967)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ae1960c7f314fe30acc754ebbe53efaf2)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1592129fb7e5f54fc5fec0ff566d96cc)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ade95aca710c67e48961acf025b764f29)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ad56e1f145967cc0858773c3b3f8facc0)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1ae66b290ca1a8fe73741ca710901cc856)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1af999b61fc86713d02aec94453c5208ea)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a01e1a671ce303afb2e40c67b85b7f14b)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1abab0a2cd22ad2830b3f41c40547adca4)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrder_1a3a67e16b99afaa88706644ce8f105d45)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrder_1a5cf9e259e35b6126e496ab3e1d846c2b)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a93941b88ea555cc54e30ff200cf33f62)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a02dc3d36fe791c1ce0af8a7bfd3f8fd9)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1aeef1d832b5f96685072fe0253df51df9)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1ae944a0500e2e14d9e9c799eb02fa0a4c)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1a933a97938d1902b87a379c42ebcb3aa3)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1ae799f78da4fd8db11d27b8cbaec82b62)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1a8c14a3e0f91ee83596618cefa9479117)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1ad6a3ff643b8d660449deaeb060b2a716)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrder_1a1bf17e5b0a8b2fbf3858999509580ae0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrder_1ad83434904260249c7ef54bf16eecccdf)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1ac1b91c674bca412e9162eade4a973575)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1ad1a30a95a0d292acfb89bc5d5a38a4a4)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a4f6380d03319a5831b2c9d4781f49924)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrder_1aa6cd87aa04fb5efef96b53e815d86875)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1aee880227527b36874cad9be4a88cea85)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1a40cbea28f9f833ab3487eb6b22ca7613)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1a1c13c451f685c21659918d60d867c4d5)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1aba908c487584255511a378fc6a363a11)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrder_1a14b0136b916edb4c3be8e24266554a23)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrder_1a88ee66468fb29023122149a74a82a536)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1ac5f166ab1d471452445ecc20d83a4141)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a7a1279a71aa195effd20a8a91f7cd1d2)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1ade4e5553252f79879b9da20468fa5d7d)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a61925c82cb3e3b19f6ef28385c040925)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a1cf4e3e9d081e12f163ec38393821eb0)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a7aa9f5c6bddf9ae50fbb1768f88f032e)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1ae7999c66b7f330efa37037145ab01984)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1acbe129bf348f44fa530cc677d0ffc132)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrder_1a9bd8a4a136318ed0033a40f7c0546837)`()` | Returns the default value of IsTransaction.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1a7017510c8c621d9a5da812b8b2eccf31)`()` | Gets the value of OrderId.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1a40ec9d1f44105a24f6c9dbe3c4ad14c3)`() const` | Gets the value of OrderId.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a0a9819b1cfb5abf913d420c6342d5329)`(const FString & NewValue)` | Sets the value of OrderId.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a3570b618d2687e30eae6305139711686)`(FString && NewValue)` | Sets the value of OrderId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1ac653fe8088af5f4c91335a6f2f4b6c4c)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1a6536597fa96384a2d81782cff314f6be)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a4c395eec084304b29010a22c1b38dc51)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1acc19b55fa385c2bee170b8e24b3adab3)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a364c81df1921f701c82745eeaffc3c0f)`()` | Gets the value of CreatedTime.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a05550cdf45036570b13f98adb64724ae)`() const` | Gets the value of CreatedTime.
`public inline FORCEINLINE void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a7efb0f15a978bac39b99150c288aa1cc)`(const FDateTime & NewValue)` | Sets the value of CreatedTime.
`public inline FORCEINLINE void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1af3faf1f2f13a56d0e1db10be249eaf9e)`(FDateTime && NewValue)` | Sets the value of CreatedTime using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1a439db53fa8e414375ba507562f6727a3)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1aa4b3b5bc5d776ce9eebd04a3e6930808)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a529d8ad49446a8b5c6a49e482e0634e7)`(const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrder_1af1b48eb426827d2aabe29b3761c82e27)`(TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11) <a id="structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b) <a id="structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e) <a id="structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab) <a id="structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrder_1adb516ab88dc29ea925ec95aeed000a5d) <a id="structFRHAPI__PlayerOrder_1adb516ab88dc29ea925ec95aeed000a5d"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrder_1a93f828e1be48defa2a71a8d291d290e2) <a id="structFRHAPI__PlayerOrder_1a93f828e1be48defa2a71a8d291d290e2"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5) <a id="structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrder_1aa53878daa52c5f292cf138b860f28d4d) <a id="structFRHAPI__PlayerOrder_1aa53878daa52c5f292cf138b860f28d4d"></a>

true if PortalId_Optional has been explicitly set to null

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623) <a id="structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623"></a>

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032) <a id="structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032"></a>

true if PortalUserId_Optional has been set to a value

#### `public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrder_1a7baebc79b8481b874edc29d0c1e1faf2) <a id="structFRHAPI__PlayerOrder_1a7baebc79b8481b874edc29d0c1e1faf2"></a>

true if PortalUserId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa) <a id="structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a) <a id="structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrder_1a7bf99c3db8b14fbe54cb86c16194e12b) <a id="structFRHAPI__PlayerOrder_1a7bf99c3db8b14fbe54cb86c16194e12b"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0) <a id="structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6) <a id="structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrder_1a05be588cdcc1436b71530a5c910df595) <a id="structFRHAPI__PlayerOrder_1a05be588cdcc1436b71530a5c910df595"></a>

true if MatchId_Optional has been explicitly set to null

#### `public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrder_1a675a03c8fb3c2d8c805887b9201981ee) <a id="structFRHAPI__PlayerOrder_1a675a03c8fb3c2d8c805887b9201981ee"></a>

If an order is a transaction, any failed entries will roll back changes from all other entries.

#### `public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrder_1a30482ee87d4cb50c608290e43f3308de) <a id="structFRHAPI__PlayerOrder_1a30482ee87d4cb50c608290e43f3308de"></a>

true if IsTransaction_Optional has been set to a value

#### `public FString `[`OrderId`](#structFRHAPI__PlayerOrder_1a55713f9bf6e90b0a2e260f7c2caa60d1) <a id="structFRHAPI__PlayerOrder_1a55713f9bf6e90b0a2e260f7c2caa60d1"></a>

Unique Identifier for the Order.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerOrder_1ab334dc4e5f3db2677c6f7bc63f2faf2d) <a id="structFRHAPI__PlayerOrder_1ab334dc4e5f3db2677c6f7bc63f2faf2d"></a>

Player UUID of the Player this Player Order belongs to.

#### `public FDateTime `[`CreatedTime`](#structFRHAPI__PlayerOrder_1a64a7756cf64cbb16bba72c743e6d4e40) <a id="structFRHAPI__PlayerOrder_1a64a7756cf64cbb16bba72c743e6d4e40"></a>

Time the Player Order was created.

#### `public TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > `[`Entries`](#structFRHAPI__PlayerOrder_1a7a45cd58f0b7dfc940fbdb45af46caa7) <a id="structFRHAPI__PlayerOrder_1a7a45cd58f0b7dfc940fbdb45af46caa7"></a>

List of Player Order Entries for the Player Order.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrder_1a920d6b691d52153c6acf20cb9c15495f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrder_1a920d6b691d52153c6acf20cb9c15495f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrder_1a0ff401fc1747149bcdae1eacc50d86bd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrder_1a0ff401fc1747149bcdae1eacc50d86bd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1aff3e7277026ae2470bdfdee79433defe)`()` <a id="structFRHAPI__PlayerOrder_1aff3e7277026ae2470bdfdee79433defe"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a5b8387557b65d9dc79c5bc196821ea00)`() const` <a id="structFRHAPI__PlayerOrder_1a5b8387557b65d9dc79c5bc196821ea00"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a7c8dc200b8cb488291a17576fdfcedb4)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a7c8dc200b8cb488291a17576fdfcedb4"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrder_1aaa77808af9942282b6e1dd82d560841c)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrder_1aaa77808af9942282b6e1dd82d560841c"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1ac8705645690163b099c3ab59f65eedd7)`()` <a id="structFRHAPI__PlayerOrder_1ac8705645690163b099c3ab59f65eedd7"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1aae8198d6c086a5b642f08987bd8a2867)`() const` <a id="structFRHAPI__PlayerOrder_1aae8198d6c086a5b642f08987bd8a2867"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrder_1ae7071b971f60ed8bb9ae60e1f5b8bae8)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrder_1ae7071b971f60ed8bb9ae60e1f5b8bae8"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrder_1a8f91f3fe2cf5017e0bf8bc592be718fd)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrder_1a8f91f3fe2cf5017e0bf8bc592be718fd"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)`()` <a id="structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a506ae23951ede440f3f2dd60523a5eaf)`()` <a id="structFRHAPI__PlayerOrder_1a506ae23951ede440f3f2dd60523a5eaf"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a095cac2c318518be00d97a334ba5a5d3)`() const` <a id="structFRHAPI__PlayerOrder_1a095cac2c318518be00d97a334ba5a5d3"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a1cfe097265b433ba58ea0edbe5d9c2c0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a1cfe097265b433ba58ea0edbe5d9c2c0"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a350791fc62c633b6e62ec13beddd8e21)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a350791fc62c633b6e62ec13beddd8e21"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a35b0488b2f8df78d16160b1fa02b547c)`()` <a id="structFRHAPI__PlayerOrder_1a35b0488b2f8df78d16160b1fa02b547c"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a4a571a48aee99a680dbddb3d2ea58f37)`() const` <a id="structFRHAPI__PlayerOrder_1a4a571a48aee99a680dbddb3d2ea58f37"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a31419d28671cc30e430e42a32144410c)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrder_1a31419d28671cc30e430e42a32144410c"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a13da9576cdcdbedc3d1a9c2b37f484f3)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrder_1a13da9576cdcdbedc3d1a9c2b37f484f3"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)`()` <a id="structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrder_1a083f7af25b620672d66693c54ed92ca9)`()` <a id="structFRHAPI__PlayerOrder_1a083f7af25b620672d66693c54ed92ca9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrder_1aa4303e6e6cc83a33c98409d99132058c)`() const` <a id="structFRHAPI__PlayerOrder_1aa4303e6e6cc83a33c98409d99132058c"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1ac032e92fb2496deb62dfda9749c631a7)`()` <a id="structFRHAPI__PlayerOrder_1ac032e92fb2496deb62dfda9749c631a7"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a7351fef2ab027c33fa508e1c8c66527e)`() const` <a id="structFRHAPI__PlayerOrder_1a7351fef2ab027c33fa508e1c8c66527e"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1adcb9eb3460a92f9a60e4488060c12e9b)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1adcb9eb3460a92f9a60e4488060c12e9b"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a82b9bdeee8fa3b8265920d91b02d5215)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a82b9bdeee8fa3b8265920d91b02d5215"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1a4aed5869800d572509eb578c37bc8644)`()` <a id="structFRHAPI__PlayerOrder_1a4aed5869800d572509eb578c37bc8644"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1a78ea67225259c2a2634ff9c1c6c251bb)`() const` <a id="structFRHAPI__PlayerOrder_1a78ea67225259c2a2634ff9c1c6c251bb"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a8b96f2eaf8aa0feb439aaa35248bec6a)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrder_1a8b96f2eaf8aa0feb439aaa35248bec6a"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a76f6da1ed7623f33dd9b4c6d877ff75b)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrder_1a76f6da1ed7623f33dd9b4c6d877ff75b"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)`()` <a id="structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrder_1aa43aa5249fdcb29eb6029f30766a7039)`()` <a id="structFRHAPI__PlayerOrder_1aa43aa5249fdcb29eb6029f30766a7039"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrder_1a2fcfc7d5edf9a899824b1816cf22e967)`() const` <a id="structFRHAPI__PlayerOrder_1a2fcfc7d5edf9a899824b1816cf22e967"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ae1960c7f314fe30acc754ebbe53efaf2)`()` <a id="structFRHAPI__PlayerOrder_1ae1960c7f314fe30acc754ebbe53efaf2"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1592129fb7e5f54fc5fec0ff566d96cc)`() const` <a id="structFRHAPI__PlayerOrder_1a1592129fb7e5f54fc5fec0ff566d96cc"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ade95aca710c67e48961acf025b764f29)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1ade95aca710c67e48961acf025b764f29"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ad56e1f145967cc0858773c3b3f8facc0)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1ad56e1f145967cc0858773c3b3f8facc0"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1ae66b290ca1a8fe73741ca710901cc856)`()` <a id="structFRHAPI__PlayerOrder_1ae66b290ca1a8fe73741ca710901cc856"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1af999b61fc86713d02aec94453c5208ea)`() const` <a id="structFRHAPI__PlayerOrder_1af999b61fc86713d02aec94453c5208ea"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a01e1a671ce303afb2e40c67b85b7f14b)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a01e1a671ce303afb2e40c67b85b7f14b"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1abab0a2cd22ad2830b3f41c40547adca4)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1abab0a2cd22ad2830b3f41c40547adca4"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)`()` <a id="structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrder_1a3a67e16b99afaa88706644ce8f105d45)`()` <a id="structFRHAPI__PlayerOrder_1a3a67e16b99afaa88706644ce8f105d45"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrder_1a5cf9e259e35b6126e496ab3e1d846c2b)`() const` <a id="structFRHAPI__PlayerOrder_1a5cf9e259e35b6126e496ab3e1d846c2b"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a93941b88ea555cc54e30ff200cf33f62)`()` <a id="structFRHAPI__PlayerOrder_1a93941b88ea555cc54e30ff200cf33f62"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a02dc3d36fe791c1ce0af8a7bfd3f8fd9)`() const` <a id="structFRHAPI__PlayerOrder_1a02dc3d36fe791c1ce0af8a7bfd3f8fd9"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1aeef1d832b5f96685072fe0253df51df9)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1aeef1d832b5f96685072fe0253df51df9"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1ae944a0500e2e14d9e9c799eb02fa0a4c)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1ae944a0500e2e14d9e9c799eb02fa0a4c"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1a933a97938d1902b87a379c42ebcb3aa3)`()` <a id="structFRHAPI__PlayerOrder_1a933a97938d1902b87a379c42ebcb3aa3"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1ae799f78da4fd8db11d27b8cbaec82b62)`() const` <a id="structFRHAPI__PlayerOrder_1ae799f78da4fd8db11d27b8cbaec82b62"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1a8c14a3e0f91ee83596618cefa9479117)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a8c14a3e0f91ee83596618cefa9479117"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1ad6a3ff643b8d660449deaeb060b2a716)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1ad6a3ff643b8d660449deaeb060b2a716"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)`()` <a id="structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrder_1a1bf17e5b0a8b2fbf3858999509580ae0)`()` <a id="structFRHAPI__PlayerOrder_1a1bf17e5b0a8b2fbf3858999509580ae0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrder_1ad83434904260249c7ef54bf16eecccdf)`() const` <a id="structFRHAPI__PlayerOrder_1ad83434904260249c7ef54bf16eecccdf"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1ac1b91c674bca412e9162eade4a973575)`()` <a id="structFRHAPI__PlayerOrder_1ac1b91c674bca412e9162eade4a973575"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1ad1a30a95a0d292acfb89bc5d5a38a4a4)`() const` <a id="structFRHAPI__PlayerOrder_1ad1a30a95a0d292acfb89bc5d5a38a4a4"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a4f6380d03319a5831b2c9d4781f49924)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a4f6380d03319a5831b2c9d4781f49924"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrder_1aa6cd87aa04fb5efef96b53e815d86875)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1aa6cd87aa04fb5efef96b53e815d86875"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1aee880227527b36874cad9be4a88cea85)`()` <a id="structFRHAPI__PlayerOrder_1aee880227527b36874cad9be4a88cea85"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1a40cbea28f9f833ab3487eb6b22ca7613)`() const` <a id="structFRHAPI__PlayerOrder_1a40cbea28f9f833ab3487eb6b22ca7613"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1a1c13c451f685c21659918d60d867c4d5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a1c13c451f685c21659918d60d867c4d5"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1aba908c487584255511a378fc6a363a11)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1aba908c487584255511a378fc6a363a11"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)`()` <a id="structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrder_1a14b0136b916edb4c3be8e24266554a23)`()` <a id="structFRHAPI__PlayerOrder_1a14b0136b916edb4c3be8e24266554a23"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrder_1a88ee66468fb29023122149a74a82a536)`() const` <a id="structFRHAPI__PlayerOrder_1a88ee66468fb29023122149a74a82a536"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1ac5f166ab1d471452445ecc20d83a4141)`()` <a id="structFRHAPI__PlayerOrder_1ac5f166ab1d471452445ecc20d83a4141"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a7a1279a71aa195effd20a8a91f7cd1d2)`() const` <a id="structFRHAPI__PlayerOrder_1a7a1279a71aa195effd20a8a91f7cd1d2"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1ade4e5553252f79879b9da20468fa5d7d)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1ade4e5553252f79879b9da20468fa5d7d"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a61925c82cb3e3b19f6ef28385c040925)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a61925c82cb3e3b19f6ef28385c040925"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a1cf4e3e9d081e12f163ec38393821eb0)`()` <a id="structFRHAPI__PlayerOrder_1a1cf4e3e9d081e12f163ec38393821eb0"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a7aa9f5c6bddf9ae50fbb1768f88f032e)`() const` <a id="structFRHAPI__PlayerOrder_1a7aa9f5c6bddf9ae50fbb1768f88f032e"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1ae7999c66b7f330efa37037145ab01984)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrder_1ae7999c66b7f330efa37037145ab01984"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1acbe129bf348f44fa530cc677d0ffc132)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrder_1acbe129bf348f44fa530cc677d0ffc132"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)`()` <a id="structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrder_1a9bd8a4a136318ed0033a40f7c0546837)`()` <a id="structFRHAPI__PlayerOrder_1a9bd8a4a136318ed0033a40f7c0546837"></a>

Returns the default value of IsTransaction.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1a7017510c8c621d9a5da812b8b2eccf31)`()` <a id="structFRHAPI__PlayerOrder_1a7017510c8c621d9a5da812b8b2eccf31"></a>

Gets the value of OrderId.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1a40ec9d1f44105a24f6c9dbe3c4ad14c3)`() const` <a id="structFRHAPI__PlayerOrder_1a40ec9d1f44105a24f6c9dbe3c4ad14c3"></a>

Gets the value of OrderId.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a0a9819b1cfb5abf913d420c6342d5329)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a0a9819b1cfb5abf913d420c6342d5329"></a>

Sets the value of OrderId.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a3570b618d2687e30eae6305139711686)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1a3570b618d2687e30eae6305139711686"></a>

Sets the value of OrderId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1ac653fe8088af5f4c91335a6f2f4b6c4c)`()` <a id="structFRHAPI__PlayerOrder_1ac653fe8088af5f4c91335a6f2f4b6c4c"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1a6536597fa96384a2d81782cff314f6be)`() const` <a id="structFRHAPI__PlayerOrder_1a6536597fa96384a2d81782cff314f6be"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a4c395eec084304b29010a22c1b38dc51)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrder_1a4c395eec084304b29010a22c1b38dc51"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1acc19b55fa385c2bee170b8e24b3adab3)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrder_1acc19b55fa385c2bee170b8e24b3adab3"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a364c81df1921f701c82745eeaffc3c0f)`()` <a id="structFRHAPI__PlayerOrder_1a364c81df1921f701c82745eeaffc3c0f"></a>

Gets the value of CreatedTime.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a05550cdf45036570b13f98adb64724ae)`() const` <a id="structFRHAPI__PlayerOrder_1a05550cdf45036570b13f98adb64724ae"></a>

Gets the value of CreatedTime.

#### `public inline FORCEINLINE void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a7efb0f15a978bac39b99150c288aa1cc)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrder_1a7efb0f15a978bac39b99150c288aa1cc"></a>

Sets the value of CreatedTime.

#### `public inline FORCEINLINE void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1af3faf1f2f13a56d0e1db10be249eaf9e)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrder_1af3faf1f2f13a56d0e1db10be249eaf9e"></a>

Sets the value of CreatedTime using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1a439db53fa8e414375ba507562f6727a3)`()` <a id="structFRHAPI__PlayerOrder_1a439db53fa8e414375ba507562f6727a3"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1aa4b3b5bc5d776ce9eebd04a3e6930808)`() const` <a id="structFRHAPI__PlayerOrder_1aa4b3b5bc5d776ce9eebd04a3e6930808"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a529d8ad49446a8b5c6a49e482e0634e7)`(const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & NewValue)` <a id="structFRHAPI__PlayerOrder_1a529d8ad49446a8b5c6a49e482e0634e7"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrder_1af1b48eb426827d2aabe29b3761c82e27)`(TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > && NewValue)` <a id="structFRHAPI__PlayerOrder_1af1b48eb426827d2aabe29b3761c82e27"></a>

Sets the value of Entries using move semantics.

