---
title: RHAPI_FailedPlayerOrderCreateSingle
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FailedPlayerOrderCreateSingle`](#structFRHAPI__FailedPlayerOrderCreateSingle) | 

## struct `FRHAPI_FailedPlayerOrderCreateSingle` <a id="structFRHAPI__FailedPlayerOrderCreateSingle"></a>

```
struct FRHAPI_FailedPlayerOrderCreateSingle
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a240bacc72cf14b5a968e4af0112c82e1) | 
`public bool `[`Source_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae0e2a7d0b84fae8f793473b7083c68df) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab37e77b74119a4ace53b565e87db1c3a) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa1100bb8b1e6c8cc1c2e939b004abbcc) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adb26f0981c95a9b0fbf36fa7c1f80636) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a88e30326c1ddc7c4c4871e88e28af375) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac56988c72fee95f9fdf2100f9809b354) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5ba8cdac7be97f27d7b3ec92fbed1190) | true if PortalId_Optional has been explicitly set to null
`public FString `[`PortalUserId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a55ac441a534de0278985b7664d31523b) | 
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad6b5d506194da2d4422b9e5f6881f6d5) | true if PortalUserId_Optional has been set to a value
`public bool `[`PortalUserId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa150b07ded27e17643d3f82286c05441) | true if PortalUserId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a609a0618891cf5a4ffc2d451c8160b89) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a30c9175594927f72fb57f9b9d1b2cf49) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a91a62c2b4fffd6914e67da512cbe62e3) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab3b3b1ee0e28e81647193234c4a91494) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adbc0552219af4bebfea111e3a08a71fb) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a43924409740299435c37c55c0e0eda67) | true if MatchId_Optional has been explicitly set to null
`public bool `[`IsTransaction_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afd2050ca76786943864618beebaf0bbd) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab9dfa4c9191461e4d7a93848605d297e) | true if IsTransaction_Optional has been set to a value
`public int32 `[`PlayerId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a85e299677efb13d2a1e8e0bb83eeb1e5) | 
`public bool `[`PlayerId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a13ee056bcd7a940109e049072647d913) | true if PlayerId_Optional has been set to a value
`public bool `[`PlayerId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac93c2f58a2f5f8629d6374669cd66b23) | true if PlayerId_Optional has been explicitly set to null
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af9803c2d885f73d80828bb10b71e2337) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a643b49e4ddf6bd0454a219fc9f88ea85) | true if PlayerUuid_Optional has been set to a value
`public bool `[`PlayerUuid_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1af5de462d74aeafac253f9bc19b218b) | true if PlayerUuid_Optional has been explicitly set to null
`public FString `[`OrderId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a640a18caf3a6807d913307ee6c0a3cf6) | 
`public bool `[`OrderId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa626c968044fa46aae4fe9d513bdbc2a) | true if OrderId_Optional has been set to a value
`public bool `[`OrderId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a104c18d301e5e6b27a2e0a5fed062b57) | true if OrderId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > `[`Entries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae49df8f706340ce97cd4c38176d2329e) | List of Player Order Entries for the Player Order.
`public FString `[`ErrorInfo_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a31c7739bfa7fed5efc4c925651b2bcda) | 
`public bool `[`ErrorInfo_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a670610fabdafcde4893a11c5137c92dc) | true if ErrorInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a13320e1a59c69963eef035ac85f25307)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad9b95a018a935e02b636dd57476e81aa)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a99ea7fbb212d1024d281c390b848074c)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9fc81a98d62c6439243cd3ac25e517bd)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a007b2a982ea0ecb5f271795599de0786)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad9a42291ea2648effc79a7b27d4eb5df)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9b791e54b6ce35cee379732d1e7f06b5)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a7f25c9a7664e3c114983e1493f42b45a)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a824f7b44712405f5c4eb7bf533448d50)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a27b794f018402008b18a6a3476209e35)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a13da758e158ef7d6abad16a0905cfa14)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a42a5b5f6e0bc0e50037983ee17528104)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af6c6abf9f5435ca02cd799b9c1e36bed)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5c20f709cdc3b5bb79eb3b140c5d7f03)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af1b40e6c72f04f6402a4a52078b34016)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a21d58ee83d6d64b6464eefb1697db5e5)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a6a84b4044b1046aff5c9888c9a78911d)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0796cb72e3198011565dbe6793eee265)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2edf006719c963307f9e10dd6265e62c)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a34713ad1300a5efb9aa5dbc5c1e1d517)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae811713e8f70f5b4b334ddda2d99c518)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a506aeaffe42e654eb1277e44bd6fab18)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac50fa6181e9fdcfcd0b7a63d9d20ce58)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a861115cfd7543e16c8979ce7edf20151)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a531218665f388acc95f3dfcbf6136834)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aabc349647cbf6e25c5f6953b20a245d6)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5c97da30000fe65ed71273169211d502)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1abe434501275e07ea2cdd51f5672483b5)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2e322e16fa574feb03a238917887dddb)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5313517584f4c77138257e6b803d38ca)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afa978c5a9302f0b319421f6b48bbe83d)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a315b01edef74ba8da09bad516d9427cd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac6f5caa8d3928fc7824b3b2f37aaf5ad)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a10fc8e284d59e50b1b81270fc153beeb)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a46b772d8ad8c016cbd79971cd9016f9f)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1abc8e270ca1f25a7e5569c2d7fddec87c)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afd69f5dabb776f2a7fd7115fc90b80c8)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2f7803d16e59725b6199736fe9d1b23b)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae8d43dc3affa8d8d0465e7ac7e904b35)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a66d607c852557a63b1e409e665eaf648)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac50ad95d7ebb1d2716b1b4d2362eb0fb)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a3b6ae358831e615ddc9b74f64309b20f)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a44272c7909fd30590d28c8f8e118e5a7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0bf608aa40bd73e8d63318471c7ccb4b)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a389586184388e6a3ca96a9bb205e6d3f)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac6d93afbfcafa6463b1232e3c2f2311e)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a494efe6489667ed21c7ab9273601175e)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a656b03b8d49398d32569b026205d248c)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac34975194cf5faf6d9b7799a7ae52be3)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1ca681bbc037db2e1e36ccfbcc41fb20)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae9db226b78c2bd390db73286db4376ea)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af1109fec49c45f9745dc53e5880633f7)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a307238777e429fe7a94a8251e73e4abd)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aae9ebba18147e62a25aaf49c3f6c56c2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a64eb81624590049c39135e4050417bd1)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a986e58eb5f6745d88f881a6a212fe23f)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad57522dc29f9dbcb23a58cbb3106322c)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4652eceb400a8d9e809e3e636cd5b1d7)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1acb5c20cb873313e8e6e23f7d20f69a1a)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9a7bf20a4742a26bf26c45ea12a6d407)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9d2ae701d4e3d1537bb1b97c7d77a744)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a63b403ef7b8f506e4f2c2c67f7e6e114)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4d954261a42c4a7d99f541fe41d556f0)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab9ee24e5bc400542a64e9cb45a416d70)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a8445977a8b41fabf15b361503346bd14)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0b169dc9676344b79dd0d1fe3368300a)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a7e7193c0a1490ff1a58b21cd40216dc7)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aebb6e5fab50e6a6a8d15fa7e0896e5fd)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9e3e4ee2c88e8ec7db2bdb60ecb64a94)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a871acb3ff90f849e1b6bd506ad23f1e7)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab178d75f02e889a7d03e77278e43d616)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a69f936284dadcf271f0210eb87530954)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a578e0b29a9ed186a64e8c079b88e974e)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a11358283a4460511574d4449b49c3903)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afe47dcbb0762a1a6284a224ffe31ca05)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4fa2e90ac82830669bbc7b195bea9c83)`()` | Returns the default value of IsTransaction.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adea262f1ee43f2fff43023c1377eafa2)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9c37c062229864396cd74e689b835e28)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab4797b8c8765a0663568cd1c4777df1e)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1affa063a864704c91a48aae012366cbd1)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0415249b3302f565a1b4e6b27246dd6b)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2d5da886f160ac33ea37e61fd29c5439)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa3144cfcf8305d168614a12706c8fd9f)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a520b58ad2c3f43264364830df2a1859a)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a3085794d25da5eafece52da923f57d28)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4dd70bca2049a0708988e02548dc7195)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1ce2c6ea502b3a224f50824b96b2773f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae0b4e6cf0f3762d6a4d1695cdeb13d85)`() const` | Checks whether PlayerId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a470f32750a0605966094eb5827a6a946)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a6fd5139964aafd5a4e03f43f4477ef38)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac8e5957c14c74d95f3186dbf4f32fed0)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac06fb3ba5f06085c8fde2960f7e0bc6c)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2becd4f2b72b24472d2d2afb4f96f4e8)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a26b98d06af87708bd35d9b2de1a6068a)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a14bf6d11808b0c17f46c104502e65cf4)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adae815819a7a58f2a686eb6a40b74476)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad7babc4c5ac2baccb8574e21cb48ebae)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afe68edbb2229a764d903656c4ab5a8dc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a52f7b4a466dcfb5ff12c887ce5b7491b)`() const` | Checks whether PlayerUuid_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a288f2a85d51cd92d008dff26dfdd9b38)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a38f4f09d0f31095c7720310711015a18)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa7deb6345a33c8adaa8bbd998ccae78c)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae707d23ef04a9c0cf0552cc852b112a8)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aafef4c9a351eb801e7814ddddcd202d9)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad2fcafa5e9caaa235fdfb7f8e0ce78f7)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a29eeb001d08ba1aa8ac83c6661177d9b)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1c063d6494689e91395c567223eb0ed5)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a805b5ed94d4af438e5d96169e618b541)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab3e7214ddaf6613ea92ae03ba4d3a4b2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4d9969af5230f9b31f47948c777b78f4)`() const` | Checks whether OrderId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae441ee93fa754b61cc1a8660f8ae96dd)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a64ca9d45560b13a958169a8473e1aceb)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a32976622964efc0a24807a0fd3e2be70)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4dad3021fd9165721f7f6b02ddc7f750)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FORCEINLINE FString & `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a3b5ae276763ae2610f74ca62dc9fa03f)`()` | Gets the value of ErrorInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae581d1dd501358e92f36b4850af2089c)`() const` | Gets the value of ErrorInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a6045591e68730b43b7568b07e6c1d879)`(const FString & DefaultValue) const` | Gets the value of ErrorInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9236d58b8f46d79ab51540484994a265)`(FString & OutValue) const` | Fills OutValue with the value of ErrorInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorInfoOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af70d55c69396d88e9d68cc92fd67ea94)`()` | Returns a pointer to ErrorInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorInfoOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a20d574504d6464233513313a3f0ab6b1)`() const` | Returns a pointer to ErrorInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae3dcee944cb1c74f784d057e9aaec978)`(const FString & NewValue)` | Sets the value of ErrorInfo_Optional and also sets ErrorInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a97d3c6555e84de0a086642763b541290)`(FString && NewValue)` | Sets the value of ErrorInfo_Optional and also sets ErrorInfo_IsSet to true using move semantics.
`public inline void `[`ClearErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad17480c3c83d36409c64e2d7f784f28b)`()` | Clears the value of ErrorInfo_Optional and sets ErrorInfo_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_ErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a868b56aae8361f6812e7d0378fe773e7)`()` | Returns the default value of ErrorInfo.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a240bacc72cf14b5a968e4af0112c82e1) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a240bacc72cf14b5a968e4af0112c82e1"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae0e2a7d0b84fae8f793473b7083c68df) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae0e2a7d0b84fae8f793473b7083c68df"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab37e77b74119a4ace53b565e87db1c3a) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab37e77b74119a4ace53b565e87db1c3a"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa1100bb8b1e6c8cc1c2e939b004abbcc) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aa1100bb8b1e6c8cc1c2e939b004abbcc"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adb26f0981c95a9b0fbf36fa7c1f80636) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1adb26f0981c95a9b0fbf36fa7c1f80636"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a88e30326c1ddc7c4c4871e88e28af375) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a88e30326c1ddc7c4c4871e88e28af375"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac56988c72fee95f9fdf2100f9809b354) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac56988c72fee95f9fdf2100f9809b354"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5ba8cdac7be97f27d7b3ec92fbed1190) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a5ba8cdac7be97f27d7b3ec92fbed1190"></a>

true if PortalId_Optional has been explicitly set to null

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a55ac441a534de0278985b7664d31523b) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a55ac441a534de0278985b7664d31523b"></a>

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad6b5d506194da2d4422b9e5f6881f6d5) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad6b5d506194da2d4422b9e5f6881f6d5"></a>

true if PortalUserId_Optional has been set to a value

#### `public bool `[`PortalUserId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa150b07ded27e17643d3f82286c05441) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aa150b07ded27e17643d3f82286c05441"></a>

true if PortalUserId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a609a0618891cf5a4ffc2d451c8160b89) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a609a0618891cf5a4ffc2d451c8160b89"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a30c9175594927f72fb57f9b9d1b2cf49) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a30c9175594927f72fb57f9b9d1b2cf49"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a91a62c2b4fffd6914e67da512cbe62e3) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a91a62c2b4fffd6914e67da512cbe62e3"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab3b3b1ee0e28e81647193234c4a91494) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab3b3b1ee0e28e81647193234c4a91494"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adbc0552219af4bebfea111e3a08a71fb) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1adbc0552219af4bebfea111e3a08a71fb"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a43924409740299435c37c55c0e0eda67) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a43924409740299435c37c55c0e0eda67"></a>

true if MatchId_Optional has been explicitly set to null

#### `public bool `[`IsTransaction_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afd2050ca76786943864618beebaf0bbd) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1afd2050ca76786943864618beebaf0bbd"></a>

If an order is a transaction, any failed entries will roll back changes from all other entries.

#### `public bool `[`IsTransaction_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab9dfa4c9191461e4d7a93848605d297e) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab9dfa4c9191461e4d7a93848605d297e"></a>

true if IsTransaction_Optional has been set to a value

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a85e299677efb13d2a1e8e0bb83eeb1e5) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a85e299677efb13d2a1e8e0bb83eeb1e5"></a>

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a13ee056bcd7a940109e049072647d913) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a13ee056bcd7a940109e049072647d913"></a>

true if PlayerId_Optional has been set to a value

#### `public bool `[`PlayerId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac93c2f58a2f5f8629d6374669cd66b23) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac93c2f58a2f5f8629d6374669cd66b23"></a>

true if PlayerId_Optional has been explicitly set to null

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af9803c2d885f73d80828bb10b71e2337) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1af9803c2d885f73d80828bb10b71e2337"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a643b49e4ddf6bd0454a219fc9f88ea85) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a643b49e4ddf6bd0454a219fc9f88ea85"></a>

true if PlayerUuid_Optional has been set to a value

#### `public bool `[`PlayerUuid_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1af5de462d74aeafac253f9bc19b218b) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a1af5de462d74aeafac253f9bc19b218b"></a>

true if PlayerUuid_Optional has been explicitly set to null

#### `public FString `[`OrderId_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a640a18caf3a6807d913307ee6c0a3cf6) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a640a18caf3a6807d913307ee6c0a3cf6"></a>

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa626c968044fa46aae4fe9d513bdbc2a) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aa626c968044fa46aae4fe9d513bdbc2a"></a>

true if OrderId_Optional has been set to a value

#### `public bool `[`OrderId_IsNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a104c18d301e5e6b27a2e0a5fed062b57) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a104c18d301e5e6b27a2e0a5fed062b57"></a>

true if OrderId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > `[`Entries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae49df8f706340ce97cd4c38176d2329e) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae49df8f706340ce97cd4c38176d2329e"></a>

List of Player Order Entries for the Player Order.

#### `public FString `[`ErrorInfo_Optional`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a31c7739bfa7fed5efc4c925651b2bcda) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a31c7739bfa7fed5efc4c925651b2bcda"></a>

#### `public bool `[`ErrorInfo_IsSet`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a670610fabdafcde4893a11c5137c92dc) <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a670610fabdafcde4893a11c5137c92dc"></a>

true if ErrorInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a13320e1a59c69963eef035ac85f25307)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a13320e1a59c69963eef035ac85f25307"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad9b95a018a935e02b636dd57476e81aa)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad9b95a018a935e02b636dd57476e81aa"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a99ea7fbb212d1024d281c390b848074c)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a99ea7fbb212d1024d281c390b848074c"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9fc81a98d62c6439243cd3ac25e517bd)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9fc81a98d62c6439243cd3ac25e517bd"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a007b2a982ea0ecb5f271795599de0786)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a007b2a982ea0ecb5f271795599de0786"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad9a42291ea2648effc79a7b27d4eb5df)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad9a42291ea2648effc79a7b27d4eb5df"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9b791e54b6ce35cee379732d1e7f06b5)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9b791e54b6ce35cee379732d1e7f06b5"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a7f25c9a7664e3c114983e1493f42b45a)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a7f25c9a7664e3c114983e1493f42b45a"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a824f7b44712405f5c4eb7bf533448d50)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a824f7b44712405f5c4eb7bf533448d50"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a27b794f018402008b18a6a3476209e35)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a27b794f018402008b18a6a3476209e35"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a13da758e158ef7d6abad16a0905cfa14)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a13da758e158ef7d6abad16a0905cfa14"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a42a5b5f6e0bc0e50037983ee17528104)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a42a5b5f6e0bc0e50037983ee17528104"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af6c6abf9f5435ca02cd799b9c1e36bed)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1af6c6abf9f5435ca02cd799b9c1e36bed"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5c20f709cdc3b5bb79eb3b140c5d7f03)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a5c20f709cdc3b5bb79eb3b140c5d7f03"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af1b40e6c72f04f6402a4a52078b34016)`(FGuid & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1af1b40e6c72f04f6402a4a52078b34016"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a21d58ee83d6d64b6464eefb1697db5e5)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a21d58ee83d6d64b6464eefb1697db5e5"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a6a84b4044b1046aff5c9888c9a78911d)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a6a84b4044b1046aff5c9888c9a78911d"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0796cb72e3198011565dbe6793eee265)`(const FGuid & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a0796cb72e3198011565dbe6793eee265"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2edf006719c963307f9e10dd6265e62c)`(FGuid && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a2edf006719c963307f9e10dd6265e62c"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a34713ad1300a5efb9aa5dbc5c1e1d517)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a34713ad1300a5efb9aa5dbc5c1e1d517"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae811713e8f70f5b4b334ddda2d99c518)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae811713e8f70f5b4b334ddda2d99c518"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a506aeaffe42e654eb1277e44bd6fab18)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a506aeaffe42e654eb1277e44bd6fab18"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac50fa6181e9fdcfcd0b7a63d9d20ce58)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac50fa6181e9fdcfcd0b7a63d9d20ce58"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a861115cfd7543e16c8979ce7edf20151)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a861115cfd7543e16c8979ce7edf20151"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a531218665f388acc95f3dfcbf6136834)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a531218665f388acc95f3dfcbf6136834"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aabc349647cbf6e25c5f6953b20a245d6)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aabc349647cbf6e25c5f6953b20a245d6"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5c97da30000fe65ed71273169211d502)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a5c97da30000fe65ed71273169211d502"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1abe434501275e07ea2cdd51f5672483b5)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1abe434501275e07ea2cdd51f5672483b5"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2e322e16fa574feb03a238917887dddb)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a2e322e16fa574feb03a238917887dddb"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a5313517584f4c77138257e6b803d38ca)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a5313517584f4c77138257e6b803d38ca"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afa978c5a9302f0b319421f6b48bbe83d)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1afa978c5a9302f0b319421f6b48bbe83d"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a315b01edef74ba8da09bad516d9427cd)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a315b01edef74ba8da09bad516d9427cd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac6f5caa8d3928fc7824b3b2f37aaf5ad)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac6f5caa8d3928fc7824b3b2f37aaf5ad"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a10fc8e284d59e50b1b81270fc153beeb)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a10fc8e284d59e50b1b81270fc153beeb"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a46b772d8ad8c016cbd79971cd9016f9f)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a46b772d8ad8c016cbd79971cd9016f9f"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1abc8e270ca1f25a7e5569c2d7fddec87c)`(const FString & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1abc8e270ca1f25a7e5569c2d7fddec87c"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afd69f5dabb776f2a7fd7115fc90b80c8)`(FString & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1afd69f5dabb776f2a7fd7115fc90b80c8"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2f7803d16e59725b6199736fe9d1b23b)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a2f7803d16e59725b6199736fe9d1b23b"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae8d43dc3affa8d8d0465e7ac7e904b35)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae8d43dc3affa8d8d0465e7ac7e904b35"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a66d607c852557a63b1e409e665eaf648)`(const FString & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a66d607c852557a63b1e409e665eaf648"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac50ad95d7ebb1d2716b1b4d2362eb0fb)`(FString && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac50ad95d7ebb1d2716b1b4d2362eb0fb"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a3b6ae358831e615ddc9b74f64309b20f)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a3b6ae358831e615ddc9b74f64309b20f"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a44272c7909fd30590d28c8f8e118e5a7)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a44272c7909fd30590d28c8f8e118e5a7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0bf608aa40bd73e8d63318471c7ccb4b)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a0bf608aa40bd73e8d63318471c7ccb4b"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a389586184388e6a3ca96a9bb205e6d3f)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a389586184388e6a3ca96a9bb205e6d3f"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac6d93afbfcafa6463b1232e3c2f2311e)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac6d93afbfcafa6463b1232e3c2f2311e"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a494efe6489667ed21c7ab9273601175e)`(const FString & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a494efe6489667ed21c7ab9273601175e"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a656b03b8d49398d32569b026205d248c)`(FString & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a656b03b8d49398d32569b026205d248c"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac34975194cf5faf6d9b7799a7ae52be3)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac34975194cf5faf6d9b7799a7ae52be3"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1ca681bbc037db2e1e36ccfbcc41fb20)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a1ca681bbc037db2e1e36ccfbcc41fb20"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae9db226b78c2bd390db73286db4376ea)`(const FString & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae9db226b78c2bd390db73286db4376ea"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af1109fec49c45f9745dc53e5880633f7)`(FString && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1af1109fec49c45f9745dc53e5880633f7"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a307238777e429fe7a94a8251e73e4abd)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a307238777e429fe7a94a8251e73e4abd"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aae9ebba18147e62a25aaf49c3f6c56c2)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aae9ebba18147e62a25aaf49c3f6c56c2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a64eb81624590049c39135e4050417bd1)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a64eb81624590049c39135e4050417bd1"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a986e58eb5f6745d88f881a6a212fe23f)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a986e58eb5f6745d88f881a6a212fe23f"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad57522dc29f9dbcb23a58cbb3106322c)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad57522dc29f9dbcb23a58cbb3106322c"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4652eceb400a8d9e809e3e636cd5b1d7)`(const FString & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a4652eceb400a8d9e809e3e636cd5b1d7"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1acb5c20cb873313e8e6e23f7d20f69a1a)`(FString & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1acb5c20cb873313e8e6e23f7d20f69a1a"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9a7bf20a4742a26bf26c45ea12a6d407)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9a7bf20a4742a26bf26c45ea12a6d407"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9d2ae701d4e3d1537bb1b97c7d77a744)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9d2ae701d4e3d1537bb1b97c7d77a744"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a63b403ef7b8f506e4f2c2c67f7e6e114)`(const FString & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a63b403ef7b8f506e4f2c2c67f7e6e114"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4d954261a42c4a7d99f541fe41d556f0)`(FString && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a4d954261a42c4a7d99f541fe41d556f0"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab9ee24e5bc400542a64e9cb45a416d70)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab9ee24e5bc400542a64e9cb45a416d70"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a8445977a8b41fabf15b361503346bd14)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a8445977a8b41fabf15b361503346bd14"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0b169dc9676344b79dd0d1fe3368300a)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a0b169dc9676344b79dd0d1fe3368300a"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a7e7193c0a1490ff1a58b21cd40216dc7)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a7e7193c0a1490ff1a58b21cd40216dc7"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aebb6e5fab50e6a6a8d15fa7e0896e5fd)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aebb6e5fab50e6a6a8d15fa7e0896e5fd"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9e3e4ee2c88e8ec7db2bdb60ecb64a94)`(const bool & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9e3e4ee2c88e8ec7db2bdb60ecb64a94"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a871acb3ff90f849e1b6bd506ad23f1e7)`(bool & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a871acb3ff90f849e1b6bd506ad23f1e7"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab178d75f02e889a7d03e77278e43d616)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab178d75f02e889a7d03e77278e43d616"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a69f936284dadcf271f0210eb87530954)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a69f936284dadcf271f0210eb87530954"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a578e0b29a9ed186a64e8c079b88e974e)`(const bool & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a578e0b29a9ed186a64e8c079b88e974e"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a11358283a4460511574d4449b49c3903)`(bool && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a11358283a4460511574d4449b49c3903"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afe47dcbb0762a1a6284a224ffe31ca05)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1afe47dcbb0762a1a6284a224ffe31ca05"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4fa2e90ac82830669bbc7b195bea9c83)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a4fa2e90ac82830669bbc7b195bea9c83"></a>

Returns the default value of IsTransaction.

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adea262f1ee43f2fff43023c1377eafa2)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1adea262f1ee43f2fff43023c1377eafa2"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9c37c062229864396cd74e689b835e28)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9c37c062229864396cd74e689b835e28"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab4797b8c8765a0663568cd1c4777df1e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab4797b8c8765a0663568cd1c4777df1e"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1affa063a864704c91a48aae012366cbd1)`(int32 & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1affa063a864704c91a48aae012366cbd1"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a0415249b3302f565a1b4e6b27246dd6b)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a0415249b3302f565a1b4e6b27246dd6b"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2d5da886f160ac33ea37e61fd29c5439)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a2d5da886f160ac33ea37e61fd29c5439"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa3144cfcf8305d168614a12706c8fd9f)`(const int32 & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aa3144cfcf8305d168614a12706c8fd9f"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a520b58ad2c3f43264364830df2a1859a)`(int32 && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a520b58ad2c3f43264364830df2a1859a"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a3085794d25da5eafece52da923f57d28)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a3085794d25da5eafece52da923f57d28"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4dd70bca2049a0708988e02548dc7195)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a4dd70bca2049a0708988e02548dc7195"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1ce2c6ea502b3a224f50824b96b2773f)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a1ce2c6ea502b3a224f50824b96b2773f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae0b4e6cf0f3762d6a4d1695cdeb13d85)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae0b4e6cf0f3762d6a4d1695cdeb13d85"></a>

Checks whether PlayerId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a470f32750a0605966094eb5827a6a946)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a470f32750a0605966094eb5827a6a946"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a6fd5139964aafd5a4e03f43f4477ef38)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a6fd5139964aafd5a4e03f43f4477ef38"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac8e5957c14c74d95f3186dbf4f32fed0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac8e5957c14c74d95f3186dbf4f32fed0"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ac06fb3ba5f06085c8fde2960f7e0bc6c)`(FGuid & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ac06fb3ba5f06085c8fde2960f7e0bc6c"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a2becd4f2b72b24472d2d2afb4f96f4e8)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a2becd4f2b72b24472d2d2afb4f96f4e8"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a26b98d06af87708bd35d9b2de1a6068a)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a26b98d06af87708bd35d9b2de1a6068a"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a14bf6d11808b0c17f46c104502e65cf4)`(const FGuid & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a14bf6d11808b0c17f46c104502e65cf4"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1adae815819a7a58f2a686eb6a40b74476)`(FGuid && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1adae815819a7a58f2a686eb6a40b74476"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad7babc4c5ac2baccb8574e21cb48ebae)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad7babc4c5ac2baccb8574e21cb48ebae"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1afe68edbb2229a764d903656c4ab5a8dc)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1afe68edbb2229a764d903656c4ab5a8dc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a52f7b4a466dcfb5ff12c887ce5b7491b)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a52f7b4a466dcfb5ff12c887ce5b7491b"></a>

Checks whether PlayerUuid_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a288f2a85d51cd92d008dff26dfdd9b38)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a288f2a85d51cd92d008dff26dfdd9b38"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a38f4f09d0f31095c7720310711015a18)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a38f4f09d0f31095c7720310711015a18"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aa7deb6345a33c8adaa8bbd998ccae78c)`(const FString & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aa7deb6345a33c8adaa8bbd998ccae78c"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae707d23ef04a9c0cf0552cc852b112a8)`(FString & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae707d23ef04a9c0cf0552cc852b112a8"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1aafef4c9a351eb801e7814ddddcd202d9)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1aafef4c9a351eb801e7814ddddcd202d9"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad2fcafa5e9caaa235fdfb7f8e0ce78f7)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad2fcafa5e9caaa235fdfb7f8e0ce78f7"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a29eeb001d08ba1aa8ac83c6661177d9b)`(const FString & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a29eeb001d08ba1aa8ac83c6661177d9b"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a1c063d6494689e91395c567223eb0ed5)`(FString && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a1c063d6494689e91395c567223eb0ed5"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a805b5ed94d4af438e5d96169e618b541)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a805b5ed94d4af438e5d96169e618b541"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ab3e7214ddaf6613ea92ae03ba4d3a4b2)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ab3e7214ddaf6613ea92ae03ba4d3a4b2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4d9969af5230f9b31f47948c777b78f4)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a4d9969af5230f9b31f47948c777b78f4"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae441ee93fa754b61cc1a8660f8ae96dd)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae441ee93fa754b61cc1a8660f8ae96dd"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & `[`GetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a64ca9d45560b13a958169a8473e1aceb)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a64ca9d45560b13a958169a8473e1aceb"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a32976622964efc0a24807a0fd3e2be70)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a32976622964efc0a24807a0fd3e2be70"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a4dad3021fd9165721f7f6b02ddc7f750)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateOutput`](RHAPI_PlayerOrderEntryCreateOutput.md#structFRHAPI__PlayerOrderEntryCreateOutput)` > && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a4dad3021fd9165721f7f6b02ddc7f750"></a>

Sets the value of Entries using move semantics.

#### `public inline FORCEINLINE FString & `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a3b5ae276763ae2610f74ca62dc9fa03f)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a3b5ae276763ae2610f74ca62dc9fa03f"></a>

Gets the value of ErrorInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae581d1dd501358e92f36b4850af2089c)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae581d1dd501358e92f36b4850af2089c"></a>

Gets the value of ErrorInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a6045591e68730b43b7568b07e6c1d879)`(const FString & DefaultValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a6045591e68730b43b7568b07e6c1d879"></a>

Gets the value of ErrorInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a9236d58b8f46d79ab51540484994a265)`(FString & OutValue) const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a9236d58b8f46d79ab51540484994a265"></a>

Fills OutValue with the value of ErrorInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorInfoOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1af70d55c69396d88e9d68cc92fd67ea94)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1af70d55c69396d88e9d68cc92fd67ea94"></a>

Returns a pointer to ErrorInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorInfoOrNull`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a20d574504d6464233513313a3f0ab6b1)`() const` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a20d574504d6464233513313a3f0ab6b1"></a>

Returns a pointer to ErrorInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ae3dcee944cb1c74f784d057e9aaec978)`(const FString & NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ae3dcee944cb1c74f784d057e9aaec978"></a>

Sets the value of ErrorInfo_Optional and also sets ErrorInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a97d3c6555e84de0a086642763b541290)`(FString && NewValue)` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a97d3c6555e84de0a086642763b541290"></a>

Sets the value of ErrorInfo_Optional and also sets ErrorInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1ad17480c3c83d36409c64e2d7f784f28b)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1ad17480c3c83d36409c64e2d7f784f28b"></a>

Clears the value of ErrorInfo_Optional and sets ErrorInfo_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_ErrorInfo`](#structFRHAPI__FailedPlayerOrderCreateSingle_1a868b56aae8361f6812e7d0378fe773e7)`()` <a id="structFRHAPI__FailedPlayerOrderCreateSingle_1a868b56aae8361f6812e7d0378fe773e7"></a>

Returns the default value of ErrorInfo.

