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
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11) | The source of the Player Order.
`public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e) | Arbitrary UUID clients can use to track Orders between request to response.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab) | true if ClientOrderRefId_Optional has been set to a value
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrder_1a93f828e1be48defa2a71a8d291d290e2) | Portal of the Portal User the Player Order belongs to.
`public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5) | true if PortalId_Optional has been set to a value
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623) | Portal User Id for the Player this Player Order belongs to.
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032) | true if PortalUserId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa) | Instance Id for the Instance who submits the Player Order.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a) | true if InstanceId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0) | Match Id for the Match that generated the Player Order.
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6) | true if MatchId_Optional has been set to a value
`public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrder_1a675a03c8fb3c2d8c805887b9201981ee) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrder_1a30482ee87d4cb50c608290e43f3308de) | true if IsTransaction_Optional has been set to a value
`public FString `[`OrderId`](#structFRHAPI__PlayerOrder_1a55713f9bf6e90b0a2e260f7c2caa60d1) | Unique Identifier for the Order.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerOrder_1ab334dc4e5f3db2677c6f7bc63f2faf2d) | Player UUID of the Player this Player Order belongs to.
`public FDateTime `[`CreatedTime`](#structFRHAPI__PlayerOrder_1a64a7756cf64cbb16bba72c743e6d4e40) | Time the Player Order was created.
`public TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > `[`Entries`](#structFRHAPI__PlayerOrder_1a7a45cd58f0b7dfc940fbdb45af46caa7) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrder_1a920d6b691d52153c6acf20cb9c15495f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrder_1a0ff401fc1747149bcdae1eacc50d86bd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1abfa599494898d94523d39a6637a1f269)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a3af06be30c25917783a379f288aa5bb5)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a86adc8af4cae41f20782690eb7086afe)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1afa848a494fbf237bdf0b482b74ffc153)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1af6459702d7b5b387beadb7b8cb681138)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a7b2c2183bfa019a66876c6fde6d8ef4b)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a45ad6efe7e6bc69612b6c3951feb9720)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrder_1a21d103948b3c9b5980bf757780ce4297)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a045205f39386e771094d5215c5e814b2)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1ad1254b41adf8891ae38e6c8adfa42347)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a24cfaae1e732bf6bb593160ef7514f7d)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a79ae8293c9a59fdbb889a3f3b3334bfb)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a55c816cf5d65bbaf247d24eff4faadfe)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a56c3988181db1bb7e8a03e259687631a)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a350e1cb760cc1a3b6bf5aaf76c8a820e)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrder_1aec4df0cacadf80f4c70642e1bd3f5e87)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a3ef4f8d3598d6883586338fd30e4be30)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1aea012f00dc23f62592a1e1f33c9a587c)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a2eec4f9d31bcc545b0765be02d66631d)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a1c088dc0420606c5795145b80584547a)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1a5b7936434143c49b58adf81545bb6880)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1ad0fb2a171cb80505f2bdf8690f5181b4)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a5404e592851dcb4058ec35aad479c292)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1af68eed5ee5d3128ed99e6d58649b480c)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrder_1abcd36b9d716f9fdec7455004b141a2d5)`() const` | Checks whether PortalId_Optional has been set.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ae94852f1c1a3ef00d1ae46037384f0f9)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a5c2e041bceae06fc7408977750d7035d)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1a7222dce11f9d25dfb4826e85a2bf2d)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1a56744d406f9d0f73c446cfbafa30672a)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1aaffdedb26e052a7bb11cb02aa8393df7)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a853fec3d958ee280e4dd105b9f982ff6)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a8c8d48eda93799567ba7adb653c0c503)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrder_1ab26a74d6f3985cf219867d21b64052ab)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a358c9ac4ae6ef4c657de7eb42f6756c7)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a39b4db67a728ff5f70fb2df5973b931b)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1ac052023a29ea143c273fdce9d7a1a0c3)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1aff2032c5d0c7c38c0ceb2fad4ec794e0)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1aab60062b234179611e18b1b22c0bb70a)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1a74ac71b7d08e8530acea85852b974894)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1abdb75ea5d9c95f95b56ddbd61a90c6b7)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrder_1ad993a6e776989bc6dc2ef43450f84ab1)`() const` | Checks whether InstanceId_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1aee0568fa2b79744c0a5dafe9aa896011)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1acde5f7f6a0a5222fb293ee13c7b719cd)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a8f2b94d0dafaed1cf0bf6809658ff6bd)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1a42abf6c6ac868c75fa4654e65cd99a2c)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1aeb3e08be3fe36c9efd9c336d6ab43081)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1a039fa0767020c6fb8f2ad682ef29d7cf)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1ad1128d79eadaa9132c1d2ca9eae3e9e8)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrder_1abe8266ae41f7e9c11242f663d7ede242)`() const` | Checks whether MatchId_Optional has been set.
`public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a6ed1db44c98a093711566b17885b833f)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a0f1271c27788ad3fb283db9c1eeac347)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1aedafb6d56d6ae8491776d38b616d3c37)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a57955255af0a5bf8eb649f3080d2159a)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a3ad171eac54ca677b8e5d27672cb3070)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1a8c41d20be7f767953161fac85887d9b7)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1aeb90199f80bc9837bd1c1585fefbeaef)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrder_1a1c0362d4f947096f822698b5a1919c08)`() const` | Checks whether IsTransaction_Optional has been set.
`public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254)`() const` | Returns true if IsTransaction_Optional is set and matches the default value.
`public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608)`()` | Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1ac4a51862720a93d8059799d6221a27a6)`()` | Gets the value of OrderId.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1ac5ec22e98af11c7caa04a452c31553a7)`() const` | Gets the value of OrderId.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a3c646f907282bbfa50b206dbc4c6fc32)`(const FString & NewValue)` | Sets the value of OrderId.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1aac6cb8117d32b3f63bb1eec46679a318)`(FString && NewValue)` | Sets the value of OrderId using move semantics.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1afd379a71792ae08caa65260e2454301e)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1a24638d96ce5ce9e577f81806ba07a33a)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a0b6ebe6832bdd748a6dc574c43d81914)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a29fe092e3ecd108b1362019c13c42b16)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a932e65c22b60401bcb010aeebff58db6)`()` | Gets the value of CreatedTime.
`public inline const FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a32e8529924ab5b24fc1269dfa52a247d)`() const` | Gets the value of CreatedTime.
`public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a0a06568fd4b6cea878d7922cbfe6c486)`(const FDateTime & NewValue)` | Sets the value of CreatedTime.
`public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a23f977988ce4f461cf423f1ce527b660)`(FDateTime && NewValue)` | Sets the value of CreatedTime using move semantics.
`public inline TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1aa0cbd4cffa70dedc6a5aa7fb010e9834)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1a1f96b2f7a4b7f2caabe67ec504b471bd)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a27d5aa564b6dc19943ccd3fee024ef8e)`(const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a62a7256b290585359313d37b52f66b31)`(TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11) <a id="structFRHAPI__PlayerOrder_1a3d6d687689aa3510deb1f1a6491bdc11"></a>

The source of the Player Order.

#### `public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b) <a id="structFRHAPI__PlayerOrder_1aae8b5a8e617dbcc89625845d2b34b82b"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e) <a id="structFRHAPI__PlayerOrder_1a61aa3447307621e318cb91133b80a95e"></a>

Arbitrary UUID clients can use to track Orders between request to response.

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab) <a id="structFRHAPI__PlayerOrder_1a05790b5ae6fd82a4769a861b4d2dd7ab"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrder_1a93f828e1be48defa2a71a8d291d290e2) <a id="structFRHAPI__PlayerOrder_1a93f828e1be48defa2a71a8d291d290e2"></a>

Portal of the Portal User the Player Order belongs to.

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5) <a id="structFRHAPI__PlayerOrder_1a0d42df3991e3e476d715d75f19026cf5"></a>

true if PortalId_Optional has been set to a value

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623) <a id="structFRHAPI__PlayerOrder_1a407c16439fb174efbd56265e1f97e623"></a>

Portal User Id for the Player this Player Order belongs to.

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032) <a id="structFRHAPI__PlayerOrder_1a56dde0a447147f6fe97cca9fb1a01032"></a>

true if PortalUserId_Optional has been set to a value

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa) <a id="structFRHAPI__PlayerOrder_1adce2098b307e416c00953c1c0f12d8fa"></a>

Instance Id for the Instance who submits the Player Order.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a) <a id="structFRHAPI__PlayerOrder_1aa44833300939ba0777b40b1da90a277a"></a>

true if InstanceId_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0) <a id="structFRHAPI__PlayerOrder_1a213998f24d28451308f519a9ed2352f0"></a>

Match Id for the Match that generated the Player Order.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6) <a id="structFRHAPI__PlayerOrder_1ac9e75ca0d4de598f90927cb99c4393c6"></a>

true if MatchId_Optional has been set to a value

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

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1abfa599494898d94523d39a6637a1f269)`()` <a id="structFRHAPI__PlayerOrder_1abfa599494898d94523d39a6637a1f269"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a3af06be30c25917783a379f288aa5bb5)`() const` <a id="structFRHAPI__PlayerOrder_1a3af06be30c25917783a379f288aa5bb5"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a86adc8af4cae41f20782690eb7086afe)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a86adc8af4cae41f20782690eb7086afe"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1afa848a494fbf237bdf0b482b74ffc153)`()` <a id="structFRHAPI__PlayerOrder_1afa848a494fbf237bdf0b482b74ffc153"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1af6459702d7b5b387beadb7b8cb681138)`() const` <a id="structFRHAPI__PlayerOrder_1af6459702d7b5b387beadb7b8cb681138"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a7b2c2183bfa019a66876c6fde6d8ef4b)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrder_1a7b2c2183bfa019a66876c6fde6d8ef4b"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a45ad6efe7e6bc69612b6c3951feb9720)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrder_1a45ad6efe7e6bc69612b6c3951feb9720"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)`()` <a id="structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrder_1a21d103948b3c9b5980bf757780ce4297)`() const` <a id="structFRHAPI__PlayerOrder_1a21d103948b3c9b5980bf757780ce4297"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a045205f39386e771094d5215c5e814b2)`()` <a id="structFRHAPI__PlayerOrder_1a045205f39386e771094d5215c5e814b2"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1ad1254b41adf8891ae38e6c8adfa42347)`() const` <a id="structFRHAPI__PlayerOrder_1ad1254b41adf8891ae38e6c8adfa42347"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a24cfaae1e732bf6bb593160ef7514f7d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a24cfaae1e732bf6bb593160ef7514f7d"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a79ae8293c9a59fdbb889a3f3b3334bfb)`()` <a id="structFRHAPI__PlayerOrder_1a79ae8293c9a59fdbb889a3f3b3334bfb"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a55c816cf5d65bbaf247d24eff4faadfe)`() const` <a id="structFRHAPI__PlayerOrder_1a55c816cf5d65bbaf247d24eff4faadfe"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a56c3988181db1bb7e8a03e259687631a)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrder_1a56c3988181db1bb7e8a03e259687631a"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a350e1cb760cc1a3b6bf5aaf76c8a820e)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrder_1a350e1cb760cc1a3b6bf5aaf76c8a820e"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)`()` <a id="structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrder_1aec4df0cacadf80f4c70642e1bd3f5e87)`() const` <a id="structFRHAPI__PlayerOrder_1aec4df0cacadf80f4c70642e1bd3f5e87"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a3ef4f8d3598d6883586338fd30e4be30)`()` <a id="structFRHAPI__PlayerOrder_1a3ef4f8d3598d6883586338fd30e4be30"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1aea012f00dc23f62592a1e1f33c9a587c)`() const` <a id="structFRHAPI__PlayerOrder_1aea012f00dc23f62592a1e1f33c9a587c"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a2eec4f9d31bcc545b0765be02d66631d)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a2eec4f9d31bcc545b0765be02d66631d"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a1c088dc0420606c5795145b80584547a)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a1c088dc0420606c5795145b80584547a"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1a5b7936434143c49b58adf81545bb6880)`()` <a id="structFRHAPI__PlayerOrder_1a5b7936434143c49b58adf81545bb6880"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1ad0fb2a171cb80505f2bdf8690f5181b4)`() const` <a id="structFRHAPI__PlayerOrder_1ad0fb2a171cb80505f2bdf8690f5181b4"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a5404e592851dcb4058ec35aad479c292)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrder_1a5404e592851dcb4058ec35aad479c292"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1af68eed5ee5d3128ed99e6d58649b480c)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrder_1af68eed5ee5d3128ed99e6d58649b480c"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)`()` <a id="structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrder_1abcd36b9d716f9fdec7455004b141a2d5)`() const` <a id="structFRHAPI__PlayerOrder_1abcd36b9d716f9fdec7455004b141a2d5"></a>

Checks whether PortalId_Optional has been set.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ae94852f1c1a3ef00d1ae46037384f0f9)`()` <a id="structFRHAPI__PlayerOrder_1ae94852f1c1a3ef00d1ae46037384f0f9"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a5c2e041bceae06fc7408977750d7035d)`() const` <a id="structFRHAPI__PlayerOrder_1a5c2e041bceae06fc7408977750d7035d"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1a7222dce11f9d25dfb4826e85a2bf2d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a1a7222dce11f9d25dfb4826e85a2bf2d"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1a56744d406f9d0f73c446cfbafa30672a)`()` <a id="structFRHAPI__PlayerOrder_1a56744d406f9d0f73c446cfbafa30672a"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1aaffdedb26e052a7bb11cb02aa8393df7)`() const` <a id="structFRHAPI__PlayerOrder_1aaffdedb26e052a7bb11cb02aa8393df7"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a853fec3d958ee280e4dd105b9f982ff6)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a853fec3d958ee280e4dd105b9f982ff6"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a8c8d48eda93799567ba7adb653c0c503)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1a8c8d48eda93799567ba7adb653c0c503"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)`()` <a id="structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrder_1ab26a74d6f3985cf219867d21b64052ab)`() const` <a id="structFRHAPI__PlayerOrder_1ab26a74d6f3985cf219867d21b64052ab"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a358c9ac4ae6ef4c657de7eb42f6756c7)`()` <a id="structFRHAPI__PlayerOrder_1a358c9ac4ae6ef4c657de7eb42f6756c7"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a39b4db67a728ff5f70fb2df5973b931b)`() const` <a id="structFRHAPI__PlayerOrder_1a39b4db67a728ff5f70fb2df5973b931b"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1ac052023a29ea143c273fdce9d7a1a0c3)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1ac052023a29ea143c273fdce9d7a1a0c3"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1aff2032c5d0c7c38c0ceb2fad4ec794e0)`()` <a id="structFRHAPI__PlayerOrder_1aff2032c5d0c7c38c0ceb2fad4ec794e0"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1aab60062b234179611e18b1b22c0bb70a)`() const` <a id="structFRHAPI__PlayerOrder_1aab60062b234179611e18b1b22c0bb70a"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1a74ac71b7d08e8530acea85852b974894)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a74ac71b7d08e8530acea85852b974894"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1abdb75ea5d9c95f95b56ddbd61a90c6b7)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1abdb75ea5d9c95f95b56ddbd61a90c6b7"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)`()` <a id="structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrder_1ad993a6e776989bc6dc2ef43450f84ab1)`() const` <a id="structFRHAPI__PlayerOrder_1ad993a6e776989bc6dc2ef43450f84ab1"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1aee0568fa2b79744c0a5dafe9aa896011)`()` <a id="structFRHAPI__PlayerOrder_1aee0568fa2b79744c0a5dafe9aa896011"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1acde5f7f6a0a5222fb293ee13c7b719cd)`() const` <a id="structFRHAPI__PlayerOrder_1acde5f7f6a0a5222fb293ee13c7b719cd"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a8f2b94d0dafaed1cf0bf6809658ff6bd)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a8f2b94d0dafaed1cf0bf6809658ff6bd"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1a42abf6c6ac868c75fa4654e65cd99a2c)`()` <a id="structFRHAPI__PlayerOrder_1a42abf6c6ac868c75fa4654e65cd99a2c"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1aeb3e08be3fe36c9efd9c336d6ab43081)`() const` <a id="structFRHAPI__PlayerOrder_1aeb3e08be3fe36c9efd9c336d6ab43081"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1a039fa0767020c6fb8f2ad682ef29d7cf)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a039fa0767020c6fb8f2ad682ef29d7cf"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1ad1128d79eadaa9132c1d2ca9eae3e9e8)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1ad1128d79eadaa9132c1d2ca9eae3e9e8"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)`()` <a id="structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrder_1abe8266ae41f7e9c11242f663d7ede242)`() const` <a id="structFRHAPI__PlayerOrder_1abe8266ae41f7e9c11242f663d7ede242"></a>

Checks whether MatchId_Optional has been set.

#### `public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a6ed1db44c98a093711566b17885b833f)`()` <a id="structFRHAPI__PlayerOrder_1a6ed1db44c98a093711566b17885b833f"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a0f1271c27788ad3fb283db9c1eeac347)`() const` <a id="structFRHAPI__PlayerOrder_1a0f1271c27788ad3fb283db9c1eeac347"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1aedafb6d56d6ae8491776d38b616d3c37)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1aedafb6d56d6ae8491776d38b616d3c37"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a57955255af0a5bf8eb649f3080d2159a)`()` <a id="structFRHAPI__PlayerOrder_1a57955255af0a5bf8eb649f3080d2159a"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a3ad171eac54ca677b8e5d27672cb3070)`() const` <a id="structFRHAPI__PlayerOrder_1a3ad171eac54ca677b8e5d27672cb3070"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1a8c41d20be7f767953161fac85887d9b7)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrder_1a8c41d20be7f767953161fac85887d9b7"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1aeb90199f80bc9837bd1c1585fefbeaef)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrder_1aeb90199f80bc9837bd1c1585fefbeaef"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)`()` <a id="structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrder_1a1c0362d4f947096f822698b5a1919c08)`() const` <a id="structFRHAPI__PlayerOrder_1a1c0362d4f947096f822698b5a1919c08"></a>

Checks whether IsTransaction_Optional has been set.

#### `public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254)`() const` <a id="structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254"></a>

Returns true if IsTransaction_Optional is set and matches the default value.

#### `public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608)`()` <a id="structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608"></a>

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1ac4a51862720a93d8059799d6221a27a6)`()` <a id="structFRHAPI__PlayerOrder_1ac4a51862720a93d8059799d6221a27a6"></a>

Gets the value of OrderId.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1ac5ec22e98af11c7caa04a452c31553a7)`() const` <a id="structFRHAPI__PlayerOrder_1ac5ec22e98af11c7caa04a452c31553a7"></a>

Gets the value of OrderId.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a3c646f907282bbfa50b206dbc4c6fc32)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a3c646f907282bbfa50b206dbc4c6fc32"></a>

Sets the value of OrderId.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1aac6cb8117d32b3f63bb1eec46679a318)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1aac6cb8117d32b3f63bb1eec46679a318"></a>

Sets the value of OrderId using move semantics.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1afd379a71792ae08caa65260e2454301e)`()` <a id="structFRHAPI__PlayerOrder_1afd379a71792ae08caa65260e2454301e"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1a24638d96ce5ce9e577f81806ba07a33a)`() const` <a id="structFRHAPI__PlayerOrder_1a24638d96ce5ce9e577f81806ba07a33a"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a0b6ebe6832bdd748a6dc574c43d81914)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrder_1a0b6ebe6832bdd748a6dc574c43d81914"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a29fe092e3ecd108b1362019c13c42b16)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrder_1a29fe092e3ecd108b1362019c13c42b16"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a932e65c22b60401bcb010aeebff58db6)`()` <a id="structFRHAPI__PlayerOrder_1a932e65c22b60401bcb010aeebff58db6"></a>

Gets the value of CreatedTime.

#### `public inline const FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1a32e8529924ab5b24fc1269dfa52a247d)`() const` <a id="structFRHAPI__PlayerOrder_1a32e8529924ab5b24fc1269dfa52a247d"></a>

Gets the value of CreatedTime.

#### `public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a0a06568fd4b6cea878d7922cbfe6c486)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrder_1a0a06568fd4b6cea878d7922cbfe6c486"></a>

Sets the value of CreatedTime.

#### `public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a23f977988ce4f461cf423f1ce527b660)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrder_1a23f977988ce4f461cf423f1ce527b660"></a>

Sets the value of CreatedTime using move semantics.

#### `public inline TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1aa0cbd4cffa70dedc6a5aa7fb010e9834)`()` <a id="structFRHAPI__PlayerOrder_1aa0cbd4cffa70dedc6a5aa7fb010e9834"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1a1f96b2f7a4b7f2caabe67ec504b471bd)`() const` <a id="structFRHAPI__PlayerOrder_1a1f96b2f7a4b7f2caabe67ec504b471bd"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a27d5aa564b6dc19943ccd3fee024ef8e)`(const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & NewValue)` <a id="structFRHAPI__PlayerOrder_1a27d5aa564b6dc19943ccd3fee024ef8e"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a62a7256b290585359313d37b52f66b31)`(TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > && NewValue)` <a id="structFRHAPI__PlayerOrder_1a62a7256b290585359313d37b52f66b31"></a>

Sets the value of Entries using move semantics.

