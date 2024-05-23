# group `RHAPI_PlayerOrder` <a id="group__RHAPI__PlayerOrder"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrder_1af538945703a9feb2478934204469ae5d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrder_1a85a88e788dc037a03fb90391c57cb2d9)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a06781ea13be64327d4542f0d54d67f81)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a5552932df5fad02c098735a36623ae5f)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a01ab2bfcf063a5d329c866ce193474f6)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1a175e55f6615c643684ca979ca3bd0254)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1aa506f7a58cbd9c9204d6fb02318e9fc2)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a7b2c2183bfa019a66876c6fde6d8ef4b)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a45ad6efe7e6bc69612b6c3951feb9720)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1aadd42c9c9de7e5816cd5573f82e87599)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1ad554bd7cac8a6a9150f397a13cebe496)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a0b006b084502eb467535a7abade3474e)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a48aed8444db9b545be41da1fe1099911)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1aa967f29dad34b17b5db3354544d48d53)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a56c3988181db1bb7e8a03e259687631a)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a350e1cb760cc1a3b6bf5aaf76c8a820e)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1affb8b69a73075e42d789022c52e9b6b2)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1ae787c6967a856dd3b93a35881832c398)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1ad8fb1be2ae9913e8267d2ea1bd7e86fd)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a1c088dc0420606c5795145b80584547a)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1af1ed803bf642b1b4060901d7d3efa7ef)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1adc40c77631da4091b099c4f53a960180)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a5404e592851dcb4058ec35aad479c292)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1af68eed5ee5d3128ed99e6d58649b480c)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ae9158d01cb1e48f2fa7fe63ce2963773)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ac4d6c2a19badd8e999e9a1a8e90ab2a0)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a94fec3319835511f5bbadc89b30a9640)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1a44124b325816a3b9f8b1846f1601d1b7)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1a4f6b85019664ce6d4b7f56916c9715da)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a853fec3d958ee280e4dd105b9f982ff6)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a8c8d48eda93799567ba7adb653c0c503)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a2a40f7b9e3e37f77023f9f2f8978fa77)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a62a809c97bac59ccc8c317be48ab4210)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a9d8017e4836a3b208038b18f48b55e92)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1a21456fecdf2b12997c3a4899f7d944da)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1a922a18740f2c3d1a47a640d8721c3ab0)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1a74ac71b7d08e8530acea85852b974894)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1abdb75ea5d9c95f95b56ddbd61a90c6b7)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a5b4feeb1e8d370be55daa7b3807c802c)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a91b385b0d9f73c41e6b132c5567f266e)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a0fb1b1e68aa2918d329bb3c45c5d11ca)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1aa29b7cf0c624fc0b884f26aafb798ac2)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1a707ca4fd565ccea6891ecaeb21f8cd96)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1a039fa0767020c6fb8f2ad682ef29d7cf)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1ad1128d79eadaa9132c1d2ca9eae3e9e8)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a4788123a04b61d5a77db912111e00d39)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1aafc750ed80ca02a53c0005b00204b15f)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a1076d0cc40176395f251cffa97f7d1c2)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1ad72db60eb0c7175dec585f994a704242)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a919632165b598540c6b0cee4a7461582)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1a8c41d20be7f767953161fac85887d9b7)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1aeb90199f80bc9837bd1c1585fefbeaef)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254)`() const` | Returns true if IsTransaction_Optional is set and matches the default value.
`public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608)`()` | Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1afb0a430d55c07348233967bdd24bb540)`()` | Gets the value of OrderId.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1a9398ddd15b826063581108c76ea8a706)`() const` | Gets the value of OrderId.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a3c646f907282bbfa50b206dbc4c6fc32)`(const FString & NewValue)` | Sets the value of OrderId.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1aac6cb8117d32b3f63bb1eec46679a318)`(FString && NewValue)` | Sets the value of OrderId using move semantics.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1a616fefaf8375efeaada86739a6263546)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1ab2add03bbc5afc39a4361870eafc30de)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a0b6ebe6832bdd748a6dc574c43d81914)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a29fe092e3ecd108b1362019c13c42b16)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1ab45b6f6e261a16f7914fabe772869b8c)`()` | Gets the value of CreatedTime.
`public inline const FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1aaaf5dc25f6465ca5b85788dc463a9be7)`() const` | Gets the value of CreatedTime.
`public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a0a06568fd4b6cea878d7922cbfe6c486)`(const FDateTime & NewValue)` | Sets the value of CreatedTime.
`public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a23f977988ce4f461cf423f1ce527b660)`(FDateTime && NewValue)` | Sets the value of CreatedTime using move semantics.
`public inline TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1ae10a93607b2aed45b64f2c090866a405)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1a569047af3f44f566bbda2ba88cee0a03)`() const` | Gets the value of Entries.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrder_1af538945703a9feb2478934204469ae5d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrder_1af538945703a9feb2478934204469ae5d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrder_1a85a88e788dc037a03fb90391c57cb2d9)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerOrder_1a85a88e788dc037a03fb90391c57cb2d9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a06781ea13be64327d4542f0d54d67f81)`()` <a id="structFRHAPI__PlayerOrder_1a06781ea13be64327d4542f0d54d67f81"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a5552932df5fad02c098735a36623ae5f)`() const` <a id="structFRHAPI__PlayerOrder_1a5552932df5fad02c098735a36623ae5f"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrder_1a01ab2bfcf063a5d329c866ce193474f6)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a01ab2bfcf063a5d329c866ce193474f6"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a979745cfae49c07455cbf81fdb9cdc68"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1a175e55f6615c643684ca979ca3bd0254)`()` <a id="structFRHAPI__PlayerOrder_1a175e55f6615c643684ca979ca3bd0254"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrder_1aa506f7a58cbd9c9204d6fb02318e9fc2)`() const` <a id="structFRHAPI__PlayerOrder_1aa506f7a58cbd9c9204d6fb02318e9fc2"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a7b2c2183bfa019a66876c6fde6d8ef4b)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrder_1a7b2c2183bfa019a66876c6fde6d8ef4b"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrder_1a45ad6efe7e6bc69612b6c3951feb9720)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrder_1a45ad6efe7e6bc69612b6c3951feb9720"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29)`()` <a id="structFRHAPI__PlayerOrder_1ae95218164a3afd2840e203e81ae5da29"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1aadd42c9c9de7e5816cd5573f82e87599)`()` <a id="structFRHAPI__PlayerOrder_1aadd42c9c9de7e5816cd5573f82e87599"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1ad554bd7cac8a6a9150f397a13cebe496)`() const` <a id="structFRHAPI__PlayerOrder_1ad554bd7cac8a6a9150f397a13cebe496"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a0b006b084502eb467535a7abade3474e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a0b006b084502eb467535a7abade3474e"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a7e44e1d15559de5aba7ea09ce54f51b0"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1a48aed8444db9b545be41da1fe1099911)`()` <a id="structFRHAPI__PlayerOrder_1a48aed8444db9b545be41da1fe1099911"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrder_1aa967f29dad34b17b5db3354544d48d53)`() const` <a id="structFRHAPI__PlayerOrder_1aa967f29dad34b17b5db3354544d48d53"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a56c3988181db1bb7e8a03e259687631a)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrder_1a56c3988181db1bb7e8a03e259687631a"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrder_1a350e1cb760cc1a3b6bf5aaf76c8a820e)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrder_1a350e1cb760cc1a3b6bf5aaf76c8a820e"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317)`()` <a id="structFRHAPI__PlayerOrder_1a994f54326f342719c81eb55efb581317"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1affb8b69a73075e42d789022c52e9b6b2)`()` <a id="structFRHAPI__PlayerOrder_1affb8b69a73075e42d789022c52e9b6b2"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1ae787c6967a856dd3b93a35881832c398)`() const` <a id="structFRHAPI__PlayerOrder_1ae787c6967a856dd3b93a35881832c398"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrder_1ad8fb1be2ae9913e8267d2ea1bd7e86fd)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1ad8fb1be2ae9913e8267d2ea1bd7e86fd"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrder_1a1c088dc0420606c5795145b80584547a)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a1c088dc0420606c5795145b80584547a"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1af1ed803bf642b1b4060901d7d3efa7ef)`()` <a id="structFRHAPI__PlayerOrder_1af1ed803bf642b1b4060901d7d3efa7ef"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrder_1adc40c77631da4091b099c4f53a960180)`() const` <a id="structFRHAPI__PlayerOrder_1adc40c77631da4091b099c4f53a960180"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1a5404e592851dcb4058ec35aad479c292)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrder_1a5404e592851dcb4058ec35aad479c292"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrder_1af68eed5ee5d3128ed99e6d58649b480c)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrder_1af68eed5ee5d3128ed99e6d58649b480c"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285)`()` <a id="structFRHAPI__PlayerOrder_1addf0b3723a301f08f787a54392c03285"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ae9158d01cb1e48f2fa7fe63ce2963773)`()` <a id="structFRHAPI__PlayerOrder_1ae9158d01cb1e48f2fa7fe63ce2963773"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1ac4d6c2a19badd8e999e9a1a8e90ab2a0)`() const` <a id="structFRHAPI__PlayerOrder_1ac4d6c2a19badd8e999e9a1a8e90ab2a0"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a94fec3319835511f5bbadc89b30a9640)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a94fec3319835511f5bbadc89b30a9640"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a1bf8258acc7e9a9adf9797624c99cb03"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1a44124b325816a3b9f8b1846f1601d1b7)`()` <a id="structFRHAPI__PlayerOrder_1a44124b325816a3b9f8b1846f1601d1b7"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrder_1a4f6b85019664ce6d4b7f56916c9715da)`() const` <a id="structFRHAPI__PlayerOrder_1a4f6b85019664ce6d4b7f56916c9715da"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a853fec3d958ee280e4dd105b9f982ff6)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a853fec3d958ee280e4dd105b9f982ff6"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrder_1a8c8d48eda93799567ba7adb653c0c503)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1a8c8d48eda93799567ba7adb653c0c503"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5)`()` <a id="structFRHAPI__PlayerOrder_1a63f23308343080e1db90780eb041dfc5"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a2a40f7b9e3e37f77023f9f2f8978fa77)`()` <a id="structFRHAPI__PlayerOrder_1a2a40f7b9e3e37f77023f9f2f8978fa77"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a62a809c97bac59ccc8c317be48ab4210)`() const` <a id="structFRHAPI__PlayerOrder_1a62a809c97bac59ccc8c317be48ab4210"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1a9d8017e4836a3b208038b18f48b55e92)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a9d8017e4836a3b208038b18f48b55e92"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1af2942e8abe46d55f963af6d8eb0129c5"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1a21456fecdf2b12997c3a4899f7d944da)`()` <a id="structFRHAPI__PlayerOrder_1a21456fecdf2b12997c3a4899f7d944da"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrder_1a922a18740f2c3d1a47a640d8721c3ab0)`() const` <a id="structFRHAPI__PlayerOrder_1a922a18740f2c3d1a47a640d8721c3ab0"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1a74ac71b7d08e8530acea85852b974894)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a74ac71b7d08e8530acea85852b974894"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrder_1abdb75ea5d9c95f95b56ddbd61a90c6b7)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1abdb75ea5d9c95f95b56ddbd61a90c6b7"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e)`()` <a id="structFRHAPI__PlayerOrder_1a54ec5e1747bf7f409ddc4b6bdbc3c56e"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a5b4feeb1e8d370be55daa7b3807c802c)`()` <a id="structFRHAPI__PlayerOrder_1a5b4feeb1e8d370be55daa7b3807c802c"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a91b385b0d9f73c41e6b132c5567f266e)`() const` <a id="structFRHAPI__PlayerOrder_1a91b385b0d9f73c41e6b132c5567f266e"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrder_1a0fb1b1e68aa2918d329bb3c45c5d11ca)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a0fb1b1e68aa2918d329bb3c45c5d11ca"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrder_1abc29e2b705d9660bd3e18bd78d4e79bf"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1aa29b7cf0c624fc0b884f26aafb798ac2)`()` <a id="structFRHAPI__PlayerOrder_1aa29b7cf0c624fc0b884f26aafb798ac2"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrder_1a707ca4fd565ccea6891ecaeb21f8cd96)`() const` <a id="structFRHAPI__PlayerOrder_1a707ca4fd565ccea6891ecaeb21f8cd96"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1a039fa0767020c6fb8f2ad682ef29d7cf)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a039fa0767020c6fb8f2ad682ef29d7cf"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrder_1ad1128d79eadaa9132c1d2ca9eae3e9e8)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1ad1128d79eadaa9132c1d2ca9eae3e9e8"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78)`()` <a id="structFRHAPI__PlayerOrder_1a69615707e1f4f40f49b74a5bcad57e78"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a4788123a04b61d5a77db912111e00d39)`()` <a id="structFRHAPI__PlayerOrder_1a4788123a04b61d5a77db912111e00d39"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1aafc750ed80ca02a53c0005b00204b15f)`() const` <a id="structFRHAPI__PlayerOrder_1aafc750ed80ca02a53c0005b00204b15f"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a1076d0cc40176395f251cffa97f7d1c2)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrder_1a1076d0cc40176395f251cffa97f7d1c2"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrder_1a387e1132ab25d68053f71eacbccd20c4"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1ad72db60eb0c7175dec585f994a704242)`()` <a id="structFRHAPI__PlayerOrder_1ad72db60eb0c7175dec585f994a704242"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrder_1a919632165b598540c6b0cee4a7461582)`() const` <a id="structFRHAPI__PlayerOrder_1a919632165b598540c6b0cee4a7461582"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1a8c41d20be7f767953161fac85887d9b7)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrder_1a8c41d20be7f767953161fac85887d9b7"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrder_1aeb90199f80bc9837bd1c1585fefbeaef)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrder_1aeb90199f80bc9837bd1c1585fefbeaef"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767)`()` <a id="structFRHAPI__PlayerOrder_1a9bd046330246426cb0bfbcff81fde767"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254)`() const` <a id="structFRHAPI__PlayerOrder_1a3e57b842a14d1fd9e85b0e6ec73f2254"></a>

Returns true if IsTransaction_Optional is set and matches the default value.

#### `public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608)`()` <a id="structFRHAPI__PlayerOrder_1adb7eb4b600e6068a9137858f4f6e5608"></a>

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1afb0a430d55c07348233967bdd24bb540)`()` <a id="structFRHAPI__PlayerOrder_1afb0a430d55c07348233967bdd24bb540"></a>

Gets the value of OrderId.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrder_1a9398ddd15b826063581108c76ea8a706)`() const` <a id="structFRHAPI__PlayerOrder_1a9398ddd15b826063581108c76ea8a706"></a>

Gets the value of OrderId.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1a3c646f907282bbfa50b206dbc4c6fc32)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrder_1a3c646f907282bbfa50b206dbc4c6fc32"></a>

Sets the value of OrderId.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrder_1aac6cb8117d32b3f63bb1eec46679a318)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrder_1aac6cb8117d32b3f63bb1eec46679a318"></a>

Sets the value of OrderId using move semantics.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1a616fefaf8375efeaada86739a6263546)`()` <a id="structFRHAPI__PlayerOrder_1a616fefaf8375efeaada86739a6263546"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrder_1ab2add03bbc5afc39a4361870eafc30de)`() const` <a id="structFRHAPI__PlayerOrder_1ab2add03bbc5afc39a4361870eafc30de"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a0b6ebe6832bdd748a6dc574c43d81914)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrder_1a0b6ebe6832bdd748a6dc574c43d81914"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrder_1a29fe092e3ecd108b1362019c13c42b16)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrder_1a29fe092e3ecd108b1362019c13c42b16"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1ab45b6f6e261a16f7914fabe772869b8c)`()` <a id="structFRHAPI__PlayerOrder_1ab45b6f6e261a16f7914fabe772869b8c"></a>

Gets the value of CreatedTime.

#### `public inline const FDateTime & `[`GetCreatedTime`](#structFRHAPI__PlayerOrder_1aaaf5dc25f6465ca5b85788dc463a9be7)`() const` <a id="structFRHAPI__PlayerOrder_1aaaf5dc25f6465ca5b85788dc463a9be7"></a>

Gets the value of CreatedTime.

#### `public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a0a06568fd4b6cea878d7922cbfe6c486)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerOrder_1a0a06568fd4b6cea878d7922cbfe6c486"></a>

Sets the value of CreatedTime.

#### `public inline void `[`SetCreatedTime`](#structFRHAPI__PlayerOrder_1a23f977988ce4f461cf423f1ce527b660)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerOrder_1a23f977988ce4f461cf423f1ce527b660"></a>

Sets the value of CreatedTime using move semantics.

#### `public inline TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1ae10a93607b2aed45b64f2c090866a405)`()` <a id="structFRHAPI__PlayerOrder_1ae10a93607b2aed45b64f2c090866a405"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & `[`GetEntries`](#structFRHAPI__PlayerOrder_1a569047af3f44f566bbda2ba88cee0a03)`() const` <a id="structFRHAPI__PlayerOrder_1a569047af3f44f566bbda2ba88cee0a03"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a27d5aa564b6dc19943ccd3fee024ef8e)`(const TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > & NewValue)` <a id="structFRHAPI__PlayerOrder_1a27d5aa564b6dc19943ccd3fee024ef8e"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrder_1a62a7256b290585359313d37b52f66b31)`(TArray< `[`FRHAPI_PlayerOrderEntry`](RHAPI_PlayerOrderEntry.md#structFRHAPI__PlayerOrderEntry)` > && NewValue)` <a id="structFRHAPI__PlayerOrder_1a62a7256b290585359313d37b52f66b31"></a>

Sets the value of Entries using move semantics.

